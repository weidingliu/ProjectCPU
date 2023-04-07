module decoder_2_4 (
    input wire [1:0] in,
    output wire [3:0]out
);
genvar i;
generate 
    for (i=0;i<4;i=i+1) begin: gen
        assign out[i]=(in==i);
    end    
endgenerate
endmodule

module decoder_4_16 (
    input wire [3:0] in,
    output wire [15:0]out
);
genvar i;
generate 
    for (i=0;i<16;i=i+1) begin: gen
        assign out[i]=(in==i);
    end    
endgenerate
endmodule

module decoder_5_32 (
    input wire [4:0] in,
    output wire [31:0]out
);
genvar i;
generate 
    for (i=0;i<32;i=i+1) begin: gen
        assign out[i]=(in==i);
    end    
endgenerate
endmodule