`include "cache_defines.v"
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

   localparam CPU_WIDTH = DATA_WIDTH * Cache_line_wordnum,
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

        //cacop 
    input wire cacop_en,
    input wire [1:0]cacop_mod,
    input wire [31:0]cacop_va,
    output wire cacop_finish,

    input wire uncached_en,
    //mem request
    output wire [BUS_WIDTH-1 : 0]mem_addr,
        //read data
    input wire [DATA_WIDTH-1:0]mem_rdata,
    input wire mem_rdata_valid,
        //write data
    output wire [CPU_WIDTH-1:0]mem_wdata,
    output wire [CPU_WIDTH/8-1:0]mem_wmask,
    input wire mem_write_respone,
        //control signal
    output wire [2:0] data_transform_type,
    output wire mem_ce,//start a read/write transport 
    output wire mem_we// 1'b0 is read  1'b1 is write 

);
localparam idle = 2'b00;
localparam scanf = 2'b01;
localparam miss = 2'b10;
localparam write_data = 2'b11;

reg [1:0]state;
reg [31:0]read_count;
reg [31:0]write_count;
wire read_count_ready;
// wire write_count_ready;

wire [Tag_size-1:0]tag[Cache_way-1:0];
wire [Cache_line_size-1:0]cache_data[Cache_way-1:0];
wire valid[Cache_way-1:0];
wire lru;
wire dirt[Cache_way-1:0];

wire write_valid[Cache_way-1:0];

wire [Index_size-1:0]index;
wire [Offset_size-1:0]offset;
wire [Tag_size-1:0] Tag;

wire [Index_size-1:0]cacop_index;
wire [Offset_size-1:0]cacop_offset;
wire [Tag_size-1:0] cacop_Tag;

wire cacop_mod0;
wire cacop_mod1;
wire cacop_mod2;

wire hit_way0;
wire hit_way1;
wire hit;
wire scanf_valid;

wire [DATA_WIDTH-1:0]hit_rdata[Cache_way-1:0];

wire [DATA_WIDTH-1:0]miss_rdata;

reg [Cache_line_size-1:0]miss_data;
reg [BUS_WIDTH-1:0]miss_addr;

reg [Cache_line_size-1:0]write_back_data;
reg [BUS_WIDTH-1:0]write_back_addr;

wire [Tag_size-1:0]write_tag[Cache_way-1:0];
wire [Cache_line_size-1:0]write_cache_data[Cache_way-1:0];
wire write_lru;
wire write_dirt[Cache_way-1:0];
wire cache_we[Cache_way-1:0];
wire write_lru_we;
wire write_dirt_we[Cache_way-1:0];

wire [Cache_line_size-1:0] mask;
wire wmask_en;
wire [Cache_line_size-1:0] new_data;
wire [Cache_line_size-1:0] old_data;

reg uncached_buffer;

assign read_count_ready = read_count == Cache_line_wordnum;

assign offset = cacop_en ? cacop_offset:addr[Offset_size-1:0];
assign index = cacop_en ? cacop_index:addr[Index_size + Offset_size-1:Offset_size];
assign Tag = cacop_en ? cacop_Tag:addr[BUS_WIDTH-1:Index_size + Offset_size];

assign cacop_index = cacop_va[Index_size + Offset_size-1:Offset_size];
assign cacop_offset = cacop_va[Offset_size-1:0];
assign cacop_Tag = cacop_va[BUS_WIDTH-1:Index_size + Offset_size];

assign cacop_mod0 = cacop_en & (cacop_mod == 2'd0);
assign cacop_mod1 = cacop_en & (cacop_mod == 2'd1);
assign cacop_mod2 = cacop_en & (cacop_mod == 2'd2);

genvar i;
//tag 
generate
    for(i=0;i<Cache_way;i=i+1) begin :Cache_tag
        Sramlike#(.DATA_WIDTH(Tag_size),.Addr_len(Index_size)) Tag_way (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(write_tag[i]),
           .waddr(index),
           .we(cache_we[i] & !cacop_mod1 & !cacop_mod2),// 1'b0 is read, 1'b1 is write
           .ce(1'b1),

           .rdata(tag[i]) 
        );
    end
endgenerate
//data
generate
    for(i=0;i<Cache_way;i=i+1) begin :Cache_data
        Sramlike#(.DATA_WIDTH(Cache_line_size),.Addr_len(Index_size)) Data_way (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(write_cache_data[i]),
           .waddr(index),
           .we(cache_we[i] & !cacop_en),// 1'b0 is read, 1'b1 is write
           .ce(1'b1),

           .rdata(cache_data[i]) 
        );
    end

endgenerate
//valid
generate
    for(i=0;i<Cache_way;i=i+1) begin :data_valid
        Sramlike#(.DATA_WIDTH(1),.Addr_len(Index_size)) Data_valid (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(write_valid[i]),
           .waddr(index),
           .we(cache_we[i] & !cacop_mod0),// 1'b0 is read, 1'b1 is write
           .ce(1'b1),

           .rdata(valid[i]) 
        );
    end
endgenerate
//dirt
generate
    for(i=0;i<Cache_way;i=i+1) begin :Data_dirt
        Sramlike #(.DATA_WIDTH(1),.Addr_len(Index_size))Data_dirt (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(write_dirt[i]),
           .waddr(index),
           .we(write_dirt_we[i]),// 1'b0 is read, 1'b1 is write
           .ce(1'b1),

           .rdata(dirt[i]) 
        );
    end
endgenerate

Sramlike#(.DATA_WIDTH(1),.Addr_len(Index_size)) lru_way (
    .clk(clk),
    .reset(reset),

    .addr(index),
    .wdata(write_lru),
    .waddr(index),
    .we(write_lru_we),// 1'b0 is read, 1'b1 is write
    .ce(1'b1),

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
assign hit = (hit_way0 || hit_way1) & !uncached_en & !uncached_buffer;

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
                if(ce | cacop_en) begin 
                    state <= scanf;
                end
            end
            scanf: begin 
                if(cacop_mod0) begin 
                    state <= idle;
                end
                else if(cacop_mod1) begin 
                    if(dirt[cacop_va[$clog2(Cache_way)-1:0]]) state <= write_data;
                    else state <= idle;
                end
                else if(cacop_mod2) begin 
                    if(!hit) state <= idle;
                    else begin 
                        if(hit_way0 & dirt[0]) state <= write_data;
                        else if(hit_way1 & dirt[1])state <= write_data;
                        else state <= idle;
                    end
                end
                else if(hit) begin 
                    if(rdata_ready) state <= idle;
                end
                else if(!uncached_en) begin 
                    if(dirt[lru]) state <= write_data;
                    else state <= miss;
                end
                else begin 
                    state <= miss;
                end
            end
            miss: begin 
                if(uncached_buffer) begin 
                    if(mem_write_respone || mem_rdata_valid) state <= idle;
                end
                else if(read_count_ready && rdata_ready) state <= idle;
            end
            write_data: begin 
                if(mem_write_respone & cacop_en) state <= idle;
                else if(mem_write_respone) state <= miss;
            end 
            default: state <= idle;
        endcase
    end
end

always @(posedge clk) begin
    if(state == idle) begin 
        uncached_buffer <= uncached_en;
    end
end
//write_data counter

always @(posedge clk) begin
    if(reset) begin 
        write_count <= 0;
        write_back_data <= 0;
    end
    else if(state == idle) begin 
        // write_count <= 0;
        write_back_data <= 0;
    end
    else if(state == scanf & cacop_mod1) begin 
        write_back_data <= (dirt[0] & (cacop_va[$clog2(Cache_way)-1:0] == 1'b0))? cache_data[0]:cache_data[1];
    end
    else if(state == scanf & cacop_mod2) begin 
        write_back_data <= (hit_way0)? cache_data[0]:cache_data[1];
    end
    else if(state == scanf & !hit & dirt[lru]) begin 
        write_back_data <= (lru)? cache_data[1]:cache_data[0];
    end
    // else if(state == write_data & mem_write_respone) begin 
    //     write_count <= write_count + 1'b1;
    //     write_back_data <= {{DATA_WIDTH{1'b0}},write_back_data[Cache_line_size-1:DATA_WIDTH]};
    // end
end
//write back data addr
always @(posedge clk) begin 
    if(reset) begin 
        write_back_addr <= 0;
    end
    else if(state == scanf & cacop_mod1) begin 
        write_back_addr <= (dirt[0] & (cacop_va[$clog2(Cache_way)-1:0] == 1'b0))? {tag[0],index,{Offset_size{1'b0}}}:{tag[1],index,{Offset_size{1'b0}}};
    end
    else if(state == scanf & cacop_mod2) begin 
        write_back_addr <= (hit_way0)? {tag[0],index,{Offset_size{1'b0}}}:{tag[1],index,{Offset_size{1'b0}}};
    end
    else if(state == scanf & !hit & dirt[lru]) begin 
        write_back_addr <= {tag[lru],index,{Offset_size{1'b0}}};
    end
    // else if(state == write_data) begin 
    //     if(mem_write_respone) begin 
    //         write_back_addr <= write_back_addr + 'h4;
    //     end
    // end
end

// miss state counter ,read a word of data cache_line_wordnum times 
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
//miss mem addr,incremental 
always @(posedge clk) begin
   if(reset) begin 
      miss_addr <= 0;
   end
   else if(state == scanf) begin 
      miss_addr <= {addr[BUS_WIDTH-1:Offset_size],{Offset_size{1'b0}}};
   end
//    else if(state == miss) begin 
//         if(mem_rdata_valid) miss_addr <= miss_addr + 'h4;
//    end
end
// select a word data form a cache line data 
Data_mask #(
        .DATA_WIDTH(DATA_WIDTH),
        .Cache_line_size(Cache_line_size)
)Miss_data_mask(
    .offset(offset[Offset_size-1:Word_offset]),
    .cache_line_data(miss_data),
    .rdata(miss_rdata)
);


// generate hit_rdata , select a word data form a cache line data 
generate
    for(i=0;i<Cache_way;i=i+1) begin :data_select
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
// generate write cache data
generate
    for(i=0;i<Cache_line_wordnum;i=i+1) begin 
        assign new_data[(i+1)*DATA_WIDTH -1 :i*DATA_WIDTH] = wdata;
    end
endgenerate
assign old_data = (state == miss)? miss_data:
                    (state == scanf && hit_way0)? cache_data[0]:
                    (state == scanf && hit_way1)? cache_data[1]:'h0;

Cacheline_Mask #(.DATA_WIDTH(DATA_WIDTH),.Cache_line_size(Cache_line_size)) Wmask(
    .offset(offset[Offset_size-1:2]),
    .wmask(wmask),
    .en(wmask_en),
    .cacheline_mask(mask)
);
// write mask generate if we is 0,old data must maintain
assign wmask_en = we;

//generate lru data and enable
assign write_lru = (state == miss)? ~lru: 
                    (state == scanf & hit_way0) ? 1'b1:
                    (state == scanf & hit_way1)? 1'b0: 1'b1;
assign write_lru_we = ((state == scanf & hit & rdata_ready) | (state == miss & read_count_ready & rdata_ready)) & !uncached_buffer & !cacop_en;
//generate dirt data and enable
assign write_dirt_we[0] = ((state == miss & we & (~lru)) | (state == scanf & hit_way0 & we)) & !uncached_buffer | 
                            (state == scanf & (cacop_va[$clog2(Cache_way)-1:0] == 1'h0) & (cacop_mod1)) | 
                            (state == scanf & cacop_mod2 & hit_way0);
assign write_dirt_we[1] = ((state == miss & we & lru)    | (state == scanf & hit_way1 & we)) & !uncached_buffer | 
                            (state == scanf & (cacop_va[$clog2(Cache_way)-1:0] == 1'h1) & (cacop_mod1))|
                            (state == scanf & cacop_mod2 & hit_way1);
                            
assign write_dirt[0] = (state == scanf & (cacop_mod1 | cacop_mod2)) ? 1'b0:
                        (state == miss & we & (~lru)) | (state == scanf & hit_way0 & we)? 1'b1:1'b0;
assign write_dirt[1] = (state == scanf & (cacop_mod1 | cacop_mod2)) ? 1'b0:
                        (state == miss & we & lru)    | (state == scanf & hit_way1 & we)? 1'b1:1'b0;
//generate cache meta data and cache data write enable
assign cache_we[0] = (state == miss & (~lru) & read_count_ready | state == scanf & hit_way0 & we) & rdata_ready & !uncached_buffer | 
                    (state == scanf & (cacop_va[$clog2(Cache_way)-1:0] == 1'h0) & (cacop_mod0 | cacop_mod1)) |
                    (state == scanf & cacop_mod2 & hit_way0);
assign cache_we[1] = (state == miss & lru & read_count_ready | state == scanf & hit_way1 & we) & rdata_ready & !uncached_buffer | 
                    (state == scanf & (cacop_va[$clog2(Cache_way)-1:0] == 1'h1) & (cacop_mod0 | cacop_mod1)) | 
                    (state == scanf & cacop_mod2 & hit_way1);

generate
    for(i=0;i<Cache_way;i=i+1) begin 
        assign write_cache_data[i] = (old_data & (~mask) | new_data & (mask));
        assign write_tag[i] = cacop_mod0? 20'h0:Tag;
        assign write_valid[i] = (cacop_mod1 | cacop_mod2)? 1'b0:1'b1;
    end
endgenerate

assign scanf_valid = (state == scanf);
//read out data 
assign rdata = ({DATA_WIDTH{hit_way0}} & hit_rdata[0]) | 
               ({DATA_WIDTH{hit_way1}} & hit_rdata[1]) |
               ({DATA_WIDTH{read_count_ready & !uncached_buffer}} & miss_rdata)| 
               ({DATA_WIDTH{uncached_buffer}} & mem_rdata);

assign mem_addr = uncached_buffer ? addr:(state == miss)?  miss_addr : (state == write_data)? write_back_addr: 'h0;
assign mem_ce = uncached_buffer ? (state == miss):((state == miss && read_count != Cache_line_wordnum) || state == write_data);
assign mem_we = uncached_buffer ? we:state == write_data;
assign mem_wdata = uncached_buffer ? {{(Cache_line_size - DATA_WIDTH){1'b0}},wdata}:write_back_data;
assign mem_wmask = uncached_buffer ? wmask:{(CPU_WIDTH/8){1'b1}};

assign rdata_valid = ((state == scanf & hit ) | (state == miss & read_count_ready) | (state == miss & uncached_buffer & mem_rdata_valid)) & !cacop_en;
assign write_respone = ((state == scanf & hit) | (state == miss & read_count_ready) | (state == miss & uncached_buffer & mem_write_respone)) & !cacop_en; 
assign data_transform_type = uncached_buffer ? 3'b001:3'b100;

assign cacop_finish = (cacop_mod0 | cacop_mod1 & !dirt[cacop_va[$clog2(Cache_way)-1:0]]) & (state == scanf) | 
                        cacop_mod1 & (state == write_data) & mem_write_respone | 
                        cacop_mod2 & !hit & (state == scanf)| 
                        cacop_mod2 & (state == write_data) & mem_write_respone;

`ifdef display_cache_missinfo
always @(posedge clk) begin
    if(state == scanf && !hit)begin 
        $display("DCache Miss! addr %h ,select way %h index %h dirt %h\n",addr,lru,index,dirt[lru]);
    end
