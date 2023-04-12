`include "defines.sv"
module MEM (
    input wire clk,//clock
    input wire reset,//global reset
    //ctrl bus
    input wire [`ex_ctrl_width-1:0] mem_ctrl_bus,
    output wire [`mem_ctrl_width-1:0] wb_ctrl_bus,
    //mem interface
    output wire [31:0]addr,//read/write address
    output wire en,//read/write enable
    output wire [3:0]wmask,
    input wire [31:0]rdata,
    output wire [31:0]wdata,
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

assign {alu_op,//199:212
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

//mux mem result
assign mem_result=alu_result;

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

endmodule //MEM