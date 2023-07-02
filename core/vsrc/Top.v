`include "defines.sv"
module Top #(
    localparam DATA_WIDTH = 32,
    localparam CPU_WIDTH = DATA_WIDTH * 16
 )(
    input wire clk,
    input wire reset,

    input    [ 7:0] intrpt
    
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
wire [CPU_WIDTH-1:0]inst_mem_wdata;
wire [CPU_WIDTH/8-1:0]inst_mem_wmask;
wire inst_mem_write_respone;
wire inst_mem_ce;//start a read/write transport 
wire inst_mem_we;// 1'b0 is read  1'b1 is write 
wire [2:0]inst_transfer_type;

//data bridge
wire [31 : 0]data_mem_addr;
        //read data
wire [DATA_WIDTH - 1:0]data_mem_rdata;
wire data_mem_rdata_valid;
        //write data
wire [CPU_WIDTH-1:0]data_mem_wdata;
wire [CPU_WIDTH/8-1:0]data_mem_wmask;
wire data_mem_write_respone;
wire data_mem_ce;//start a read/write transport 
wire data_mem_we;// 1'b0 is read  1'b1 is write 
wire [2:0]data_transfer_type;

    //inst interface
wire [31:0]inst;
wire [31:0]PC;
wire pc_valid;
wire inst_ready;
    //data interface
wire [31:0]rdata;
wire [31:0]addr;
wire [DATA_WIDTH-1:0]wdata;
wire [DATA_WIDTH/8-1:0]wmask;
wire en;
wire we;
// assign inst_ready = 1'b1;


//IF stage signal
wire [63:0] if_bus;
// wire pc_valid;
// wire inst_ready;
wire if_right_valid;
wire if_right_ready;
// wire [63:0] if_bus;

//inst_buffer
wire [63:0] ib_bus;
wire ib_is_fire;
wire ib_fire;

wire id_ib_valid;
wire id_ib_ready;

//ID stage signal
wire [`ctrl_width-1:0] id_bus;
wire [`id_csr_ctrl_width-1:0] id_csr_bus;
wire [`id_excp_width-1:0] id_excp_bus;
wire [4:0] reg_index1;
wire [4:0] reg_index2;
wire [31:0] reg_data1;
wire [31:0] reg_data2;
wire id_right_valid;
wire id_right_ready;
wire is_break;
wire id_is_fire;
wire [13:0] rd_csr_addr;
wire [31:0] rd_csr_data;

//EXE stage signal
wire [`ex_ctrl_width-1:0] ex_bus;
wire [`ex_excp_width-1:0]ex_excp_bus;
wire ex_right_valid;
wire ex_right_ready;
wire [`bypass_width-1:0] ex_bypass;
wire flush;
wire is_branch;
wire [31:0]dnpc;
wire exe_is_fire;
wire [`ex_csr_ctrl_width-1:0]ex_csr_bus;

//MEM stage signal
wire [`mem_ctrl_width-1:0] mem_bus;
wire [`mem_excp_width-1:0] mem_excp_bus;
wire mem_right_valid;
wire mem_right_ready;
wire [`bypass_width-1:0] mem_bypass;
wire mem_is_fire;
wire rdata_valid;
wire write_finish;
wire [`ex_csr_ctrl_width-1:0] mem_csr_bus;
wire [`ex_csr_ctrl_width-1:0]mem_csr_bypass;

//WB stage signal
wire [`mem_ctrl_width-1:0] wb_bus;
wire [`bypass_width-1:0] wb_bypass;
wire wb_is_fire;
wire wb_valid;
wire [`ex_csr_ctrl_width-1:0] wb_csr_bus;
wire excp_flush;
wire [31:0]excp_era;
wire [8:0]esubcode;
wire [5:0]ecode;
wire [`ex_csr_ctrl_width-1:0]wb_csr_bypass;
wire ertn_flush;
wire [31:0]wb_pc;

// csr
wire [31:0]eentry_out;
wire [31:0]era_out;
wire has_int;
`ifdef NEXT_SOFT_INT
wire soft_int;
`endif

    //for generate
wire [1:0] plv_out;

//difftest
reg [`mem_ctrl_width-1:0] difftest_bus;
wire difftest_inst_valid;
wire [4:0] difftest_wreg_index;
wire difftest_wreg_en;
wire [31:0] difftest_Inst;
wire [31:0] difftest_PC;
wire [31:0]difftest_result;
wire diifftest_is_break;

