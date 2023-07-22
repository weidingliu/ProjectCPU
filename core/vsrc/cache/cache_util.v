
/*
* simulate sram , when clock rising edge read out data or write data, signal port
* write first memory
*/
`include "soc_defines.v"
module Sramlike #(
    parameter DATA_WIDTH = 32,
    parameter Addr_len = 6,
    localparam Sram_Depth = 2**Addr_len
    //parameter $pow(2,)
)(
    input wire clk,
    input wire reset,

    input wire [Addr_len-1:0] addr,
    input wire [DATA_WIDTH-1:0] wdata,
    input wire [Addr_len-1:0] waddr,
    input wire we,// 1'b0 is read, 1'b1 is write

    output wire [DATA_WIDTH-1:0] rdata
);

reg [DATA_WIDTH-1:0]Mem[0:Sram_Depth-1];
reg [Addr_len-1:0]addr_temp;
// for soc 
`ifndef soc_sim
always @(posedge clk) begin
    if(we) begin 
        Mem[waddr] <= wdata;
    end
    addr_temp <= addr;
end

`else
genvar i;
generate
for(i=0;i<Sram_Depth;i=i+1) begin :write_block
always @(posedge clk) begin
    if(reset) begin 
        Mem[i] <= 0;
    end
    else if(we & (i == waddr)) begin 
        Mem[i] <= wdata;
    end
end
end
endgenerate
always @(posedge clk) begin
    addr_temp <= addr;
end

`endif
assign rdata = Mem[addr_temp];
    
endmodule

// module Sramlike_Mask#(
//     parameter DATA_WIDTH = 32,
//     parameter Addr_len = 6,
//     localparam Sram_Depth = 2**Addr_len,
//     localparam Sram_mask = DATA_WIDTH/8
//     //parameter $pow(2,)
// )(
//     input wire clk,
//     input wire reset,

//     input wire [Addr_len-1:0] addr,
//     input wire [DATA_WIDTH-1:0] wdata,
//     input wire [Addr_len-1:0] waddr,
//     input wire [Sram_mask-1:0]wmask,
//     input wire we,// 1'b0 is read, 1'b1 is write

//     output wire [DATA_WIDTH-1:0] rdata
// );

// reg [DATA_WIDTH-1:0]Mem[0:Sram_Depth-1];
// reg [Addr_len-1:0]addr_temp;

// wire [DATA_WIDTH-1:0] write_data_mask;
// genvar i;
// generate
//     for(i=0;i<DATA_WIDTH;i++) begin 
        
//     end
// endgenerate


// wire [DATA_WIDTH-1:0] old_data;
// wire [DATA_WIDTH-1:0]write_data;

// assign 

// always @(posedge clk) begin
//     if(we) begin 
//         Mem[waddr] <= wdata;
//     end
//     addr_temp <= addr;
// end

// assign rdata = Mem[addr_temp];
    
// endmodule

// select word data form cache line data
module Data_mask #(
    parameter DATA_WIDTH = 32,
    parameter Cache_line_size = 512,
    localparam Addr_len = $clog2(Cache_line_size/DATA_WIDTH) 

)(
    input wire [Addr_len-1:0] offset,
    input wire [Cache_line_size-1:0] cache_line_data,
    output wire [DATA_WIDTH-1:0] rdata
);
reg [DATA_WIDTH-1:0] rdata_temp;
always @(*) begin 
    rdata_temp = 'h0;
    case(offset)
        'h0: rdata_temp = cache_line_data[DATA_WIDTH-1:0];
        'h1: rdata_temp = cache_line_data[DATA_WIDTH * 2-1:DATA_WIDTH*1];
        'h2: rdata_temp = cache_line_data[DATA_WIDTH * 3-1:DATA_WIDTH*2];
        'h3: rdata_temp = cache_line_data[DATA_WIDTH * 4-1:DATA_WIDTH*3];
        'h4: rdata_temp = cache_line_data[DATA_WIDTH * 5-1:DATA_WIDTH*4];
        'h5: rdata_temp = cache_line_data[DATA_WIDTH * 6-1:DATA_WIDTH*5];
        'h6: rdata_temp = cache_line_data[DATA_WIDTH * 7-1:DATA_WIDTH*6];
        'h7: rdata_temp = cache_line_data[DATA_WIDTH * 8-1:DATA_WIDTH*7];
        'h8: rdata_temp = cache_line_data[DATA_WIDTH * 9-1:DATA_WIDTH*8];
        'h9: rdata_temp = cache_line_data[DATA_WIDTH * 10-1:DATA_WIDTH*9];
        'ha: rdata_temp = cache_line_data[DATA_WIDTH * 11-1:DATA_WIDTH*10];
        'hb: rdata_temp = cache_line_data[DATA_WIDTH * 12-1:DATA_WIDTH*11];
        'hc: rdata_temp = cache_line_data[DATA_WIDTH * 13-1:DATA_WIDTH*12];
        'hd: rdata_temp = cache_line_data[DATA_WIDTH * 14-1:DATA_WIDTH*13];
        'he: rdata_temp = cache_line_data[DATA_WIDTH * 15-1:DATA_WIDTH*14];
        'hf: rdata_temp = cache_line_data[DATA_WIDTH * 16-1:DATA_WIDTH*15];
    endcase
