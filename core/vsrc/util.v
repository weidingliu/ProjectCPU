`include "defines.sv"
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

module decoder_6_64 (
    input wire [5:0] in,
    output wire [63:0]out
);
genvar i;
generate 
    for (i=0;i<64;i=i+1) begin: gen
        assign out[i]=(in==i);
    end    
endgenerate
endmodule


module mux_1_32(
    input wire [31:0]data_in1,
    input wire [31:0]data_in2,
    input wire select,
    output wire [31:0]data_out
);
assign data_out = (select)? data_in1:data_in2;
endmodule


// module mux_n_32 #(
//     parameter n = 1
// )(
//     input wire []
// );

// endmodule //



/*
*[37:6] -> data
*[5:1] -> index
*[0:0] -> en
*/
module bypass (
    input wire [`bypass_width-1:0] ex_bypass,
    input wire [`bypass_width-1:0] mem_bypass,
    input wire [`bypass_width-1:0] wb_bypass,
    
    input wire [31:0] reg1,
    input wire [31:0] reg2,
    input wire [4:0] index1,
    input wire [4:0] index2,
    output wire [31:0] bypass_reg1,
    output wire [31:0] bypass_reg2
);
wire ex_src1;
wire mem_src1;
wire wb_src1;

wire ex_src2;
wire mem_src2;
wire wb_src2;


assign ex_src1 = (ex_bypass[0] == 1'b1) & (ex_bypass[5:1] == index1) & (ex_bypass[5:1] != 5'h0); 
assign mem_src1 = (mem_bypass[0] == 1'b1) & (mem_bypass[5:1] == index1) & (mem_bypass[5:1] != 5'h0); 
assign wb_src1 = (wb_bypass[0] == 1'b1) & (wb_bypass[5:1] == index1) & (wb_bypass[5:1] != 5'h0); 

assign ex_src2 = (ex_bypass[0] == 1'b1) & (ex_bypass[5:1] == index2) & (ex_bypass[5:1] != 5'h0); 
assign mem_src2 = (mem_bypass[0] == 1'b1) & (mem_bypass[5:1] == index2) & (mem_bypass[5:1] != 5'h0); 
assign wb_src2 = (wb_bypass[0] == 1'b1) & (wb_bypass[5:1] == index2) & (wb_bypass[5:1] != 5'h0); 


assign bypass_reg1 = ex_src1 ? ex_bypass[37:6] : 
                     mem_src1 ? mem_bypass[37:6] :
                     wb_src1 ? wb_bypass[37:6] : reg1;

assign bypass_reg2 = ex_src2 ? ex_bypass[37:6] : 
                     mem_src2 ? mem_bypass[37:6] :
                     wb_src2 ? wb_bypass[37:6] : reg2;


endmodule //bypass
