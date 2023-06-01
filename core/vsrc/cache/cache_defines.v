
module Data_mask #(
    parameter DATA_WIDTH = 32,
    parameter Cache_line_size = 512,
    localparam Addr_len = $clog2(Cache_line_size/DATA_WIDTH) 

)(
    input wire [Addr_len-1:0] offset,
    input wire [Cache_line_size-1:0] cache_line_data,
    output wire [DATA_WIDTH-1:0] rdata
);

endmodule //cache_defines

