`include "defines.sv"
module Regfile (
    input wire clk,// clock
    input wire reset,
    input wire [4:0]reg_index1,//reg addr1
    input wire [4:0]reg_index2,//reg addr2
    output wire [31:0]data1,//data out
    output wire [31:0]data2,//data out
    input wire wreg_en,//write enable
    input wire [31:0]wdata,//write data
    input wire [4:0]wreg_index//write addr
);
reg [31:0]rf[31:0];
always @(posedge clk) begin
    if(wreg_en) rf[wreg_index] <= wdata;
end

assign data1 = (reg_index1 == 5'b00000 )? 32'h0:
               ((reg_index1 == wreg_index) & wreg_en)? wdata:rf[reg_index1]; 
assign data2 = (reg_index2 == 5'b00000 )? 32'h0:
               ((reg_index2 == wreg_index) & wreg_en)? wdata:rf[reg_index2]; 

endmodule //Regfile