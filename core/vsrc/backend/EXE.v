`include "defines.sv"
module EXE (
    input wire clk,//clock
    input wire reset,//global reset
    input wire [`ctrl_width-1:0]id_ctrl_bus, //ctrl flower
    input wire [`id_csr_ctrl_width-1:0]id_csr_ctrl_bus,
    input wire excp_flush,
    input wire ertn_flush,
    input wire icache_busy,
    input wire stall,

    output wire [`ex_ctrl_width-1:0] ex_ctrl_bus,
    //csr
    output wire [`ex_csr_ctrl_width-1:0]ex_csr_ctrl_bus,
    //excp
    input wire [`id_excp_width-1:0]id_excp_bus,
    output wire [`ex_excp_width-1:0]ex_excp_bus,

    // for id 
    output wire [6:0]ex_mem_hazard,
    //bypass
    output wire [`bypass_width-1:0]ex_bypass,
    // is tlb rd
    output wire is_tlbhazard,

    // input wire [`bypass_width-1:0]mem_bypass,

    input wire [`ex_csr_ctrl_width-1:0]mem_csr_bypass,
    input wire [`ex_csr_ctrl_width-1:0]wb_csr_bypass,
    
    //branch
    output wire is_branch,
    output wire flush,
    output wire [31:0]dnpc,

    //shark hand
    input wire left_valid,//ID stage's data is ready
    output wire left_ready,//EX stage is allowin
    output wire right_valid,//EX stage's data is ready
    input wire right_ready,//MEM stage is allowin
    output wire is_fire,
    input wire fire

    `ifdef NEXT_SOFT_INT
    ,
    input wire soft_int
    `endif 
);
// wire right_fire;

