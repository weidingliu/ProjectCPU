`include "defines.sv"
module EXE (
    input wire clk,//clock
    input wire reset,//global reset
    input wire [`ctrl_width-1:0]id_ctrl_bus, //ctrl flower

    output wire [`ex_ctrl_width-1:0] ex_ctrl_bus,
    //bypass
    output wire [`bypass_width-1:0]ex_bypass,

    input wire [`bypass_width-1:0]mem_bypass,
    
    //branch
    output wire is_branch,
    output wire flush,
    output wire [31:0]dnpc,

    //shark hand
    input wire left_valid,//ID stage's data is ready
    output wire left_ready,//EX stage is allowin
    output wire right_valid,//EX stage's data is ready
    input wire right_ready,//MEM stage is allowin
    output wire is_fire,
    input wire fire
);
// wire right_fire;

reg valid;
reg [`ex_ctrl_width-1:0] ctrl_temp_bus;//exe ctrl bus
wire [31:0]alu_result;

wire [3:0] mul_div_op;
wire [31:0] src1;
wire [31:0] src2;
wire is_sign;
wire [13:0]alu_op;
wire [31:0]Imm;//bus [0:31]
wire [31:0]reg1;//bus [32:63]
wire [31:0]reg2;//bus [64:95]
wire inst_valid;
wire [31:0]PC;
wire wreg_en;
wire [4:0]wreg_index;
wire [31:0]Inst;
wire [1:0]select_src1;
wire [1:0]select_src2;
wire [7:0]branch_op;
wire [31:0] write_data;
wire [5:0] op_mem;
wire [4:0] reg_index1;
wire [4:0] reg_index2;
wire is_break;

wire [31:0]mem_reg;
wire bypass_en1;
wire bypass_en2;
wire [31:0] bypass_reg1;
wire [31:0] bypass_reg2;
// wire [64:0]mul_result;
// wire [31:0]mod_result;
wire [31:0]mul_div_result;
wire is_mul_div;
// wire [31:0]div_result;
wire is_mul;
wire is_div;
wire [31:0] mul_hi;
wire [31:0]mul_lo;
wire mul_valid;
wire logic_valid;
wire div_valid;
wire [31:0]quotient;
wire [31:0]remainder;


wire branch_flag;
//mem_bypass 
assign bypass_en1 = (mem_bypass[0] == 1'b1) & (mem_bypass[5:1] == reg_index1) & (mem_bypass[5:1] != 5'h0); 
assign bypass_en2 = (mem_bypass[0] == 1'b1) & (mem_bypass[5:1] == reg_index2) & (mem_bypass[5:1] != 5'h0); 
assign bypass_reg1 = bypass_en1 ? mem_bypass[37:6]:reg1;
assign bypass_reg2 = bypass_en2 ? mem_bypass[37:6]:reg2;
//bus
assign {
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
    reg2,// 64:95
    reg1,// 32:63
    Imm// 0:31
}=id_ctrl_bus;

assign src1 = (select_src1[1])? PC:
              (select_src1[0])? Imm:
              bypass_reg1;
assign src2 = (select_src2[1])? PC:
              (select_src2[0])? Imm:
              bypass_reg2;
// always @(*) begin 
//     $display("%h   %h   %h",PC,src1,src2);
// end
//branch
assign branch_flag = left_valid & inst_valid & (
    branch_op[0] | branch_op[1] | 
    (branch_op[2] & ($signed(bypass_reg1) >= $signed(bypass_reg2))) |
    (branch_op[3] & (bypass_reg1 == bypass_reg2)) |
    (branch_op[4] & (bypass_reg1 >= bypass_reg2)) |
    (branch_op[5] & ($signed(bypass_reg1) < $signed(bypass_reg2))) | 
    (branch_op[6] & (bypass_reg1 != bypass_reg2)) |
    (branch_op[7] & (bypass_reg1 < bypass_reg2))
    );
//alu 
alu alu(
    .alu_op(alu_op),
    .alu_src1(src1),
    .alu_src2(src2),
    .alu_result(alu_result)
);

//mul and div 
assign is_mul_div = mul_div_op[0] | mul_div_op[1] | mul_div_op[2] | mul_div_op[3];

