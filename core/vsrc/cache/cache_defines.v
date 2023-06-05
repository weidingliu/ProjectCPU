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
// genvar i;
// generate
//     for(i=0;i<Cache_line_size/DATA_WIDTH;i++) begin 
//         if(offset == i) begin 
//             assign rdata = cache_line_data[(i+1)*DATA_WIDTH-1:i*DATA_WIDTH];
//         end
//     end
// endgenerate
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