reg valid;
reg [`ex_ctrl_width-1:0] ctrl_temp_bus;//exe ctrl bus
wire [31:0]alu_result;

wire [3:0] mul_div_op;
wire [31:0] src1;
wire [31:0] src2;
wire is_sign;
wire [13:0]alu_op;
wire [31:0]Imm;//bus [0:31]
wire [31:0]reg1;//bus [32:63]
wire [31:0]reg2;//bus [64:95]
wire inst_valid;
wire [31:0]PC;
wire wreg_en;
wire [4:0]wreg_index;
wire [31:0]Inst;
wire [1:0]select_src1;
wire [1:0]select_src2;
wire [7:0]branch_op;
wire [31:0] write_data;
wire [5:0] op_mem;
wire [4:0] reg_index1;
wire [4:0] reg_index2;
wire is_break;
wire is_llbit;

wire [31:0]mem_reg;
wire [31:0]mul_div_result;
wire is_mul_div;
// wire [31:0]div_result;
wire is_mul;
wire is_div;
wire [31:0] mul_hi;
wire [31:0]mul_lo;
wire mul_valid;
wire logic_valid;
wire div_valid;
wire [31:0]quotient;
wire [31:0]remainder;

wire timer_inst;
wire [63:0]timer64;

//csr
wire csr_we;//csr write enable
wire [13:0]csr_idx;//csr write and read addr
wire csr_mask_en;// csr mask enbale
wire [31:0]csr_data;// csr read data
wire rd_from_csr;// rd result is from csr_data

wire [31:0]wr_csr_data;
wire [31:0]wr_csr_mask;

reg [`ex_csr_ctrl_width-1:0]csr_bus_temp;
//excp
reg [`ex_excp_width-1:0] excp_temp;

// tlb 
wire [4:0]tlb_op;
wire tlbinv_en;
wire [4:0]tlbinv_op;
wire [9:0]tlbinv_asid;
wire [18:0]tlbinv_vpn;

wire branch_flag;
wire is_cacop;
//mem_bypass 
// assign bypass_en1 = (mem_bypass[0] == 1'b1) & (mem_bypass[5:1] == reg_index1) & (mem_bypass[5:1] != 5'h0); 
// assign bypass_en2 = (mem_bypass[0] == 1'b1) & (mem_bypass[5:1] == reg_index2) & (mem_bypass[5:1] != 5'h0); 
// assign bypass_reg1 = bypass_en1 ? mem_bypass[37:6]:reg1;
// assign bypass_reg2 = bypass_en2 ? mem_bypass[37:6]:reg2;
//csr bypass
wire mem_bypass_csr_we;
wire [13:0]mem_bypass_csr_idx;
wire [31:0]mem_bypass_csr_data;
wire wb_bypass_csr_we;
wire [13:0]wb_bypass_csr_idx;
wire [31:0]wb_bypass_csr_data;
wire [31:0]real_csr_data;
assign  {
                mem_bypass_csr_we,//46:46
                mem_bypass_csr_idx,//45:32
                mem_bypass_csr_data//31:0
} = mem_csr_bypass;
assign  {
                wb_bypass_csr_we,//46:46
                wb_bypass_csr_idx,//45:32
                wb_bypass_csr_data//31:0
} = wb_csr_bypass;

assign real_csr_data = (wb_bypass_csr_we & (wb_bypass_csr_idx == csr_idx)) ? wb_bypass_csr_data :
                        (mem_bypass_csr_we & (mem_bypass_csr_idx == csr_idx)) ? mem_bypass_csr_data :csr_data;
//invtlb
assign tlbinv_en = tlb_op[0];
assign tlbinv_op = wreg_index;
assign tlbinv_asid = reg1[9:0];
assign tlbinv_vpn = reg2[31:13];                        

//bus
assign {
    is_llbit,//286:286
    is_cacop,//285:285
    tlb_op,//280:284
    timer_inst,// 279:279
    timer64,// 215:278
    mul_div_op,//211:214
    is_break,//210:210
    reg_index1,//205:209
    reg_index2,//200:204
    op_mem,//194:199
    branch_op,//186:193
    select_src1,//184:185
    select_src2,//182:183
    is_sign,//181:181
    alu_op,//167:180
    inst_valid,//166:166
    PC,//134:165
    Inst,//102:133
    wreg_index,//97:101
    wreg_en,//96:96
    reg2,// 64:95
    reg1,// 32:63
    Imm// 0:31
}=id_ctrl_bus;

assign {
    csr_we,//49:49
    csr_idx,//48:34
    csr_mask_en,//33:33
    csr_data,//32:1
    rd_from_csr//0:0
} = id_csr_ctrl_bus;

assign src1 = (select_src1[1])? PC:
              (select_src1[0])? Imm:
              reg1;
assign src2 = (select_src2[1])? PC:
              (select_src2[0])? Imm:
              reg2;
assign ex_mem_hazard = {op_mem[0] & !op_mem[2],wreg_en & left_valid,wreg_index};

// always @(*) begin 
//     $display("%h   %h   %h",PC,src1,src2);
// end
//branch
assign branch_flag = left_valid & inst_valid & (
    branch_op[0] | branch_op[1] | 
    (branch_op[2] & ($signed(reg1) >= $signed(reg2))) |
    (branch_op[3] & (reg1 == reg2)) |
    (branch_op[4] & (reg1 >= reg2)) |
    (branch_op[5] & ($signed(reg1) < $signed(reg2))) | 
    (branch_op[6] & (reg1 != reg2)) |
    (branch_op[7] & (reg1 < reg2))
    );
//alu 
alu alu(
    .alu_op(alu_op),
    .alu_src1(src1),
    .alu_src2(src2),
    .alu_result(alu_result)
);
//is tlb rd 
assign is_tlbhazard = (tlb_op[4] | tlb_op[2]) & left_valid;
//mul and div 
assign is_mul_div = mul_div_op[0] | mul_div_op[1] | mul_div_op[2] | mul_div_op[3];

// assign mul_result = ({64{is_sign}} & ($signed(src1)*$signed(src2))) | 
//                     ({64{~is_sign}} & (src1*src2));
// assign mod_result = ({32{is_sign}} & ($signed(src1) % $signed(src2)) |
//                     ({32{~is_sign}} & (src1 % src2))
//                     );
// assign div_result = (
//     ({32{is_sign}} & ($signed(src1) / $signed(src2))) | 
//     ({32{~is_sign}} & (src1 / src2))
// );

assign mul_div_result = ({32{mul_div_op[0]}} & mul_lo)|
                        ({32{mul_div_op[1]}} & remainder)|
                        ({32{mul_div_op[2]}} & mul_hi)|
                        ({32{mul_div_op[3]}} & quotient); 
assign is_mul = (mul_div_op[0]  | mul_div_op[2]) & right_ready;
assign is_div = (mul_div_op[3]  | mul_div_op[1]) & right_ready;
//csr 
assign wr_csr_data = (src2 & wr_csr_mask) | (real_csr_data & ~wr_csr_mask);
assign wr_csr_mask = (csr_mask_en)? src1:32'hffffffff;

// booth multiplier
// Booth_MUL MUL(
//     .clock(clk),
//     .reset(reset),
//     .io_in_ready(),
//     .io_in_valid(is_mul),
//     .io_in_bits_ctrl_flow_flush(1'b0),
//     .io_in_bits_ctrl_flow_mulw(1'b0),
//     .io_in_bits_ctrl_flow_mul_sign({~is_sign,~is_sign}),
//     .io_in_bits_ctrl_data_src1(src1),
//     .io_in_bits_ctrl_data_src2(src2),
//     .io_out_ready(1'b1),
//     .io_out_valid(mul_valid),//is mul end
//     .io_out_bits_result_result_hi(mul_hi),//hight 32-bit
//     .io_out_bits_result_result_lo(mul_lo)// low 32-bit
// );
Booth_Walloc_MUL MUL(
    .clock(clk),
    .reset(reset),
    .io_in_ready(),
    .io_in_valid(is_mul),
    .io_in_bits_ctrl_flow_flush(excp_flush || ertn_flush || stall),
    .io_in_bits_ctrl_flow_mulw(1'b0),
    .io_in_bits_ctrl_flow_mul_sign({~is_sign,~is_sign}),
    .io_in_bits_ctrl_data_src1(src1),
    .io_in_bits_ctrl_data_src2(src2),
    .io_out_ready(1'b1),
    .io_out_valid(mul_valid),//is mul end
    .io_out_bits_result_result_hi(mul_hi),//hight 32-bit
    .io_out_bits_result_result_lo(mul_lo)// low 32-bit
);
DIV DIV(
    .clock(clk),
    .reset(reset),
    .io_in_ready(),
    .io_in_valid(is_div),
    .io_in_bits_ctrl_flow_divw(),
    .io_in_bits_ctrl_flow_div_signed(is_sign),
    .io_in_bits_ctrl_flow_flush(excp_flush || ertn_flush || stall),
    .io_in_bits_ctrl_data_src1(src1),
    .io_in_bits_ctrl_data_src2(src2),
    .io_out_ready(1'b1),
    .io_out_valid(div_valid),
    .io_out_bits_result_quotient(quotient),
    .io_out_bits_result_remainder(remainder)
);

wire valid_temp;
assign valid_temp = (fire? 1'b0:valid) | logic_valid & right_ready;
 

//shark hands
always @(posedge clk) begin
    if(reset == `RestEn || excp_flush || ertn_flush) begin
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
end

