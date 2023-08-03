module btb #(
    parameter BTBNUM = 32
)(
    input wire clk,
    input wire reset,
    
    input wire [31:0]fetch_pc ,
    input wire fetch_en,

    output wire [31:0]target,
    output wire taken,
    output wire [4:0]btb_index,
    output wire pre_en,

    input wire pre_error,
    input wire pre_right,
    input wire is_branch,
    input wire [31:0]branch_target,
    input wire [4:0]operate_index
);

reg [29:0] pc [BTBNUM-1:0];
reg [29:0] target [BTBNUM-1:0];
reg [1:0] counter [BTBNUM-1:0];


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

always @(posedge clk) begin 

end




endmodule