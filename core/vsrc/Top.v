`include "defines.sv"
module Top (
    input wire clk,
    input wire reset
    
    // //inst interface
    // input wire [31:0]inst,
    // output wire [31:0]PC,
    // output wire pc_valid,
    // input wire inst_ready,
    // //data interface
    // input wire [31:0]rdata,
    // output wire [31:0]addr,
    // output wire [31:0]wdata,
    // output wire [3:0]wmask,
    // output wire en,
    // output wire we
);

//inst bridge
wire [31 : 0]inst_mem_addr;
        //read data
wire [31:0]inst_mem_rdata;
wire inst_mem_rdata_valid;
        //write data
wire [31:0]inst_mem_wdata;
wire [3:0]inst_mem_wmask;
wire inst_mem_write_respone;
wire inst_mem_ce;//start a read/write transport 
wire inst_mem_we;// 1'b0 is read  1'b1 is write 

    //inst interface
wire [31:0]inst;
wire [31:0]PC;
wire pc_valid;
wire inst_ready;
    //data interface
wire [31:0]rdata;
wire [31:0]addr;
wire [31:0]wdata;
wire [3:0]wmask;
wire en;
wire we;
// assign inst_ready = 1'b1;


//IF stage signal
wire [63:0] if_bus;
// wire pc_valid;
// wire inst_ready;
wire if_right_valid;
wire if_right_ready;

//ID stage signal
wire [`ctrl_width-1:0] id_bus;
wire [4:0] reg_index1;
wire [4:0] reg_index2;
wire [31:0] reg_data1;
wire [31:0] reg_data2;
wire id_right_valid;
wire id_right_ready;
wire is_break;
wire id_is_fire;

//EXE stage signal
wire [`ex_ctrl_width-1:0] ex_bus;
wire ex_right_valid;
wire ex_right_ready;
wire [`bypass_width-1:0] ex_bypass;
wire flush;
wire is_branch;
wire [31:0]dnpc;
wire exe_is_fire;

//MEM stage signal
wire [`mem_ctrl_width-1:0] mem_bus;
wire mem_right_valid;
wire mem_right_ready;
wire [`bypass_width-1:0] mem_bypass;
wire mem_is_fire;
wire rdata_valid;
wire write_finish;

//WB stage signal
wire [`mem_ctrl_width-1:0] wb_bus;
wire [`bypass_width-1:0] wb_bypass;
wire wb_is_fire;
wire wb_valid;

