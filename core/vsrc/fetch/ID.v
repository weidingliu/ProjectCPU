
module ID (
    input wire clk,//clock
    input wire reset,//global reset
    input wire[31:0] Inst//inst from inst ram
    input wire[31:0] PC,//inst addr
    //for regfile
    output wire wreg_en,//write REG en
    output wire [4:0]reg_index1,//read REG index1
    output wire [4:0]reg_index2,//read REG index2
    output wire [4:0]wreg_index,//write REG index
    //ctrl flower
    output wire [31:0]Imm,
    output wire [31:0]src1,
    output wire [31:0]src2,
    //shark hand
    input wire left_valid,//IF stage's data is ready
    output wire left_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready//EXE stage is allowin
    // output [7:0] InstOP,
    // output [3:0] InstType,
    // output [2:0] ALUop
);
    wire [:] ;




endmodule //ID