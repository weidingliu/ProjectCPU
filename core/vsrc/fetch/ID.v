`include "defines.sv"
module ID (
    input wire clk,//clock
    input wire reset,//global reset
    input wire[31:0] Inst//inst from inst ram
    input wire[31:0] PC,//inst addr
    //for regfile
    output wire [4:0]reg_index1,//read REG index1
    output wire [4:0]reg_index2,//read REG index2
    input wire [31:0]reg_data1,
    input wire [31:0]reg_data2,
    //ctrl flower
    output wire [`ctrl_width-1:0]ctrl_bus,//ctrl bus

    //shark hand
    input wire left_valid,//IF stage's data is ready
    output wire left_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready//EXE stage is allowin
    // output [7:0] InstOP,
    // output [3:0] InstType,
    // output [2:0] ALUop
);

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
wire [ 4:0] rj;
wire [ 4:0] rk;

wire [31:0]decoder_op_31_26;
wire [15:0]decoder_op_25_22;
wire [3:0]decoder_op_21_20;
wire [31:0]decoder_op_19_15;


wire inst_add;
wire inst_or;
//split inst
assign op_31_26  = Inst[31:26];
assign op_25_22  = Inst[25:22];
assign op_21_20  = Inst[21:20];
assign op_19_15  = Inst[19:15];

assign rd   = Inst[ 4: 0];
assign rj   = Inst[ 9: 5];
assign rk   = Inst[14:10];
//decoder split inst
decoder_2_4(.in(op_21_20),.out(decoder_op_21_20));
decoder_4_16(.in(op_25_22),.out(decoder_op_25_22));
decoder_5_32(.in(op_31_26),.out(decoder_op_31_26));
decoder_5_32(.in(op_19_15),.out(decoder_op_19_15));

//produce inst decoder result
assign inst_add = ;
assign inst_or = ;




//sequential 
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        bus_temp <= `ctrl_width'h0;
    end
    else begin 
        bus_temp <= {
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

//output logic
assign ctrl_bus= bus_temp;
assign reg_index1=rj;
assign reg_index2=rk;
assign wreg_index=rd;
//op number decoder
assign src1 = reg_data1;
assign src2 = reg_data2;

endmodule //ID