//difftest
reg [`mem_ctrl_width-1:0] difftest_bus;
wire difftest_inst_valid;
wire [4:0] difftest_wreg_index;
wire difftest_wreg_en;
wire [31:0] difftest_Inst;
wire [31:0] difftest_PC;
wire [31:0]difftest_result;
wire diifftest_is_break;

// from regfile
wire    [31:0]  regs[31:0];
//from bypass
wire [31:0] bypass_reg1;
wire [31:0] bypass_reg2;

//for axi mem
wire ar_valid;
wire ar_ready;
wire [31:0]ar_addr;
wire [2:0]ar_prot;

wire aw_valid;
wire aw_ready;
wire [31:0]aw_addr;
wire [2:0]aw_prot;

wire rd_valid;
wire rd_ready;
wire [31:0]rd_data;

wire wd_valid;
wire wd_ready;
wire [31:0]wd_data;
wire [3:0]wd_wmask;

wire wr_valid;
wire wr_ready;
wire [1:0]wr_breap;

//for axi mem
wire ar_valid1;
wire ar_ready1;
wire [31:0]ar_addr1;
wire [2:0]ar_prot1;

wire aw_valid1;
wire aw_ready1;
wire [31:0]aw_addr1;
wire [2:0]aw_prot1;

wire rd_valid1;
wire rd_ready1;
wire [31:0]rd_data1;

wire wd_valid1;
wire wd_ready1;
wire [31:0]wd_data1;
wire [3:0]wd_wmask1;

wire wr_valid1;
wire wr_ready1;
wire [1:0]wr_breap1;


//IF stage
IF if_stage(
    .clk(clk),
    .reset(reset),
    .PC(PC), //inst addr
    .Inst(inst),//inst
    .data_bus(if_bus),
    //branch 
    .flush(flush),
    .is_branch(is_branch),
    .dnpc(dnpc),
    //shark hand
    .pc_valid(pc_valid),//IF stage's data is ready
    .inst_ready(inst_ready),//ID stage is allowin
    .right_valid(if_right_valid),//ID stage's data is ready
    .right_ready(if_right_ready),//EXE stage is allowin
    .fire(id_is_fire)
);

ID id_stage(
    .clk(clk),//clock
    .reset(reset),//global reset
    .Inst(if_bus[31:0]),//inst from inst ram
    .PC(if_bus[63:32]),//inst addr
    //for regfile
    .reg_index1(reg_index1),//read REG index1
    .reg_index2(reg_index2),//read REG index2
    .reg_data1(bypass_reg1),
    .reg_data2(bypass_reg2),
    //flush 
    .flush(flush),
    //is_break
    .is_break(is_break),
    //ctrl flower
    .ctrl_bus(id_bus),//ctrl bus
    //shark hand
    // input wire right_fire,//right data consumed
    .left_valid(if_right_valid),//IF stage's data is ready
    .left_ready(if_right_ready),//ID stage is allowin
    .right_valid(id_right_valid),//ID stage's data is ready
    .right_ready(id_right_ready),//EXE stage is allowin
    .is_fire(id_is_fire),
    .fire(exe_is_fire)
);
bypass Bypass(
    .ex_bypass(ex_bypass),
    .mem_bypass(mem_bypass),
    .wb_bypass(wb_bypass),
    .reg1(reg_data1),
    .reg2(reg_data2),
    .index1(reg_index1),
    .index2(reg_index2),
    .bypass_reg1(bypass_reg1),
    .bypass_reg2(bypass_reg2)
);

Regfile Regfile(
    .clk(clk),// clock
    .reset(reset),
    .reg_index1(reg_index1),//reg addr1
    .reg_index2(reg_index2),//reg addr2
    .data1(reg_data1),//data out
    .data2(reg_data2),//data out
    .wreg_en(wb_bus[96:96]),//write enable
    .wdata(wb_bus[31:0]),//write data
    .wreg_index(wb_bus[101:97]),//write addr
    .rf_o(regs)
);

EXE exe_stage(
    .clk(clk),//clock
    .reset(reset),//global reset
    .id_ctrl_bus(id_bus), //ctrl flower

    .ex_ctrl_bus(ex_bus),
    //bypass
    .ex_bypass(ex_bypass),
    //mem_bypass
    .mem_bypass(mem_bypass),
    //branch
    .flush(flush),
    .is_branch(is_branch),
    .dnpc(dnpc),
    //shark hand
    .left_valid(id_right_valid),//ID stage's data is ready
    .left_ready(id_right_ready),//EX stage is allowin
    .right_valid(ex_right_valid),//EX stage's data is ready
    .right_ready(ex_right_ready),//MEM stage is allowin
    .is_fire(exe_is_fire),
    .fire(mem_is_fire)
);

MEM mem_stage(
    .clk(clk),//clock
    .reset(reset),//global reset
    //ctrl bus
    .mem_ctrl_bus(ex_bus),
    .wb_ctrl_bus(mem_bus),
    //mem interface
    .addr(addr),//read/write address
    .en(en),//read/write enable
    .wmask(wmask),
    .rdata(rdata),
    .wdata(wdata),
    .we(we),
    .rdata_valid(rdata_valid),
    .write_finish(write_finish),
    //bypass 
    .mem_bypass(mem_bypass),
    //shark hand
    .left_valid(ex_right_valid),//EX stage's data is ready
    .left_ready(ex_right_ready),//MEM stage is allowin
    .right_valid(mem_right_valid),//MEM stage's data is ready
    .right_ready(mem_right_ready),//WB stage is allowin
    .is_fire(mem_is_fire),
    .fire(wb_is_fire)
);

WB wb_syage(
    .clk(clk),//clock
    .reset(reset),//global reset
    //ctrl flower
    .mem_ctrl_bus(mem_bus),
    .wb_ctrl_bus(wb_bus),
    //bypass 
    .wb_bypass(wb_bypass),
    //shark hand
    .left_valid(mem_right_valid),//IF stage's data is ready
    .left_ready(mem_right_ready),//ID stage is allowin
    .right_valid(wb_valid),//ID stage's data is ready
    .right_ready(1'b1),//EXE stage is allowin
    .is_fire(wb_is_fire),
    .fire(1'b1)
);

ICache ICache(
    .clk(clk),
    .reset(reset),
    .flush(flush),
    
    //cpu request
    .ce(1'b1),
    .we(1'b0),
    .addr(PC),
    .rdata(inst),
    .rdata_valid(inst_ready),
    .rdata_ready(pc_valid),

    //mem request
    .mem_addr(inst_mem_addr),
        //read data
    .mem_rdata(inst_mem_rdata),
    .mem_rdata_valid(inst_mem_rdata_valid),
        //write data
    .mem_wdata(),
    .mem_wmask(),
    .mem_write_respone(),
        //control signal
    .mem_ce(inst_mem_ce),//start a read/write transport 
    .mem_we(inst_mem_we)// 1'b0 is read  1'b1 is write 
);

sram2axi4_lite birdge(
    .aclk(clk),
    .reset(~reset),//active low
    //sram port
    .flush(1'b0),
        // read request
    .inst_addr(PC),
        //read data
    .inst_rdata(inst),
    .inst_rdata_valid(),
        //write data
    .inst_wdata(32'h0),
    .inst_wmask(4'h0),
    .inst_write_finish(),
        //control signal
    .inst_ce(1'b0),//start a read/write transport 
    .inst_we(1'b0),// 1'b0 is read  1'b1 is write 

    .data_addr(addr),
        //read data
    .data_rdata(rdata),
    .data_rdata_valid(rdata_valid),
        //write data
    .data_wdata(wdata),
    .data_wmask(wmask),
    .data_write_finish(write_finish),
        //control signal
    .data_ce(en),//start a read/write transport 
    .data_we(we),// 1'b0 is read  1'b1 is write 

    //read address channel 
    .ar_valid(ar_valid),
    .ar_ready(ar_ready),
    .ar_addr(ar_addr),//read request address 
    .ar_prot(ar_prot), // Access attributes

    //write address channel
    .aw_valid(aw_valid),
    .aw_ready(aw_ready),
    .aw_addr(aw_addr),
    .aw_prot(aw_prot),
    //read data channel 
    .rd_valid(rd_valid),
    .rd_ready(rd_ready),
    .rd_data(rd_data),

    //write data channel 
    .wd_valid(wd_valid),
    .wd_ready(wd_ready),
    .wd_data(wd_data),
    .wstrb(wd_wmask),

    //write respone channel
    .wr_valid(wr_valid),
    .wr_ready(wr_ready),
    .wr_breap(wr_breap)
);

AXIMem Memory(
    .clk(clk),
    .reset(~reset),
///////////////inst channels
    .flush(1'b0),
    //read address channel 
    .ar_valid(ar_valid),
    .ar_ready(ar_ready),
    .ar_addr(ar_addr),//read request address 
    .ar_prot(ar_prot), // Access attributes

    //write address channel
    .aw_valid(aw_valid),
    .aw_ready(aw_ready),
    .aw_addr(aw_addr),
    .aw_prot(aw_prot),
    //read data channel 
    .rd_valid(rd_valid),
    .rd_ready(rd_ready),
    .rd_data(rd_data),

    //write data channel 
    .wd_valid(wd_valid),
    .wd_ready(wd_ready),
    .wd_data(wd_data),
    .wstrb(wd_wmask),

    //write respone channel
    .wr_valid(wr_valid),
    .wr_ready(wr_ready),
    .wr_breap(wr_breap)
);

sram2axi4_lite birdge1(
    .aclk(clk),
    .reset(~reset),//active low
    //sram port
    .flush(flush),
        // read request
    .inst_addr(inst_mem_addr),
        //read data
    .inst_rdata(inst_mem_rdata),
    .inst_rdata_valid(inst_mem_rdata_valid),
        //write data
    .inst_wdata(32'h0),
    .inst_wmask(4'h0),
    .inst_write_finish(),
        //control signal
    .inst_ce(inst_mem_ce),//start a read/write transport 
    .inst_we(inst_mem_we),// 1'b0 is read  1'b1 is write 

    .data_addr(addr),
        //read data
    .data_rdata(rdata),
    .data_rdata_valid(),
        //write data
    .data_wdata(wdata),
    .data_wmask(wmask),
    .data_write_finish(),
        //control signal
    .data_ce(1'b0),//start a read/write transport 
    .data_we(we),// 1'b0 is read  1'b1 is write 

    //read address channel 
    .ar_valid(ar_valid1),
    .ar_ready(ar_ready1),
    .ar_addr(ar_addr1),//read request address 
    .ar_prot(ar_prot1), // Access attributes

    //write address channel
    .aw_valid(aw_valid1),
    .aw_ready(aw_ready1),
    .aw_addr(aw_addr1),
    .aw_prot(aw_prot1),
    //read data channel 
    .rd_valid(rd_valid1),
    .rd_ready(rd_ready1),
    .rd_data(rd_data1),

    //write data channel 
    .wd_valid(wd_valid1),
    .wd_ready(wd_ready1),
    .wd_data(wd_data1),
    .wstrb(wd_wmask1),

    //write respone channel
    .wr_valid(wr_valid1),
    .wr_ready(wr_ready1),
    .wr_breap(wr_breap1)
);

AXIMem Memory1(
    .clk(clk),
    .reset(~reset),
    .flush(flush),
///////////////inst channels
    //read address channel 
    .ar_valid(ar_valid1),
    .ar_ready(ar_ready1),
    .ar_addr(ar_addr1),//read request address 
    .ar_prot(ar_prot1), // Access attributes

    //write address channel
    .aw_valid(aw_valid1),
    .aw_ready(aw_ready1),
    .aw_addr(aw_addr1),
    .aw_prot(aw_prot1),
    //read data channel 
    .rd_valid(rd_valid1),
    .rd_ready(rd_ready1),
    .rd_data(rd_data1),

    //write data channel 
    .wd_valid(wd_valid1),
    .wd_ready(wd_ready1),
    .wd_data(wd_data1),
    .wstrb(wd_wmask1),

    //write respone channel
    .wr_valid(wr_valid1),
    .wr_ready(wr_ready1),
    .wr_breap(wr_breap1)
);

// Mem IFMEM(
//     .reset(reset),
//     .clk(clk),
//     .addr(PC),
//     .we(1'b0),
//     .ce(1'b1),
//     .wdata(32'h0),
//     .rdata(inst),
//     .wmask(4'h0)
// );

// Mem MEM(
//     .reset(reset),
//     .clk(clk),
//     .addr(addr),
//     .we(we),
//     .ce(en),
//     .wdata(wdata),
//     .rdata(rdata),
//     .wmask(wmask)
// );


//delay one cycle for difftest
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        difftest_bus <= `mem_ctrl_width'h0;
    end
    else begin 
        difftest_bus <= wb_bus & {`mem_ctrl_width{wb_valid}};
    end
end
assign {     
    diifftest_is_break,//103:103
    difftest_inst_valid,//102:102
    difftest_wreg_index,//97:101
    difftest_wreg_en,//96:96
    difftest_Inst,// 64:95
    difftest_PC,// 32:63
    difftest_result// 0:31
    }=difftest_bus;
break_ Break(
    .clk(clk),
    .reset(reset),
    .is_break(diifftest_is_break)
);

DifftestInstrCommit DifftestInstrCommit(
    .clock(clk),
    .coreid(8'h0),
    .index(8'h0),
    .valid(difftest_inst_valid),
    .pc(difftest_PC),
    .instr(difftest_Inst),
    .skip(0),
    .is_TLBFILL(0),
    .TLBFILL_index(0),
    .is_CNTinst(0),
    .timer_64_value(0),
    .wen(difftest_wreg_en),
    .wdest(difftest_wreg_index),
    .wdata(difftest_result),
    .csr_rstat(0),
    .csr_data(0)
);

DifftestGRegState DifftestGRegState(
    .clock              (clk       ),
    .coreid             (0          ),
    .gpr_0              (0          ),
    .gpr_1              (regs[1]    ),
    .gpr_2              (regs[2]    ),
    .gpr_3              (regs[3]    ),
    .gpr_4              (regs[4]    ),
    .gpr_5              (regs[5]    ),
    .gpr_6              (regs[6]    ),
    .gpr_7              (regs[7]    ),
    .gpr_8              (regs[8]    ),
    .gpr_9              (regs[9]    ),
    .gpr_10             (regs[10]   ),
    .gpr_11             (regs[11]   ),
    .gpr_12             (regs[12]   ),
    .gpr_13             (regs[13]   ),
    .gpr_14             (regs[14]   ),
    .gpr_15             (regs[15]   ),
    .gpr_16             (regs[16]   ),
    .gpr_17             (regs[17]   ),
    .gpr_18             (regs[18]   ),
    .gpr_19             (regs[19]   ),
    .gpr_20             (regs[20]   ),
    .gpr_21             (regs[21]   ),
    .gpr_22             (regs[22]   ),
    .gpr_23             (regs[23]   ),
    .gpr_24             (regs[24]   ),
    .gpr_25             (regs[25]   ),
    .gpr_26             (regs[26]   ),
    .gpr_27             (regs[27]   ),
    .gpr_28             (regs[28]   ),
    .gpr_29             (regs[29]   ),
    .gpr_30             (regs[30]   ),
    .gpr_31             (regs[31]   )
);



endmodule