end
`endif
`ifdef Display_cache_hitrate
reg [128:0]hit_count;
reg [128:0]miss_count;
always @(posedge clk) begin
    if(reset) begin 
        hit_count <= 'h0;
        miss_count <= 'h0;
    end
    else begin 
        if(state == scanf & hit) hit_count <= hit_count + 1'b1;
        else if(state == scanf & !hit) miss_count <= miss_count + 1'b1;
    end
    $display("DCACHE hit rate : hit count %h miss count %h\n",hit_count,miss_count);
end

`endif

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
    output wire icache_busy,
    
    //cpu request
    input wire ce,
    input wire we,
    input wire [BUS_WIDTH-1:0]addr,
    output wire [DATA_WIDTH-1:0]rdata,
    output wire rdata_valid,
    input wire rdata_ready,
    input wire uncached_en,
    // input wire inst_uncached_en,
    //cacop 
    input wire cacop_en,
    input wire [1:0]cacop_mod,
    input wire [31:0]cacop_va,
    output wire cacop_finish,

    //mem request
    output wire [BUS_WIDTH-1 : 0]mem_addr,
        //read data
    input wire [DATA_WIDTH-1:0]mem_rdata,
    input wire mem_rdata_valid,
        //write data
    output wire [DATA_WIDTH-1:0]mem_wdata,
    output wire [DATA_WIDTH/8-1:0]mem_wmask,
    input wire mem_write_respone,
    output wire [2:0]data_transform_type,
        //control signal
    output wire mem_ce,//start a read/write transport 
    output wire mem_we// 1'b0 is read  1'b1 is write 
);
localparam idle = 3'b000;
localparam scanf = 3'b001;
localparam miss = 3'b010;
localparam write_data = 3'b011;

reg [2:0]state;
reg [31:0]read_count;
reg uncached_buffer;
wire read_count_ready;

wire [Tag_size-1:0]tag[Cache_way-1:0];
wire [Cache_line_size-1:0]cache_data[Cache_way-1:0];
wire valid[Cache_way-1:0];
wire lru;

wire [Index_size-1:0]index;
wire [Offset_size-1:0]offset;
wire [Tag_size-1:0] Tag;

wire [Index_size-1:0]cacop_index;
wire [Offset_size-1:0]cacop_offset;
wire [Tag_size-1:0] cacop_Tag;

reg [Index_size-1:0]index_buffer;
reg [Offset_size-1:0]offset_buffer;
reg [Tag_size-1:0] Tag_buffer;

wire cacop_mod0;
wire cacop_mod1;
wire cacop_mod2;

wire hit_way0;
wire hit_way1;
wire hit;
wire scanf_valid;

wire [DATA_WIDTH-1:0]hit_rdata[Cache_way-1:0];

wire [DATA_WIDTH-1:0]miss_rdata;

reg [Cache_line_size-1:0]miss_data;
reg [BUS_WIDTH-1:0]miss_addr;
reg cacop_en_buffer;

wire [Tag_size-1:0]write_tag[Cache_way-1:0];
wire [Cache_line_size-1:0]write_cache_data[Cache_way-1:0];
wire write_valid[Cache_way-1:0];
wire write_lru;
wire cache_we[Cache_way-1:0];
wire write_lru_we;

assign read_count_ready = read_count == Cache_line_wordnum;

assign offset = cacop_en ? cacop_offset:addr[Offset_size-1:0];
assign index = cacop_en ? cacop_index:addr[Index_size + Offset_size-1:Offset_size];
assign Tag = cacop_en ? cacop_Tag:addr[BUS_WIDTH-1:Index_size + Offset_size];

assign cacop_index = cacop_va[Index_size + Offset_size-1:Offset_size];
assign cacop_offset = cacop_va[Offset_size-1:0];
assign cacop_Tag = cacop_va[BUS_WIDTH-1:Index_size + Offset_size];

assign cacop_mod0 = cacop_en_buffer & (cacop_mod == 2'd0);
assign cacop_mod1 = cacop_en_buffer & (cacop_mod == 2'd1);
assign cacop_mod2 = cacop_en_buffer & (cacop_mod == 2'd2);

genvar i;
//tag 
generate
    for(i=0;i<Cache_way;i=i+1) begin :Cache_tag
        Sramlike#(.DATA_WIDTH(Tag_size),.Addr_len(Index_size)) Tag_way (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(write_tag[i]),
           .waddr(index_buffer),
           .we(cache_we[i]),// 1'b0 is read, 1'b1 is write
           .ce(1'b1),

           .rdata(tag[i]) 
        );
    end
endgenerate
//data
generate
    for(i=0;i<Cache_way;i=i+1) begin :Cache_data
        Sramlike#(.DATA_WIDTH(Cache_line_size),.Addr_len(Index_size)) Data_way (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(write_cache_data[i]),
           .waddr(index_buffer),
           .we(cache_we[i]),// 1'b0 is read, 1'b1 is write
           .ce(1'b1),

           .rdata(cache_data[i]) 
        );
    end

endgenerate
//valid
generate
    for(i=0;i<Cache_way;i=i+1) begin :data_valid
        Sramlike#(.DATA_WIDTH(1),.Addr_len(Index_size)) Data_valid (
           .clk(clk),
           .reset(reset),

           .addr(index),
           .wdata(write_valid[i]),
           .waddr(index_buffer),
           .we(cache_we[i]),// 1'b0 is read, 1'b1 is write
           .ce(1'b1),

           .rdata(valid[i]) 
        );
    end
endgenerate

Sramlike#(.DATA_WIDTH(1),.Addr_len(Index_size)) lru_way (
    .clk(clk),
    .reset(reset),

    .addr(index),
    .wdata(write_lru),
    .waddr(index_buffer),
    .we(write_lru_we),// 1'b0 is read, 1'b1 is write
    .ce(1'b1),

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
assign hit = (hit_way0 || hit_way1) & !uncached_en & !uncached_buffer & !cacop_en_buffer;

//FSM
always @(posedge clk) begin
    if(reset) begin 
        state <= idle;
    end
    else begin 
        case (state)
            idle: begin 
                if(ce | cacop_en) begin 
                    state <= scanf;
                end
            end
            scanf: begin 
                if(cacop_en_buffer) state <= idle;
                else if(hit) begin 
                    if(rdata_ready) state <= idle;
                end
                else begin 
                    state <= miss;
                end
            end
            miss: begin 
                if(uncached_buffer) begin 
                    if(mem_write_respone || mem_rdata_valid) state <= idle;
                end
                else if(read_count_ready && rdata_ready) state <= idle;
            end
            default: state <= idle;
        endcase
    end
end

always @(posedge clk) begin 
    if(state == idle) begin 
        uncached_buffer <= uncached_en;
        cacop_en_buffer <= cacop_en;
        index_buffer <= index;
        offset_buffer <= offset;
        Tag_buffer <= Tag;
    end 
end

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
    else if((state == miss) & mem_rdata_valid) begin 
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
//    else if(state == miss) begin 
//         if(mem_rdata_valid) miss_addr <= miss_addr + 'h4;
//    end
end
// select a word data form a cache line data 
Data_mask #(
        .DATA_WIDTH(DATA_WIDTH),
        .Cache_line_size(Cache_line_size)
)Miss_data_mask(
    .offset(offset[Offset_size-1:Word_offset]),
    .cache_line_data(miss_data),
    .rdata(miss_rdata)
);


// generate hit_rdata, select a word data form a cache line data 
generate
    for(i=0;i<Cache_way;i=i+1) begin :data_select
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
assign write_lru_we = (state == scanf & hit & rdata_ready) | (state == miss & read_count_ready & rdata_ready) & !uncached_buffer & !cacop_en;
assign cache_we[0] = (state == miss & (~lru) & read_count_ready) & rdata_ready & !uncached_buffer| 
                    (state == scanf & (cacop_va[$clog2(Cache_way)-1:0] == 1'h0) & (cacop_mod0 | cacop_mod1)) | 
                    (state == scanf & cacop_mod2 & hit_way0);
assign cache_we[1] = (state == miss & lru & read_count_ready) & rdata_ready & !uncached_buffer | 
                    (state == scanf & (cacop_va[$clog2(Cache_way)-1:0] == 1'h1) & (cacop_mod0 | cacop_mod1)) | 
                    (state == scanf & cacop_mod2 & hit_way1);

generate
    for(i=0;i<Cache_way;i=i+1) begin 
        assign write_cache_data[i] = miss_data;
        assign write_tag[i] = cacop_mod0? 20'h0:Tag_buffer;
        assign write_valid[i] = (cacop_mod1 | cacop_mod2)? 1'b0:1'b1;
    end
endgenerate

assign scanf_valid = (state == scanf);

assign rdata = ({DATA_WIDTH{hit_way0}} & hit_rdata[0]) | 
               ({DATA_WIDTH{hit_way1}} & hit_rdata[1]) |
               ({DATA_WIDTH{read_count_ready & !uncached_buffer}} & miss_rdata)| 
               ({DATA_WIDTH{uncached_buffer}} & mem_rdata);

assign mem_addr = uncached_buffer ? addr:(state == miss)?  miss_addr : {DATA_WIDTH{1'b0}};
assign mem_ce = uncached_buffer ? (state == miss):((state == miss && read_count != Cache_line_wordnum) || state == write_data);
assign mem_we = uncached_buffer ? we:state == write_data;
// assign mem_wdata = write_back_data[DATA_WIDTH-1:0];
// assign mem_wmask = 
assign data_transform_type = uncached_buffer ? 3'b001:3'b100;

assign rdata_valid = (state == scanf & hit ) | (state == miss & read_count_ready) | (state == miss & uncached_buffer & mem_rdata_valid) & !cacop_en_buffer;

assign icache_busy = !(state == idle);

assign cacop_finish = (cacop_mod0 | cacop_mod1 | cacop_mod2) & (state == scanf);
`ifdef display_cache_missinfo
always @(posedge clk) begin
    if(state == scanf && (~hit))begin 
        $display("ICache Miss! addr %h ,select way %h index %h\n",addr,lru,index);
    end
end
`endif
`ifdef Display_cache_hitrate
reg [128:0]hit_count;
reg [128:0]miss_count;
always @(posedge clk) begin
    if(reset) begin 
        hit_count <= 'h0;
        miss_count <= 'h0;
    end
    else begin 
        if(state == scanf & hit) hit_count <= hit_count + 1'b1;
        else if(state == scanf & !hit) miss_count <= miss_count + 1'b1;
    end
    $display("ICACHE hit rate : hit count %h miss count %h\n",hit_count,miss_count);
end

`endif

endmodule //Cache


