module btb #(
    parameter BTBNUM = 32
)(
    input wire clk,
    input wire reset,
    
    input wire [31:0]fetch_pc,
    input wire fetch_en,

    output wire [31:0]target,
    output wire taken,
    output wire [4:0]btb_index,
    output wire pre_en,
    output wire entry_empty,

    input wire pre_error,
    input wire pre_right,
    input wire [31:0]right_target,
    input wire [31:0]operate_pc,
    input wire target_error,
    input wire [4:0]operate_index
);

reg [29:0] pc [BTBNUM-1:0];
reg [29:0] target [BTBNUM-1:0];
reg [1:0] counter [BTBNUM-1:0];

reg [1:0]ras_counter_buffer;

reg valid[BTBNUM-1:0];
reg match[BTBNUM-1:0];



genvar i;
generate
    for(i=0; i < BTBNUM; i = i+1) begin : match_scanf
        always @(posedge clk) begin 
            if(reset) begin 
                match[i] <= 1'b0;
            end 
            else begin 
                if(fetch_en) begin 
                    match[i] <= (fetch_pc[31:2] == pc[i]) && valid[i];
                end 
            end
        end 
    end
endgenerate

// always @(posedge clk) begin 
//     if(fetch_en) begin 
//         ras_counter_buffer <= 
//     end
// end

always @(posedge clk) begin 
    if(reset) begin 
        valid <= 32'h0;
    end 
    if(pre_error) begin 
        if(counter[operate_index] != 2'b00) counter[operate_index] <= counter[operate_index] - 2'b1;
        pc[operate_index] <= operate_pc[31:2];
        if(target_error) target[operate_index] <= right_target[31:2];
    end 
    if(pre_right) begin 
        if(counter[operate_index] != 2'b11) counter[operate_index] <= counter[operate_index] + 2'b1;
    end
end




endmodule






