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

wire [31:0]decoder_op_31_26;
wire [15:0]decoder_op_25_22;
wire [3:0]decoder_op_21_20;
wire [31:0]decoder_op_19_15;
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

//aluop
assign alu_op[0] = inst_add;
//is signextend or zero extend
assign is_sign_extend = 1'b0;

//split inst
assign op_31_26  = Inst[31:26];
assign op_25_22  = Inst[25:22];
assign op_21_20  = Inst[21:20];
assign op_19_15  = Inst[19:15];

assign rd   = Inst[ 4: 0];
assign rj   = Inst[ 9: 5];
assign rk   = Inst[14:10];

//decoder split inst
decoder_2_4 decoder_2_4(.in(op_21_20),.out(decoder_op_21_20));
decoder_4_16 decoder_4_16(.in(op_25_22),.out(decoder_op_25_22));
decoder_5_32 decoder_5_32_0(.in(op_31_26),.out(decoder_op_31_26));
decoder_5_32 decoder_5_32_1(.in(op_19_15),.out(decoder_op_19_15));

//produce select_src 2'b00 for reg, 2'b01 for Imm , 2'b10 for PC
assign select_src1[0] = ~inst_add;
assign select_src1[1] = ~inst_add;
assign select_src2[0] = ~inst_add;
assign select_src2[1] = ~inst_add;

//produce inst decoder result
assign inst_add = decoder_op_31_26[5'h00] & decoder_op_25_22[4'h0] & decoder_op_21_20[2'h1] & decoder_op_19_15[5'h00];
// assign inst_or = ;

//next stage's data was consumed
assign right_fire=right_ready & right_valid;//data submit finish
// if alu is sign compute 
assign is_sign=1'b0;

//for next stage and difftest
assign inst_valid = inst_add;

//output logic
assign ctrl_bus= bus_temp;
assign reg_index1=rj;
assign reg_index2=rk;
assign wreg_index=rd;
assign wreg_en = inst_add;

//op number decoder
assign src1 = (select_src1[1])? PC:
              (select_src1[0])? Imm:
              reg_data1;
assign src2 = (select_src2[1])? PC:
              (select_src2[0])? Imm:
              reg_data2;

//shark hands
always @(posedge clk) begin
    if(reset == `RestEn) begin
        valid <= `false; 
    end
    else begin 
        if(left_valid & right_ready) begin
            valid <= `true;
        end
        else begin 
            valid <= `false;
        end
        if(~right_fire)begin 
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