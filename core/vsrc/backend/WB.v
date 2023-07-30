`include "csr_defines.v"
`include "defines.sv"

module WB (
    input wire clk,//clock
    input wire reset,//global reset
    input wire icache_busy,
    //bus 
    input wire [`mem_ctrl_width-1:0] mem_ctrl_bus,
    output wire [`mem_ctrl_width-1:0] wb_ctrl_bus,

    //csr
    input wire [`ex_csr_ctrl_width-1:0] mem_csr_bus,
    output wire [`ex_csr_ctrl_width-1:0] wb_csr_bus,
    //for llbit
    output wire llbit_set_en,
    output wire llbit_out,
    //exception
    input wire [`mem_excp_width-1:0]mem_excp_bus,
    output wire excp_flush,
    output wire ertn_flush,
    output wire [31:0]excp_era,
    output wire [8:0]esubcode,
    output wire [5:0]ecode,
    output wire [31:0]badv,
    output wire badv_valid,

    output wire excp_tlb,
    output wire excp_tlbrefill,

    output wire stall,
    // invtlb 
    output wire tlbinv_en,
    output wire [4:0]tlbinv_op,
    output wire [9:0]tlbinv_asid,
    output wire [18:0]tlbinv_vpn,
    // tlbwr
    output wire tlb_wren,//for tlbwr
    output wire tlb_rden,// for tlbrd
    output wire tlb_fill_en,
    //tlb serch
    output wire [4:0]data_tlbindex,
    output wire data_tlbfound,
    output wire tlb_serch_en,
    // is tlb rd
    output wire is_tlbhazard,

    //bypass
    output wire [`bypass_width-1:0]wb_bypass,
    output wire [`ex_csr_ctrl_width-1:0]wb_csr_bypass,
    //shark hand
    input wire left_valid,//IF stage's data is ready
    output wire left_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready,//EXE stage is allowin
    output wire is_fire,
    input wire fire
    `ifdef NEXT_SOFT_INT
    ,
    input wire soft_int
    `endif 
);

// wire right_fire;

reg valid;
reg [`mem_ctrl_width-1:0]bus_temp;
reg [`ex_csr_ctrl_width-1:0] csr_bus_temp;
wire logic_valid;
wire is_break;
wire inst_valid;
wire [4:0]wreg_index;
wire wreg_en;
wire [31:0]Inst;
wire [31:0]PC;
wire [31:0]mem_result;
// wire inst_valid;
wire [31:0]mem_addr;
wire timer_inst;
wire [63:0]timer64;

// wire mem_llbit_out;
wire mem_llbit_set_en;

wire [7:0]inst_st_en;
wire [31:0]inst_st_vaddr;
wire [31:0]inst_st_paddr;
wire [31:0]inst_st_data;
wire [7:0]inst_ld_en;

//tlb 
wire [4:0]tlb_op;
assign is_fire = logic_valid & right_ready;
//bus
assign {
        llbit_out,// 360:360
        mem_llbit_set_en,//359:359
        inst_ld_en,
        inst_st_en,//for difftest
        inst_st_vaddr,//for difftest
        inst_st_paddr,//for difftest
        inst_st_data,//for difftest
        data_tlbindex,//242:246
        data_tlbfound,//241:241
        tlb_op,//236:240
        tlbinv_en,//235:235
        tlbinv_op,//230:234
        tlbinv_asid,//220:229
        tlbinv_vpn,//201:219
        timer_inst,// 200:200
        timer64,// 136:199
        mem_addr,//104:135
        is_break,//103:103
        inst_valid,//102:102
        wreg_index,//97:101
        wreg_en,//96:96
        Inst,// 64:95
        PC,// 32:63
        mem_result// 0:31
} = mem_ctrl_bus;
assign llbit_set_en = mem_llbit_set_en & left_valid & !ms_excp;

//tlb 
/*
tlbop[0] tlbinv
tlbop[1] tlbwr
tlbop[2] inst_tlbrd
tlbop[3] inst_tlbfill
tlbop[4]
*/ 
assign tlb_wren = tlb_op[1] & left_valid;
assign tlb_rden = tlb_op[2] & left_valid;
assign tlb_fill_en = tlb_op[3] & left_valid;
assign tlb_serch_en = tlb_op[4] & left_valid;
assign is_tlbhazard = (tlb_op[4] | tlb_op[2]) & left_valid;
//excp
wire ms_excp;
wire [15:0]excp_num;
wire ertn;

assign {
    ertn,
    excp_num,
    ms_excp 
} = mem_excp_bus;

`ifdef NEXT_SOFT_INT
assign excp_flush = (ms_excp | soft_int) & left_valid & !icache_busy;
assign stall = (ertn | ms_excp | soft_int) & left_valid & icache_busy;
`else 
assign excp_flush = ms_excp & left_valid & !icache_busy;
assign stall = (ertn | ms_excp) & left_valid & icache_busy;
`endif
assign ertn_flush = ertn & left_valid & !icache_busy & !ms_excp;

// assign pc = PC;
/*
excp_num[0]  int
        [1]  adef
        [2]  tlbr    |inst tlb exceptions
        [3]  pif     |
        [4]  ppi     |
        [5]  syscall
        [6]  brk
        [7]  ine
        [8]  ipe
        [9]  ale     | mem exceptions 
        [10] adem
        [11] tlbr    |
        [12] pme     |data tlb exceptions
        [13] ppi     |
        [14] pis     |
        [15] pil     |
        
*/
`ifdef NEXT_SOFT_INT
assign {
    ecode,
    esubcode,
    badv,
    badv_valid,
    excp_tlb,
    excp_tlbrefill
} = (excp_num[0] | soft_int) ? {`ECODE_INT , 9'b0,32'h0,1'b0   ,1'b0,      1'b0} :
    excp_num[1] ? {`ECODE_ADEF,`ESUBCODE_ADEF,PC,    left_valid,1'b0,      1'b0}:
    excp_num[2] ? {`ECODE_TLBR, 9'b0,         PC,    left_valid,left_valid,left_valid}:
    excp_num[3] ? {`ECODE_PIF,  9'b0,         PC,    left_valid,left_valid,      1'b0}:
    excp_num[4] ? {`ECODE_PPI,  9'b0,         PC,    left_valid,left_valid,      1'b0}:
    excp_num[5] ? {`ECODE_SYS , 9'b0,         32'h0,  1'b0,1'b0,      1'b0} :
    excp_num[6] ? {`ECODE_BRK , 9'b0,         32'h0,  1'b0,1'b0,      1'b0} :
    excp_num[7] ? {`ECODE_INE , 9'b0,         32'h0,  1'b0,1'b0,      1'b0} :
    excp_num[8] ? {`ECODE_IPE , 9'b0,         32'h0,  1'b0,1'b0,      1'b0} : 
    excp_num[9] ? {`ECODE_ALE , 9'b0,         mem_addr,left_valid,1'b0,      1'b0} : 
    excp_num[10]? {`ECODE_ADEM,`ESUBCODE_ADEM,mem_addr,left_valid,1'b0,      1'b0} :
    excp_num[11]? {`ECODE_TLBR, 9'b0,         mem_addr,left_valid,left_valid,      left_valid} :
    excp_num[12]? {`ECODE_PME,  9'b0,         mem_addr,left_valid,left_valid,      1'b0} :
    excp_num[13]? {`ECODE_PPI,  9'b0,         mem_addr,left_valid,left_valid,      1'b0} :
    excp_num[14]? {`ECODE_PIS,  9'b0,         mem_addr,left_valid,left_valid,      1'b0} :
    excp_num[15]? {`ECODE_PIL,  9'b0,         mem_addr,left_valid,left_valid,      1'b0} :
    50'b0;
`else 
assign {
    ecode,
    esubcode,
    badv,
    badv_valid,
    excp_tlb,
    excp_tlbrefill
} = excp_num[0] ? {`ECODE_INT , 9'b0,32'h0,1'b0,1'b0,      1'b0} :
    excp_num[1] ? {`ECODE_ADEF,`ESUBCODE_ADEF,PC,    left_valid,1'b0,      1'b0}:
    excp_num[2] ? {`ECODE_TLBR, 9'b0,         PC,    left_valid,left_valid,left_valid}:
    excp_num[3] ? {`ECODE_PIF,  9'b0,         PC,    left_valid,left_valid,      1'b0}:
    excp_num[4] ? {`ECODE_PPI,  9'b0,         PC,    left_valid,left_valid,      1'b0}:
    excp_num[5] ? {`ECODE_SYS , 9'b0,         32'h0,  1'b0,1'b0,      1'b0} :
    excp_num[6] ? {`ECODE_BRK , 9'b0,         32'h0,  1'b0,1'b0,      1'b0} :
    excp_num[7] ? {`ECODE_INE , 9'b0,         32'h0,  1'b0,1'b0,      1'b0} :
    excp_num[8] ? {`ECODE_IPE , 9'b0,         32'h0,  1'b0,1'b0,      1'b0} : 
    excp_num[9] ? {`ECODE_ALE , 9'b0,         mem_addr,left_valid,1'b0,      1'b0} : 
    excp_num[10]? {`ECODE_ADEM,`ESUBCODE_ADEM,mem_addr,left_valid,1'b0,      1'b0} :
    excp_num[11]? {`ECODE_TLBR, 9'b0,         mem_addr,left_valid,left_valid,      left_valid} :
    excp_num[12]? {`ECODE_PME,  9'b0,         mem_addr,left_valid,left_valid,      1'b0} :
    excp_num[13]? {`ECODE_PPI,  9'b0,         mem_addr,left_valid,left_valid,      1'b0} :
    excp_num[14]? {`ECODE_PIS,  9'b0,         mem_addr,left_valid,left_valid,      1'b0} :
    excp_num[15]? {`ECODE_PIL,  9'b0,         mem_addr,left_valid,left_valid,      1'b0} :
    50'b0;
`endif

assign excp_era = PC;

// assign right_fire=right_ready & right_valid;//data submit finish
//shark hands
// always @(posedge clk) begin
//     if(reset == `RestEn) begin
//         valid <= `false; 
//     end
//     else begin 
//         if(fire)begin 
//             valid <= `false;
//         end
//         if(logic_valid & right_ready) begin
//             valid <= `true;
//         end
//         // if(flush) begin
//         //     valid <= `false;
//         // end
//     end
// end

// //data block
// always @(posedge clk) begin
//     if(reset == `RestEn) begin 
//         bus_temp <= `mem_ctrl_width'h0;
//         csr_bus_temp <= `ex_csr_ctrl_width'h0;
//     end
//     else begin 
//         if(logic_valid & right_ready) begin 
//             bus_temp <= mem_ctrl_bus;//{mem_ctrl_bus[103:103],inst_valid,mem_ctrl_bus[101:0]};
//             csr_bus_temp <= mem_csr_bus;
//         end
//     end
// end
// output logic
// assign right_valid=valid;
assign right_valid = logic_valid;
assign logic_valid = (icache_busy & (ms_excp | ertn) & left_valid) ? 1'b0:left_valid;
assign left_ready = (icache_busy & (ms_excp | ertn) & left_valid) ? 1'b0: right_ready;
// assign wb_ctrl_bus=bus_temp;
// assign wb_csr_bus = csr_bus_temp;
assign wb_ctrl_bus={mem_ctrl_bus[`mem_ctrl_width-1:103],(mem_ctrl_bus[102] & ~excp_flush),mem_ctrl_bus[101:0]};
assign wb_csr_bus = {mem_csr_bus[46] & left_valid  & ~ms_excp,mem_csr_bus[45:0]};
assign wb_csr_bypass = {mem_csr_bus[46] & left_valid,mem_csr_bus[45:0]};
assign wb_bypass = {mem_ctrl_bus[31:0],mem_ctrl_bus[101:97],mem_ctrl_bus[96:96] & left_valid };

endmodule //WB