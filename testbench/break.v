
module break_ (
    input wire clk,
    input wire reset,
    input wire is_break
);
reg reg1;
// reg reg2;
// reg reg3;
// reg reg4;

// always @(posedge clk) begin
//     if(reset) begin 
//         reg1 <= 1'b0;
//         reg2 <= 1'b0;
//         reg3 <= 1'b0;
//         reg4 <= 1'b0;
//     end
//     else begin 
//         reg1 <= is_break;
//         reg2 <=reg1;
//         reg3 <= reg2;
//         reg4 <= reg3;
//     end
// end
always @(posedge clk) begin
    if(reset) begin 
        reg1 <= 1'b0;
    end
    else begin 
        reg1 <= is_break;
    end
end

always @(*) begin
    if(reg1) begin 
      $finish;
    end
end

endmodule //break