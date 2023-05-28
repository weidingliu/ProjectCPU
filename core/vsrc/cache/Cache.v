/*
* cache data 
*
*/
module Cache_Data #(
   parameter BUS_WIDTH = 32,
   parameter DATA_WIDTH = 32,
   parameter Cache_line_size = DATA_WIDTH * 16, //64B
   parameter Cache_line_wordnum = Cache_line_size / DATA_WIDTH,
   parameter Cache_way = 2,
   parameter Max_size = 4096,//4kB
   parameter Cache_line_num = Max_size / Cache_way / Cache_line_size * 8, //4kB
   parameter Tag_size = BUS_WIDTH - $clog2(Cache_line_size/8) - $clog2(Cache_line_num)
) (
    input wire [BUS_WIDTH-1:0] addr,
    input wire 
);
    
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
   parameter Cache_line_size = DATA_WIDTH * 16, //64B
   parameter Cache_line_wordnum = Cache_line_size / DATA_WIDTH,
   parameter Cache_way = 2,
   parameter Max_size = 4096,//4kB
   parameter Cache_line_num = Max_size / Cache_way / Cache_line_size * 8, //4kB
   parameter Tag_size = BUS_WIDTH - $clog2(Cache_line_size/8) - $clog2(Cache_line_num)

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
   parameter Cache_line_size = DATA_WIDTH * 16, //64B
   parameter Cache_line_wordnum = Cache_line_size / DATA_WIDTH,
   parameter Cache_way = 2,
   parameter Max_size = 4096,//4kB
   parameter Cache_line_num = Max_size / Cache_way / Cache_line_size * 8, //4kB
   parameter Tag_size = BUS_WIDTH - $clog2(Cache_line_size/8) - $clog2(Cache_line_num)
//    parameter DCACHE = 0

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

