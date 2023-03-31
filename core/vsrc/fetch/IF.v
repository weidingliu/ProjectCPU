#`include "defines.v"
/*
* inst addr for ID,handle branch and jump 
*
*/
module IF (
    input clk,
    input reset,
    output [31:0] wire PC //inst addr
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