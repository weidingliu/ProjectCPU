/*
* This module is used to select axi ports from LSU and IFU,
* and is implemented using priority arbitration. LSUs have higher priority for memory access requests.
*
*/

module axi_liteArbiter #(
    parameter BUS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CPU_WIDTH = 32
)(
    input wire clk,
    input wire reset,
///////////////inst channels
    //read address channel 
    input wire inst_ar_valid,
    output wire inst_ar_ready,
    input wire [BUS_WIDTH-1:0] inst_ar_addr,//read request address 
    input wire [2:0]inst_ar_prot, // Access attributes

    //write address channel
    input wire inst_aw_valid,
    output wire inst_aw_ready,
    input wire [BUS_WIDTH-1:0] inst_aw_addr,
    input wire [2:0]inst_aw_prot,
    //read data channel 
    output wire inst_rd_valid,
    input wire inst_rd_ready,
    output wire [DATA_WIDTH-1:0] inst_rd_data,

    //write data channel 
    input wire inst_wd_valid,
    output wire inst_wd_ready,
    input wire [DATA_WIDTH-1:0] inst_wd_data,
    input wire [DATA_WIDTH/8 -1 : 0]inst_wstrb,

    //write respone channel
    output wire inst_wr_valid,
    input wire inst_wr_ready,
    output wire [1:0]inst_wr_breap,

/////////////data channels
     //read address channel 
    input wire mem_ar_valid,
    output wire mem_ar_ready,
    input wire [BUS_WIDTH-1:0] mem_ar_addr,//read request address 
    input wire [2:0]mem_ar_prot, // Access attributes

    //write address channel
    input wire mem_aw_valid,
    output wire mem_aw_ready,
    input wire [BUS_WIDTH-1:0] mem_aw_addr,
    input wire [2:0]mem_aw_prot,
    //read data channel 
    output wire mem_rd_valid,
    input wire mem_rd_ready,
    output wire [DATA_WIDTH-1:0] mem_rd_data,

    //write data channel 
    input wire mem_wd_valid,
    output wire mem_wd_ready,
    input wire [DATA_WIDTH-1:0] mem_wd_data,
    input wire [DATA_WIDTH/8 -1 : 0]mem_wstrb,

    //write respone channel
    output wire mem_wr_valid,
    input wire mem_wr_ready,
    output wire [1:0]mem_wr_breap,
    
 /////////// //output port
    //read address channel 
    output wire ar_valid,
    input wire ar_ready,
    output wire [BUS_WIDTH-1:0] ar_addr,//read request address 
    output wire [2:0]ar_prot, // Access attributes

    //write address channel
    output wire aw_valid,
    input wire aw_ready,
    output wire [BUS_WIDTH-1:0] aw_addr,
    output wire [2:0]aw_prot,
    //read data channel 
    input wire rd_valid,
    output wire rd_ready,
    input wire [DATA_WIDTH-1:0] rd_data,

    //write data channel 
    output wire wd_valid,
    input wire wd_ready,
    output wire [DATA_WIDTH-1:0] wd_data,
    output wire [DATA_WIDTH/8 -1 : 0]wstrb,

    //write respone channel
    input wire wr_valid,
    output wire wr_ready,
    input wire [1:0]wr_breap
);
//Priority arbiter





endmodule //axi_liteArbiter

