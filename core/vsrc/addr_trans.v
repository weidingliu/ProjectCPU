
`include "defines.sv"
`include "csr_defines.v"

module addr_trans (
    input wire clk,
    input wire reset,
    //flush
    input wire flush,
    input wire excp_flush,
    input wire ertn_flush,
    // from csr
    input wire [1:0]DAPG,
    input wire [31:0]DMW0,
    input wire [31:0]DMW1,
    input wire [1:0]plv,
    input wire [1:0]DATF,
    input wire [1:0]DATM,
    input wire [31:0]ASID,
    // inst interface
    input wire [31:0]inst_vaddr,
    input wire inst_addr_valid,
    output wire inst_addr_ready,

    output wire inst_uncached_en,
    output wire [31:0]inst_paddr,
    output wire [31:0]inst_vaddr_o,
    output wire inst_tlb_found,
    output wire inst_valid,
    input wire inst_ready,
    input wire inst_fire,

    //data addr interface
    input wire [31:0]data_vaddr,
    input wire data_addr_valid,
    output wire data_addr_ready,

    output wire data_uncached_en,
    output wire [31:0]data_paddr,
    output wire [31:0]data_vaddr_o,
    output wire data_tlb_found,
    output wire data_valid,
    input wire data_ready,
    input wire data_fire
);

wire inst_trans_en;
wire data_trans_en;

wire inst_dmw0_en;
wire inst_dmw1_en;

wire data_dmw0_en;
wire data_dmw1_en;

    // s0
wire s0_valid;
wire [18:0]s0_vppn;
wire [9:0]s0_asid;
wire s0_odd_page;
wire s0_found;
wire [$clog2(TLBNUM)-1:0] s0_index;
wire [5:0]s0_ps;
wire [19:0]s0_ppn
wire s0_v;
wire s0_d;
wire [1:0]s0_mat;
wire [1:0]s0_plv;
//s1
wire s1_valid,
wire [18:0]s1_vppn,
wire [9:0]s1_asid,
wire s1_odd_page,
wire s1_found,
wire [$clog2(TLBNUM)-1:0] s1_index,
wire [5:0]s1_ps,
wire [19:0]s1_ppn,
wire s1_v,
wire s1_d,
wire [1:0]s1_mat,
wire [1:0]s1_plv,
// //write port
// wire we,
// wire [$clog2(TLBNUM)-1:0] w_index,
// wire [18:0] w_vppn,
// input wire [ 9:0] w_asid,
// input wire w_g,
// input wire [ 5:0] w_ps,
// input wire w_e,

// input wire w_v0,
// input wire w_d0,
// input wire [ 1:0] w_mat0,
// input wire [ 1:0] w_plv0,
// input wire [19:0] w_ppn0,

// input wire w_v1,
// input wire w_d1,
// input wire [ 1:0] w_mat1,
// input wire [ 1:0] w_plv1,
// input wire [19:0] w_ppn1,

// //read ort
// input wire [$clog2(TLBNUM)-1:0] r_index,
// output wire [18:0] r_vppn,
// output wire [ 9:0] r_asid,
// output wire r_g,
// output wire [ 5:0] r_ps,
// output wire r_e,

// output wire r_v0,
// output wire r_d0,
// output wire [ 1:0] r_mat0,
// output wire [ 1:0] r_plv0,
// output wire [19:0] r_ppn0,

// output wire r_v1,
// output wire r_d1,
// output wire [ 1:0] r_mat1,
// output wire [ 1:0] r_plv1,
// output wire [19:0] r_ppn1

// inner pipline
reg inst_valid_temp;
reg [31:0]inst_vaddr_temp;

reg data_valid_temp;
reg [31:0]data_vaddr_temp;

// adress translate mod
assign inst_trans_en =  DAPG == 2'b01;
assign data_trans_en = DAPG == 2'b01;
// dmw driect address translate enable 
assign inst_dmw0_en = (DMW0[31:29] == inst_vaddr_temp[31:29]);
assign inst_dmw1_en = (DMW1[31:29] == inst_vaddr_temp[31:29]);

assign data_dmw0_en = (DMW0[31:29] == data_vaddr_temp[31:29]);
assign data_dmw1_en = (DMW1[31:29] == data_vaddr_temp[31:29]);