end
assign rdata = rdata_temp;

endmodule //cache_defines

// extend mask to data width
module mask_extend #(
    localparam DATA_WIDTH = 32,
    localparam Mask_WIDTH = DATA_WIDTH/8
)(
    input wire [Mask_WIDTH-1:0] mask,
    output wire [DATA_WIDTH-1:0] ext_mask
);

assign ext_mask = {{8{mask[3]}},{8{mask[2]}},{8{mask[1]}},{8{mask[0]}}};

endmodule

// select word data form cache line data
module Cacheline_Mask #(
    parameter DATA_WIDTH = 32,
    parameter Cache_line_size = 512,
    localparam Addr_len = $clog2(Cache_line_size/DATA_WIDTH), 
    localparam Mask_len = $clog2(Cache_line_size/DATA_WIDTH) 

)(
    input wire [Addr_len-1:0] offset,
    input wire [DATA_WIDTH/8-1:0] wmask,
    input wire en,
    output wire [Cache_line_size-1:0] cacheline_mask
);

reg [Cache_line_size-1:0] mask_temp;
wire [DATA_WIDTH-1:0]ext_wmask;

mask_extend mask_extend(
    .mask(wmask),
    .ext_mask(ext_wmask)
); 

always @(*) begin 
    mask_temp = {Cache_line_size{1'b0}};
    case(offset)
        'h0: mask_temp = {{(Cache_line_size-DATA_WIDTH){1'b0}},ext_wmask};
        'h1: mask_temp = {{(Cache_line_size-2*DATA_WIDTH){1'b0}},ext_wmask,{(DATA_WIDTH){1'b0}}};
        'h2: mask_temp = {{(Cache_line_size-3*DATA_WIDTH){1'b0}},ext_wmask,{(2*DATA_WIDTH){1'b0}}};
        'h3: mask_temp = {{(Cache_line_size-4*DATA_WIDTH){1'b0}},ext_wmask,{(3*DATA_WIDTH){1'b0}}};
        'h4: mask_temp = {{(Cache_line_size-5*DATA_WIDTH){1'b0}},ext_wmask,{(4*DATA_WIDTH){1'b0}}};
        'h5: mask_temp = {{(Cache_line_size-6*DATA_WIDTH){1'b0}},ext_wmask,{(5*DATA_WIDTH){1'b0}}};
        'h6: mask_temp = {{(Cache_line_size-7*DATA_WIDTH){1'b0}},ext_wmask,{(6*DATA_WIDTH){1'b0}}};
        'h7: mask_temp = {{(Cache_line_size-8*DATA_WIDTH){1'b0}},ext_wmask,{(7*DATA_WIDTH){1'b0}}};
        'h8: mask_temp = {{(Cache_line_size-9*DATA_WIDTH){1'b0}},ext_wmask,{(8*DATA_WIDTH){1'b0}}};
        'h9: mask_temp = {{(Cache_line_size-10*DATA_WIDTH){1'b0}},ext_wmask,{(9*DATA_WIDTH){1'b0}}};
        'ha: mask_temp = {{(Cache_line_size-11*DATA_WIDTH){1'b0}},ext_wmask,{(10*DATA_WIDTH){1'b0}}};
        'hb: mask_temp = {{(Cache_line_size-12*DATA_WIDTH){1'b0}},ext_wmask,{(11*DATA_WIDTH){1'b0}}};
        'hc: mask_temp = {{(Cache_line_size-13*DATA_WIDTH){1'b0}},ext_wmask,{(12*DATA_WIDTH){1'b0}}};
        'hd: mask_temp = {{(Cache_line_size-14*DATA_WIDTH){1'b0}},ext_wmask,{(13*DATA_WIDTH){1'b0}}};
        'he: mask_temp = {{(Cache_line_size-15*DATA_WIDTH){1'b0}},ext_wmask,{(14*DATA_WIDTH){1'b0}}};
        'hf: mask_temp = {ext_wmask,{(15*DATA_WIDTH){1'b0}}};
    endcase
end
assign cacheline_mask = en? mask_temp:{Cache_line_size{1'b0}};
endmodule //cacheline_mask




