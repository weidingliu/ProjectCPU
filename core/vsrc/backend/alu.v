module alu (
    input wire [13:0]alu_op,
    input wire [31:0] alu_src1,
    input wire [31:0] alu_src2,
    output wire [31:0] alu_result
);
wire op_add;
wire op_imm;
wire op_or;
wire op_sub;
wire op_xor;
wire op_sra;
wire op_and;
wire op_sll;
wire op_srl;

wire [31:0]or_result;
wire [31:0]adder_result;
wire [31:0]xor_result;
wire [31:0]sra_result;
wire [31:0]and_result;
wire [31:0]sll_result;
wire [31:0]srl_result;

//adder 
wire [31:0]adder_a;
wire [31:0]adder_b;
wire adder_cin;
wire adder_cout;

// control code decomposition
assign op_add = alu_op[0];
assign op_imm = alu_op[1];
assign op_or = alu_op[2];
assign op_sub = alu_op[3];
assign op_xor = alu_op[4];
assign op_sra = alu_op[5];
assign op_and = alu_op[6];
assign op_sll = alu_op[7];
assign op_srl = alu_op[8];

assign adder_a = alu_src1;
assign adder_b = alu_op[3] ? ~alu_src2:alu_src2;
assign adder_cin = alu_op[3] ? 1'b1:1'b0;

assign {adder_cout,adder_result} = adder_a + adder_b + adder_cin;
assign or_result = adder_a | adder_b;
assign xor_result = adder_a ^ adder_b;
assign sra_result = adder_a >>> adder_b;
assign and_result = adder_a & adder_b;
assign sll_result = adder_a << adder_b[4:0];
assign srl_result = adder_a >> adder_b[4:0];

assign alu_result = ({32{op_add | op_sub}} & adder_result) | 
                    ({32{op_imm}} & alu_src1) |
                    ({32{op_or}} & or_result) |
                    ({32{op_xor}} & xor_result) |
                    ({32{op_sra}} & sra_result) |
                    ({32{op_and}} & and_result) |
                    ({32{op_sll}} & sll_result) |
                    ({32{op_srl}} & srl_result);

endmodule //alu