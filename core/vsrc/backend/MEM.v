`include "defines.sv"
module MEM (
    input wire clk,//clock
    input wire reset,//global reset
    input wire excp_flush,
    input wire ertn_flush,
    input wire stall,
    //ctrl bus
    input wire [`ex_ctrl_width-1:0] mem_ctrl_bus,
    output wire [`mem_ctrl_width-1:0] wb_ctrl_bus,

        //csr
    input wire [`ex_csr_ctrl_width-1:0] mem_csr_bus,
    output wire [`ex_csr_ctrl_width-1:0] wb_csr_bus,
    //excp 
    input wire [`ex_excp_width-1:0]ex_excp_bus,
    output wire [`mem_excp_width-1:0]mem_excp_bus,
    // is tlb rd
    output wire is_tlbhazard,

    //cacop 
    output wire inst_cacop_en,
    output wire data_cacop_en,
    output wire [1:0]cacop_mod,
    input wire cacop_finish,
    //for difftest
    input wire [31:0]paddr,

    //mem interface
    output wire [31:0]addr,//read/write address
    output wire en,//mem enable
    output wire [3:0]wmask,
    input wire [31:0]rdata,
    output wire [31:0]wdata,
    output wire we,//read/write enable
    input wire rdata_valid,
    input wire write_finish,
    // for data trans 
    output wire mem_load,
    output wire mem_store,
    output wire mem_halfword,
    output wire mem_word,
    input wire excp_i,
    input wire [6:0]excp_num_i,
    //for tlbsrch
    output wire data_tlbserch_en,
    input wire [4:0]data_tlbindex,
    input wire data_tlbfound,
    input wire serch_finish,
    //for csr llbit
    // output wire llbit_out,
    // output wire llbit_set_en,
    input wire llbit_in,

    //bypass
    output wire [`bypass_width-1:0]mem_bypass,
    output wire [`ex_csr_ctrl_width-1:0]mem_csr_bypass,
    //shark hand
    input wire left_valid,//IF stage's data is ready
    output wire left_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready,//EXE stage is allowin
    output wire is_fire,
    input wire fire
    `ifdef NEXT_SOFT_INT
    ,
    input wire soft_int
    `endif 
);
//shark hands
// wire right_fire;
//excp 

reg [`mem_excp_width-1:0]excp_temp;

reg valid;
wire logic_valid;
//bus REG
reg [`mem_ctrl_width-1:0] bus_temp;//
reg [`ex_csr_ctrl_width-1:0] csr_bus_temp;
//decompone bus
wire [31:0]mem_result;
wire [13:0]alu_op;
wire inst_valid;
wire [31:0]Imm;
wire [31:0]PC;
wire [31:0]Inst;
wire [4:0]wreg_index;
wire wreg_en;
wire [31:0]src1;
wire [31:0]src2;
wire [31:0]alu_result;
wire [5:0] op_mem;
wire is_break;
wire is_llbit;
// wire Inst_valid;
wire timer_inst;
wire [63:0]timer64;

wire llbit_out;
wire llbit_set_en;
wire is_cacop;

// tlb 
wire [4:0]tlb_op;
wire tlbinv_en;
wire [4:0]tlbinv_op;
wire [9:0]tlbinv_asid;
wire [18:0]tlbinv_vpn;

wire [31:0] byte_temp;
wire [31:0] half_temp;

wire [31:0] byte_load;
wire [31:0]half_load;

wire [3:0] byte_wmask;
wire [3:0] half_wmask;

