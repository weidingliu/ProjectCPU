// import "DPI-C" function void pmem_read(
//   input int raddr, output int rdata);
// import "DPI-C" function void pmem_write(
//   input int waddr, input int wdata, input byte wmask);

// module Mem(
//     input wire reset,
//     input wire clk,
//     input wire [32:0] addr,
//     input wire we,
//     input wire ce,
//     input wire [32:0] wdata,
//     output reg [32:0] rdata,
//     input wire [3:0]wmask
// );

// always @(*) begin 
//     //$display("-------------%h ----%h",addr,clk);
//     if(reset || clk==1'b1) begin 
//         rdata=64'h0;
//     end
//     else if(ce==1'b1) begin 
//         if(we==1'b1) begin 
//             pmem_write(addr, wdata, wmask);
//             rdata=64'h0;
//         end
//         else begin 
//             pmem_read(addr, rdata);
            
//         end
//     end
//     else begin 
//         rdata=64'h0;
//     end
    
//     //$display("-------------%h",rdata);
// end





// endmodule