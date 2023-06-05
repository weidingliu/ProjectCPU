/*
* cache data 
*
*/
module Cache_Data #(
   parameter BUS_WIDTH = 32,
   parameter DATA_WIDTH = 32,
   parameter Cache_line_wordnum = 16,
   parameter Max_size = 4096,//4kB

   localparam Cache_line_size = DATA_WIDTH * Cache_line_wordnum, //64B
   localparam Cache_way = 2,
   localparam Cache_line_num = Max_size / Cache_way / Cache_line_size * 8, //4kB
   localparam Tag_size = BUS_WIDTH - $clog2(Cache_line_size/8) - $clog2(Cache_line_num),
   localparam Index_size =  $clog2(Cache_line_num),
   localparam Offset_size = $clog2(Cache_line_size/8)
) (
    input wire clk,
    input wire reset,
    input wire [BUS_WIDTH-1:0] addr,

    output wire  [Cache_line_size-1:0] way0_data,
    output wire  [Cache_line_size-1:0] way1_data,

    output wire [Tag_size-1:0] way0_tag,
    output wire [Tag_size-1:0] way1_tag,

    output wire [Index_size-1:0]index,
    output wire [Offset_size-1:0]offset,
    output wire [Tag_size-1:0] tag
);

assign offset = addr[Offset_size-1:0];
assign index = addr[Index_size + Offset_size-1:Offset_size];
assign tag = addr[BUS_WIDTH-1:Index_size + Offset_size];

endmodule

/*
* scanf cache data
*
*/
module Scanf_Cache #(
   parameter BUS_WIDTH = 32,
   parameter DATA_WIDTH = 32,
   parameter Cache_line_wordnum = 16,
   parameter Max_size = 4096,//4kB

   localparam Cache_line_size = DATA_WIDTH * Cache_line_wordnum, //64B
   localparam Cache_way = 2,
   localparam Cache_line_num = Max_size / Cache_way / Cache_line_size * 8, //4kB
   localparam Tag_size = BUS_WIDTH - $clog2(Cache_line_size/8) - $clog2(Cache_line_num),
   localparam Index_size =  $clog2(Cache_line_num),
   localparam Offset_size = $clog2(Cache_line_size/8)
) (
    input wire clk,
    input wire reset,

    input wire left_valid,
    // input wire  [Cache_line_size-1:0] way0_data,
    // input wire  [Cache_line_size-1:0] way1_data,

    input wire [Tag_size-1:0] way0_tag,
    input wire [Tag_size-1:0] way1_tag,

    input wire way0_valid,
    input wire way1_valid,

    input wire [Index_size-1:0]index_in,
    input wire [Offset_size-1:0]offset_in,
    input wire [Tag_size-1:0] tag_in,

    output wire [Index_size-1:0]index_out,
    output wire [Offset_size-1:0]offset_out,
    output wire [Tag_size-1:0] tag_out,

    output wire hit_way0,
    output wire hit_way1

);

assign hit_way0 = left_valid & (way0_tag == tag_in) & way0_valid;
assign hit_way1 = left_valid & (way1_tag == tag_in) & way1_valid;

assign index_out = index_in;
assign offset_out = offset_in;
assign tag_out = tag_in;

endmodule //Cache

module DCache #(
   parameter BUS_WIDTH = 32,
   parameter DATA_WIDTH = 32,
   parameter Cache_line_wordnum = 16,
   parameter Max_size = 4096,//4kB
   
   localparam Cache_line_size = DATA_WIDTH * Cache_line_wordnum, //64B
   localparam Word_offset = $clog2(DATA_WIDTH/8),
   localparam Cache_way = 2,
   localparam Cache_line_num = Max_size / Cache_way / Cache_line_size * 8, //4kB
   localparam Tag_size = BUS_WIDTH - $clog2(Cache_line_size/8) - $clog2(Cache_line_num),
   localparam Index_size =  $clog2(Cache_line_num),
   localparam Offset_size = $clog2(Cache_line_size/8)
)(
    input wire clk,
    input wire reset,
    input wire flush,
    
    //cpu request
    input wire ce,
    input wire we,
    input wire [BUS_WIDTH-1:0]addr,
    output wire [DATA_WIDTH-1:0]rdata,
    output wire rdata_valid,
    input wire rdata_ready,
    input wire [31:0]wdata,
    input wire [3:0]wmask,
    output wire write_respone,
    //mem request
    output wire [BUS_WIDTH-1 : 0]mem_addr,
        //read data
    input wire [CPU_WIDTH-1:0]mem_rdata,
    input wire mem_rdata_valid,
        //write data
    output wire [CPU_WIDTH-1:0]mem_wdata,
    output wire [CPU_WIDTH/8-1:0]mem_wmask,
    input wire mem_write_respone,
        //control signal
    output wire mem_ce,//start a read/write transport 
    output wire mem_we// 1'b0 is read  1'b1 is write 

);
localparam idle = 2'b00;
localparam scanf = 2'b01;
localparam miss = 2'b10;
localparam write_data = 2'b11;

