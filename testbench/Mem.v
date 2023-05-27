
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
localparam idle = 2'b00;
localparam ready = 2'b01;
localparam data_transform = 2'b10;

reg [1:0]read_state;
reg [1:0]write_state;

reg [1:0]read_next_state;
reg [1:0]write_next_state;

reg [DATA_WIDTH-1:0] rdata;

always @(posedge clk) begin
    if(~reset) begin 
        read_state <= idle;
        write_state <= idle;
    end
    else begin 
        read_state <= read_next_state;
        write_state <= write_next_state;
    end
end

always @(*) begin 
    case(read_state)
        idle: begin 
            if(ar_valid) begin 
                read_next_state = ready;
            end
            else begin 
                read_next_state = idle;
            end
        end
        ready: begin 
            if(rd_valid && rd_ready) begin 
                read_next_state = idle;
            end
            
        end
        data_transform: begin 
            read_next_state = idle;
        end
        default: begin 
            read_next_state = idle;
        end
    endcase
end

always @(*) begin
    case (write_state)
        idle: begin 
            if(aw_valid) begin 
                write_next_state = ready;
            end
            else begin 
                write_next_state = idle;
            end
        end
        ready: begin 
            if(wr_valid && wr_ready) begin 
                write_next_state = idle;
            end
        end
        data_transform: begin 
            write_next_state = idle;
        end
        default: begin 
            write_next_state = idle;
        end
    endcase
end

always @(posedge clk) begin 
    if(~reset) begin 
        //rdata <= 'h0;
    end
    else begin 
        if(read_next_state == ready) begin 
            pmem_read(ar_addr, rdata);
        end
        if(write_next_state == ready) begin 
            pmem_write(aw_addr, wd_data, wstrb);
        end
    end
end

assign wr_breap = 2'b00;
assign rd_data = rdata;
assign ar_ready = (read_state == idle)? 1'b1:1'b0;
assign aw_ready = (write_state == idle)? 1'b1:1'b0;
assign wd_ready = (write_state == idle) ? 1'b1:1'b0;
assign rd_valid = (read_state == ready)? 1'b1:1'b0;
assign wr_valid = (write_state == ready)? 1'b1:1'b0;


endmodule //Mem

