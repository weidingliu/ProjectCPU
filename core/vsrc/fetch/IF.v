`include "defines.sv"
/*
* inst addr for ID,handle branch and jump 
*
*/
module IF (
    input clk,
    input reset,
    output wire[31:0] PC, //inst addr
    input wire [31:0]Inst,//inst
    output wire [63:0]data_bus,
    //shark hand
    output wire pc_valid,//IF stage's data is ready
    input wire inst_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready//EXE stage is allowin

);

reg [31:0]temp;
reg valid;
reg [63:0]bus_temp;
wire right_fire;
assign right_fire=right_ready & right_valid;//data submit finish

always @(posedge clk) begin
  if(reset == `RestEn)begin 
      temp <=32'h0;
  end
  else begin 
      if(right_fire) temp<=temp+32'h4;
  end
end

assign PC=temp;

//shark hands
always @(posedge clk) begin 
    if(reset == `RestEn) begin 
      valid <= `false;
    end
    else begin 
        if(inst_ready & right_ready)begin 
             valid <= `true;
             bus_temp <= {
                PC,//63:32
                Inst//31:0
             };
        end
        else if(~right_fire)begin 
            valid <= `false;
        end
    end
end
assign right_valid=valid;
assign pc_valid=right_ready;
assign data_bus=bus_temp;

endmodule