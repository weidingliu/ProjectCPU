`include "defines.sv"

module fetch_buffer (
    input wire clk,
    input wire reset,
    input wire flush,
    //excption
    input wire excp_flush,
    input wire ertn_flush,
    //inst
    input wire [63:0] bus_i,
    input wire excp_i,
    input wire [3:0]excp_num_i,

    // output wire excp_o.
    output wire [4:0]excp_bus,

    output wire [63:0] bus_o,

    //handshark
    input wire left_valid,
    output wire left_ready,

    output wire right_valid,
    input wire right_ready,
    input wire fire,
    output wire is_fire
);

reg [5:0] head_pointer;
reg [5:0] tail_pointer;

reg [63:0] buffer[31:0];
reg [4:0] excp_buffer[31:0];

wire empty;
wire full;

always @(posedge clk) begin
    if(reset | flush | excp_flush | ertn_flush) begin 
        head_pointer <= 6'h0;
        tail_pointer <= 6'h0;
    end
    else begin 
        if(left_valid & left_ready) begin 
            head_pointer <= head_pointer + 6'h1;
        end
        if(fire) begin 
            tail_pointer <= tail_pointer + 6'h1;
        end
    end
end

always @(posedge clk) begin
    if(left_valid & left_ready) begin 
        buffer[head_pointer[4:0]] <= bus_i;
        excp_buffer[head_pointer[4:0]] <= {excp_num_i,excp_i};
        // pc_buffer[head_pointer[4:0]] <= pc_in;
    end
end

assign empty = !(head_pointer[5] ^ tail_pointer[5]) & (head_pointer[4:0] == tail_pointer[4:0]);
assign full  =  (head_pointer[5] ^ tail_pointer[5]) & (head_pointer[4:0] == tail_pointer[4:0]);

assign left_ready = !full;
assign right_valid = !empty;
// assign inst_out = inst_buffer[tail_pointer[4:0]];
assign bus_o = buffer[tail_pointer[4:0]];
assign excp_bus = excp_buffer[tail_pointer[4:0]];
// assign pc_out = pc_buffer[tail_pointer[4:0]];
assign is_fire = left_valid & left_ready;

endmodule //fection_buffer
