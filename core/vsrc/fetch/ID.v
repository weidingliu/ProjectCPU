`include "defines.sv"
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

    //ctrl flower
    output wire [`ctrl_width-1:0]ctrl_bus,//ctrl bus
    //shark hand
    // input wire right_fire,//right data consumed
    input wire left_valid,//IF stage's data is ready
    output wire left_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready//EXE stage is allowin
);

wire right_fire;
reg valid;

wire [13:0] alu_op;//alu opcode
wire [7:0] branch_op;

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
wire [11:0] i12;
wire [13:0] i14;
wire [19:0] i20;
wire [15:0] i16;
wire [25:0] i26;

wire [63:0]decoder_op_31_26;
wire [15:0]decoder_op_25_22;
wire [3:0]decoder_op_21_20;
wire [31:0]decoder_op_19_15;

wire [31:0] Imm12;
wire [31:0] Imm14;
wire [31:0] Imm20;
wire [31:0] Imm16;
wire [31:0] Imm26;

wire Imm20_en;
wire Imm12_en;
wire Imm16_en;
wire Imm26_en;
//select src form reg , Imm, PC
wire [1:0]select_src1;//select src1
wire [1:0]select_src2;//select src2

//inst is sign compute
wire is_sign;
wire is_sign_extend;
/**
*    op_mem[0] is mem inst
*    op_mem[1] is usignal extend
*    op_mem[2] 1'b0 is load ,1'b1 is store
*    op_mem[3] is word mem inst 
*    op_mem[4] is half mem inst
*    op_mem[5] is byte mem inst
*/
wire [5:0]op_mem;
//select rd as source reg (only for memory inst)
wire is_rd;
//select r1 as dest
wire is_r1;

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

//op_mem
assign op_mem[0] = inst_st_w | inst_ld_w;
assign op_mem[1] = 1'b0;
assign op_mem[2] = inst_st_w;
assign op_mem[3] = inst_st_w | inst_ld_w;
assign op_mem[4] = 1'b0;
assign op_mem[5] = 1'b0;

//select rd as second source reg
assign is_rd = inst_st_w;
assign is_r1 = inst_bl;

//aluop
assign alu_op[0] = inst_add | inst_pcaddu12i | inst_jirl | inst_addi | inst_st_w | inst_ld_w | inst_bl;
assign alu_op[1] = inst_lu12i;
assign alu_op[2] = inst_ori | inst_or;
assign alu_op[3] = inst_sub;
assign alu_op[4] = inst_xor;

//branch_op
assign branch_op[0] = inst_jirl;
assign branch_op[1] = inst_bl;


//is signextend or zero extend
assign is_sign_extend = inst_jirl | inst_addi | inst_st_w | inst_ld_w;

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

