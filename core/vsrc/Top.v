`include "defines.sv"
module Top (
    input wire clk,
    input wire reset,
    
    //inst interface
    input wire [31:0]inst,
    output wire [31:0]PC,
    output wire pc_valid,
    input wire inst_ready,
    //data interface
    input wire [31:0]rdata,
    output wire [31:0]addr,
    output wire [31:0]wdata,
    output wire [3:0]wmask,
    output wire en
);

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

//EXE stage signal
wire [`ex_ctrl_width-1:0] ex_bus;
wire ex_right_valid;
wire ex_right_ready;

//MEM stage signal
wire [`mem_ctrl_width-1:0] mem_bus;
wire mem_right_valid;
wire mem_right_ready;

//WB stage signal
wire [`mem_ctrl_width-1:0] wb_bus;

//difftest
reg [`mem_ctrl_width-1:0] difftest_bus;
wire difftest_inst_valid;
wire [4:0] difftest_wreg_index;
wire difftest_wreg_en;
wire [31:0] difftest_Inst;
wire [31:0] difftest_PC;
wire [31:0]difftest_result;

// from regfile
wire    [31:0]  regs[31:0];


//IF stage
IF if_stage(
    .clk(clk),
    .reset(reset),
    .PC(PC), //inst addr
    .Inst(inst),//inst
    .data_bus(if_bus),
    //shark hand
    .pc_valid(pc_valid),//IF stage's data is ready
    .inst_ready(inst_ready),//ID stage is allowin
    .right_valid(if_right_valid),//ID stage's data is ready
    .right_ready(if_right_ready)//EXE stage is allowin
);

ID id_stage(
    .clk(clk),//clock
    .reset(reset),//global reset
    .Inst(if_bus[31:0]),//inst from inst ram
    .PC(if_bus[63:32]),//inst addr
    //for regfile
    .reg_index1(reg_index1),//read REG index1
    .reg_index2(reg_index2),//read REG index2
    .reg_data1(reg_data1),
    .reg_data2(reg_data2),
    //ctrl flower
    .ctrl_bus(id_bus),//ctrl bus
    //shark hand
    // input wire right_fire,//right data consumed
    .left_valid(if_right_valid),//IF stage's data is ready
    .left_ready(if_right_ready),//ID stage is allowin
    .right_valid(id_right_valid),//ID stage's data is ready
    .right_ready(id_right_ready)//EXE stage is allowin
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
    //shark hand
    .left_valid(id_right_valid),//ID stage's data is ready
    .left_ready(id_right_ready),//EX stage is allowin
    .right_valid(ex_right_valid),//EX stage's data is ready
    .right_ready(ex_right_ready)//MEM stage is allowin
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
    //shark hand
    .left_valid(ex_right_valid),//EX stage's data is ready
    .left_ready(ex_right_ready),//MEM stage is allowin
    .right_valid(mem_right_valid),//MEM stage's data is ready
    .right_ready(mem_right_ready)//WB stage is allowin
);

WB wb_syage(
    .clk(clk),//clock
    .reset(reset),//global reset
    //ctrl flower
    .mem_ctrl_bus(mem_bus),
    .wb_ctrl_bus(wb_bus),

    //shark hand
    .left_valid(mem_right_valid),//IF stage's data is ready
    .left_ready(mem_right_ready),//ID stage is allowin
    .right_valid(),//ID stage's data is ready
    .right_ready(1'b1)//EXE stage is allowin
);

//delay one cycle for difftest
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        difftest_bus <= `mem_ctrl_width'h0;
    end
    else begin 
        difftest_bus <= wb_bus;
    end
end
assign {     
    difftest_inst_valid,//102:102
    difftest_wreg_index,//97:101
    difftest_wreg_en,//96:96
    difftest_Inst,// 64:95
    difftest_PC,// 32:63
    difftest_result// 0:31
    }=difftest_bus;

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

