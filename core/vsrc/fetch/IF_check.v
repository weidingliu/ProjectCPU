

module IF_check (
    input wire clk,
    input wire reset,
    input wire flush,
    input wire excp_flush,
    input wire ertn_flush,

    input wire [31:0]vaddr,
    input wire vaddr_valid,
    output wire vaddr_ready,

    input wire [31:0]inst_i,
    input wire inst_valid,
    output wire inst_ready,

    output wire [31:0]inst_o,
    output wire [31:0]vaddr_o,
    output wire ib_valid,
    input wire ib_ready
    input wire fire,
    output wire is_fire
);
reg valid;





assign vaddr_ready = (vaddr_valid & !inst_valid) ? 1'b0:1'b1;

assign inst_ready = ib_ready;

endmodule //IF_check

