
import "DPI-C" function void pmem_read(
  input int raddr, output int rdata);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wmask);

module Mem(
    input wire reset,
    input wire clk,
    input wire [31:0] addr,
    input wire we,
    input wire ce,
    input wire [31:0] wdata,
    output reg [31:0] rdata,
    input wire [3:0]wmask
);

always @(*) begin 
    //$display("-------------%h ----%h",addr,clk);
    if(reset || clk==1'b1) begin 
        rdata=32'h0;
    end
    else if(ce==1'b1) begin 
        if(we==1'b1) begin 
            pmem_write(addr, wdata, wmask);
            rdata=32'h0;
        end
        else begin 
            pmem_read(addr, rdata);
            
        end
    end
    else begin 
        rdata=32'h0;
    end
    
    //$display("-------------%h",rdata);
end

endmodule

module AXIMem #(
    parameter BUS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CPU_WIDTH = 32
)(
    input wire clk,
    input wire reset,
///////////////inst channels
    //read address channel 
    input wire ar_valid,
    output wire ar_ready,
    input wire [BUS_WIDTH-1:0] ar_addr,//read request address 
    input wire [2:0]ar_prot, // Access attributes

    //write address channel
    input wire aw_valid,
    output wire aw_ready,
    input wire [BUS_WIDTH-1:0] aw_addr,
    input wire [2:0]aw_prot,
    //read data channel 
    output wire rd_valid,
    input wire rd_ready,
    output wire [DATA_WIDTH-1:0] rd_data,

    //write data channel 
    input wire wd_valid,
    output wire wd_ready,
    input wire [DATA_WIDTH-1:0] wd_data,
    input wire [DATA_WIDTH/8 -1 : 0]wstrb,

    //write respone channel
    output wire wr_valid,
    input wire wr_ready,
    output wire [1:0]wr_breap
);



endmodule //Mem

