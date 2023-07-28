`include "defines.sv"
// `include "csr_defines.v"

/*
* decoder inst and produce ctrl signal for backend
*
*/
module ID (
    input wire clk,//clock
    input wire reset,//global reset
    input wire[31:0] Inst,//inst from inst ram
    input wire[31:0] PC,//inst addr
    //for regfile
    output wire [4:0]reg_index1,//read REG index1
    output wire [4:0]reg_index2,//read REG index2
    input wire [31:0]reg_data1,
    input wire [31:0]reg_data2,
    //flush
    input wire flush,
    //is_break
    output wire is_break,
    //csr
    output [13:0] rd_csr_addr,
    input  [31:0] rd_csr_data,
    output wire [`id_csr_ctrl_width-1:0] id_csr_ctrl,
    input wire [63:0] timer_in,
    input wire [31:0] tid,
    // ex ,mem, wb have hazard
    input wire ex_is_tlbhazard,
    input wire mem_is_tlbhazard,
    input wire wb_is_tlbhazard, 
    // from ex 
    input wire [6:0]ex_mem_hazard,
    //interrupt
    input wire has_int,
    // excp bus and some sign for excp
    output wire [`id_excp_width-1:0] id_excp_bus,
    input wire excp_flush,
    input wire ertn_flush,
    input wire [1:0]plv,
    input wire [4:0]ib_excp_bus,

    //ctrl flower
    output wire [`ctrl_width-1:0]ctrl_bus,//ctrl bus
    //shark hand
    // input wire right_fire,//right data consumed
    input wire left_valid,//IF stage's data is ready
    output wire left_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready,//EXE stage is allowin
    output wire is_fire,
    input wire fire//next stage's data was consumed
);
localparam TLBIDX= 14'h10;
localparam TLBEHI= 14'h11;
localparam TLBELO0=14'h12;
localparam TLBELO1=14'h13;

// wire right_fire;
reg valid;

wire [13:0] alu_op;//alu opcode
wire [7:0] branch_op;
wire [3:0]mul_div_op;

wire [4:0]tlb_op;

reg [`ctrl_width-1:0] bus_temp;//reg for ctrl flower
wire [31:0]Imm;//bus [0:31]
wire [31:0]src1;//bus [32:63]
wire [31:0]src2;//bus [64:95]
wire wreg_en;//write REG en
wire [4:0]wreg_index;//write REG index

wire [ 5:0] op_31_26;//op 31:26
wire [ 3:0] op_25_22;//op 25:22
wire [ 1:0] op_21_20;//op21:20
wire [ 4:0] op_19_15;//op19:15
wire [ 4:0] rd;
wire [ 4:0] rj;//reg 1
wire [ 4:0] rk;//reg 2
wire [31:0] rd_d;
wire [31:0] rj_d;
wire [31:0] rk_d;
wire [11:0] i12;
wire [13:0] i14;
wire [19:0] i20;
wire [15:0] i16;
wire [25:0] i26;
wire [4:0]  i5;

wire [63:0]decoder_op_31_26;
wire [15:0]decoder_op_25_22;
wire [3:0]decoder_op_21_20;
wire [31:0]decoder_op_19_15;

wire [31:0] Imm12;
wire [31:0] Imm14;
wire [31:0] Imm20;
wire [31:0] Imm16;
wire [31:0] Imm26;
wire [31:0] Imm5;


wire Imm20_en;
wire Imm12_en;
wire Imm16_en;
wire Imm26_en;
wire Imm5_en;
wire Imm14_en;
//select src form reg , Imm, PC
wire [1:0]select_src1;//select src1
wire [1:0]select_src2;//select src2

//inst is sign compute
wire is_sign;
wire is_mem_hazrd;

wire [5:0]op_mem;
//select rd as source reg (only for memory inst)
wire is_rd;
//select r1 as dest
wire is_r1;
// select rj as dest
wire is_rj;

//inst valid
wire inst_valid;

wire inst_add;
wire inst_or;
wire inst_pcaddu12i;
wire inst_lu12i;
wire inst_ori;
wire inst_sub;
wire inst_jirl;
wire inst_break;
wire inst_xor;
wire inst_addi;
wire inst_bl;
wire inst_st_w;
wire inst_ld_w;
wire inst_b;
wire inst_bge;
wire inst_st_b;
wire inst_srai;
wire inst_andi;
wire inst_sll;
wire inst_ld_bu;
wire inst_slli;
wire inst_srli;
wire inst_sltu;
wire inst_xori;
wire inst_beq;
wire inst_nor;
wire inst_and;
wire inst_sltui;
wire inst_blt;
wire inst_mul;
wire inst_bgeu;
wire inst_bne;
wire inst_mod_w;
wire inst_srl;
wire inst_sra;
wire inst_slti;
wire inst_slt;
wire inst_ld_hu;
wire inst_ld_b;
wire inst_ld_h;
wire inst_mulh;
wire inst_mulh_u;
wire inst_st_h;
wire inst_div;
wire inst_bltu;
wire inst_div_wu;
wire inst_mod_wu;
wire inst_csrrd;
wire inst_csrwr;
wire inst_csrxchg;
wire inst_syscall;
wire inst_ertn;

wire inst_rdcntid;
wire inst_rdcntvl;
wire inst_rdcntvh;

wire inst_invtlb;
wire inst_tlbwr;
wire inst_tlbrd;
wire inst_tlbfill;
wire inst_tlbsrch;

wire inst_ll;
wire inst_sc;

wire inst_preld;//don't prefetch, is nop inst
wire inst_cacop;

wire logic_valid;
wire is_sign_extend;

wire csr_we;//csr write enable
wire [13:0]csr_idx;//csr write and read addr
wire csr_mask_en;// csr mask enbale
wire [31:0]csr_data;// csr read data
wire rd_from_csr;// rd result is from csr_data
reg [`id_csr_ctrl_width-1:0]csr_ctrl_temp;

// excp and interrupt
wire excp;
wire [8:0]excp_num;
reg [`id_excp_width-1:0]excp_bus_temp;
wire excp_ine;
wire excp_ipe;
wire is_kernel_inst;
wire refetch;
assign is_fire = logic_valid & right_ready;

wire is_llbit;
/*
*    op_mem[0] is mem inst
*    op_mem[1] is usignal extend
*    op_mem[2] 1'b0 is load ,1'b1 is store
*    op_mem[3] is word mem inst 
*    op_mem[4] is half mem inst
*    op_mem[5] is byte mem inst
*/

//op_mem
assign op_mem[0] = inst_st_w | inst_ld_w | inst_st_b | inst_ld_bu | inst_ld_hu | inst_ld_b | inst_ld_h | inst_st_h | inst_ll | inst_sc;
assign op_mem[1] = inst_ld_bu | inst_ld_hu;
assign op_mem[2] = inst_st_w | inst_st_b | inst_st_h | inst_sc;
assign op_mem[3] = inst_st_w | inst_ld_w | inst_ll | inst_sc;
assign op_mem[4] = inst_ld_hu | inst_ld_h | inst_st_h;
assign op_mem[5] = inst_st_b | inst_ld_bu | inst_ld_b;

assign is_llbit = inst_ll | inst_sc;
//select rd as second source reg
assign is_rd = inst_st_w | inst_bge | inst_st_b | inst_beq | inst_bgeu | inst_blt | inst_bne | inst_st_h | inst_bltu | inst_csrwr | inst_csrxchg; 
assign is_r1 = inst_bl;
assign is_rj = inst_rdcntid;

//aluop
assign alu_op[0] = inst_add | inst_pcaddu12i | inst_jirl | inst_addi | inst_st_w | inst_ld_w | inst_bl | inst_b | inst_bge | inst_st_b | inst_ld_bu
                   | inst_beq | inst_bgeu | inst_blt | inst_bne | inst_ld_hu | inst_ld_b | inst_ld_h | inst_st_h | inst_bltu | inst_cacop |
                    inst_ll | inst_sc;
assign alu_op[1] = inst_lu12i;
assign alu_op[2] = inst_ori | inst_or;
assign alu_op[3] = inst_sub;
assign alu_op[4] = inst_xor | inst_xori;
assign alu_op[5] = inst_srai | inst_sra;
assign alu_op[6] = inst_andi | inst_and;
assign alu_op[7] = inst_sll | inst_slli;
assign alu_op[8] = inst_srli | inst_srl;
assign alu_op[9] = inst_sltu | inst_sltui;
assign alu_op[10] = inst_nor;
assign alu_op[11] = inst_slti | inst_slt;


assign mul_div_op[0] = inst_mul;
assign mul_div_op[1] = inst_mod_w | inst_mod_wu;
assign mul_div_op[2] = inst_mulh | inst_mulh_u;
assign mul_div_op[3] = inst_div | inst_div_wu;

//branch_op
assign branch_op[0] = inst_jirl;
assign branch_op[1] = inst_bl | inst_b;
assign branch_op[2] = inst_bge;
assign branch_op[3] = inst_beq;
assign branch_op[4] = inst_bgeu;
assign branch_op[5] = inst_blt;
assign branch_op[6] = inst_bne;
assign branch_op[7] = inst_bltu;

//tlb op
/*
tlbop[0] tlbinv
tlbop[1] tlbwr
tlbop[2] inst_tlbrd
tlbop[3] inst_tlbfill
tlbop[4] inst_tlbsrch
*/ 
assign tlb_op[0] = inst_invtlb;
assign tlb_op[1] = inst_tlbwr;
assign tlb_op[2] = inst_tlbrd;
assign tlb_op[3] = inst_tlbfill;
assign tlb_op[4] = inst_tlbsrch;
//is break
assign is_break = inst_break;

//is signextend or zero extend
assign is_sign_extend = inst_jirl | inst_addi | inst_st_w | inst_ld_w | inst_bge | inst_st_b | inst_ld_bu | inst_beq | inst_sltui | inst_bgeu | inst_blt
                        | inst_bne | inst_slti | inst_ld_hu | inst_ld_b | inst_ld_h | inst_st_h | inst_bltu | inst_cacop;

//split inst
assign op_31_26  = Inst[31:26];
assign op_25_22  = Inst[25:22];
assign op_21_20  = Inst[21:20];
assign op_19_15  = Inst[19:15];
//regfile index
assign rd   = Inst[ 4: 0];
assign rj   = Inst[ 9: 5];
assign rk   = Inst[14:10];
//Imm 
assign i12  = Inst[21:10];
assign i14  = Inst[23:10];
assign i20  = Inst[24: 5];
assign i16  = Inst[25:10];
assign i26  = {Inst[ 9: 0], Inst[25:10]};
assign i5   = rk;

//extend Imm
assign Imm20 = ({i20,12'h0});
assign Imm12 = ({20'h0,i12} & {32{~is_sign_extend}})|
                ({{20{i12[11]}},i12} & {32{is_sign_extend}});
assign Imm16 = ({{14{i16[15]}},i16,2'b00} & {32{is_sign_extend}});
assign Imm26 = ({{4{i26[25]}},i26,2'b00});
assign Imm5 = ({27'h0,i5});
assign Imm14 = {{16{i14[13]}}, i14, 2'b0};

//select Imm
assign Imm20_en = inst_pcaddu12i | inst_lu12i;
assign Imm12_en = inst_ori | inst_addi | inst_st_w | inst_ld_w | inst_st_b | inst_andi | inst_ld_bu | inst_xori | inst_sltui | inst_slti
                  | inst_ld_hu | inst_ld_b | inst_ld_h | inst_st_h | inst_cacop;
assign Imm16_en = inst_jirl | inst_bge | inst_beq | inst_bgeu | inst_blt | inst_bne | inst_bltu; 
assign Imm26_en = inst_bl | inst_b;
assign Imm5_en  = inst_srai | inst_slli | inst_srli;
assign Imm14_en = inst_ll | inst_sc;

//decoder split inst
decoder_2_4 decoder_2_4(.in(op_21_20),.out(decoder_op_21_20));
decoder_4_16 decoder_4_16(.in(op_25_22),.out(decoder_op_25_22));
decoder_6_64 decoder_6_64_0(.in(op_31_26),.out(decoder_op_31_26));
decoder_5_32 decoder_5_32_1(.in(op_19_15),.out(decoder_op_19_15));

decoder_5_32 decoder_5_32_2(.in(rd),.out(rd_d));
decoder_5_32 decoder_5_32_3(.in(rj),.out(rj_d));
decoder_5_32 decoder_5_32_4(.in(rk),.out(rk_d));

//produce select_src 2'b00 for reg, 2'b01 for Imm , 2'b10 for PC
assign select_src1[0] = inst_pcaddu12i | inst_lu12i;
assign select_src1[1] = inst_bl | inst_b | inst_bge | inst_beq | inst_bgeu | inst_blt | inst_bne | inst_bltu;

assign select_src2[0] = inst_ori | inst_jirl | inst_addi | inst_st_w | inst_ld_w | inst_bl | inst_b | inst_bge
                        | inst_st_b | inst_srai | inst_andi | inst_ld_bu | inst_slli | inst_srli | inst_xori | inst_beq | inst_sltui
                        | inst_bgeu | inst_blt | inst_bne | inst_slti | inst_ld_hu | inst_ld_b | inst_ld_h | inst_st_h | inst_bltu | inst_ll | inst_sc; 
assign select_src2[1] = inst_pcaddu12i;

//produce inst decoder result
assign inst_add       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h00];
assign inst_sub       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h02];
assign inst_pcaddu12i = decoder_op_31_26[6'h07] & ~Inst[25];
assign inst_lu12i     = decoder_op_31_26[6'h05] & ~Inst[25];
assign inst_ori       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'he];
assign inst_jirl      = decoder_op_31_26[6'h13];
assign inst_or        = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h0a];
assign inst_break     = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h2] & decoder_op_19_15[5'h14];
assign inst_slt       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h04];
assign inst_sltu      = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h05];
assign inst_nor       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h08];
assign inst_and       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h09];
assign inst_xor       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h0b];
// assign inst_orn       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h0c];
// assign inst_andn      = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h0d];
assign inst_sll       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h0e];
assign inst_srl       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h0f];
assign inst_sra       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h10];
assign inst_mul       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h18];
assign inst_mulh      = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h19];
assign inst_mulh_u    = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h1a];
assign inst_div       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h2] & decoder_op_19_15[5'h00];
assign inst_mod_w     = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h2] & decoder_op_19_15[5'h01];
assign inst_div_wu    = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h2] & decoder_op_19_15[5'h02];
assign inst_mod_wu    = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h2] & decoder_op_19_15[5'h03];
assign inst_slli      = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h1] & decoder_op_21_20[2'h0] & decoder_op_19_15[5'h01];
assign inst_srli      = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h1] & decoder_op_21_20[2'h0] & decoder_op_19_15[5'h09];
assign inst_srai      = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h1] & decoder_op_21_20[2'h0] & decoder_op_19_15[5'h11];
assign inst_slti      = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h8];
assign inst_sltui     = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h9];
assign inst_addi      = decoder_op_31_26[6'h00] & decoder_op_25_22[4'ha];
assign inst_andi      = decoder_op_31_26[6'h00] & decoder_op_25_22[4'hd];
assign inst_xori      = decoder_op_31_26[6'h00] & decoder_op_25_22[4'hf];
assign inst_ld_b      = decoder_op_31_26[6'h0a] & decoder_op_25_22[4'h0];
assign inst_ld_h      = decoder_op_31_26[6'h0a] & decoder_op_25_22[4'h1];
assign inst_ld_w      = decoder_op_31_26[6'h0a] & decoder_op_25_22[4'h2];
assign inst_st_b      = decoder_op_31_26[6'h0a] & decoder_op_25_22[4'h4];
assign inst_st_h      = decoder_op_31_26[6'h0a] & decoder_op_25_22[4'h5];
assign inst_st_w      = decoder_op_31_26[6'h0a] & decoder_op_25_22[4'h6];
assign inst_ld_bu     = decoder_op_31_26[6'h0a] & decoder_op_25_22[4'h8];
assign inst_ld_hu     = decoder_op_31_26[6'h0a] & decoder_op_25_22[4'h9];
assign inst_b         = decoder_op_31_26[6'h14];
assign inst_bl        = decoder_op_31_26[6'h15];
assign inst_beq       = decoder_op_31_26[6'h16];
assign inst_bne       = decoder_op_31_26[6'h17];
assign inst_blt       = decoder_op_31_26[6'h18];
assign inst_bge       = decoder_op_31_26[6'h19];
assign inst_bltu      = decoder_op_31_26[6'h1a];
assign inst_bgeu      = decoder_op_31_26[6'h1b];
assign inst_ll        = decoder_op_31_26[6'h08] & ~Inst[25] & ~Inst[24];
assign inst_sc        = decoder_op_31_26[6'h08] & ~Inst[25] &  Inst[24];
assign inst_csrrd     = decoder_op_31_26[6'h01] & ~Inst[25] & ~Inst[24] & rj_d[5'h00];
assign inst_csrwr     = decoder_op_31_26[6'h01] & ~Inst[25] & ~Inst[24] & rj_d[5'h01];
assign inst_csrxchg   = decoder_op_31_26[6'h01] & ~Inst[25] & ~Inst[24] & (~rj_d[5'h00] & ~rj_d[5'h01]);  //rj != 0,1
assign inst_syscall   = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h2] & decoder_op_19_15[5'h16];
assign inst_ertn      = decoder_op_31_26[6'h01] & decoder_op_25_22[4'h9] & decoder_op_21_20[2'h0] & decoder_op_19_15[5'h10] & rk_d[5'h0e] & rj_d[5'h00] & rd_d[5'h00];

assign inst_rdcntid   = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h0] & decoder_op_19_15[5'h00] & rk_d[5'h18] & rd_d[5'h00];
assign inst_rdcntvl   = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h0] & decoder_op_19_15[5'h00] & rk_d[5'h18] & rj_d[5'h00] & !rd_d[5'h00];
assign inst_rdcntvh   = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h0] & decoder_op_19_15[5'h00] & rk_d[5'h19] & rj_d[5'h00];

assign inst_tlbsrch    = decoder_op_31_26[6'h01] & decoder_op_25_22[4'h9] & decoder_op_21_20[2'h0] & decoder_op_19_15[5'h10] & rk_d[5'h0a] & rj_d[5'h00] & rd_d[5'h00];
assign inst_tlbrd      = decoder_op_31_26[6'h01] & decoder_op_25_22[4'h9] & decoder_op_21_20[2'h0] & decoder_op_19_15[5'h10] & rk_d[5'h0b] & rj_d[5'h00] & rd_d[5'h00];
assign inst_tlbwr      = decoder_op_31_26[6'h01] & decoder_op_25_22[4'h9] & decoder_op_21_20[2'h0] & decoder_op_19_15[5'h10] & rk_d[5'h0c] & rj_d[5'h00] & rd_d[5'h00];
assign inst_tlbfill    = decoder_op_31_26[6'h01] & decoder_op_25_22[4'h9] & decoder_op_21_20[2'h0] & decoder_op_19_15[5'h10] & rk_d[5'h0d] & rj_d[5'h00] & rd_d[5'h00];
assign inst_invtlb     = decoder_op_31_26[6'h01] & decoder_op_25_22[4'h9] & decoder_op_21_20[2'h0] & decoder_op_19_15[5'h13];

assign inst_cacop      = decoder_op_31_26[6'h01] & decoder_op_25_22[4'h8];
assign inst_preld      = decoder_op_31_26[6'h0a] & decoder_op_25_22[4'hb];


// assign right_fire=right_ready & right_valid;//data submit finish
// if alu is sign compute 
assign is_sign=inst_mul | inst_mod_w | inst_mulh | inst_div;

//for next stage and difftest
assign inst_valid = left_valid & (inst_add | inst_pcaddu12i | inst_lu12i | inst_ori | inst_sub | inst_or | inst_jirl
                    | inst_xor | inst_addi | inst_addi | inst_st_w | inst_ld_w | inst_bl | inst_break | inst_b| inst_bge
                    | inst_st_b | inst_srai | inst_andi | inst_sll | inst_ld_bu | inst_slli | inst_srli | inst_and | inst_sltu
                    | inst_xori | inst_beq | inst_nor | inst_sltui | inst_bgeu | inst_blt | inst_mul | inst_bne | inst_mod_w
                    | inst_srl | inst_sra | inst_slti | inst_slt | inst_ld_hu | inst_ld_b | inst_ld_h | inst_mulh | inst_mulh_u | inst_st_h
                    | inst_div | inst_bltu | inst_div_wu | inst_mod_wu | inst_csrrd | inst_csrwr | inst_csrxchg | inst_syscall | inst_ertn
                    | inst_rdcntid | inst_rdcntvl | inst_rdcntvh | (inst_invtlb && (rd == 5'd0 | rd == 5'd1 | 
                                                                                    rd == 5'd2 | rd == 5'd3 | 
                                                                                    rd == 5'd4 | 
                                                                                    rd == 5'd5 | rd == 5'd6)) 
                    | inst_tlbwr | inst_tlbrd | inst_tlbfill | inst_tlbsrch | inst_preld | inst_cacop | inst_ll | inst_sc);

//output logic
assign id_csr_ctrl = csr_ctrl_temp;
assign ctrl_bus= bus_temp;
assign id_excp_bus = excp_bus_temp;
assign reg_index1=rj;
assign reg_index2=(is_rd)? rd:rk;
assign wreg_index=(is_r1)? 5'h1: (is_rj)? rj:rd;
assign wreg_en = left_valid & (inst_add | inst_pcaddu12i | inst_lu12i | inst_ori | inst_or | inst_sub | inst_jirl | inst_xor | inst_addi | inst_addi | inst_bl |
                 inst_ld_w | inst_srai | inst_andi | inst_sll | inst_ld_bu | inst_slli | inst_srli | inst_and | inst_sltu | inst_xori | inst_nor |
                 inst_sltui | inst_mul | inst_mod_w | inst_srl | inst_sra | inst_slti | inst_slt | inst_ld_hu | inst_ld_b | inst_ld_h | inst_mulh |
                 inst_mulh_u | inst_div | inst_div_wu | inst_mod_wu | inst_csrrd | inst_csrwr | inst_csrxchg | inst_rdcntid | inst_rdcntvl | inst_rdcntvh |
                 inst_ll | inst_sc);
assign Imm = ({32{Imm20_en}} & Imm20) |
             ({32{Imm12_en}} & Imm12) |
             ({32{Imm16_en}} & Imm16) |
             ({32{Imm26_en}} & Imm26) |
             ({32{Imm5_en}}  & Imm5 ) |
             ({32{Imm14_en}} & Imm14);
// for csr ,decoder contrl sign 
assign csr_we = inst_csrwr | inst_csrxchg;
assign csr_idx = inst_rdcntid? 14'h40:Inst[23:10];
assign csr_mask_en = inst_csrxchg;
assign csr_data = (inst_rdcntvh)? timer_in[63:32]:
                   (inst_rdcntvl)? timer_in[31:0]:
                   (inst_rdcntid) ? tid : rd_csr_data;
assign rd_csr_addr = csr_idx;
assign rd_from_csr = inst_csrrd | inst_csrwr | inst_csrxchg | inst_rdcntvl | inst_rdcntvh | inst_rdcntid;

// for excp 
assign is_kernel_inst = inst_csrrd | inst_csrwr | inst_csrxchg | inst_ertn | inst_invtlb | inst_tlbwr | inst_tlbrd | inst_tlbfill | inst_tlbsrch;
assign excp_ine = ~inst_valid & left_valid;// inst is invalid
assign excp_ipe = is_kernel_inst & (plv == 2'b11); // privilege level is falut
assign excp = excp_ine | excp_ipe | inst_syscall | inst_break | has_int | ib_excp_bus[0];
assign excp_num = {excp_ipe,excp_ine,inst_break,inst_syscall,ib_excp_bus[4:1],has_int};
// assign refetch = (inst_ertn) & left_valid;
// for stall 
assign is_mem_hazrd = ex_mem_hazard[6] && ex_mem_hazard[5] && (ex_mem_hazard[4:0] == reg_index1 || ex_mem_hazard[4:0] == reg_index2);

//op number decoder
// assign src1 = (select_src1[1])? PC:
//               (select_src1[0])? Imm:
//               reg_data1;
// assign src2 = (select_src2[1])? PC:
//               (select_src2[0])? Imm:
//               reg_data2;
assign src1 = reg_data1;
assign src2 = reg_data2;

wire valid_temp;
assign valid_temp = ((fire? 1'b0:valid) | logic_valid & right_ready) & !flush;
 

//shark hands
always @(posedge clk) begin
    if(reset == `RestEn || excp_flush || ertn_flush) begin
        valid <= `false; 
    end
    else begin 
        // if(fire)begin 
        //     valid <= `false;
        // end
        // if(logic_valid & right_ready) begin
        //     valid <= `true;
        // end
        valid <= valid_temp;
    end
end

// //shark hands
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
//         if(flush) begin
//             valid <= `false;
//         end
        
        
//     end
// end

//data block
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        bus_temp <= `ctrl_width'h0;
        csr_ctrl_temp <= `id_csr_ctrl_width'h0;
        excp_bus_temp <= `id_excp_width'h0;
    end
    // else if(flush == 1'b1) begin 
    //     bus_temp <= `ctrl_width'h0;
    // end
    else begin 
        if(logic_valid & right_ready) begin 
            bus_temp <= {
                    is_llbit,//286:286
                    inst_cacop,//285:285
                    tlb_op,//280:284
                    (inst_rdcntvl | inst_rdcntvh | inst_rdcntid),// 279:279
                    timer_in,// 215:278
                    mul_div_op,//211:214
                    is_break,//210:210
                    reg_index1,//205:209
                    reg_index2,//200:204
                    op_mem,//194:199
                    branch_op,//186:193
                    select_src1,//184:185
                    select_src2,//182:183
                    is_sign,//181:181
                    alu_op,//167:180
                    inst_valid,//166:166
                    PC,//134:165
                    Inst,//102:133
                    wreg_index,//97:101
                    wreg_en,//96:96
                    src2,// 64:95
                    src1,// 32:63
                    Imm// 0:31
                    };
            csr_ctrl_temp <= {
                csr_we,//49:49
                csr_idx,//48:34
                csr_mask_en,//33:33
                csr_data,//32:1
                rd_from_csr//0:0
            };
            excp_bus_temp <= {
                // ertn,//11:11
                inst_ertn,//10:10
                excp_num,//9:1
                excp//0:0
            };
        end
    end
end
// shark hands output logic
assign right_valid=valid;
assign left_ready = is_mem_hazrd| 
                    ((ex_is_tlbhazard | mem_is_tlbhazard | wb_is_tlbhazard) & rd_from_csr & (csr_idx == TLBIDX| 
                                                                                 csr_idx == TLBEHI|
                                                                                 csr_idx == TLBELO0|
                                                                                 csr_idx == TLBELO1))? 1'b0
                    :right_ready;
assign logic_valid = is_mem_hazrd | 
                    ((ex_is_tlbhazard | mem_is_tlbhazard | wb_is_tlbhazard) & rd_from_csr & (csr_idx == TLBIDX| 
                                                                                 csr_idx == TLBEHI|
                                                                                 csr_idx == TLBELO0|
                                                                                 csr_idx == TLBELO1))? 1'b0
                    :left_valid; // have mem hazrd or have tlb csr hazard

endmodule //ID
