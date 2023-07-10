`define RestEn 1'b1
`define RestDis 1'b0
`define false 1'b0
`define true 1'b1
`define bypass_width 38
`define ctrl_width 285
`define ex_ctrl_width 325
`define mem_ctrl_width 241
// for csr read and write bus
`define id_csr_ctrl_width 49
`define ex_csr_ctrl_width 47
// for excp and interrupt
`define id_excp_width 11
`define ex_excp_width 11
`define mem_excp_width 18

// for difftest, next instruction after set soft interrupt
`define NEXT_SOFT_INT
