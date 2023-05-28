/*
* transfer sram interface to axi_lite interface
*
*/
// module sram2axi4_lite #(
//     parameter BUS_WIDTH = 32,
//     parameter DATA_WIDTH = 32,
//     parameter CPU_WIDTH = 32
// )
// (
//     input wire aclk,
//     input wire reset,//active low
//     //sram port
//         // read request
//     input wire [BUS_WIDTH-1 : 0]addr,
//         //read data
//     output wire [CPU_WIDTH-1:0]rdata,
//     output wire rdata_valid,
//         //write data
//     input wire [CPU_WIDTH-1:0]wdata,
//     input wire [CPU_WIDTH/8-1:0]wmask,
//     output wire write_finish,
//         //control signal
//     input wire ce,//start a read/write transport 
//     input wire we,// 1'b0 is read  1'b1 is write 

//     //read address channel 
//     output wire ar_valid,
//     input wire ar_ready,
//     output wire [BUS_WIDTH-1:0] ar_addr,//read request address 
//     output wire [2:0]ar_prot, // Access attributes

//     //write address channel
//     output reg aw_valid,
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
// //FSM
// localparam idle = 2'b00;
// localparam read = 2'b01;
// localparam write = 2'b10;

// reg [1:0]state;

// always @(posedge aclk) begin
//     if(!reset) begin 
//         state <= idle;
//     end
//     else begin 
//         case (state)
//             idle: begin 
//                 if(ce && we && aw_ready && wd_ready) begin 
//                     state <= write;
//                 end
//                 else if(ce && !we && ar_ready) begin 
//                     state <= read;
//                 end
//             end
//             read: begin 
//                     if(rd_valid) begin 
//                         state <=idle;
//                     end
//             end
//             write: begin 
//                    if(wr_valid && wr_breap == 2'b00) begin 
//                         state <= idle;
//                    end
//             end
//             default: state <=idle;
//         endcase
//     end
// end
// //logic output

// assign ar_addr = addr;
// assign ar_prot = 3'b000;
// assign ar_valid = ((reset == 1'b1) & ce & !we & (state == idle))? 1'b1:1'b0;

// assign aw_addr = addr;
// assign aw_prot = 3'b000;
// assign aw_valid = ((reset == 1'b1) & ce & we & (state == idle))? 1'b1:1'b0;

// assign rd_ready = (state == read)? 1'b1:1'b0;

// assign wd_valid = ((reset == 1'b1) & ce & we & (state == idle))? 1'b1:1'b0;
// assign wd_data = wdata;
// assign wstrb = wmask;

// assign wr_ready = (state == write)? 1'b1:1'b0;

// assign rdata_valid = rd_valid;
// assign rdata = rd_data;
// assign write_finish = wr_valid & (wr_breap == 2'b00);


// endmodule //sram2axi4_lite




module sram2axi4_lite #(
    parameter BUS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CPU_WIDTH = 32
)(
    input wire aclk,
    input wire reset,//active low

    input wire flush,
    
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

    //read address channel 
    output reg ar_valid,
    input wire ar_ready,
    output reg [BUS_WIDTH-1:0] ar_addr,//read request address 
    output wire [2:0]ar_prot, // Access attributes

    //write address channel
    output wire aw_valid,
    input wire aw_ready,
    output wire [BUS_WIDTH-1:0] aw_addr,
    output wire [2:0]aw_prot,
    //read data channel 
    input wire rd_valid,
    output wire rd_ready,
    input wire [DATA_WIDTH-1:0] rd_data,

    //write data channel 
    output wire wd_valid,
    input wire wd_ready,
    output wire [DATA_WIDTH-1:0] wd_data,
    output wire [DATA_WIDTH/8 -1 : 0]wstrb,

    //write respone channel
    input wire wr_valid,
    output wire wr_ready,
    input wire [1:0]wr_breap
);
// for axi transfer data and contrl signal
localparam read_request_empty = 1'b0;
localparam read_request_ready = 1'b1;
localparam read_respond_empty = 1'b0;
localparam read_respond_transfer = 1'b1;
localparam write_respond_empty = 1'b0;
localparam write_respond_transfer = 1'b1;
localparam write_request_empty = 3'b000;
localparam write_request_ready = 3'b001;
// localparam write_addr_ready = 3'b001;
// localparam write_data_ready = 3'b010;
// localparam write_all_ready = 3'b011;
// localparam write_data_transform = 3'b100;
// localparam write_data_wait = 3'b101;
// localparam write_wait_b = 3'b110;

reg read_request_state;
reg [2:0]write_request_state;
reg read_respone_state;
reg write_respone_state;

reg rid;
reg bid;

wire wait_write;
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
                end
            end
            read_request_ready: begin 
                if(rd_valid && rd_ready) begin 
                    ar_valid <= 1'b0;
                    read_request_state <= read_request_empty;
                end
            end

        endcase
        if(flush) begin read_request_state <= read_request_empty;ar_valid <= 1'b0;end
    end
end
//write respone FSM
always @(posedge aclk) begin 
    if(~reset) begin 
        write_respone_state <= write_respond_empty;
        wr_ready <= 1'b1;
    end
    else begin 

    end
end
//read respone FSM
always @(posedge aclk) begin 
    if(~reset) begin 
        read_respone_state <= read_respond_empty;
        rd_ready <= 1'b1;
    end
    else begin 
        case(read_respone_state)
            read_respond_empty: begin 
                
            end
            read_respond_transfer: begin 

            end
        endcase
    end
end


// write FSM
always @(posedge aclk) begin
    if(~reset) begin 
        write_request_state <= write_request_empty;
        aw_valid <= 1'b0;
        wd_valid <= 1'b0;
    end
    else begin 
        case(write_request_state)
            write_request_empty: begin 
                 if(data_ce && data_we) begin 
                    aw_valid <= 1'b1;
                    wd_valid <= 1'b1;
                    aw_addr <= data_addr;
                    wd_data <= data_wdata;
                    wstrb <= data_wmask;
                    write_request_state <= write_request_ready;

                    bid <= 1'b0;

                 end
                 else if(inst_ce && inst_we) begin 
                    aw_valid <= 1'b1;
                    wd_valid <= 1'b1;
                    aw_addr <= inst_addr;
                    wd_data <= inst_wdata;
                    wstrb <= inst_wmask;
                    write_request_state <= write_request_ready;

                    bid <= 1'b1;
                 end
            end
            write_request_ready: begin 
                if(wr_valid && wr_ready) begin 
                    write_request_state <= write_request_empty;
                    aw_valid <= 1'b0;
                    wd_valid <= 1'b0;
                end
                
            end
            // write_addr_ready: begin 

            // end
            // write_data_ready: begin 

            // end
            // write_all_ready: begin 

            // end
        endcase
    end
end

assign wait_write = ~(write_request_state == write_request_empty);

assign data_rdata = rd_data;
assign inst_rdata = rd_data;

assign data_rdata_valid = rd_valid & !rid & (read_request_state == read_request_ready);
assign inst_rdata_valid = rd_valid &  rid & (read_request_state == read_request_ready);

assign data_write_finish = wr_valid & !bid & (write_request_state == write_request_ready);
assign inst_write_finish = wr_valid &  bid & (write_request_state == write_request_ready);

endmodule




