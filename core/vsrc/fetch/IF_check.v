 

module IF_check (
    input wire clk,
    input wire reset,
    input wire flush,
    input wire excp_flush,
    input wire ertn_flush,

    input wire [31:0]vaddr,
    input wire vaddr_valid,
    output wire vaddr_ready,

    input wire [31:0]inst_i,
    input wire inst_valid,
    output wire inst_ready,

    output wire [31:0]inst_o,
    output wire [31:0]vaddr_o,
    output wire ib_valid,
    input wire ib_ready,
    input wire fire,
    output wire is_fire
);
reg valid;
reg [31:0]vaddr_temp;
reg [31:0]inst_temp;

always @(posedge clk) begin
    if(reset | flush | excp_flush | ertn_flush) begin 
        valid <= `false;
    end
    else begin 
        if(fire) valid <= `false;
        if(ib_ready && vaddr_valid && inst_valid) valid <= `true;
    end
end

always @(posedge clk) begin 
    if(reset ) begin 

   end
    else begin 
        if(ib_ready && vaddr_valid && inst_valid) begin 
            vaddr_temp <= vaddr;
            inst_temp <= inst_i;
        end
    end

end

assign is_fire = vaddr_valid & inst_valid & ib_ready;
assign vaddr_ready = (vaddr_valid & !inst_valid) ? 1'b0:ib_ready;
assign inst_ready = ib_ready;

assign inst_o = inst_temp;
assign vaddr_o = vaddr_temp;
assign ib_valid = valid;

endmodule //IF_check

