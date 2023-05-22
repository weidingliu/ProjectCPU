/*
* transfer sram interface to axi_lite interface
*
*/
module sram2axi4_lite #(
    parameter BUS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CPU_WIDTH = 32
)
(
    input wire aclk,
    input wire reset,//active low
    //sram port
        // read request
    input wire [BUS_WIDTH-1 : 0]addr,
        //read data
    output wire [CPU_WIDTH-1:0]rdata,
    output wire rdata_valid,
        //write data
    input wire [CPU_WIDTH-1:0]wdata,
    input wire [CPU_WIDTH/8-1:0]wmask,
    output wire write_finish,
        //control signal
    input wire ce,//start a read/write transport 
    input wire we,// 1'b0 is read  1'b1 is write 

    //read address channel 
    output wire ar_valid,
    input wire ar_ready,
    output wire [BUS_WIDTH-1:0] ar_addr,//read request address 
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
//FSM
localparam idle = 2'b00;
localparam read = 2'b01;
localparam write = 2'b10;

reg [1:0]state;

always @(posedge aclk) begin
    if(!reset) begin 
        state <= idle;
    end
    else begin 
        case (state)
            idle: begin 
                if(ce && we && aw_ready && wd_ready) begin 
                    state <= write;
                end
                else if(ce && !we && ar_ready) begin 
                    state <= read;
                end
            end
            read: begin 
                    if(rd_valid) begin 
                        state <=idle;
                    end
            end
            write: begin 
                   if(wr_valid && wr_breap == 2'b00) begin 
                        state <= idle;
                   end
            end
            default: state <=idle;
        endcase
    end
end
//logic output

assign ar_addr = addr;
assign ar_prot = 3'b000;
assign ar_valid = ((reset == 1'b1) & ce & !we & (state == idle))? 1'b1:1'b0;

assign aw_addr = addr;
assign aw_prot = 3'b000;
assign aw_valid = ((reset == 1'b1) & ce & we & (state == idle))? 1'b1:1'b0;

assign rd_ready = (state == read)? 1'b1:1'b0;

assign wd_valid = ((reset == 1'b1) & ce & we & (state == idle))? 1'b1:1'b0;
assign wd_data = wdata;
assign wstrb = wmask;

assign wr_ready = (state == write)? 1'b1:1'b0;

assign rdata_valid = rd_valid;
assign rdata = rd_data;
assign write_finish = wr_valid & (wr_breap == 2'b00);


endmodule //sram2axi4_lite
