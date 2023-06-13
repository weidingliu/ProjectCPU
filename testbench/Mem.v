
import "DPI-C" function void pmem_read(
  input int raddr, output int rdata);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wmask);


module AXIMem #(
    parameter BUS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CPU_WIDTH = 32
)(
    input wire clk,
    input wire reset,
    // input wire flush,
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
    // if(flush) read_next_state = idle;
    // else begin 
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
    // end
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

module AXI_FULL_Mem#(
    parameter BUS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CPU_WIDTH = 32,
    localparam BRUST_COUNTER_size = $clog2(CPU_WIDTH/DATA_WIDTH) + 1 
)(
    input wire clk,
    input wire reset,

    //read address channel 
    output wire ar_valid,
    input wire ar_ready,
    output wire [3:0]ar_id,
    output reg [7:0] ar_len,
    output wire [2:0] ar_size,
    output wire [BUS_WIDTH-1:0] ar_addr,//read request address 
    output wire [2:0]ar_prot, // Access attributes
    output wire [1:0]ar_burst,
    output wire [1:0]ar_lock,
    output wire [3:0]ar_cache,
    

    //write address channel
    output wire aw_valid,
    input wire aw_ready,
    output wire [3:0]aw_id,
    output reg [7:0] aw_len,
    output wire [2:0] aw_size,
    output wire [BUS_WIDTH-1:0] aw_addr,
    output wire [2:0]aw_prot,
    output wire [1:0]aw_burst,
    output wire [1:0]aw_lock,
    output wire [3:0]aw_cache,


    //read data channel 
    input wire rd_valid,
    output wire rd_ready,
    input    [ 3:0] rd_id,
    input wire [DATA_WIDTH-1:0] rd_data,
    input    [ 1:0] rd_resp,
    input           rd_last,


    //write data channel 
    output wire wd_valid,
    input wire wd_ready,
    output wire [3:0]wd_id,
    output wire [DATA_WIDTH-1:0] wd_data,
    output wire [DATA_WIDTH/8 -1 : 0]wstrb,
    output reg wd_last,

    //write respone channel
    input wire wr_valid,
    output wire wr_ready,
    input wire [3:0]wr_id,
    input wire [1:0]wr_breap
);

localparam idle = 2'b00;
localparam ready = 2'b01;
localparam data_transform = 2'b10;

reg [1:0]read_state;
reg [1:0]write_state;

reg [1:0]read_next_state;
reg [1:0]write_next_state;

reg [DATA_WIDTH-1:0] rdata;

reg [BUS_WIDTH-1:0] write_addr_buffer;
reg [BUS_WIDTH-1:0] read_addr_buffer;
reg [7:0]read_count;

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
always @(posedge clk) begin
    if(~reset) begin 
        read_count <= 'h0;
        read_addr_buffer <= 'h0;
        write_addr_buffer <= 'h0;
    end
    else begin 
        if(read_state == idle && read_next_state == data_transform) begin 
            read_count <= ar_len - 1'b1;
            read_addr_bufferrr <= ar_addr + 4'h4;
        end
        if(write_state == idle && write_next_state == data_transform) begin 
            
        end
    end
end


always @(*) begin 
    case(read_state)
        idle: begin 
            if(ar_valid) begin 
                read_next_state = data_transform;
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
                write_next_state = data_transform;
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
            if(wd_last) begin 
                write_next_state = ready;
            end
            else begin 
                write_next_state = data_transform;
            end
            
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

endmodule
