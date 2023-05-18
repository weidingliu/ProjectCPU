/*
* transfer sram interface to axi_lite interface
*
*/
module sram2axi4_lite #(
    parameter BUS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CPU_WIDTH = 32
)
(
    input wire aclk,
    input wire reset,
    //read address channel 
    output wire ar_valid,
    input wire ar_ready,
    output wire [BUS_WIDTH-1:0] ar_addr,

    //write address channel
    output wire aw_valid,
    input wire aw_ready,
    output wire [BUS_WIDTH-1:0] arw_addr,
    //read data channel 
    input wire rd_valid,
    output wire rd_ready,
    input wire [DATA_WIDTH-1:0] rd_data


    //write data channel 


    //write respone channel


);

endmodule //sram2axi4_lite