// assign mul_result = ({64{is_sign}} & ($signed(src1)*$signed(src2))) | 
//                     ({64{~is_sign}} & (src1*src2));
// assign mod_result = ({32{is_sign}} & ($signed(src1) % $signed(src2)) |
//                     ({32{~is_sign}} & (src1 % src2))
//                     );
// assign div_result = (
//     ({32{is_sign}} & ($signed(src1) / $signed(src2))) | 
//     ({32{~is_sign}} & (src1 / src2))
// );

assign mul_div_result = ({32{mul_div_op[0]}} & mul_lo)|
                        ({32{mul_div_op[1]}} & remainder)|
                        ({32{mul_div_op[2]}} & mul_hi)|
                        ({32{mul_div_op[3]}} & quotient); 
assign is_mul = mul_div_op[0] | mul_div_op[1] | mul_div_op[2];
assign is_div = mul_div_op[3];
// booth multiplier
Booth_MUL MUL(
    .clock(clk),
    .reset(reset),
    .io_in_ready(),
    .io_in_valid(is_mul),
    .io_in_bits_ctrl_flow_flush(1'b0),
    .io_in_bits_ctrl_flow_mulw(1'b0),
    .io_in_bits_ctrl_flow_mul_sign({~is_sign,~is_sign}),
    .io_in_bits_ctrl_data_src1(src1),
    .io_in_bits_ctrl_data_src2(src2),
    .io_out_ready(1'b1),
    .io_out_valid(mul_valid),//is mul end
    .io_out_bits_result_result_hi(mul_hi),//hight 32-bit
    .io_out_bits_result_result_lo(mul_lo)// low 32-bit
);
DIV DIV(
    .clock(clk),
    .reset(reset),
    .io_in_ready(),
    .io_in_valid(is_div),
    .io_in_bits_ctrl_flow_divw(),
    .io_in_bits_ctrl_flow_div_signed(is_sign),
    .io_in_bits_ctrl_flow_flush(1'b0),
    .io_in_bits_ctrl_data_src1(src1),
    .io_in_bits_ctrl_data_src2(src2),
    .io_out_ready(1'b1),
    .io_out_valid(div_valid),
    .io_out_bits_result_quotient(quotient),
    .io_out_bits_result_remainder(remainder)
);



//shark hands
always @(posedge clk) begin
    if(reset == `RestEn) begin
        valid <= `false; 
    end
    else begin 
        if(fire)begin 
            valid <= `false;
        end
        if(logic_valid & right_ready) begin
            valid <= `true;
        end
    end
end

//data block
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        ctrl_temp_bus <= `ex_ctrl_width'h0;
    end
    else begin 
        if(logic_valid & right_ready) begin 
            ctrl_temp_bus <= {
                    is_break,//219:219
                    op_mem,//213:218
                    alu_op,//199:212
                    (left_valid & inst_valid),//198:198
                    Imm,//166:197
                    PC,//134:165
                    Inst,//102:133
                    wreg_index,//97:101
                    wreg_en,//96:96
                    bypass_reg2,// 64:95
                    bypass_reg1,// 32:63
                    write_data// 0:31
                    };
        end
    end
end
// output logic
assign right_valid=valid;
assign logic_valid = !left_valid | (left_valid & (!mul_valid && is_mul || !div_valid && is_div))? 1'b0:1'b1;
assign left_ready= (!mul_valid && is_mul || !div_valid && is_div )? 1'b0:right_ready;
assign ex_ctrl_bus=ctrl_temp_bus;
assign ex_bypass = {alu_result,wreg_index,wreg_en & left_valid};

assign is_branch = (branch_flag);
assign flush = branch_flag;
assign dnpc = alu_result;

assign write_data = (branch_op[0] | branch_op[1]) ? PC+32'h4 : (is_mul_div) ? mul_div_result:alu_result;

assign is_fire = logic_valid & right_ready;

// assign right_fire=right_ready & right_valid;//data submit finish
// always @(*) begin
//     $display("666-----%h %h %h %h--%h %h\n",flush,dnpc,PC,inst_valid,src1,src2);
// end

endmodule //EXE