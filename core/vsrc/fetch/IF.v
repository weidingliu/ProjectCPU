`include "defines.sv"
/*
* inst addr for ID,handle branch and jump 
*
*/
module IF (
    input clk,
    input reset,
    //excp
    input wire excp_flush,
    input wire ertn_flush,
    input wire [31:0]eentry,
    input wire [31:0]era,
    output wire[31:0] PC, //inst addr
    // input wire [31:0]Inst,//inst
    // output wire [63:0]data_bus,


    //branch
    input wire is_branch,
    input wire flush,
    input wire [31:0]dnpc,
    //shark hand
    output wire pc_valid,//IF stage's data is ready
    input wire addr_trans_ready

    // input wire inst_ready,//ID stage is allowin
    // output wire right_valid,//ID stage's data is ready
    // input wire right_ready,//EXE stage is allowin
    // input wire fire

);

reg [31:0]temp;
reg valid;
reg [63:0]bus_temp;
// wire right_fire;
// assign right_fire=right_ready & right_valid;//data submit finish

always @(posedge clk) begin
  if(reset == `RestEn)begin 
      temp <=32'h1C000000;
  end
  else if(excp_flush) begin 
    temp <= eentry;
  end
  else if(ertn_flush) begin 
    temp <= era;
  end
  else if(is_branch == 1'b1) begin 
      temp <= dnpc;
  end
  else begin 
      if(addr_trans_ready) temp<=temp+32'h4;
  end
end

assign PC=temp;
// always @(*) begin
//     $display("%h---%h-- %h---%h\n",temp,is_branch,flush,dnpc);
// end

//shark hands
// always @(posedge clk) begin 
//     if(reset == `RestEn | excp_flush | ertn_flush) begin 
//       valid <= `false;
//     end
//     else if(flush) begin 
//         valid <= `false;
//         bus_temp <= 64'h0;
//     end 
//     else begin 
//         if(fire)begin 
//             valid <= `false;
//         end
//         if(inst_ready & right_ready)begin 
//              valid <= `true;
//              bus_temp <= {
//                 PC,//63:32
//                 Inst//31:0
//              };
//         end
//         if(flush) valid <= `false;
//     end
// end
// assign right_valid=valid;
// assign pc_valid=right_ready;
// assign data_bus=bus_temp;

endmodule