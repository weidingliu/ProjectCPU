
module Top (
    input wire clk,
    input wire reset,
    
    //inst interface
    input wire [31:0]inst,
    output wire [31:0]PC,
    //data interface
    input wire [31:0]rdata,
    output wire [31:0]addr,
    output wire [31:0]wdata,
    output wire [3:0]wmask,
    output wire en
);

//IF stage
IF if_stage(
    .clk(clk),
    .reset(reset),
    .PC(PC), //inst addr
    .Inst(inst),//inst
    output wire [63:0]data_bus,
    //shark hand
    output wire pc_valid,//IF stage's data is ready
    input wire inst_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready//EXE stage is allowin
);

ID id_stage();

EXE exe_stage();

MEM mem_stage();

WB wb_syage();

Regfile Regfile();
    
endmodule

