module alu (
    input wire [13:0]alu_op,
    input wire [31:0] alu_src1,
    input wire [31:0] alu_src2,
    output wire [31:0] alu_result
);
wire op_add;

// control code decomposition
assign op_add = alu_op[0];
assign op_imm = alu_op[1];

wire [31:0] add_result;
//adder 
wire [31:0]adder_a;
wire [31:0]adder_b;
wire adder_cin;
wire [31:0]adder_result;
wire adder_cout;

assign adder_a = alu_src1;
assign adder_b = alu_src2;

assign {adder_cout,adder_result} = adder_a + adder_b + adder_cin;

assign alu_result = ({32{op_add}} & adder_result) | 
                    ({32{op_imm}} & alu_src1);

endmodule //alu