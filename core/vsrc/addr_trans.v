
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


wire inst_trans_en;
wire data_trans_en;

wire inst_dmw0_en;
wire inst_dmw1_en;

wire data_dmw0_en;
wire data_dmw1_en;
// adress translate mod
assign inst_trans_en =  DAPG == 2'b01;
assign data_trans_en = DAPG == 2'b01;
// dmw driect address translate enable 
assign inst_dmw0_en = (DMW0[31:29] == inst_vaddr);
assign inst_dmw1_en = (DMW1[31:29] == inst_vaddr);

assign data_dmw0_en = (DMW0[31:29] == data_vaddr);
assign data_dmw1_en = (DMW1[31:29] == data_vaddr);


// vaddr
assign inst_paddr = inst_trans_en? 32'h0:inst_vaddr;
assign data_paddr = data_trans_en? 32'h0:data_vaddr;


endmodule //addr_trans