reg [1:0]state;
reg [$clog2(Cache_line_wordnum):0]read_count;
reg [$clog2(Cache_line_wordnum):0]write_count;
wire read_count_ready;
wire write_count_ready;
wire scanf_valid;

wire [Tag_size-1:0]tag[Cache_way-1:0];
wire [Cache_line_size-1:0]cache_data[Cache_way-1:0];
wire valid[Cache_way-1:0];
wire lru;
wire dirt[Cache_way-1:0];

wire [Index_size-1:0]index;
wire [Offset_size-1:0]offset;
wire [Tag_size-1:0] Tag;

wire hit_way0;
wire hit_way1;
wire hit;

wire [DATA_WIDTH-1:0]hit_rdata[Cache_way-1:0];

wire [DATA_WIDTH-1:0]miss_rdata;

reg [Cache_line_size-1:0]miss_data;
reg [BUS_WIDTH-1:0]miss_addr;

reg [Cache_line_size-1:0]write_back_data;
reg [BUS_WIDTH-1:0]write_back_addr;

wire [Tag_size-1:0]write_tag[Cache_way-1:0];
wire [Cache_line_size-1:0]write_cache_data[Cache_way-1:0];
wire write_valid[Cache_way-1:0];
wire write_lru;
wire write_dirt[Cache_way-1:0];
wire cache_we[Cache_way-1:0];
wire write_lru_we;
wire write_dirt_we[Cache_way-1:0];

assign read_count_ready = read_count == Cache_line_wordnum;
assign write_count_ready = write_count == Cache_line_wordnum;

assign offset = addr[Offset_size-1:0];
assign index = addr[Index_size + Offset_size-1:Offset_size];
assign tag = addr[BUS_WIDTH-1:Index_size + Offset_size];

genvar i;
//tag 
generate
    for(i=0;i<Cache_way;i++) begin 
        Tag_way#(.DATA_WIDTH(Tag_size),.Addr_len(Index_size)) Sramlike (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(write_tag[i]),
           .waddr(index),
           .we(cache_we[i]),// 1'b0 is read, 1'b1 is write

           .rdata(Tag[i]) 
        );
    end
endgenerate
//data
generate
    for(i=0;i<Cache_way;i++) begin 
        Data_way#(.DATA_WIDTH(Cache_line_size),.Addr_len(Index_size)) Sramlike (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(write_cache_data[i]),
           .waddr(index),
           .we(cache_we[i]),// 1'b0 is read, 1'b1 is write

           .rdata(cache_data[i]) 
        );
    end

endgenerate
//valid
generate
    for(i=0;i<Cache_way;i++) begin 
        Data_valid#(.DATA_WIDTH(1),.Addr_len(Index_size)) Sramlike (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(1'b1),
           .waddr(index),
           .we(cache_we[i]),// 1'b0 is read, 1'b1 is write

           .rdata(valid[i]) 
        );
    end
endgenerate
//dirt
generate
    for(i=0;i<Cache_way;i++) begin 
        Data_dirt#(.DATA_WIDTH(1),.Addr_len(Index_size)) Sramlike (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(write_dirt[i]),
           .waddr(index),
           .we(write_dirt_we[i]),// 1'b0 is read, 1'b1 is write

           .rdata(dirt[i]) 
        );
    end
endgenerate

defparam  lru_way.DATA_WIDTH = 1;
defparam  lru_way.Addr_len = Index_size;
lru_way Sramlike (
    .clk(clk),
    .reset(reset),

    .addr(index),
    .wdata(write_lru),
    .waddr(index),
    .we(write_lru_we),// 1'b0 is read, 1'b1 is write

    .rdata(lru) 
);



