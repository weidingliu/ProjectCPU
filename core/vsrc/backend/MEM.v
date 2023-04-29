`include "defines.sv"
module MEM (
    input wire clk,//clock
    input wire reset,//global reset
    //ctrl bus
    input wire [`ex_ctrl_width-1:0] mem_ctrl_bus,
    output wire [`mem_ctrl_width-1:0] wb_ctrl_bus,
    //mem interface
    output wire [31:0]addr,//read/write address
    output wire en,//mem enable
    output wire [3:0]wmask,
    input wire [31:0]rdata,
    output wire [31:0]wdata,
    output wire we,//read/write enable
    //bypass
    output wire [`bypass_width-1:0]mem_bypass,
    //shark hand
    input wire left_valid,//IF stage's data is ready
    output wire left_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready//EXE stage is allowin
);
//shark hands
wire right_fire;
reg valid;
//bus REG
reg [`mem_ctrl_width-1:0] bus_temp;//
//decompone bus
wire [31:0]mem_result;
wire [13:0]alu_op;
wire inst_valid;
wire [31:0]Imm;
wire [31:0]PC;
wire [31:0]Inst;
wire [4:0]wreg_index;
wire wreg_en;
wire [31:0]src1;
wire [31:0]src2;
wire [31:0]alu_result;
wire [5:0] op_mem;
wire is_break;

assign {
    is_break,//219:219
    op_mem,//213:218
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
}=mem_ctrl_bus;

/*
*    op_mem[0] is mem inst
*    op_mem[1] is usignal extend
*    op_mem[2] 1'b0 is load ,1'b1 is store
*    op_mem[3] is word mem inst 
*    op_mem[4] is half mem inst
*    op_mem[5] is byte mem inst
*/
assign en = op_mem[0] & inst_valid;
assign we = op_mem[2];
assign addr = alu_result;
assign wdata = src2;
assign wmask = 4'hf;
// always @(*) begin
//     $display("%h-------%h-\n",addr,en);
// end
//mux mem result
assign mem_result=(op_mem[0] & !op_mem[2])? rdata:alu_result;

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
        bus_temp <= `mem_ctrl_width'h0;
    end
    else begin 
        if(left_valid & right_ready) begin 
            bus_temp <= {
                    is_break,//103:103
                    inst_valid,//102:102
                    wreg_index,//97:101
                    wreg_en,//96:96
                    Inst,// 64:95
                    PC,// 32:63
                    mem_result// 0:31
                    };
        end
    end
end
// output logic
assign right_valid=valid;
assign left_ready=right_ready;
assign wb_ctrl_bus=bus_temp;
assign mem_bypass = {mem_result,wreg_index,wreg_en};

endmodule //MEM