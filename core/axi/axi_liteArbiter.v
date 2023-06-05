/*
* This module is used to select axi ports from LSU and IFU,
* and is implemented using priority arbitration. LSUs have higher priority for memory access requests.
*
*
* use a register to save arbiter result for write respone channel and read data channel.
*/

module axi_liteArbiter #(
    parameter BUS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CPU_WIDTH = 32
)(
    input wire clk,
    input wire reset,
///////////////inst channels
    //read address channel 
    input wire inst_ar_valid,
    output wire inst_ar_ready,
    input wire [BUS_WIDTH-1:0] inst_ar_addr,//read request address 
    input wire [2:0]inst_ar_prot, // Access attributes

    //write address channel
    input wire inst_aw_valid,
    output wire inst_aw_ready,
    input wire [BUS_WIDTH-1:0] inst_aw_addr,
    input wire [2:0]inst_aw_prot,
    //read data channel 
    output wire inst_rd_valid,
    input wire inst_rd_ready,
    output wire [DATA_WIDTH-1:0] inst_rd_data,

    //write data channel 
    input wire inst_wd_valid,
    output wire inst_wd_ready,
    input wire [DATA_WIDTH-1:0] inst_wd_data,
    input wire [DATA_WIDTH/8 -1 : 0]inst_wstrb,

    //write respone channel
    output wire inst_wr_valid,
    input wire inst_wr_ready,
    output wire [1:0]inst_wr_breap,

/////////////data channels
     //read address channel 
    input wire mem_ar_valid,
    output wire mem_ar_ready,
    input wire [BUS_WIDTH-1:0] mem_ar_addr,//read request address 
    input wire [2:0]mem_ar_prot, // Access attributes

    //write address channel
    input wire mem_aw_valid,
    output wire mem_aw_ready,
    input wire [BUS_WIDTH-1:0] mem_aw_addr,
    input wire [2:0]mem_aw_prot,
    //read data channel 
    output wire mem_rd_valid,
    input wire mem_rd_ready,
    output wire [DATA_WIDTH-1:0] mem_rd_data,

    //write data channel 
    input wire mem_wd_valid,
    output wire mem_wd_ready,
    input wire [DATA_WIDTH-1:0] mem_wd_data,
    input wire [DATA_WIDTH/8 -1 : 0]mem_wstrb,

    //write respone channel
    output wire mem_wr_valid,
    input wire mem_wr_ready,
    output wire [1:0]mem_wr_breap,
    
 /////////// //output port
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
localparam idle = 2'b00;
localparam busy = 2'b01;


reg [1:0]arbiter_mar;
reg [1:0]arbiter_mar_reg;
reg [1:0]state;
//Priority arbiter
always @(*) begin 
    if(!reset) begin 
        arbiter_mar = 2'b00;
    end
    else if(mem_ar_valid) begin 
        arbiter_mar = 2'b01;
    end
    else if(inst_ar_valid) begin 
        arbiter_mar = 2'b10;
    end
    else arbiter_mar = 2'b00;
end
// save arbiter for data transport
always @(posedge clk) begin
    if(!reset) begin 
        arbiter_mar_reg <= 2'b00;
    end
    else begin 
        arbiter_mar_reg <= arbiter_mar;
    end
end

always @(posedge clk) begin
    if(!reset) begin 
        state <= idle;
    end
    else begin 
        case(state) 
            idle: begin 
                if(arbiter_mar[0] | arbiter_mar[1]) begin 
                    state <= busy;
                end
            end
            busy: begin 
                if(rd_valid || wr_valid) state <= idle;
            end
            default: state <= idle;

        endcase
    end
end

    //read address channel 
    assign ar_valid = (arbiter_mar[0])? mem_ar_valid: (arbiter_mar[1])? inst_ar_valid:1'b0;

    assign inst_ar_ready = (arbiter_mar[1]) & ar_ready;
    assign mem_ar_ready = (arbiter_mar[0]) & ar_ready;

    assign ar_addr = (arbiter_mar[0])? mem_ar_addr: (arbiter_mar[1])? inst_ar_addr:'h0;//read request address 
    assign ar_prot = (arbiter_mar[0])? mem_ar_prot: (arbiter_mar[1])? inst_ar_prot:2'b0; // Access attributes

    //write address channel
    assign aw_valid = (arbiter_mar[0])? mem_aw_valid: (arbiter_mar[1])? inst_aw_valid:1'b0;

    assign inst_aw_ready = (arbiter_mar[1]) & aw_ready;
    assign mem_aw_ready = (arbiter_mar[0]) & aw_ready;

    assign aw_addr = (arbiter_mar[0])? mem_aw_addr: (arbiter_mar[1])? inst_aw_addr:'h0;
    assign aw_prot = (arbiter_mar[0])? mem_aw_prot: (arbiter_mar[1])? inst_aw_prot:2'b0;
    
    //read data channel 
    assign inst_rd_valid = (arbiter_mar_reg[1]) & rd_valid;
    assign mem_rd_valid = (arbiter_mar_reg[0]) & rd_valid;

    assign rd_ready = (arbiter_mar_reg[0])? mem_rd_ready: (arbiter_mar_reg[1])? inst_rd_ready:1'b1;
    
    assign inst_rd_data = {DATA_WIDTH{(arbiter_mar_reg[1])}} & rd_data;
    assign mem_rd_data = {DATA_WIDTH{(arbiter_mar_reg[0])}} & rd_data;

    //write data channel 
    assign wd_valid = (arbiter_mar[0])? mem_ar_valid: (arbiter_mar[1])? inst_ar_valid:1'b0;

    assign inst_wd_ready = arbiter_mar[1] & wd_ready;
    assign mem_wd_ready = arbiter_mar[0] & wd_ready;

    assign wd_data = (arbiter_mar[0])? mem_wd_data: (arbiter_mar[1])? inst_wd_data:'h0;
    assign wstrb = (arbiter_mar[0])? mem_wstrb: (arbiter_mar[1])? inst_wstrb:'h0;

    //write respone channel
    assign inst_wr_valid = arbiter_mar_reg[1] & wr_valid;
    assign mem_wr_valid = arbiter_mar_reg[0] & wr_valid;

    assign wr_ready =  (arbiter_mar_reg[0])? mem_wr_ready: (arbiter_mar_reg[1])? inst_wr_ready:1'b1;

    assign inst_wr_breap = {2{arbiter_mar_reg[1]}} & wr_breap;
    assign mem_wr_breap = {2{arbiter_mar_reg[0]}} & wr_breap;



endmodule //axi_liteArbiter