//scanf data
Scanf_Cache Scanf_Cache(
    .clk(clk),
    .reset(reset),

    // input wire  [Cache_line_size-1:0] way0_data,
    // input wire  [Cache_line_size-1:0] way1_data,

    .way0_tag(Tag[0]),
    .way1_tag(Tag[1]),

    .way0_valid(valid[0]),
    .way1_valid(valid[1]),

    .index_in(index),
    .offset_in(offset),
    .tag_in(tag),

    .index_out(),
    .offset_out(),
    .tag_out(),

    .hit_way0(hit_way0),
    .hit_way1(hit_way1)
);
// check if have hit way
assign hit = hit_way0 || hit_way1;

//FSM
always @(posedge clk) begin
    if(reset) begin 
        state <= idle;
    end
    else if(flush) begin 
        state <= idle;
    end
    else begin 
        case (state)
            idle: begin 
                if(ce) begin 
                    state <= scanf;
                end
            end
            scanf: begin 
                if(hit) begin 
                    state <= idle;
                end
                else begin 
                    if(dirt[lru]) state <= write_data;
                    else state <= miss;
                end
            end
            miss: begin 
                if(read_count_ready) state <= idle;
            end
            write_data: begin 
                if(write_count_ready) state <= miss;
            end 
            default: state <= idle;
        endcase
    end
end
//write_data counter

