module MEM (
    input wire clk,//clock
    input wire reset,//global reset

    //shark hand
    input wire left_valid,//IF stage's data is ready
    output wire left_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready//EXE stage is allowin
);




endmodule //MEM