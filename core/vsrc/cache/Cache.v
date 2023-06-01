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
module Scanf_Cache (
    input wire clk,
    input wire reset,

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

assign hit_way0 = (way0_tag == tag_in) & way0_valid;
assign hit_way1 = (way1_tag == tag_in) & way1_valid;

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

wire [DATA_WIDTH-1:0]rdata[Cache_way-1:0];

assign read_count_ready = read_count == Cache_line_wordnum;
assign write_count_ready = write_count == Cache_line_wordnum;

genvar i;
//tag 
generate
    for(i=0;i<Cache_way;i++) begin 
        defparam  Tag_way.DATA_WIDTH = Tag_size;
        defparam Tag_way.Addr_len = Index_size;
        Tag_way Sramlike (
           .clk(clk),
           .reset(reset),

           .addr(addr),
           .wdata(),
           .waddr(),
           .we(),// 1'b0 is read, 1'b1 is write

           .rdata(Tag[i]) 
        );
    end
endgenerate
//data
generate
    for(i=0;i<Cache_way;i++) begin 
        defparam Data_way.DATA_WIDTH = Cache_line_size;
        defparam Data_way.Addr_len = Index_size;
        Data_way Sramlike (
           .clk(clk),
           .reset(reset),

           .addr(addr),
           .wdata(),
           .waddr(),
           .we(),// 1'b0 is read, 1'b1 is write

           .rdata(cache_data[i]) 
        );
    end

endgenerate
//valid
generate
    for(i=0;i<Cache_way;i++) begin 
        defparam  Data_valid.DATA_WIDTH = 1;
        defparam  Data_valid.Addr_len = Index_size;
        Data_valid Sramlike (
           .clk(clk),
           .reset(reset),

           .addr(addr),
           .wdata(),
           .waddr(),
           .we(),// 1'b0 is read, 1'b1 is write

           .rdata(valid[i]) 
        );
    end
endgenerate
//dirt
generate
    for(i=0;i<Cache_way;i++) begin 
        defparam  Data_dirt.DATA_WIDTH = 1;
        defparam  Data_dirt.Addr_len = Index_size;
        Data_dirt Sramlike (
           .clk(clk),
           .reset(reset),

           .addr(addr),
           .wdata(),
           .waddr(),
           .we(),// 1'b0 is read, 1'b1 is write

           .rdata(dirt[i]) 
        );
    end
endgenerate

defparam  lru_way.DATA_WIDTH = 1;
defparam  lru_way.Addr_len = Index_size;
lru_way Sramlike (
    .clk(clk),
    .reset(reset),

    .addr(addr),
    .wdata(),
    .waddr(),
    .we(),// 1'b0 is read, 1'b1 is write

    .rdata(lru) 
);

assign offset = addr[Offset_size-1:0];
assign index = addr[Index_size + Offset_size-1:Offset_size];
assign tag = addr[BUS_WIDTH-1:Index_size + Offset_size];

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

generate
    for ( i= 0; i<Cache_way;i++ ) begin
      always @(*) begin
        case (offset[Offset_size-1:Word_offset])
            

            
        endcase
      end
    end
endgenerate


endmodule //Cache


module ICache #(
   parameter BUS_WIDTH = 32,
   parameter DATA_WIDTH = 32,
   parameter Cache_line_wordnum = 16,
   parameter Max_size = 4096,//4kB
   
   localparam Cache_line_size = DATA_WIDTH * Cache_line_wordnum, //64B
   localparam Cache_way = 2,
   localparam Cache_line_num = Max_size / Cache_way / Cache_line_size * 8, //4kB
   localparam Tag_size = BUS_WIDTH - $clog2(Cache_line_size/8) - $clog2(Cache_line_num)

)(
    input wire clk,
    input wire reset,
    
    //cpu request
    input wire ce,
    input wire we,
    input wire [BUS_WIDTH-1:0]addr,
    output wire [DATA_WIDTH-1:0]rdata,
    output wire rdata_valid,
    input wire rdata_ready,
    `ifdef DCACHE
    input wire [31:0]wdata,
    input wire [3:0]wmask,
    output wire write_respone,
    `endif 
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

reg state;
reg [$clog2(Cache_line_wordnum)-1:0]read_count;

endmodule //Cache

/*
* simulate sram , when clock rising edge read out data or write data, signal port
* write first memory
*/

module Sramlike #(
    parameter DATA_WIDTH = 32,
    parameter Addr_len = 6,
    localparam Sram_Depth = $pow(2,Addr_len)
    //parameter $pow(2,)
)(
    input wire clk,
    input wire reset,

    input wire [Addr_len-1:0] addr,
    input wire [DATA_WIDTH-1:0] wdata,
    input wire [Addr_len-1:0] waddr,
    input wire we,// 1'b0 is read, 1'b1 is write

    output wire [Addr_len-1:0] rdata
);

reg [DATA_WIDTH-1:0]Mem[Sram_Depth-1:0];
reg [Addr_len-1:0]addr_temp;

always @(posedge clk) begin
    if(we) begin 
        Mem[waddr] <= wdata;
    end
    addr_temp <= addr;
end

assign rdata = Mem[addr_temp];

    
endmodule

