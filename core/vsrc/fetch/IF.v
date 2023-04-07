#`include "defines.v"
/*
* inst addr for ID,handle branch and jump 
*
*/
module IF (
    input clk,
    input reset,
    output [31:0] wire PC, //inst addr
    //shark hand
    input wire pc_valid,//IF stage's data is ready
    output wire inst_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready//EXE stage is allowin

);

reg [31:0]temp;
always @(posedge clk) begin
  if(reset == `RestEn)begin 
      temp <=32'h0;
  end
  else begin 
      temp<=temp+32'h4;
  end
end
assign PC=temp;



endmodule