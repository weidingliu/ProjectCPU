// select word data form cache line data
module Data_mask #(
    parameter DATA_WIDTH = 32,
    parameter Cache_line_size = 512,
    localparam Addr_len = $clog2(Cache_line_size/DATA_WIDTH) 

)(
    input wire [Addr_len-1:0] offset,
    input wire [Cache_line_size-1:0] cache_line_data,
    output reg [DATA_WIDTH-1:0] rdata
);
// genvar i;
// generate
//     for(i=0;i<Cache_line_size/DATA_WIDTH;i++) begin 
//         if(offset == i) begin 
//             assign rdata = cache_line_data[(i+1)*DATA_WIDTH-1:i*DATA_WIDTH];
//         end
//     end
// endgenerate

always @(*) begin 
    case(offset)
        'h0: rdata = cache_line_data[DATA_WIDTH-1:0];
        'h2: rdata = cache_line_data[DATA_WIDTH * 2-1:DATA_WIDTH*1];
        'h3: rdata = cache_line_data[DATA_WIDTH * 3-1:DATA_WIDTH*2];
        'h4: rdata = cache_line_data[DATA_WIDTH * 4-1:DATA_WIDTH*3];
        'h5: rdata = cache_line_data[DATA_WIDTH * 5-1:DATA_WIDTH*4];
        'h6: rdata = cache_line_data[DATA_WIDTH * 6-1:DATA_WIDTH*5];
        'h7: rdata = cache_line_data[DATA_WIDTH * 7-1:DATA_WIDTH*6];
        'h8: rdata = cache_line_data[DATA_WIDTH * 8-1:DATA_WIDTH*7];
        'h9: rdata = cache_line_data[DATA_WIDTH * 9-1:DATA_WIDTH*8];
        'ha: rdata = cache_line_data[DATA_WIDTH * 10-1:DATA_WIDTH*9];
        'hb: rdata = cache_line_data[DATA_WIDTH * 11-1:DATA_WIDTH*10];
        'hc: rdata = cache_line_data[DATA_WIDTH * 12-1:DATA_WIDTH*11];
        'hd: rdata = cache_line_data[DATA_WIDTH * 13-1:DATA_WIDTH*12];
        'he: rdata = cache_line_data[DATA_WIDTH * 14-1:DATA_WIDTH*13];
        'hf: rdata = cache_line_data[DATA_WIDTH * 15-1:DATA_WIDTH*14];
    endcase
end


endmodule //cache_defines

