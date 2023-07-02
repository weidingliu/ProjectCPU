
`include "defines.sv"

module addr_trans (
    input wire clk,
    input wire reset,
    // from csr
    input wire [1:0]DAPG,
    input wire [31:0]DMW0,
    input wire [31:0]DMW1,
    input wire [1:0]plv,
    // inst interface
    input wire [31:0]inst_vaddr,
    input wire inst_addr_valid,
    output wire inst_uncached_en,
    output wire [31:0]inst_paddr,

    //data addr interface
    input wire [31:0]data_vaddr,
    input wire data_addr_valid,
    output wire data_uncached_en,
    output wire [31:0]data_paddr
);

// localparam trans_map = 2'b00;
// localparam direct_trans = 2'b01;
// // localparam page_map = 2'b10;

// wire [1:0]translate_mod; 

// assign translate_mod = (DAPG == 2'b10) ? direct_trans:
//                         (DAPG == 2'b01) ? trans_map:direct_trans;

wire inst_trans_en;
wire data_trans_en;

// assign inst_trans_en = 




endmodule //addr_trans