always @(posedge clk) begin
    if(reset) begin 
        write_count <= 0;
        write_back_data <= 0;
    end
    else if(state == idle || write_count_ready) begin 
        write_count <= 0;
        write_back_data <= 0;
    end
    else if(state == write_data & mem_write_respone) begin 
        write_count <= write_count + 1'b1;
        write_back_data <= {{DATA_WIDTH{1'b0}},write_back_data[Cache_line_size-1:DATA_WIDTH]};
    end
end
//write back data addr
always @(posedge clk) begin 
    if(reset) begin 
        write_back_addr <= 0;
    end
    else if(state == scanf & !hit & dirt[lru]) begin 
        write_back_addr <= {tag[lru],index,{Offset_size{1'b0}}};
    end
    else if(state == write_data) begin 
        if(mem_write_respone) begin 
            write_back_addr <= write_back_addr + 'h4;
        end
    end
end

// miss state counter
always @(posedge clk) begin
    if(reset) begin 
        miss_data <= 0;
        read_count <= 0;
    end
    else if(read_count_ready & !rdata_ready) begin 

    end
    else if(state == idle || read_count_ready) begin 
        miss_data <= 0;
        read_count <= 0;
    end
    else if(state == miss & mem_rdata_valid) begin 
        read_count <= read_count + 1'b1;
        miss_data <= {mem_rdata,miss_data[Cache_line_size-1:DATA_WIDTH]};
    end
end
//miss mem addr
always @(posedge clk) begin
   if(reset) begin 
      miss_addr <= 0;
   end
   else if(state == scanf) begin 
      miss_addr <= {addr[BUS_WIDTH-1:Offset_size],{Offset_size{1'b0}}};
   end
   else if(state == miss) begin 
        if(mem_rdata_valid) miss_addr <= miss_addr + 'h4;
   end
end
Miss_data_mask #(
        .DATA_WIDTH(DATA_WIDTH),
        .Cache_line_size(Cache_line_size)
)Data_mask(
    .offset(offset[Offset_size-1:Word_offset]),
    .cache_line_data(miss_data),
    .rdata(miss_rdata)
);


// generate hit_rdata
generate
    for(i=0;i<Cache_way;i++) begin 
        Data_mask #(
        .DATA_WIDTH(DATA_WIDTH),
        .Cache_line_size(Cache_line_size)
    )
    Data_mask (
        .offset(offset[Offset_size-1:Word_offset]),
        .cache_line_data(cache_data[0]),
        .rdata(hit_rdata[i])
    ); 
    end
endgenerate

assign write_lru = (state == miss) & (~lru) | ((state == scanf & hit) & hit_way1);
assign write_lru_we = (state == scanf & hit ) | (state == miss & read_count_ready);
assign write_dirt_we[0] = (state == miss & we & (~lru)) | (state == scanf & hit_way0 & we);
assign write_dirt_we[1] = (state == miss & we & lru)    | (state == scanf & hit_way1 & we);
assign cache_we[0] = (state == miss & (~lru) & read_count_ready);
assign cache_we[1] = (state == miss & lru & read_count_ready);

generate
    for(i=0;i<Cache_way;i++) begin 
        assign write_cache_data = miss_data;
        assign write_tag = tag;
        assign write_dirt = 1'b1;
    end
endgenerate

assign rdata = ({DATA_WIDTH{hit_way0}} & hit_rdata[0]) | 
               ({DATA_WIDTH{hit_way1}} & hit_rdata[1]) |
               ({DATA_WIDTH{read_count_ready}} & miss_rdata);

assign mem_addr = (state == miss)?  miss_addr : {DATA_WIDTH{1'b0}};
assign mem_ce = state == miss || state == write_data;
assign mem_we = state == write_data;
assign mem_wdata = write_back_data[DATA_WIDTH-1:0];
// assign mem_wmask = 

assign rdata_valid = (state == scanf & hit ) | (state == miss & read_count_ready);

endmodule //Cache


module ICache #(
   parameter BUS_WIDTH = 32,
   parameter DATA_WIDTH = 32,
   parameter Cache_line_wordnum = 16,
   parameter Max_size = 4096,//4kB
   
   localparam Cache_line_size = DATA_WIDTH * Cache_line_wordnum, //64B
   localparam Word_offset = $clog2(DATA_WIDTH/8),
   localparam Cache_way = 2,
   localparam Cache_line_num = Max_size / Cache_way / Cache_line_size * 8, //4kB
   localparam Tag_size = BUS_WIDTH - $clog2(Cache_line_size/8) - $clog2(Cache_line_num),
   localparam Index_size =  $clog2(Cache_line_num),
   localparam Offset_size = $clog2(Cache_line_size/8)
)(
    input wire clk,
    input wire reset,
    input wire flush,
    
    //cpu request
    input wire ce,
    input wire we,
    input wire [BUS_WIDTH-1:0]addr,
    output wire [DATA_WIDTH-1:0]rdata,
    output wire rdata_valid,
    input wire rdata_ready,

    //mem request
    output wire [BUS_WIDTH-1 : 0]mem_addr,
        //read data
    input wire [DATA_WIDTH-1:0]mem_rdata,
    input wire mem_rdata_valid,
        //write data
    output wire [DATA_WIDTH-1:0]mem_wdata,
    output wire [DATA_WIDTH/8-1:0]mem_wmask,
    input wire mem_write_respone,
        //control signal
    output wire mem_ce,//start a read/write transport 
    output wire mem_we// 1'b0 is read  1'b1 is write 


);
localparam idle = 2'b00;
localparam scanf = 2'b01;
localparam miss = 2'b10;
localparam write_data = 2'b11;

reg [1:0]state;
reg [$clog2(Cache_line_wordnum):0]read_count;
// reg [$clog2(Cache_line_wordnum):0]write_count;
wire read_count_ready;
// wire write_count_ready;

wire [Tag_size-1:0]tag[Cache_way-1:0];
wire [Cache_line_size-1:0]cache_data[Cache_way-1:0];
wire valid[Cache_way-1:0];
wire lru;
wire dirt[Cache_way-1:0];

wire [Index_size-1:0]index;
wire [Offset_size-1:0]offset;
wire [Tag_size-1:0] Tag;

wire hit_way0;
wire hit_way1;
wire hit;

wire [DATA_WIDTH-1:0]hit_rdata[Cache_way-1:0];

wire [DATA_WIDTH-1:0]miss_rdata;

reg [Cache_line_size-1:0]miss_data;
reg [BUS_WIDTH-1:0]miss_addr;

// reg [Cache_line_size-1:0]write_back_data;
// reg [BUS_WIDTH-1:0]write_back_addr;

wire [Tag_size-1:0]write_tag[Cache_way-1:0];
wire [Cache_line_size-1:0]write_cache_data[Cache_way-1:0];
wire write_valid[Cache_way-1:0];
wire write_lru;
// wire write_dirt[Cache_way-1:0];
wire cache_we[Cache_way-1:0];
wire write_lru_we;
// wire write_dirt_we[Cache_way-1:0];

assign read_count_ready = read_count == Cache_line_wordnum;
// assign write_count_ready = write_count == Cache_line_wordnum;

assign offset = addr[Offset_size-1:0];
assign index = addr[Index_size + Offset_size-1:Offset_size];
assign Tag = addr[BUS_WIDTH-1:Index_size + Offset_size];

genvar i;
//tag 
generate
    for(i=0;i<Cache_way;i++) begin :Cache_tag
        Sramlike#(.DATA_WIDTH(Tag_size),.Addr_len(Index_size)) Tag_way (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(write_tag[i]),
           .waddr(index),
           .we(cache_we[i]),// 1'b0 is read, 1'b1 is write

           .rdata(tag[i]) 
        );
    end
endgenerate
//data
generate
    for(i=0;i<Cache_way;i++) begin :Cache_data
        Sramlike#(.DATA_WIDTH(Cache_line_size),.Addr_len(Index_size)) Data_way (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(write_cache_data[i]),
           .waddr(index),
           .we(cache_we[i]),// 1'b0 is read, 1'b1 is write

           .rdata(cache_data[i]) 
        );
    end

endgenerate
//valid
generate
    for(i=0;i<Cache_way;i++) begin :data_valid
        Sramlike#(.DATA_WIDTH(1),.Addr_len(Index_size)) Data_valid (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(1'b1),
           .waddr(index),
           .we(cache_we[i]),// 1'b0 is read, 1'b1 is write

           .rdata(valid[i]) 
        );
    end
endgenerate
// //dirt
// generate
//     for(i=0;i<Cache_way;i++) begin 
//         defparam  Data_dirt.DATA_WIDTH = 1;
//         defparam  Data_dirt.Addr_len = Index_size;
//         Data_dirt Sramlike (
//            .clk(clk),
//            .reset(reset),

//            .addr(index),
//            .wdata(write_dirt[i]),
//            .waddr(index),
//            .we(write_dirt_we[i]),// 1'b0 is read, 1'b1 is write

//            .rdata(dirt[i]) 
//         );
//     end
// endgenerate

Sramlike#(.DATA_WIDTH(1),.Addr_len(Index_size)) lru_way (
    .clk(clk),
    .reset(reset),

    .addr(index),
    .wdata(write_lru),
    .waddr(index),
    .we(write_lru_we),// 1'b0 is read, 1'b1 is write

    .rdata(lru) 
);



//scanf data
Scanf_Cache Scanf_Cache(
    .clk(clk),
    .reset(reset),

    .left_valid(scanf_valid),
    // input wire  [Cache_line_size-1:0] way0_data,
    // input wire  [Cache_line_size-1:0] way1_data,

    .way0_tag(tag[0]),
    .way1_tag(tag[1]),

    .way0_valid(valid[0]),
    .way1_valid(valid[1]),

    .index_in(index),
    .offset_in(offset),
    .tag_in(Tag),

    .index_out(),
    .offset_out(),
    .tag_out(),

    .hit_way0(hit_way0),
    .hit_way1(hit_way1)
);
// check if have hit way
assign hit = hit_way0 || hit_way1;

//FSM
always @(posedge clk) begin
    if(reset) begin 
        state <= idle;
    end
    else if(flush) begin 
        state <= idle;
    end
    else begin 
        case (state)
            idle: begin 
                if(ce) begin 
                    state <= scanf;
                end
            end
            scanf: begin 
                if(hit) begin 
                    if(rdata_ready) state <= idle;
                end
                else begin 
                    // if(dirt[lru]) state <= write_data;
                    // else state <= miss;
                    state <= miss;
                end
            end
            miss: begin 
                if(read_count_ready && rdata_ready) state <= idle;
            end
            // write_data: begin 
            //     if(write_count_ready) state <= miss;
            // end 
            default: state <= idle;
        endcase
    end
end
// //write_data counter

// always @(posedge clk) begin
//     if(reset) begin 
//         write_count <= 0;
//         write_back_data <= 0;
//     end
//     else if(state == idle || write_count_ready) begin 
//         write_count <= 0;
//         write_back_data <= 0;
//     end
//     else if(state == write_data & mem_write_respone) begin 
//         write_count <= write_count + 1'b1;
//         write_back_data <= {{DATA_WIDTH{1'b0}},write_back_data[Cache_line_size-1:DATA_WIDTH]};
//     end
// end
// //write back data addr
// always @(posedge clk) begin 
//     if(reset) begin 
//         write_back_addr <= 0;
//     end
//     else if(state == scanf & !hit & dirt[lru]) begin 
//         write_back_addr <= {tag[lru],index,{Offset_size{1'b0}}};
//     end
//     else if(state == write_data) begin 
//         if(mem_write_respone) begin 
//             write_back_addr <= write_back_addr + `h4;
//         end
//     end
// end

// miss state counter
always @(posedge clk) begin
    if(reset) begin 
        miss_data <= 0;
        read_count <= 0;
    end
    else if(read_count_ready && !rdata_ready) begin 

    end
    else if(state == idle || read_count_ready) begin 
        miss_data <= 0;
        read_count <= 0;
    end
    else if(state == miss & mem_rdata_valid) begin 
        read_count <= read_count + 1'b1;
        miss_data <= {mem_rdata,miss_data[Cache_line_size-1:DATA_WIDTH]};
    end
end
//miss mem addr
always @(posedge clk) begin
   if(reset) begin 
      miss_addr <= 0;
   end
   else if(state == scanf) begin 
      miss_addr <= {addr[BUS_WIDTH-1:Offset_size],{Offset_size{1'b0}}};
   end
   else if(state == miss) begin 
        if(mem_rdata_valid) miss_addr <= miss_addr + 'h4;
   end
end
Data_mask #(
        .DATA_WIDTH(DATA_WIDTH),
        .Cache_line_size(Cache_line_size)
)Miss_data_mask(
    .offset(offset[Offset_size-1:Word_offset]),
    .cache_line_data(miss_data),
    .rdata(miss_rdata)
);


// generate hit_rdata
generate
    for(i=0;i<Cache_way;i++) begin :data_select
        Data_mask #(
        .DATA_WIDTH(DATA_WIDTH),
        .Cache_line_size(Cache_line_size)
    )
    Data_mask (
        .offset(offset[Offset_size-1:Word_offset]),
        .cache_line_data(cache_data[i]),
        .rdata(hit_rdata[i])
    ); 
    end
endgenerate

assign write_lru = (state == miss)? ~lru: 
                    (state == scanf & hit_way0) ? 1'b1:
                    (state == scanf & hit_way1)? 1'b0: 1'b1;
assign write_lru_we = (state == scanf & hit & rdata_ready) | (state == miss & read_count_ready & rdata_ready);
// assign write_dirt_we[0] = (state == miss & we & (~lru)) | (state == scanf & hit_way0 & we);
// assign write_dirt_we[1] = (state == miss & we & lru)    | (state == scanf & hit_way1 & we);
assign cache_we[0] = (state == miss & (~lru) & read_count_ready) & rdata_ready;
assign cache_we[1] = (state == miss & lru & read_count_ready) & rdata_ready;

generate
    for(i=0;i<Cache_way;i++) begin 
        assign write_cache_data[i] = miss_data;
        assign write_tag[i] = Tag;
        // assign write_dirt = 1'b1;
    end
endgenerate

assign scanf_valid = state == scanf;

assign rdata = ({DATA_WIDTH{hit_way0}} & hit_rdata[0]) | 
               ({DATA_WIDTH{hit_way1}} & hit_rdata[1]) |
               ({DATA_WIDTH{read_count_ready}} & miss_rdata);

assign mem_addr = (state == miss)?  miss_addr : {DATA_WIDTH{1'b0}};
assign mem_ce = state == miss || state == write_data;
assign mem_we = state == write_data;
// assign mem_wdata = write_back_data[DATA_WIDTH-1:0];
// assign mem_wmask = 

assign rdata_valid = (state == scanf & hit ) | (state == miss & read_count_ready);

endmodule //Cache

/*
* simulate sram , when clock rising edge read out data or write data, signal port
* write first memory
*/

module Sramlike #(
    parameter DATA_WIDTH = 32,
    parameter Addr_len = 6,
    localparam Sram_Depth = 2**Addr_len
    //parameter $pow(2,)
)(
    input wire clk,
    input wire reset,

    input wire [Addr_len-1:0] addr,
    input wire [DATA_WIDTH-1:0] wdata,
    input wire [Addr_len-1:0] waddr,
    input wire we,// 1'b0 is read, 1'b1 is write

    output wire [DATA_WIDTH-1:0] rdata
);

reg [DATA_WIDTH-1:0]Mem[0:Sram_Depth-1];
reg [Addr_len-1:0]addr_temp;

always @(posedge clk) begin
    if(we) begin 
        Mem[waddr] <= wdata;
    end
    addr_temp <= addr;
end

assign rdata = Mem[addr_temp];

    
endmodule