tlb_entry tlb(
    .clk(clk),

    // s0
    .s0_valid(inst_addr_valid),
    .s0_vppn(inst_vaddr[31:13]),
    .s0_asid(ASID[`ASID]),
    .s0_odd_page(inst_vaddr[12]),
    .s0_found(s0_found),
    .s0_index(s0_index),
    .s0_ps(s0_ps),
    .s0_ppn(s0_ppn),
    .s0_v(s0_v),
    .s0_d(s0_d),
    .s0_mat(s0_mat),
    .s0_plv(s0_plv),
    //s1
    .s1_valid(data_addr_valid),
    .s1_vppn(data_vaddr[31:13]),
    .s1_asid(ASID[`ASID]),
    .s1_odd_page(data_vaddr[12]),
    .s1_found(s1_found),
    .s1_index(s1_index),
    .s1_ps(s1_ps),
    .s1_ppn(s1_ppn),
    .s1_v(s1_v),
    .s1_d(s1_d),
    .s1_mat(s1_mat),
    .s1_plv(s1_plv),
    //write port
    .we(),
    .w_index(),
    .w_vppn(),
    .w_asid(),
    .w_g(),
    .w_ps(),
    .w_e(),

    .w_v0(),
    .w_d0(),
    .w_mat0(),
    .w_plv0(),
    .w_ppn0(),

    .w_v1(),
    .w_d1(),
    .w_mat1(),
    .w_plv1(),
    .w_ppn1(),

    //read ort
    .r_index(),
    .r_vppn(),
    .r_asid(),
    .r_g(),
    .r_ps(),
    .r_e(),

    .r_v0(),
    .r_d0(),
    .r_mat0(),
    .r_plv0(),
    .r_ppn0(),

    .r_v1(),
    .r_d1(),
    .r_mat1(),
    .r_plv1(),
    .r_ppn1()
);

// paddr
assign inst_paddr = inst_trans_en? (inst_dmw0_en? {DMW0[27:25],inst_vaddr_temp[28:0]}
                                :(inst_dmw1_en? {DMW1[27:25],inst_vaddr_temp[28:0]}: 
                                (s0_ps == 6'd21)? {s0_ppn[19:10],inst_vaddr_temp[21:0]}:{s0_ppn,inst_vaddr_temp[11:0]})) 
                                :inst_vaddr_temp;
assign data_paddr = data_trans_en? (data_dmw0_en? {DMW0[27:25],data_vaddr_temp[28:0]}
                                :(data_dmw1_en? {DMW1[27:25],data_vaddr_temp[28:0]}: 
                                (s1_ps == 6'd21)? {s1_ppn[19:10],data_vaddr_temp[21:0]}:{s1_ppn,data_vaddr_temp[11:0]})) 
                                :data_vaddr_temp;

// uncache 
assign inst_uncached_en = ((DAPG == 2'b10) && (DATF == 2'b00) ||
                           (inst_dmw0_en & DMW0[`MAT] == 2'b00) || 
                           (inst_dmw1_en & DMW1[`MAT] == 2'b00) ||
                           (inst_trans_en & s0_mat == 2'b00));
assign data_uncached_en = ((DAPG == 2'b10) && (DATM == 2'b00) ||
                           (data_dmw0_en & DMW0[`MAT] == 2'b00) || 
                           (data_dmw1_en & DMW1[`MAT] == 2'b00) ||
                           (data_trans_en & s1_mat == 2'b00));
// output logic
assign inst_tlb_found = s0_found;
assign data_tlb_found = s1_found;

assign inst_valid = inst_valid_temp;
assign data_valid = data_valid_temp;

assign inst_vaddr_o = inst_vaddr_temp;
assign data_vaddr_o = data_vaddr_temp;

assign inst_addr_ready = inst_ready;
assign data_addr_ready = data_ready;

// inst pipline 
always @(posedge clk) begin
    if(reset | flush | excp_flush | ertn_flush) begin 
        inst_valid_temp <= `false;
    end
    else begin 
        if(inst_fire) begin 
            inst_valid_temp <= `false;
        end
        if(inst_addr_valid && inst_ready) begin 
            inst_valid_temp <= `true;
            inst_vaddr_temp <= inst_vaddr;
        end
    end
end


// data pipline
always @(posedge clk) begin
    if(reset | flush | excp_flush | ertn_flush) begin 
        data_valid_temp <= `false;
    end
    else begin 
        if(data_fire) begin 
            data_valid_temp <= `false;
        end
        if(data_addr_valid && data_ready) begin 
           data_valid_temp <= `true;
           data_vaddr_temp <= data_vaddr;
        end
    end
end



endmodule //addr_trans


//util


