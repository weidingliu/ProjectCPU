module EXE (
    input wire clk,//clock
    input wire reset,//global reset
    input wire [`ctrl_width-1:0]id_ctrl_bus, //ctrl flower
    //shark hand
    input wire left_valid,//IF stage's data is ready
    output wire left_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready//EXE stage is allowin
);
wire 


endmodule //EXE