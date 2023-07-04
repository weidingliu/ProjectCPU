

module tlb_entry #(
    parameter TLBNUM = 32
)(
    input wire clk,

    // s0
    input wire s0_valid,
    input wire [18:0]s0_vppn,
    input wire [9:0]s0_asid,
    input wire s0_odd_page,
    output wire s0_found,
    output wire [$clog2(TLBNUM)-1:0] s0_index,
    output wire [5:0]s0_ps,
    output wire [19:0]s0_ppn,
    output wire s0_v,
    output wire s0_d,
    output wire [1:0]s0_mat,
    output wire [1:0]s0_plv,
    //s1
    input wire s1_valid,
    input wire [18:0]s1_vppn,
    input wire [9:0]s1_asid,
    input wire s1_odd_page,
    output wire s1_found,
    output wire [$clog2(TLBNUM)-1:0] s1_index,
    output wire [5:0]s1_ps,
    output wire [19:0]s1_ppn,
    output wire s1_v,
    output wire s1_d,
    output wire [1:0]s1_mat,
    output wire [1:0]s1_plv,
    //write port
    input wire we,
    input wire [$clog2(TLBNUM)-1:0] w_index,
    input wire [18:0] w_vppn,
    input wire [ 9:0] w_asid,
    input wire w_g,
    input wire [ 5:0] w_ps,
    input wire w_e,

    input wire w_v0,
    input wire w_d0,
    input wire [ 1:0] w_mat0,
    input wire [ 1:0] w_plv0,
    input wire [19:0] w_ppn0,

    input wire w_v1,
    input wire w_d1,
    input wire [ 1:0] w_mat1,
    input wire [ 1:0] w_plv1,
    input wire [19:0] w_ppn1,

    //read ort
    input wire [$clog2(TLBNUM)-1:0] r_index,
    output wire [18:0] r_vppn,
    output wire [ 9:0] r_asid,
    output wire r_g,
    output wire [ 5:0] r_ps,
    output wire r_e,

    output wire r_v0,
    output wire r_d0,
    output wire [ 1:0] r_mat0,
    output wire [ 1:0] r_plv0,
    output wire [19:0] r_ppn0,

    output wire r_v1,
    output wire r_d1,
    output wire [ 1:0] r_mat1,
    output wire [ 1:0] r_plv1,
    output wire [19:0] r_ppn1,

    
);
reg [18:0] tlb_vppn     [TLBNUM-1:0];
reg        tlb_e        [TLBNUM-1:0];
reg [ 9:0] tlb_asid     [TLBNUM-1:0];
reg        tlb_g        [TLBNUM-1:0];
reg [ 5:0] tlb_ps       [TLBNUM-1:0];

reg [19:0] tlb_ppn0     [TLBNUM-1:0];
reg [ 1:0] tlb_plv0     [TLBNUM-1:0];
reg [ 1:0] tlb_mat0     [TLBNUM-1:0];
reg        tlb_d0       [TLBNUM-1:0];
reg        tlb_v0       [TLBNUM-1:0];

reg [19:0] tlb_ppn1     [TLBNUM-1:0];
reg [ 1:0] tlb_plv1     [TLBNUM-1:0];
reg [ 1:0] tlb_mat1     [TLBNUM-1:0];
reg        tlb_d1       [TLBNUM-1:0];
reg        tlb_v1       [TLBNUM-1:0];

reg [TLBNUM-1:0]match0;
reg [TLBNUM-1:0]match1;
reg [TLBNUM-1:0]s0_odd_page_buffer;
reg [TLBNUM-1:0]s1_odd_page_buffer;

//tlb match
genvar i;
generate
    for(i=0;i<TLBNUM;i=i+1) begin :match
        always @(posedge clk) begin 
            if(s0_valid) begin 
                match0[i] <=  (tlb_ps[i] == 6'd12) ? (tlb_e[i]) & ((tlb_g[i]) | (tlb_asid[i] == s0_asid)) & (tlb_vppn[i] == s0_vppn):
                                                     (tlb_e[i]) & ((tlb_g[i]) | (tlb_asid[i] == s0_asid)) & (tlb_vppn[i][18:9] == s0_vppn[18:9]);
                s0_odd_page_buffer[i] <= (tlb_ps[i] == 6'd12) ? s0_odd_page:s0_vppn[8];
            end
            if(s1_valid) begin 
                match1[i] <=  (tlb_ps[i] == 6'd12) ? (tlb_e[i]) & ((tlb_g[i]) | (tlb_asid[i] == s1_asid)) & (tlb_vppn[i] == s1_vppn):
                                                     (tlb_e[i]) & ((tlb_g[i]) | (tlb_asid[i] == s1_asid)) & (tlb_vppn[i][18:9] == s1_vppn[18:9]);
                s1_odd_page_buffer[i] <= (tlb_ps[i] == 6'd12) ? s1_odd_page:s1_vppn[8];
            end
        end
    end
endgenerate

assign s0_found = !(!match0);
assign s1_found = !(!match1);

// transfer
// assign {s0_index, s0_ps, s0_ppn, s0_v, s0_d, s0_mat, s0_plv} = 





//write 
always @(posedge clk) begin
    if (we) begin
        tlb_vppn [w_index] <= w_vppn;
        tlb_asid [w_index] <= w_asid;
        tlb_g    [w_index] <= w_g; 
        tlb_ps   [w_index] <= w_ps;  
        tlb_ppn0 [w_index] <= w_ppn0;
        tlb_plv0 [w_index] <= w_plv0;
        tlb_mat0 [w_index] <= w_mat0;
        tlb_d0   [w_index] <= w_d0;
        tlb_v0   [w_index] <= w_v0; 
        tlb_ppn1 [w_index] <= w_ppn1;
        tlb_plv1 [w_index] <= w_plv1;
        tlb_mat1 [w_index] <= w_mat1;
        tlb_d1   [w_index] <= w_d1;
        tlb_v1   [w_index] <= w_v1; 
    end
end
//read
assign r_vppn  =  tlb_vppn [r_index]; 
assign r_asid  =  tlb_asid [r_index]; 
assign r_g     =  tlb_g    [r_index]; 
assign r_ps    =  tlb_ps   [r_index]; 
assign r_e     =  tlb_e    [r_index]; 
assign r_v0    =  tlb_v0   [r_index]; 
assign r_d0    =  tlb_d0   [r_index]; 
assign r_mat0  =  tlb_mat0 [r_index]; 
assign r_plv0  =  tlb_plv0 [r_index]; 
assign r_ppn0  =  tlb_ppn0 [r_index]; 
assign r_v1    =  tlb_v1   [r_index]; 
assign r_d1    =  tlb_d1   [r_index]; 
assign r_mat1  =  tlb_mat1 [r_index]; 
assign r_plv1  =  tlb_plv1 [r_index]; 
assign r_ppn1  =  tlb_ppn1 [r_index]; 


endmodule //tlb_entry