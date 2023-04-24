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

wire [31:0]decoder_op_31_26;
wire [15:0]decoder_op_25_22;
wire [3:0]decoder_op_21_20;
wire [31:0]decoder_op_19_15;

wire [31:0] Imm12;
wire [31:0] Imm14;
wire [31:0] Imm20;
wire [31:0] Imm16;
wire [31:0] Imm26;
//select src form reg , Imm, PC
wire [1:0]select_src1;//select src1
wire [1:0]select_src2;//select src2

//inst is sign compute
wire is_sign;
wire is_sign_extend;

//inst valid
wire inst_valid;

wire inst_add;
wire inst_or;
wire inst_pcaddu12i;
wire inst_lu12i;

wire Imm20_en;
wire Imm12_en;

//aluop
assign alu_op[0] = inst_add | inst_pcaddu12i;
assign alu_op[1] = inst_lu12i;
//is signextend or zero extend
assign is_sign_extend = 1'b0;

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


assign Imm20_en = inst_pcaddu12i | inst_lu12i;
assign Imm12_en = 1'b0;


//decoder split inst
decoder_2_4 decoder_2_4(.in(op_21_20),.out(decoder_op_21_20));
decoder_4_16 decoder_4_16(.in(op_25_22),.out(decoder_op_25_22));
decoder_5_32 decoder_5_32_0(.in(op_31_26),.out(decoder_op_31_26));
decoder_5_32 decoder_5_32_1(.in(op_19_15),.out(decoder_op_19_15));

//produce select_src 2'b00 for reg, 2'b01 for Imm , 2'b10 for PC
assign select_src1[0] = inst_pcaddu12i | inst_lu12i;
assign select_src1[1] = 1'b0;
assign select_src2[0] = 1'b0;
assign select_src2[1] = inst_pcaddu12i;

//produce inst decoder result
assign inst_add = decoder_op_31_26[5'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h00];
assign inst_pcaddu12i = decoder_op_31_26[5'h07] & ~Inst[25];
assign inst_lu12i    = decoder_op_31_26[5'h05] & ~Inst[25];
// assign inst_or = op_31_26_d[5'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0a];

//next stage's data was consumed
assign right_fire=right_ready & right_valid;//data submit finish
// if alu is sign compute 
assign is_sign=1'b0;

//for next stage and difftest
assign inst_valid = inst_add | inst_pcaddu12i | inst_lu12i;

//output logic
assign ctrl_bus= bus_temp;
assign reg_index1=rj;
assign reg_index2=rk;
assign wreg_index=rd;
assign wreg_en = inst_add | inst_pcaddu12i | inst_lu12i;
assign Imm = ({32{Imm20_en}} & Imm20);


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
    else begin 
        if(left_valid & right_ready) begin 
            bus_temp <= {
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