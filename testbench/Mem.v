
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
    parameter DATA_WIDTH = 32
)(
    input wire clk,
    input wire reset,

    //read address channel 
    input wire ar_valid,
    output wire ar_ready,
    input wire [3:0]ar_id,
    input reg [7:0] ar_len,
    input wire [2:0] ar_size,
    input wire [BUS_WIDTH-1:0] ar_addr,//read request address 
    input wire [2:0]ar_prot, // Access attributes
    input wire [1:0]ar_burst,
    input wire [1:0]ar_lock,
    input wire [3:0]ar_cache,
    

    //write address channel
    input wire aw_valid,
    output wire aw_ready,
    input wire [3:0]aw_id,
    input reg [7:0] aw_len,
    input wire [2:0] aw_size,
    input wire [BUS_WIDTH-1:0] aw_addr,
    input wire [2:0]aw_prot,
    input wire [1:0]aw_burst,
    input wire [1:0]aw_lock,
    input wire [3:0]aw_cache,


    //read data channel 
    output wire rd_valid,
    input wire rd_ready,
    output    [ 3:0] rd_id,
    output wire [DATA_WIDTH-1:0] rd_data,
    output    [ 1:0] rd_resp,
    output           rd_last,


    //write data channel 
    input wire wd_valid,
    output wire wd_ready,
    input wire [3:0]wd_id,
    input wire [DATA_WIDTH-1:0] wd_data,
    input wire [DATA_WIDTH/8 -1 : 0]wstrb,
    input reg wd_last,

    //write respone channel
    output wire wr_valid,
    input wire wr_ready,
    output wire [3:0]wr_id,
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
            read_count <= ar_len;
            read_addr_buffer <= ar_addr;
        end
        if(write_state == idle && write_next_state == data_transform) begin 
            write_addr_buffer <= aw_addr;
        end

        if(write_state == data_transform && wd_valid && wd_ready && !wd_last) write_addr_buffer <= write_addr_buffer + 'h4;
        if(read_state == data_transform && rd_valid && rd_ready && !rd_last) begin 
            read_count <= read_count - 1'b1;
            read_addr_buffer <= read_addr_buffer + 'h4;
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
        // ready: begin 
        //     if(rd_valid && rd_ready) begin 
        //         read_next_state = idle;
        //     end
            
        // end
        data_transform: begin 
            if(rd_valid && rd_ready && rd_last) read_next_state = idle;
            else read_next_state = data_transform;
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

always @(*) begin 
    if(~reset) begin 
        //rdata <= 'h0;
    end
    else begin 
        // $display("%h %h %h %h %h\n",read_addr_buffer,ar_addr,read_count,ar_valid,read_state);
        if(read_state == data_transform) begin 
            pmem_read(read_addr_buffer, rdata);
        end
        if(write_state == data_transform) begin 
            pmem_write(write_addr_buffer, wd_data, wstrb);
        end
    end
end
assign rd_last = (read_count == 'h1) & (read_state == data_transform);
assign wr_breap = 2'b00;
assign rd_data = rdata;
assign ar_ready = (read_state == idle)? 1'b1:1'b0;
assign aw_ready = (write_state == idle)? 1'b1:1'b0;
assign wd_ready = (write_state == idle || write_state == data_transform) ? 1'b1:1'b0;
assign rd_valid = (read_state == data_transform)? 1'b1:1'b0;
assign wr_valid = (write_state == ready)? 1'b1:1'b0;

endmodule
