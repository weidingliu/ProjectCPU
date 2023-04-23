`include "defines.sv"
module EXE (
    input wire clk,//clock
    input wire reset,//global reset
    input wire [`ctrl_width-1:0]id_ctrl_bus, //ctrl flower

    output wire [`ex_ctrl_width-1:0] ex_ctrl_bus,
    //shark hand
    input wire left_valid,//ID stage's data is ready
    output wire left_ready,//EX stage is allowin
    output wire right_valid,//EX stage's data is ready
    input wire right_ready//MEM stage is allowin
);
wire right_fire;
reg valid;
reg [`ex_ctrl_width-1:0] ctrl_temp_bus;//exe ctrl bus

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

assign {
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
              reg1;
assign src2 = (select_src2[1])? PC:
              (select_src2[0])? Imm:
              reg2;


wire [31:0]alu_result;

alu alu(
    .alu_op(alu_op),
    .alu_src1(src1),
    .alu_src2(src2),
    .alu_result(alu_result)
);


assign right_fire=right_ready & right_valid;//data submit finish
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
        ctrl_temp_bus <= `ex_ctrl_width'h0;
    end
    else begin 
        if(left_valid & right_ready) begin 
            ctrl_temp_bus <= {
                    alu_op,//199:212
                    inst_valid,//198:198
                    Imm,//166:197
                    PC,//134:165
                    Inst,//102:133
                    wreg_index,//97:101
                    wreg_en,//96:96
                    src2,// 64:95
                    src1,// 32:63
                    alu_result// 0:31
                    };
        end
    end
end
// output logic
assign right_valid=valid;
assign left_ready=right_ready;
assign ex_ctrl_bus=ctrl_temp_bus;
endmodule //EXE