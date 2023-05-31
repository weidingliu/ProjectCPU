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
    
);

endmodule //Cache

module DCache #(
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

reg state;
reg [$clog2(Cache_line_wordnum)-1:0]read_count;

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
    input wire we,// 1'b0 is read, 1'b1 is write

    output wire [Addr_len-1:0] rdata
);

reg [DATA_WIDTH-1:0]Mem[Sram_Depth-1:0];
reg [Addr_len-1:0]addr_temp;

always @(posedge clk) begin
    if(we) begin 
        Mem[addr] <= wdata;
    end
    addr_temp <= addr;
end

assign rdata = Mem[addr_temp];

    
endmodule

