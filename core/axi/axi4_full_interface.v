
module axi4_full_interface #(
    parameter BUS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CPU_WIDTH = 32,// cache line size
    localparam BRUST_COUNTER_size = $clog2(CPU_WIDTH/DATA_WIDTH)+1
)(
    input wire aclk,
    input wire reset,

    //sram port
        // read request
    input wire [BUS_WIDTH-1 : 0]inst_addr,
        //read data
    output wire [CPU_WIDTH-1:0]inst_rdata,
    output wire inst_rdata_valid,
        //write data
    input wire [CPU_WIDTH-1:0]inst_wdata,
    input wire [CPU_WIDTH/8-1:0]inst_wmask,
    output wire inst_write_finish,
        //control signal
    input wire inst_ce,//start a read/write transport 
    input wire inst_we,// 1'b0 is read  1'b1 is write 
    input wire [2:0]inst_transfer_type,


    input wire [BUS_WIDTH-1 : 0]data_addr,
        //read data
    output wire [CPU_WIDTH-1:0]data_rdata,
    output wire data_rdata_valid,
        //write data
    input wire [CPU_WIDTH-1:0]data_wdata,
    input wire [CPU_WIDTH/8-1:0]data_wmask,
    output wire data_write_finish,
        //control signal
    input wire data_ce,//start a read/write transport 
    input wire data_we,// 1'b0 is read  1'b1 is write 
    input wire [2:0]data_transfer_type,


    //read address channel 
    output reg ar_valid,
    input wire ar_ready,
    output wire [3:0]ar_id,
    output reg [7:0] ar_len,
    output wire [2:0] ar_size,
    output wire [BUS_WIDTH-1:0] ar_addr,//read request address 
    output wire [2:0]ar_prot, // Access attributes
    output wire [1:0]ar_burst,
    output wire [1:0]ar_lock,
    output wire [3:0]ar_cache,
    

    //write address channel
    output wire aw_valid,
    input wire aw_ready,
    output wire [3:0]aw_id,
    output reg [7:0] aw_len,
    output wire [2:0] aw_size,
    output wire [BUS_WIDTH-1:0] aw_addr,
    output wire [2:0]aw_prot,
    output wire [1:0]aw_burst,
    output wire [1:0]aw_lock,
    output wire [3:0]aw_cache,


    //read data channel 
    input wire rd_valid,
    output wire rd_ready,
    input    [ 3:0] rd_id,
    input wire [DATA_WIDTH-1:0] rd_data,
    input    [ 1:0] rd_resp,
    input           rd_last,


    //write data channel 
    output wire wd_valid,
    input wire wd_ready,
    output wire [3:0]wd_id,
    output wire [DATA_WIDTH-1:0] wd_data,
    output wire [DATA_WIDTH/8 -1 : 0]wstrb,
    output wire wd_last,

    //write respone channel
    input wire wr_valid,
    output wire wr_ready,
    input wire [3:0]wr_id,
    input wire [1:0]wr_breap
);
// for axi transfer data and contrl signal
localparam read_request_empty = 1'b0;
localparam read_request_ready = 1'b1;

localparam read_respond_empty = 2'b00;
localparam read_respond_transfer = 2'b01;
localparam read_respone_ready = 2'b10;

localparam write_respond_empty = 1'b0;
localparam write_respond_transfer = 1'b1;

localparam write_request_empty = 3'b000;
localparam write_request_ready = 3'b001;
localparam write_data_transform = 3'b100;

assign ar_burst = 2'b1;
assign ar_lock = 2'b0;
assign ar_cache = 4'b0;
assign ar_prot = 3'b0;
assign ar_size = 3'b100;
assign ar_id = 4'b1;

assign aw_id = 4'b1;
assign aw_burst = 2'b1;
assign aw_lock = 2'b0;
assign aw_cache = 4'b0;
assign aw_prot = 3'b0;
assign aw_size = 3'b100;