// for csr 
// from csr
wire    [31:0]  csr_crmd_diff_0     ;
wire    [31:0]  csr_prmd_diff_0     ;
wire    [31:0]  csr_ectl_diff_0     ;
wire    [31:0]  csr_estat_diff_0    ;
wire    [31:0]  csr_era_diff_0      ;
wire    [31:0]  csr_badv_diff_0     ;
wire	[31:0]  csr_eentry_diff_0   ;
wire 	[31:0]  csr_tlbidx_diff_0   ;
wire 	[31:0]  csr_tlbehi_diff_0   ;
wire 	[31:0]  csr_tlbelo0_diff_0  ;
wire 	[31:0]  csr_tlbelo1_diff_0  ;
wire 	[31:0]  csr_asid_diff_0     ;
wire 	[31:0]  csr_save0_diff_0    ;
wire 	[31:0]  csr_save1_diff_0    ;
wire 	[31:0]  csr_save2_diff_0    ;
wire 	[31:0]  csr_save3_diff_0    ;
wire 	[31:0]  csr_tid_diff_0      ;
wire 	[31:0]  csr_tcfg_diff_0     ;
wire 	[31:0]  csr_tval_diff_0     ;
wire 	[31:0]  csr_ticlr_diff_0    ;
wire 	[31:0]  csr_llbctl_diff_0   ;
wire 	[31:0]  csr_tlbrentry_diff_0;
wire 	[31:0]  csr_dmw0_diff_0     ;
wire 	[31:0]  csr_dmw1_diff_0     ;
wire 	[31:0]  csr_pgdl_diff_0     ;
wire 	[31:0]  csr_pgdh_diff_0     ;

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
wire [1:0]ar_burst;
wire [1:0]ar_lock;
wire [3:0]ar_cache;
wire [3:0]ar_id;
wire [7:0] ar_len;
wire [2:0] ar_size;

wire aw_valid;
wire aw_ready;
wire [31:0]aw_addr;
wire [2:0]aw_prot;
wire [1:0]aw_burst;
wire [1:0]aw_lock;
wire [3:0]aw_cache;
wire [3:0]aw_id;
wire [7:0] aw_len;
wire [2:0] aw_size;

wire rd_valid;
wire rd_ready;
wire [31:0]rd_data;
wire [1:0] rd_resp;
wire rd_last;
wire [3:0] rd_id;

wire wd_valid;
wire wd_ready;
wire [31:0]wd_data;
wire [3:0]wd_wmask;
wire wd_last;
wire [3:0]wd_id;

wire wr_valid;
wire wr_ready;
wire [1:0]wr_breap;
wire [3:0]wr_id;


//IF stage
IF if_stage(
    .clk(clk),
    .reset(reset),
    .PC(PC), //inst addr
    .Inst(inst),//inst
    .data_bus(if_bus),
    //excp 
    .excp_flush(excp_flush),
    .ertn_flush(ertn_flush),
    .eentry(eentry_out),
    .era(era_out),
    //branch 
    .flush(flush),
    .is_branch(is_branch),
    .dnpc(dnpc),
    //shark hand
    .pc_valid(pc_valid),//IF stage's data is ready
    .inst_ready(inst_ready),//ID stage is allowin
    .right_valid(if_right_valid),//ID stage's data is ready
    .right_ready(if_right_ready),//EXE stage is allowin
    .fire(ib_is_fire)
);

fetch_buffer fetch_buff(
    .clk(clk),
    .reset(reset),
    .flush(flush),
    //excption
    .excp_flush(excp_flush),
    .ertn_flush(ertn_flush),
    //inst
    .bus_i(if_bus),

    .bus_o(ib_bus),

    //handshark
    .left_valid(if_right_valid),
    .left_ready(if_right_ready),

    .right_valid(id_ib_valid),
    .right_ready(id_ib_ready),
    .fire(id_is_fire),
    .is_fire(ib_is_fire)
);