//extend Imm
assign Imm20 = ({i20,12'h0});
assign Imm12 = ({20'h0,i12} & {32{~is_sign_extend}})|
                ({{20{i12[11]}},i12} & {32{is_sign_extend}});
assign Imm16 = ({{14{i16[15]}},i16,2'b00} & {32{is_sign_extend}});
assign Imm26 = ({{4{i26[25]}},i26,2'b00});


assign Imm20_en = inst_pcaddu12i | inst_lu12i;
assign Imm12_en = inst_ori | inst_addi | inst_st_w | inst_ld_w;
assign Imm16_en = inst_jirl;
assign Imm26_en = inst_bl;



//decoder split inst
decoder_2_4 decoder_2_4(.in(op_21_20),.out(decoder_op_21_20));
decoder_4_16 decoder_4_16(.in(op_25_22),.out(decoder_op_25_22));
decoder_6_64 decoder_6_64_0(.in(op_31_26),.out(decoder_op_31_26));
decoder_5_32 decoder_5_32_1(.in(op_19_15),.out(decoder_op_19_15));

//produce select_src 2'b00 for reg, 2'b01 for Imm , 2'b10 for PC
assign select_src1[0] = inst_pcaddu12i | inst_lu12i;
assign select_src1[1] = inst_bl;

assign select_src2[0] = inst_ori | inst_jirl | inst_addi | inst_st_w | inst_ld_w | inst_bl; 
assign select_src2[1] = inst_pcaddu12i;

//produce inst decoder result
assign inst_add       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h00];
assign inst_sub       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h02];
assign inst_pcaddu12i = decoder_op_31_26[6'h07] & ~Inst[25];
assign inst_lu12i     = decoder_op_31_26[6'h05] & ~Inst[25];
assign inst_ori       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'he];
assign inst_jirl      = decoder_op_31_26[6'h13];
assign inst_or        = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h0a];
// assign inst_break     = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h2] & decoder_op_19_15[5'h14];
// assign inst_slt        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h04];
// assign inst_sltu       = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h05];
// assign inst_nor        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h08];
// assign inst_and        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h09];
assign inst_xor        = decoder_op_31_26[6'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h0b];
// assign inst_orn        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0c];
// assign inst_andn       = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0d];
// assign inst_sll_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0e];
// assign inst_srl_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0f];
// assign inst_sra_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h10];
// assign inst_mul_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h18];
// assign inst_mulh_w     = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h19];
// assign inst_mulh_wu    = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h1a];
// assign inst_div_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h00];
// assign inst_mod_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h01];
// assign inst_div_wu     = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h02];
// assign inst_mod_wu     = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h03];
// assign inst_slli_w     = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h01];
// assign inst_srli_w     = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h09];
// assign inst_srai_w     = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h11];
// assign inst_slti       = op_31_26_d[6'h00] & op_25_22_d[4'h8];
// assign inst_sltui      = op_31_26_d[6'h00] & op_25_22_d[4'h9];
assign inst_addi       = decoder_op_31_26[6'h00] & decoder_op_25_22[4'ha];
// assign inst_andi       = op_31_26_d[6'h00] & op_25_22_d[4'hd];
// assign inst_xori       = op_31_26_d[6'h00] & op_25_22_d[4'hf];
// assign inst_ld_b       = op_31_26_d[6'h0a] & op_25_22_d[4'h0];
// assign inst_ld_h       = op_31_26_d[6'h0a] & op_25_22_d[4'h1];
assign inst_ld_w       = decoder_op_31_26[6'h0a] & decoder_op_25_22[4'h2];
// assign inst_st_b       = op_31_26_d[6'h0a] & op_25_22_d[4'h4];
// assign inst_st_h       = op_31_26_d[6'h0a] & op_25_22_d[4'h5];
assign inst_st_w       = decoder_op_31_26[6'h0a] & decoder_op_25_22[4'h6];
// assign inst_ld_bu      = op_31_26_d[6'h0a] & op_25_22_d[4'h8];
// assign inst_ld_hu      = op_31_26_d[6'h0a] & op_25_22_d[4'h9];
// assign inst_b          = op_31_26_d[6'h14];
assign inst_bl         = decoder_op_31_26[6'h15];
// assign inst_beq        = op_31_26_d[6'h16];
// assign inst_bne        = op_31_26_d[6'h17];
// assign inst_blt        = op_31_26_d[6'h18];
// assign inst_bge        = op_31_26_d[6'h19];
// assign inst_bltu       = op_31_26_d[6'h1a];
// assign inst_bgeu       = op_31_26_d[6'h1b];
// assign inst_ll_w       = op_31_26_d[6'h08] & ~ds_inst[25] & ~ds_inst[24];
// assign inst_sc_w       = op_31_26_d[6'h08] & ~ds_inst[25] &  ds_inst[24];

//next stage's data was consumed
assign right_fire=right_ready & right_valid;//data submit finish
// if alu is sign compute 
assign is_sign=1'b0;

//for next stage and difftest
assign inst_valid = inst_add | inst_pcaddu12i | inst_lu12i | inst_ori | inst_sub | inst_or | inst_jirl
                    | inst_xor | inst_addi | inst_addi | inst_st_w | inst_ld_w | inst_bl ;

//output logic
assign ctrl_bus= bus_temp;
assign reg_index1=rj;
assign reg_index2=(is_rd)? rd:rk;
assign wreg_index=(is_r1)? 5'h1:rd;
assign wreg_en = (inst_add | inst_pcaddu12i | inst_lu12i | inst_ori | inst_or | inst_sub | inst_jirl | inst_xor | inst_addi | inst_addi | inst_bl |
                 inst_ld_w);
assign Imm = ({32{Imm20_en}} & Imm20) |
             ({32{Imm12_en}} & Imm12) |
             ({32{Imm16_en}} & Imm16) |
             ({32{Imm26_en}} & Imm26);


//op number decoder
// assign src1 = (select_src1[1])? PC:
//               (select_src1[0])? Imm:
//               reg_data1;
// assign src2 = (select_src2[1])? PC:
//               (select_src2[0])? Imm:
//               reg_data2;
assign src1 = reg_data1;
assign src2 = reg_data2;

//shark hands
always @(posedge clk) begin
    if(reset == `RestEn) begin
        valid <= `false; 
    end
    else begin 
        if(left_valid & right_ready) begin
            valid <= `true;
        end
        else if(~right_fire)begin 
            valid <= `false;
        end
        else begin 
            valid <= `false;
        end
        
        
    end
end

//data block
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        bus_temp <= `ctrl_width'h0;
    end
    else if(flush == 1'b1) begin 
        bus_temp <= `ctrl_width'h0;
    end
    else begin 
        if(left_valid & right_ready) begin 
            bus_temp <= {
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
        end
    end
end
// shark hands output logic
assign right_valid=valid;
assign left_ready=right_ready;

endmodule //ID