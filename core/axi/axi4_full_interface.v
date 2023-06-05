
module axi4_full_interface #(
    parameter BUS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CPU_WIDTH = 32
)(
    input wire aclk,
    input wire reset,

    //read address channel 
    output wire ar_valid,
    input wire ar_ready,
    output wire [3:0]ar_id,
    output wire [7:0] ar_len,
    output wire [2:0] ar_size,
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
    input wire wr_breap
);

endmodule //axi4_full_interface