ID id_stage(
    .clk(clk),//clock
    .reset(reset),//global reset
    .Inst(ib_bus[31:0]),//inst from inst ram
    .PC(ib_bus[63:32]),//inst addr
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
    //csr
    .id_csr_ctrl(id_csr_bus),
    .rd_csr_addr(rd_csr_addr),
    .rd_csr_data(rd_csr_data),
    .has_int(has_int),
    //excp
    .id_excp_bus(id_excp_bus),
    .excp_flush(excp_flush),
    .ertn_flush(ertn_flush),
    .plv(plv_out),
    //shark hand
    // input wire right_fire,//right data consumed
    .left_valid(id_ib_valid),//IF stage's data is ready
    .left_ready(id_ib_ready),//ID stage is allowin
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
    .wreg_en(wb_bus[96:96] & wb_valid),//write enable
    .wdata(wb_bus[31:0]),//write data
    .wreg_index(wb_bus[101:97]),//write addr
    .rf_o(regs)
);

EXE exe_stage(
    .clk(clk),//clock
    .reset(reset),//global reset
    .id_ctrl_bus(id_bus), //ctrl flower

    .ex_ctrl_bus(ex_bus),
    //csr bus
    .id_csr_ctrl_bus(id_csr_bus),
    .ex_csr_ctrl_bus(ex_csr_bus),
    //excp
    .id_excp_bus(id_excp_bus),
    .ex_excp_bus(ex_excp_bus),
    .excp_flush(excp_flush),
    .ertn_flush(ertn_flush),
    //bypass
    .ex_bypass(ex_bypass),
    //mem_bypass
    .mem_bypass(mem_bypass),
    //csr bypass
    .mem_csr_bypass(mem_csr_bypass),
    .wb_csr_bypass(wb_csr_bypass),
    `ifdef NEXT_SOFT_INT
    .soft_int(soft_int),
    `endif

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
    //csr bus 
    .mem_csr_bus(ex_csr_bus),
    .wb_csr_bus(mem_csr_bus),
    //excp 
    .ex_excp_bus(ex_excp_bus),
    .mem_excp_bus(mem_excp_bus),
    .excp_flush(excp_flush),
    .ertn_flush(ertn_flush),
    //mem interface
    .addr(addr),//read/write address
    .en(en),//read/write enable
    .wmask(wmask),
    .rdata(rdata),
    .wdata(wdata),
    .we(we),
    .rdata_valid(rdata_valid),
    .write_finish(write_finish),
    `ifdef NEXT_SOFT_INT
    .soft_int(soft_int),
    `endif
    //bypass 
    .mem_bypass(mem_bypass),
    .mem_csr_bypass(mem_csr_bypass),
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
    //csr bus 
    .mem_csr_bus(mem_csr_bus),
    .wb_csr_bus(wb_csr_bus),
    //excp
    .mem_excp_bus(mem_excp_bus),
    .excp_flush(excp_flush),
    .ertn_flush(ertn_flush),
    .excp_era(excp_era),
    .esubcode(esubcode),
    .ecode(ecode),
    .pc(wb_pc),
    `ifdef NEXT_SOFT_INT
    .soft_int(soft_int),
    `endif

    //bypass 
    .wb_bypass(wb_bypass),
    .wb_csr_bypass(wb_csr_bypass),
    //shark hand
    .left_valid(mem_right_valid),//IF stage's data is ready
    .left_ready(mem_right_ready),//ID stage is allowin
    .right_valid(wb_valid),//ID stage's data is ready
    .right_ready(1'b1),//EXE stage is allowin
    .is_fire(wb_is_fire),
    .fire(1'b1)
);

CSR CSR(
    .clk(clk),
    .reset(reset),
    //read bus
    .csr_raddr(rd_csr_addr),
    .csr_rdata(rd_csr_data),
    //write bus
    .csr_wr_en(wb_csr_bus[46:46]),
    .csr_waddr(wb_csr_bus[45:32]),
    .csr_wdata(wb_csr_bus[31:0]),

    //excp
    .excp_flush(excp_flush),
    .era_in(excp_era),
    .ecode_in(ecode),
    .esubcode_in(esubcode),
    .ertn_flush(ertn_flush),
    .pc(wb_pc),
    //for if
    .eentry_out(eentry_out),
    .era_out(era_out),

    //for generate
    .plv_out(plv_out),

    //interrupt
    .interrupt(intrpt),
    .has_int(has_int),
    `ifdef NEXT_SOFT_INT
    .soft_int(soft_int),
    `endif

    // csr regs for diff
    .csr_crmd_diff      (csr_crmd_diff_0    ),
    .csr_prmd_diff      (csr_prmd_diff_0    ),
    .csr_ectl_diff      (csr_ectl_diff_0    ),
    .csr_estat_diff     (csr_estat_diff_0   ),
    .csr_era_diff       (csr_era_diff_0     ),
    .csr_badv_diff      (csr_badv_diff_0    ),
    .csr_eentry_diff    (csr_eentry_diff_0  ),
    .csr_tlbidx_diff    (csr_tlbidx_diff_0  ),
    .csr_tlbehi_diff    (csr_tlbehi_diff_0  ),
    .csr_tlbelo0_diff   (csr_tlbelo0_diff_0 ),
    .csr_tlbelo1_diff   (csr_tlbelo1_diff_0 ),
    .csr_asid_diff      (csr_asid_diff_0    ),
    .csr_save0_diff     (csr_save0_diff_0   ),
    .csr_save1_diff     (csr_save1_diff_0   ),
    .csr_save2_diff     (csr_save2_diff_0   ),
    .csr_save3_diff     (csr_save3_diff_0   ),
    .csr_tid_diff       (csr_tid_diff_0     ),
    .csr_tcfg_diff      (csr_tcfg_diff_0    ),
    .csr_tval_diff      (csr_tval_diff_0    ),
    .csr_ticlr_diff     (csr_ticlr_diff_0   ),
    .csr_llbctl_diff    (csr_llbctl_diff_0  ),
    .csr_tlbrentry_diff (csr_tlbrentry_diff_0),
    .csr_dmw0_diff      (csr_dmw0_diff_0    ),
    .csr_dmw1_diff      (csr_dmw1_diff_0    ),
    .csr_pgdl_diff      (csr_pgdl_diff_0    ),
    .csr_pgdh_diff      (csr_pgdh_diff_0    )

);

ICache #(.Cache_line_wordnum(CPU_WIDTH/DATA_WIDTH))ICache(
    .clk(clk),
    .reset(reset),
    .flush((flush || excp_flush || ertn_flush)),
    
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
    .data_transform_type(inst_transfer_type),
        //control signal
    .mem_ce(inst_mem_ce),//start a read/write transport 
    .mem_we(inst_mem_we)// 1'b0 is read  1'b1 is write 
);
DCache #(.Cache_line_wordnum(CPU_WIDTH/DATA_WIDTH))DCache(
    .clk(clk),
    .reset(reset),
    .flush(1'b0),
    
    //cpu request
    .ce(en),
    .we(we),
    .addr(addr),
    .rdata(rdata),
    .rdata_valid(rdata_valid),
    .rdata_ready(1'b1),
    .wdata(wdata),
    .wmask(wmask),
    .write_respone(write_finish),
    //mem request
    .mem_addr(data_mem_addr),
        //read data
    .mem_rdata(data_mem_rdata),
    .mem_rdata_valid(data_mem_rdata_valid),
        //write data
    .mem_wdata(data_mem_wdata),
    .mem_wmask(data_mem_wmask),
    .mem_write_respone(data_mem_write_respone),
        //control signal
    .data_transform_type(data_transfer_type),
    .mem_ce(data_mem_ce),//start a read/write transport 
    .mem_we(data_mem_we)// 1'b0 is read  1'b1 is write 
);

// sram2axi4_lite birdge(
//     .aclk(clk),
//     .reset(~reset),//active low
//     //sram port
//     //sram port
//     .flush(1'b0),
//         // read request
//     .inst_addr(inst_mem_addr),
//         //read data
//     .inst_rdata(inst_mem_rdata),
//     .inst_rdata_valid(inst_mem_rdata_valid),
//         //write data
//     .inst_wdata(32'h0),
//     .inst_wmask(4'h0),
//     .inst_write_finish(),
//         //control signal
//     .inst_ce(inst_mem_ce),//start a read/write transport 
//     .inst_we(inst_mem_we),// 1'b0 is read  1'b1 is write 

//     .data_addr(data_mem_addr),
//         //read data
//     .data_rdata(data_mem_rdata),
//     .data_rdata_valid(data_mem_rdata_valid),
//         //write data
//     .data_wdata(data_mem_wdata),
//     .data_wmask(data_mem_wmask),
//     .data_write_finish(data_mem_write_respone),
//         //control signal
//     .data_ce(data_mem_ce),//start a read/write transport 
//     .data_we(data_mem_we),// 1'b0 is read  1'b1 is write 

//     //read address channel 
//     .ar_valid(ar_valid),
//     .ar_ready(ar_ready),
//     .ar_addr(ar_addr),//read request address 
//     .ar_prot(ar_prot), // Access attributes

//     //write address channel
//     .aw_valid(aw_valid),
//     .aw_ready(aw_ready),
//     .aw_addr(aw_addr),
//     .aw_prot(aw_prot),
//     //read data channel 
//     .rd_valid(rd_valid),
//     .rd_ready(rd_ready),
//     .rd_data(rd_data),

//     //write data channel 
//     .wd_valid(wd_valid),
//     .wd_ready(wd_ready),
//     .wd_data(wd_data),
//     .wstrb(wd_wmask),

//     //write respone channel
//     .wr_valid(wr_valid),
//     .wr_ready(wr_ready),
//     .wr_breap(wr_breap)
// );
axi4_full_interface#(.BUS_WIDTH(32),.DATA_WIDTH(DATA_WIDTH),.CPU_WIDTH(CPU_WIDTH)) bridge (
    .aclk(clk),
    .reset(~reset),//active low
    //sram port
        // read request
    .inst_addr(inst_mem_addr),
        //read data
    .inst_rdata(inst_mem_rdata),
    .inst_rdata_valid(inst_mem_rdata_valid),
        //write data
    .inst_wdata({CPU_WIDTH{1'b0}}),
    .inst_wmask({(CPU_WIDTH/8){1'b0}}),
    .inst_write_finish(),
        //control signal
    .inst_ce(inst_mem_ce),//start a read/write transport 
    .inst_we(inst_mem_we),// 1'b0 is read  1'b1 is write 
    .inst_transfer_type(inst_transfer_type),

    .data_addr(data_mem_addr),
        //read data
    .data_rdata(data_mem_rdata),
    .data_rdata_valid(data_mem_rdata_valid),
        //write data
    .data_wdata(data_mem_wdata),
    .data_wmask(data_mem_wmask),
    .data_write_finish(data_mem_write_respone),
        //control signal
    .data_ce(data_mem_ce),//start a read/write transport 
    .data_we(data_mem_we),// 1'b0 is read  1'b1 is write 
    .data_transfer_type(data_transfer_type),

    //read address channel 
    .ar_valid(ar_valid),
    .ar_ready(ar_ready),
    .ar_addr(ar_addr),//read request address 
    .ar_prot(ar_prot), // Access attributes
    .ar_id(ar_id),
    .ar_len(ar_len),
    .ar_size(ar_size),
    .ar_burst(ar_burst),
    .ar_lock(ar_lock),
    .ar_cache(ar_cache),

    //write address channel
    .aw_valid(aw_valid),
    .aw_ready(aw_ready),
    .aw_addr(aw_addr),
    .aw_prot(aw_prot),
    .aw_id(aw_id),
    .aw_len(aw_len),
    .aw_size(aw_size),
    .aw_burst(aw_burst),
    .aw_lock(aw_lock),
    .aw_cache(aw_cache),
    //read data channel 
    .rd_valid(rd_valid),
    .rd_ready(rd_ready),
    .rd_data(rd_data),
    .rd_id(rd_id),
    .rd_resp(rd_resp),
    .rd_last(rd_last),

    //write data channel 
    .wd_valid(wd_valid),
    .wd_ready(wd_ready),
    .wd_data(wd_data),
    .wstrb(wd_wmask),
    .wd_id(wd_id),
    .wd_last(wd_last),

    //write respone channel
    .wr_valid(wr_valid),
    .wr_ready(wr_ready),
    .wr_breap(wr_breap),
    .wr_id(wr_id)
);

// AXIMem Memory(
//     .clk(clk),
//     .reset(~reset),
//     //read address channel 
//     .ar_valid(ar_valid),
//     .ar_ready(ar_ready),
//     .ar_addr(ar_addr),//read request address 
//     .ar_prot(ar_prot), // Access attributes

//     //write address channel
//     .aw_valid(aw_valid),
//     .aw_ready(aw_ready),
//     .aw_addr(aw_addr),
//     .aw_prot(aw_prot),
//     //read data channel 
//     .rd_valid(rd_valid),
//     .rd_ready(rd_ready),
//     .rd_data(rd_data),

//     //write data channel 
//     .wd_valid(wd_valid),
//     .wd_ready(wd_ready),
//     .wd_data(wd_data),
//     .wstrb(wd_wmask),

//     //write respone channel
//     .wr_valid(wr_valid),
//     .wr_ready(wr_ready),
//     .wr_breap(wr_breap)
// );


AXI_FULL_Mem#(.BUS_WIDTH(32),.DATA_WIDTH(DATA_WIDTH)) Memory(
    .clk(clk),
    .reset(~reset),
    //read address channel 
    .ar_valid(ar_valid),
    .ar_ready(ar_ready),
    .ar_addr(ar_addr),//read request address 
    .ar_prot(ar_prot), // Access attributes
    .ar_id(ar_id),
    .ar_len(ar_len),
    .ar_size(ar_size),
    .ar_burst(ar_burst),
    .ar_lock(ar_lock),
    .ar_cache(ar_cache),

    //write address channel
    .aw_valid(aw_valid),
    .aw_ready(aw_ready),
    .aw_addr(aw_addr),
    .aw_prot(aw_prot),
    .aw_id(aw_id),
    .aw_len(aw_len),
    .aw_size(aw_size),
    .aw_burst(aw_burst),
    .aw_lock(aw_lock),
    .aw_cache(aw_cache),
    //read data channel 
    .rd_valid(rd_valid),
    .rd_ready(rd_ready),
    .rd_data(rd_data),
    .rd_id(rd_id),
    .rd_resp(rd_resp),
    .rd_last(rd_last),

    //write data channel 
    .wd_valid(wd_valid),
    .wd_ready(wd_ready),
    .wd_data(wd_data),
    .wstrb(wd_wmask),
    .wd_id(wd_id),
    .wd_last(wd_last),

    //write respone channel
    .wr_valid(wr_valid),
    .wr_ready(wr_ready),
    .wr_breap(wr_breap),
    .wr_id(wr_id)
);



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

DifftestCSRRegState DifftestCSRRegState(
    .clock              (clk               ),
    .coreid             (0                  ),
    .crmd               (csr_crmd_diff_0    ),
    .prmd               (csr_prmd_diff_0    ),
    .euen               (0                  ),
    .ecfg               (csr_ectl_diff_0    ),
    .estat              (csr_estat_diff_0   ),
    .era                (csr_era_diff_0     ),
    .badv               (csr_badv_diff_0    ),
    .eentry             (csr_eentry_diff_0  ),
    .tlbidx             (csr_tlbidx_diff_0  ),
    .tlbehi             (csr_tlbehi_diff_0  ),
    .tlbelo0            (csr_tlbelo0_diff_0 ),
    .tlbelo1            (csr_tlbelo1_diff_0 ),
    .asid               (csr_asid_diff_0    ),
    .pgdl               (csr_pgdl_diff_0    ),
    .pgdh               (csr_pgdh_diff_0    ),
    .save0              (csr_save0_diff_0   ),
    .save1              (csr_save1_diff_0   ),
    .save2              (csr_save2_diff_0   ),
    .save3              (csr_save3_diff_0   ),
    .tid                (csr_tid_diff_0     ),
    .tcfg               (csr_tcfg_diff_0    ),
    .tval               (csr_tval_diff_0    ),
    .ticlr              (csr_ticlr_diff_0   ),
    .llbctl             (csr_llbctl_diff_0  ),
    .tlbrentry          (csr_tlbrentry_diff_0),
    .dmw0               (csr_dmw0_diff_0    ),
    .dmw1               (csr_dmw1_diff_0    )
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