//data block
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        ctrl_temp_bus <= `ex_ctrl_width'h0;
        csr_bus_temp <= `ex_csr_ctrl_width'h0;
        excp_temp <= `ex_excp_width'h0;
    end
    else begin 
        if(logic_valid & right_ready) begin 
            ctrl_temp_bus <= {
                    is_llbit,//325:325
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
                    (left_valid & inst_valid),//198:198
                    Imm,//166:197
                    PC,//134:165
                    Inst,//102:133
                    wreg_index,//97:101
                    wreg_en,//96:96
                    reg2,// 64:95
                    reg1,// 32:63
                    write_data// 0:31
                    };
            csr_bus_temp <= {
                csr_we,//46:46
                csr_idx,//45:32
                wr_csr_data//31:0
            };
            `ifdef NEXT_SOFT_INT
            excp_temp <= {id_excp_bus[`id_excp_width-1:2],soft_int ,id_excp_bus[0] | soft_int};
            `else
            excp_temp <= id_excp_bus;
            `endif
            
        end
    end
end
// output logic
assign right_valid=valid;
assign logic_valid = (branch_flag & left_valid & right_ready & icache_busy) | 
                     !left_valid | (left_valid & (!mul_valid && is_mul || !div_valid && is_div))? 1'b0:1'b1;
assign left_ready= (!mul_valid && is_mul || !div_valid && is_div ) | (branch_flag & left_valid & icache_busy)? 1'b0:right_ready;
assign ex_ctrl_bus=ctrl_temp_bus;
assign ex_csr_ctrl_bus = csr_bus_temp;
assign ex_excp_bus = excp_temp;
assign ex_bypass = {write_data,wreg_index,wreg_en & left_valid};

assign is_branch = (branch_flag) & left_valid & (icache_busy | !right_ready); // wait icache
assign flush = branch_flag & left_valid & right_ready & !icache_busy;
assign dnpc = alu_result;

assign write_data = (branch_op[0] | branch_op[1]) ? PC+32'h4 : (is_mul_div) ? mul_div_result:
                    rd_from_csr ? real_csr_data:alu_result;

assign is_fire = logic_valid & right_ready;

// assign right_fire=right_ready & right_valid;//data submit finish
// always @(*) begin
//     $display("666-----%h %h %h %h--%h %h\n",flush,dnpc,PC,inst_valid,src1,src2);
// end

endmodule //EXE