// difftest 
wire [7:0]inst_st_en;
wire [31:0]inst_st_vaddr;
wire [31:0]inst_st_paddr;
wire [31:0]inst_st_data;
wire [7:0]inst_ld_en;
assign inst_st_en = {4'b0,(op_mem[2] & is_llbit & llbit_in),op_mem[2] & op_mem[3],op_mem[2] & op_mem[4],op_mem[2] & op_mem[5]} ;
assign inst_st_vaddr = addr;
assign inst_st_paddr = paddr;
assign inst_st_data = {{8{wmask[3]}},{8{wmask[2]}},{8{wmask[1]}},{8{wmask[0]}}} & wdata;
assign inst_ld_en = {2'b0,op_mem[0] & !op_mem[2] & is_llbit, op_mem[0] & !op_mem[2] & op_mem[3] & !is_llbit,op_mem[0] & !op_mem[2] & op_mem[4] & op_mem[1],
op_mem[0] & !op_mem[2] & op_mem[4] & !op_mem[1],op_mem[0] & !op_mem[2] & op_mem[5] & op_mem[1],op_mem[0] & !op_mem[2] & op_mem[5] & !op_mem[1]};

assign {
    is_llbit,//326:326
    is_cacop,//325:325
    tlb_op,//320:324
    tlbinv_en,//319:319
    tlbinv_op,//314:318
    tlbinv_asid,//304:313
    tlbinv_vpn,//285:303
    timer_inst,// 284:284
    timer64,// 220:283
    is_break,//219:219
    op_mem,//213:218
    alu_op,//199:212
    inst_valid,//198:198
    Imm,//166:197
    PC,//134:165
    Inst,//102:133
    wreg_index,//97:101
    wreg_en,//96:96
    src2,// 64:95
    src1,// 32:63
    alu_result// 0:31
}=mem_ctrl_bus;
// is tlbrd tlbserch
assign is_tlbhazard = (tlb_op[4] | tlb_op[2]) & left_valid;

// assign Inst_valid = left_valid ? inst_valid:1'b0;
// byte store wdata and wmask
assign byte_temp = (
    ({32{~alu_result[1] & ~alu_result[0]}} & {24'h0,src2[7:0]}) |
    ({32{~alu_result[1] &  alu_result[0]}} & {16'h0,src2[7:0],8'h0}) |
    ({32{ alu_result[1] & ~alu_result[0]}} & {8'h0,src2[7:0],16'h0}) |
    ({32{ alu_result[1] &  alu_result[0]}} & {src2[7:0],24'h0}) 
);
assign byte_wmask = (
    ({4{~alu_result[1] & ~alu_result[0]}} & 4'b0001) |
    ({4{~alu_result[1] &  alu_result[0]}} & 4'b0010) |
    ({4{ alu_result[1] & ~alu_result[0]}} & 4'b0100) |
    ({4{ alu_result[1] &  alu_result[0]}} & 4'b1000) 
);
// half store wdata nad wmask
assign half_temp = (
    ({32{~alu_result[1]}} & {16'h0,src2[15:0]}) |
    ({32{ alu_result[1]}} & {src2[15:0],16'h0}) 
);
assign half_wmask = (
    ({4{~alu_result[1]}} & 4'b0011) |
    ({4{ alu_result[1]}} & 4'b1100) 
);

/*
*    op_mem[0] is mem inst
*    op_mem[1] is usignal extend
*    op_mem[2] 1'b0 is load ,1'b1 is store
*    op_mem[3] is word mem inst 
*    op_mem[4] is half mem inst
*    op_mem[5] is byte mem inst
*/

//byte loade 
assign byte_load = (
    ({32{~alu_result[1] & ~alu_result[0]}} & (({24'h0,rdata[7:0]}   & {32{op_mem[1]}}) | ({{24{rdata[7]}},rdata[7:0]}    & {32{~op_mem[1]}}))) | 
    ({32{~alu_result[1] &  alu_result[0]}} & (({24'h0,rdata[15:8]}  & {32{op_mem[1]}}) | ({{24{rdata[15]}},rdata[15:8]}  & {32{~op_mem[1]}}))) | 
    ({32{ alu_result[1] & ~alu_result[0]}} & (({24'h0,rdata[23:16]} & {32{op_mem[1]}}) | ({{24{rdata[23]}},rdata[23:16]} & {32{~op_mem[1]}}))) |
    ({32{ alu_result[1] &  alu_result[0]}} & (({24'h0,rdata[31:24]} & {32{op_mem[1]}}) | ({{24{rdata[31]}},rdata[31:24]} & {32{~op_mem[1]}})))
);
assign half_load = (
    ({32{~alu_result[1]}} & (({16'h0,rdata[15:0]}   & {32{op_mem[1]}}) | ({{16{rdata[15]}},rdata[15:0]}    & {32{~op_mem[1]}}))) |
    ({32{alu_result[1]}} & (({16'h0,rdata[31:16]}   & {32{op_mem[1]}}) | ({{16{rdata[31]}},rdata[31:16]}    & {32{~op_mem[1]}})))
);
// for addr teanslate
assign mem_load = op_mem[0] & !op_mem[2];
assign mem_store = op_mem[0] & op_mem[2];
assign mem_halfword = op_mem[0] & op_mem[4];
assign mem_word = op_mem[0] & op_mem[3];
//for llbit
assign llbit_out = op_mem[0] & !op_mem[2] & is_llbit;
assign llbit_set_en = op_mem[0] & !op_mem[2] & is_llbit & left_valid & !excp_flush & !stall;

//for sram
assign en = ((op_mem[0]) | ((inst_cacop_en | data_cacop_en) & !cacop_finish)) & left_valid & !excp_flush & !stall & !(op_mem[0] & op_mem[2] & is_llbit & !llbit_in);
assign we = op_mem[2] & !is_llbit | op_mem[2] & is_llbit & llbit_in;
assign addr = alu_result;
assign wdata = op_mem[3] ? src2:
               op_mem[5] ? byte_temp:half_temp;
assign wmask = op_mem[3] ? 4'b1111:
               op_mem[5] ? byte_wmask:half_wmask;
// always @(*) begin
//     $display("%h-------%h-\n",addr,en);
// end
//mux mem result
assign mem_result=(op_mem[0] & op_mem[2] & is_llbit)? {31'h0,llbit_in}:
                  (op_mem[0] & !op_mem[2])? 
                  (op_mem[3])? rdata:
                  (op_mem[5])? byte_load:half_load
                  :alu_result;

// cacop
assign inst_cacop_en = is_cacop & (wreg_index[2:0] == 3'd0) & left_valid;
assign data_cacop_en = is_cacop & (wreg_index[2:0] == 3'd1) & left_valid;
assign cacop_mod = wreg_index[4:3];

// assign right_fire=right_ready & right_valid;//data submit finish
wire valid_temp;
assign valid_temp = (fire? 1'b0:valid) | logic_valid & right_ready;
 
//shark hands
always @(posedge clk) begin
    if(reset == `RestEn || excp_flush  || ertn_flush) begin
        valid <= `false; 
    end
    else begin 
        // if(fire)begin 
        //     valid <= `false;
        // end
        // if(logic_valid & right_ready) begin
        //     valid <= `true;
        // end
        valid <= valid_temp;
    end
    // $display("%h %h %h %h\n",PC,Inst,en,addr);
end

//data block
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        bus_temp <= `mem_ctrl_width'h0;
        csr_bus_temp <= `ex_csr_ctrl_width'h0;
        excp_temp <= `mem_excp_width'h0;
    end
    else begin 
        if(logic_valid & right_ready) begin 
            bus_temp <= {
                    llbit_out,// 360:360
                    llbit_set_en,//359:359
                    inst_ld_en,// 351:358 for difftest
                    inst_st_en,//343:350 for difftest
                    inst_st_vaddr,//311:342 for difftest
                    inst_st_paddr,//279:310 for difftest
                    inst_st_data,// 247:278 for difftest
                    data_tlbindex,//242:246
                    data_tlbfound,//241:241
                    tlb_op,//236:240
                    tlbinv_en,//235:235
                    tlbinv_op,//230:234
                    tlbinv_asid,//220:229
                    tlbinv_vpn,//201:219
                    timer_inst,// 200:200
                    timer64,// 136:199
                    alu_result, // 104:135
                    is_break,//103:103
                    (left_valid & inst_valid ),//102:102
                    wreg_index,//97:101
                    wreg_en & !excp_i,//96:96 when exception ,should not write back data
                    Inst,// 64:95
                    PC,// 32:63
                    mem_result// 0:31
                    };
            csr_bus_temp <= mem_csr_bus;
            // for difftest , next inst soft int 
            `ifdef NEXT_SOFT_INT
            excp_temp <= {ex_excp_bus[`ex_excp_width-1],excp_num_i,ex_excp_bus[`ex_excp_width-2:2],soft_int ,ex_excp_bus[0] | soft_int | excp_i};
            `else
            excp_temp <= {ex_excp_bus[`ex_excp_width-1],excp_num_i,ex_excp_bus[`ex_excp_width-2:1],ex_excp_bus[0] | excp_i};
            `endif
        end
    end
end
assign data_tlbserch_en = tlb_op[4] & left_valid;
// output logic
assign right_valid=valid;
assign logic_valid = (en && (we && !write_finish || !we && !rdata_valid) & !excp_i) | !left_valid | (data_tlbserch_en & ! serch_finish) | 
                        (is_cacop & !cacop_finish & left_valid)? 1'b0:1'b1;// memory must not exceptions 
assign left_ready= (en && (we && !write_finish || !we && !rdata_valid) & !excp_i) | (data_tlbserch_en & ! serch_finish) |
                        (is_cacop & !cacop_finish & left_valid) ? 1'b0:1'b1;
assign wb_ctrl_bus=bus_temp;
assign wb_csr_bus = csr_bus_temp;
assign mem_excp_bus = excp_temp;
assign mem_csr_bypass = {mem_csr_bus[46] & left_valid,mem_csr_bus[45:0]};
assign mem_bypass = {mem_result,wreg_index,wreg_en & logic_valid & !excp_i};
assign is_fire = logic_valid & right_ready;

endmodule //MEM