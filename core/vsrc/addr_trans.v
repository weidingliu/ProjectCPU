
`include "defines.sv"

module addr_trans (
    input wire clk,
    input wire reset,
    // from csr
    input wire [1:0]DAPG,
    input wire [31:0]DMW0,
    input wire [31:0]DMW1,
    // inst interface
    input wire [31:0]inst_vaddr,
    input wire inst_valid,

    //data addr interface
    input wire [31:0]data_vaddr,
    input wire data_valid
);

localparam trans_map = 2'b00;
localparam direct_trans = 2'b01;
// localparam page_map = 2'b10;

wire [1:0]translate_mod; 

assign translate_mod = (DAPG == 2'b10) ? direct_trans:
                        (DAPG == 2'b01) ? trans_map:direct_trans;


endmodule //addr_trans