reg read_request_state;
reg [2:0]write_request_state;
reg [1:0]read_respone_state;
reg write_respone_state;
// brust transform
reg [7:0]write_data_count;
reg [CPU_WIDTH-1:0]write_data_buffer;
reg [CPU_WIDTH-1:0]read_data_buffer;
reg [CPU_WIDTH/8-1:0] write_mask_buffer;
wire write_data_last;//if is last write data

reg rid;
reg bid;

wire wait_write;

assign write_data_last = (write_data_count == (CPU_WIDTH/DATA_WIDTH - 1));
// read FSM
always @(posedge aclk) begin
    if(~reset) begin 
        read_request_state <= read_request_empty;
        ar_valid <= 1'b0;
    end
    else begin 
        case(read_request_state)
            read_request_empty: begin 
                if(data_ce && !data_we) begin 
                    rid <= 1'b0;
                    if(wait_write) begin // if already start a write transcation,need wait 
                        if(wr_valid && wr_ready) begin 
                            read_request_state <= read_request_ready;

                            ar_addr <= data_addr;
                            ar_valid <= 1'b1;
                        end
                    end
                    else begin 
                        read_request_state <= read_request_ready;
                        ar_valid <= 1'b1;
                        ar_addr <= data_addr;
                    end
                    if(data_transfer_type == 3'b100) ar_len <= 8'h10;
                    else ar_len <= 8'h1;
                end 
                else if(inst_ce && !inst_we) begin 
                    rid <= 1'b1;
                    if(wait_write) begin // if already start a write transcation,need wait 
                        if(wr_valid && wr_ready) begin 
                            read_request_state <= read_request_ready;

                            ar_addr <= inst_addr;
                            ar_valid <= 1'b1;
                        end
                    end
                    else begin 
                        read_request_state <= read_request_ready;
                        ar_valid <= 1'b1;
                        ar_addr <= inst_addr;
                    end
                    if(inst_transfer_type == 3'b100) ar_len <= 8'h10;
                    else ar_len <= 8'h1;
                end
            end
            read_request_ready: begin 
                ar_valid <= 1'b0;
                if(rd_valid && rd_ready && rd_last) begin 
                    read_request_state <= read_request_empty;
                end
            end

        endcase
    end
end
//write respone FSM
always @(posedge aclk) begin 
    if(~reset) begin 
        write_respone_state <= write_respond_empty;
        wr_ready <= 1'b1;
    end
    else begin 
        case(write_respone_state)

        endcase
    end
end

//read respone FSM
always @(posedge aclk) begin 
    if(~reset) begin 
        read_respone_state <= read_respond_empty;
        rd_ready <= 1'b1;
        read_data_buffer <= 'h0;
    end
    else begin 
        case(read_respone_state)
            read_respond_empty: begin 
                if(ar_valid && ar_ready) begin 
                    read_respone_state <= read_respond_transfer;
                end
            end
            read_respond_transfer: begin 
                if(rd_last & rd_valid) begin 
                    read_respone_state <= read_respond_empty;
                end
                else if(rd_valid) begin 
                    read_data_buffer <= {read_data_buffer[CPU_WIDTH-DATA_WIDTH-1:DATA_WIDTH],rd_data};
                end
            end
            // read_respone_ready: begin 
            //     read_respone_state <= read_respond_empty;
            // end
        endcase
    end
end


// write FSM
always @(posedge aclk) begin
    if(~reset) begin 
        write_request_state <= write_request_empty;
        aw_valid <= 1'b0;
        // wd_valid <= 1'b0;
        // wd_last <= 1'b0;

        write_data_count <= 'h0;
        write_data_buffer <= 'h0;
        write_mask_buffer <= 'h0;

    end
    else begin 
        case(write_request_state)
            write_request_empty: begin 
                 if(data_ce && data_we) begin 
                    aw_valid <= 1'b1;
                    // wd_valid <= 1'b1;
                    aw_addr <= data_addr;
                    // wd_data <= data_wdata[DATA_WIDTH-1:0];
                    // wstrb <= data_wmask[DATA_WIDTH/8-1:0];
                    write_data_buffer <= data_wdata;
                    write_mask_buffer <= data_wmask;

                    bid <= 1'b0;
                    // if(data_transfer_type == 3'b100) begin 
                    //     write_data_buffer <= {{DATA_WIDTH{1'b0}},data_wdata[CPU_WIDTH-1:DATA_WIDTH]};
                    //     write_mask_buffer <= {{DATA_WIDTH/8{1'b0}},data_wmask[CPU_WIDTH/8-1:DATA_WIDTH/8]};
                    // end

                    if(data_transfer_type == 3'b100) begin 
                        // wd_last <= 1'b0;
                        if(aw_ready)  write_request_state <= write_data_transform;
                        write_data_count <= 'h0;
                        aw_len <= 8'h10;
                    end
                    else begin 
                        // wd_last <= 1'b0;
                        if(aw_ready) write_request_state <= write_data_transform;
                        write_data_count <= 'h0;
                        aw_len <= 8'h1;
                    end

                 end
                 else if(inst_ce && inst_we) begin 
                    aw_valid <= 1'b1;
                    // wd_valid <= 1'b1;
                    aw_addr <= inst_addr;
                    // wd_data <= inst_wdata[DATA_WIDTH-1:0];
                    // wstrb <= inst_wmask[DATA_WIDTH/8-1:0];
                    write_data_buffer <= inst_wdata;
                    write_mask_buffer <= inst_wmask;
                    bid <= 1'b1;
                    // if(inst_transfer_type == 3'b100) begin 
                    //     write_data_buffer <= {{DATA_WIDTH{1'b0}},inst_wdata[CPU_WIDTH-1:DATA_WIDTH]};
                    //     write_mask_buffer <= {{DATA_WIDTH/8{1'b0}},inst_wmask[CPU_WIDTH/8-1:DATA_WIDTH/8]};
                    // end

                    if(inst_transfer_type == 3'b100) begin 
                        // wd_last <= 1'b0;
                        if(aw_ready)  write_request_state <= write_data_transform;
                        write_data_count <= 'h0;
                        aw_len <= 8'h10;
                    end
                    else begin 
                        // wd_last <= 1'b0;
                        if(aw_ready) write_request_state <= write_data_transform;
                        write_data_count <= 'h0;
                        aw_len <= 8'h1;
                    end

                 end
            end
            write_request_ready: begin 
                aw_valid <= 1'b0;
                if(wr_valid && wr_ready) begin 
                    write_request_state <= write_request_empty;
                    // wd_valid <= 1'b0;
                end
                
            end
            write_data_transform: begin 
                aw_valid <= 1'b0;
                
                if(wd_ready) begin 
                    if(wd_last) begin 
                        write_request_state <= write_request_ready;
                    end
                    else begin 
                        write_data_count <= write_data_count + 1'b1;
                        write_data_buffer <= {{DATA_WIDTH{1'b0}},write_data_buffer[CPU_WIDTH-1:DATA_WIDTH]};
                        write_mask_buffer <= {{DATA_WIDTH/8{1'b0}},write_mask_buffer[CPU_WIDTH/8-1:DATA_WIDTH/8]};
                    end
                end

            end
        endcase
    end
end

assign wd_data = write_data_buffer[DATA_WIDTH-1:0];
assign wstrb = write_mask_buffer[DATA_WIDTH/8-1:0];
assign wd_last = write_data_last;
assign wd_valid = (write_request_state == write_data_transform)? 1'b1:1'b0;

assign wait_write = ~(write_request_state == write_request_empty);

assign data_rdata = (data_transfer_type == 3'b100)? {read_data_buffer[CPU_WIDTH-DATA_WIDTH-1:DATA_WIDTH],rd_data}:rd_data;
assign inst_rdata = (inst_transfer_type == 3'b100)? {read_data_buffer[CPU_WIDTH-DATA_WIDTH-1:DATA_WIDTH],rd_data}:rd_data;

assign data_rdata_valid = rd_valid & !rid & (read_request_state == read_request_ready) & rd_last;
assign inst_rdata_valid = rd_valid &  rid & (read_request_state == read_request_ready) & rd_last;

assign data_write_finish = wr_valid & !bid & (write_request_state == write_request_ready);
assign inst_write_finish = wr_valid &  bid & (write_request_state == write_request_ready);


endmodule //axi4_full_interface


// module sram2axi4_full #(
//     parameter BUS_WIDTH = 32,
//     parameter DATA_WIDTH = 32,
//     parameter CPU_WIDTH = 32
// )(
//     input wire aclk,
//     input wire reset,//active low

//     input wire flush,
    
//     //sram port
//         // read request
//     input wire [BUS_WIDTH-1 : 0]inst_addr,
//         //read data
//     output wire [CPU_WIDTH-1:0]inst_rdata,
//     output wire inst_rdata_valid,
//         //write data
//     input wire [CPU_WIDTH-1:0]inst_wdata,
//     input wire [CPU_WIDTH/8-1:0]inst_wmask,
//     output wire inst_write_finish,
//         //control signal
//     input wire inst_ce,//start a read/write transport 
//     input wire inst_we,// 1'b0 is read  1'b1 is write 

//     input wire [BUS_WIDTH-1 : 0]data_addr,
//         //read data
//     output wire [CPU_WIDTH-1:0]data_rdata,
//     output wire data_rdata_valid,
//         //write data
//     input wire [CPU_WIDTH-1:0]data_wdata,
//     input wire [CPU_WIDTH/8-1:0]data_wmask,
//     output wire data_write_finish,
//         //control signal
//     input wire data_ce,//start a read/write transport 
//     input wire data_we,// 1'b0 is read  1'b1 is write 

//     //read address channel 
//     output reg ar_valid,
//     input wire ar_ready,
//     output reg [BUS_WIDTH-1:0] ar_addr,//read request address 
//     output wire [2:0]ar_prot, // Access attributes

//     //write address channel
//     output wire aw_valid,
//     input wire aw_ready,
//     output wire [BUS_WIDTH-1:0] aw_addr,
//     output wire [2:0]aw_prot,
//     //read data channel 
//     input wire rd_valid,
//     output wire rd_ready,
//     input wire [DATA_WIDTH-1:0] rd_data,

//     //write data channel 
//     output wire wd_valid,
//     input wire wd_ready,
//     output wire [DATA_WIDTH-1:0] wd_data,
//     output wire [DATA_WIDTH/8 -1 : 0]wstrb,

//     //write respone channel
//     input wire wr_valid,
//     output wire wr_ready,
//     input wire [1:0]wr_breap
// );
// // for axi transfer data and contrl signal
// localparam read_request_empty = 1'b0;
// localparam read_request_ready = 1'b1;
// localparam read_respond_empty = 1'b0;
// localparam read_respond_transfer = 1'b1;
// localparam write_respond_empty = 1'b0;
// localparam write_respond_transfer = 1'b1;
// localparam write_request_empty = 3'b000;
// localparam write_request_ready = 3'b001;
// // localparam write_addr_ready = 3'b001;
// // localparam write_data_ready = 3'b010;
// // localparam write_all_ready = 3'b011;
// localparam write_data_transform = 3'b100;
// // localparam read_data_transform = 3'b100;
// // localparam write_data_wait = 3'b101;
// // localparam write_wait_b = 3'b110;

// reg read_request_state;
// reg [2:0]write_request_state;
// reg read_respone_state;
// reg write_respone_state;

// reg rid;
// reg bid;

// wire wait_write;
// // read FSM
// always @(posedge aclk) begin
//     if(~reset) begin 
//         read_request_state <= read_request_empty;
//         ar_valid <= 1'b0;
//     end
//     else begin 
//         case(read_request_state)
//             read_request_empty: begin 
//                 if(data_ce && !data_we) begin 
//                     rid <= 1'b0;
//                     if(wait_write) begin // if already start a write transcation,need wait 
//                         if(wr_valid && wr_ready) begin 
//                             read_request_state <= read_request_ready;

//                             ar_addr <= data_addr;
//                             ar_valid <= 1'b1;
//                         end
//                     end
//                     else begin 
//                         read_request_state <= read_request_ready;
//                         ar_valid <= 1'b1;
//                         ar_addr <= data_addr;
//                     end
//                 end 
//                 else if(inst_ce && !inst_we) begin 
//                     rid <= 1'b1;
//                     if(wait_write) begin // if already start a write transcation,need wait 
//                         if(wr_valid && wr_ready) begin 
//                             read_request_state <= read_request_ready;

//                             ar_addr <= inst_addr;
//                             ar_valid <= 1'b1;
//                         end
//                     end
//                     else begin 
//                         read_request_state <= read_request_ready;
//                         ar_valid <= 1'b1;
//                         ar_addr <= inst_addr;
//                     end
//                 end
//             end
//             read_request_ready: begin 
//                 if(rd_valid && rd_ready) begin 
//                     ar_valid <= 1'b0;
//                     read_request_state <= read_request_empty;
//                 end
//             end

//         endcase
//         if(flush) begin read_request_state <= read_request_empty;ar_valid <= 1'b0;end
//     end
// end
// //write respone FSM
// always @(posedge aclk) begin 
//     if(~reset) begin 
//         write_respone_state <= write_respond_empty;
//         wr_ready <= 1'b1;
//     end
//     else begin 

//     end
// end
// //read respone FSM
// always @(posedge aclk) begin 
//     if(~reset) begin 
//         read_respone_state <= read_respond_empty;
//         rd_ready <= 1'b1;
//     end
//     else begin 
//         case(read_respone_state)
//             read_respond_empty: begin 
                
//             end
//             read_respond_transfer: begin 

//             end
//         endcase
//     end
// end


// // write FSM
// always @(posedge aclk) begin
//     if(~reset) begin 
//         write_request_state <= write_request_empty;
//         aw_valid <= 1'b0;
//         wd_valid <= 1'b0;
//     end
//     else begin 
//         case(write_request_state)
//             write_request_empty: begin 
//                  if(data_ce && data_we) begin 
//                     aw_valid <= 1'b1;
//                     wd_valid <= 1'b1;
//                     aw_addr <= data_addr;
//                     wd_data <= data_wdata;
//                     wstrb <= data_wmask;
//                     write_request_state <= write_request_ready;

//                     bid <= 1'b0;

//                  end
//                  else if(inst_ce && inst_we) begin 
//                     aw_valid <= 1'b1;
//                     wd_valid <= 1'b1;
//                     aw_addr <= inst_addr;
//                     wd_data <= inst_wdata;
//                     wstrb <= inst_wmask;
//                     write_request_state <= write_request_ready;

//                     bid <= 1'b1;
//                  end
//             end
//             write_request_ready: begin 
//                 if(wr_valid && wr_ready) begin 
//                     write_request_state <= write_request_empty;
//                     aw_valid <= 1'b0;
//                     wd_valid <= 1'b0;
//                 end
                
//             end
//             // write_addr_ready: begin 

//             // end
//             // write_data_ready: begin 

//             // end
//             // write_all_ready: begin 

//             // end
//         endcase
//     end
// end

// assign wait_write = ~(write_request_state == write_request_empty);

// assign data_rdata = rd_data;
// assign inst_rdata = rd_data;

// assign data_rdata_valid = rd_valid & !rid & (read_request_state == read_request_ready);
// assign inst_rdata_valid = rd_valid &  rid & (read_request_state == read_request_ready);

// assign data_write_finish = wr_valid & !bid & (write_request_state == write_request_ready);
// assign inst_write_finish = wr_valid &  bid & (write_request_state == write_request_ready);

// endmodule

