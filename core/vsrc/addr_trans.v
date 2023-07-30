
`include "defines.sv"
`include "csr_defines.v"

module addr_trans #(
    localparam TLBNUM = 32
)(
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

    input wire [31:0] csr_tlbehi,
    input wire [31:0] csr_tlbidx,
    input wire [31:0] csr_tlbelo0,
    input wire [31:0] csr_tlbelo1,
    input wire [5:0]encode_in,
    // inst interface
    input wire [31:0]inst_vaddr,
    input wire inst_addr_valid,
    output wire inst_addr_ready,
    input wire inst_cacop,

    output wire inst_uncached_en,
    output wire [31:0]inst_paddr,
    output wire [31:0]inst_vaddr_o,
    output wire inst_tlb_found,
    output wire inst_excp,
    output wire [3:0]inst_excp_num,
    output wire inst_valid,
    input wire inst_ready,
    input wire inst_fire,
    output wire inst_is_fire,

    //data addr interface
    input wire [31:0]data_vaddr,
    input wire data_addr_valid,
    output wire data_addr_ready,
    input wire data_cacop,
    input wire [1:0]cacop_mod,

    input wire mem_load,// is load 
    input wire mem_store,// is store
    input wire mem_halfword,// is half word mem 
    input wire mem_word,// is word mem 
    //for tlbserch
    input wire data_tlbserch_en,
    output wire [4:0]data_tlbindex,
    output wire data_tlbfound,
    output wire serch_tlb_finish,

    output wire data_uncached_en,
    output wire [31:0]data_paddr,
    output wire [31:0]data_vaddr_o,
    output wire data_tlb_found,
    output wire data_excp,
    output wire [6:0]data_excp_num,
    output wire data_valid,
    input wire data_ready,
    input wire data_fire,

    //tlb 
    input wire tlbinv_en,
    input wire [4:0]tlbinv_op,
    input wire [9:0]tlbinv_asid,
    input wire [18:0]tlbinv_vpn,
    // tlb wr 
    input wire tlb_wen,
    
    //read port
    // input wire [$clog2(TLBNUM)-1:0] r_index,
    input wire tlb_fill_en,
    input wire [4:0]rand_index,

    output wire [18:0] r_vppn,
    output wire [ 9:0] r_asid,
    output wire r_g,
    output wire [ 5:0] r_ps,
    output wire r_e,

    output wire r_v0,
    output wire r_d0,
    output wire [ 1:0] r_mat0,
    output wire [ 1:0] r_plv0,
    output wire [19:0] r_ppn0,

    output wire r_v1,
    output wire r_d1,
    output wire [ 1:0] r_mat1,
    output wire [ 1:0] r_plv1,
    output wire [19:0] r_ppn1

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
wire [19:0]s0_ppn;
wire s0_v;
wire s0_d;
wire [1:0]s0_mat;
wire [1:0]s0_plv;
//s1
wire s1_valid;
wire [18:0]s1_vppn;
wire [9:0]s1_asid;
wire s1_odd_page;
wire s1_found;
wire [$clog2(TLBNUM)-1:0] s1_index;
wire [5:0]s1_ps;
wire [19:0]s1_ppn;
wire s1_v;
wire s1_d;
wire [1:0]s1_mat;
wire [1:0]s1_plv;

wire inst_tlb_trans;
wire data_tlb_trans;
// //write port
wire we;
wire [$clog2(TLBNUM)-1:0] w_index;
wire [18:0] w_vppn;
wire [ 9:0] w_asid;
wire w_g;
wire [ 5:0] w_ps;
wire w_e;

wire w_v0;
wire w_d0;
wire [ 1:0] w_mat0;
wire [ 1:0] w_plv0;
wire [19:0] w_ppn0;

wire w_v1;
wire w_d1;
wire [ 1:0] w_mat1;
wire [ 1:0] w_plv1;
wire [19:0] w_ppn1;

wire cacop_trans;
// read port
wire [$clog2(TLBNUM)-1:0] r_index; 
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

reg inst_trans_en_buffer;
reg data_trans_en_buffer;

reg s0_v_buffer;
reg s0_found_buffer;
reg [1:0]s0_plv_buffer;

//tlb write port
assign we = tlb_wen | tlb_fill_en;
assign w_index = ({5{tlb_wen}} & csr_tlbidx[`INDEX]) | ({5{tlb_fill_en}} & rand_index);
assign w_vppn = csr_tlbehi[`VPPN];
assign w_asid = ASID[`ASID];
assign w_g = csr_tlbelo0[`TLB_G] && csr_tlbelo1[`TLB_G];
assign w_ps = csr_tlbidx[`PS];
assign w_e = (encode_in == 6'h3f) ? 1'b1 : !csr_tlbidx[`NE];

assign w_v0    = csr_tlbelo0[`TLB_V];
assign w_d0    = csr_tlbelo0[`TLB_D];
assign w_plv0  = csr_tlbelo0[`TLB_PLV];
assign w_mat0  = csr_tlbelo0[`TLB_MAT];
assign w_ppn0  = csr_tlbelo0[`TLB_PPN];
assign w_v1    = csr_tlbelo1[`TLB_V];
assign w_d1    = csr_tlbelo1[`TLB_D];
assign w_plv1  = csr_tlbelo1[`TLB_PLV];
assign w_mat1  = csr_tlbelo1[`TLB_MAT];
assign w_ppn1  = csr_tlbelo1[`TLB_PPN];

assign r_index = csr_tlbidx[`INDEX];
// adress translate mod
assign inst_trans_en =  DAPG == 2'b01;
assign data_trans_en = DAPG == 2'b01;
// dmw driect address translate enable 
assign inst_dmw0_en = (DMW0[31:29] == inst_vaddr_temp[31:29]) & ((DMW0[`PLV0] & plv == 2'b0) || (DMW0[`PLV3] & plv == 2'b11));
assign inst_dmw1_en = (DMW1[31:29] == inst_vaddr_temp[31:29]) & ((DMW1[`PLV0] & plv == 2'b0) || (DMW1[`PLV3] & plv == 2'b11));

assign data_dmw0_en = (DMW0[31:29] == data_vaddr_temp[31:29]) & ((DMW0[`PLV0] & plv == 2'b0) || (DMW0[`PLV3] & plv == 2'b11));
assign data_dmw1_en = (DMW1[31:29] == data_vaddr_temp[31:29]) & ((DMW1[`PLV0] & plv == 2'b0) || (DMW1[`PLV3] & plv == 2'b11));

tlb_entry tlb(
    .clk(clk),

    // s0
    .s0_valid(inst_addr_valid & inst_ready),
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
    .s1_valid(data_addr_valid | data_tlbserch_en),
    .s1_vppn(data_tlbserch_en? csr_tlbehi[`VPPN]:data_vaddr[31:13]),
    .s1_asid(ASID[`ASID]),
    .s1_odd_page(data_tlbserch_en? 1'b0:data_vaddr[12]),
    .s1_found(s1_found),
    .s1_index(s1_index),
    .s1_ps(s1_ps),
    .s1_ppn(s1_ppn),
    .s1_v(s1_v),
    .s1_d(s1_d),
    .s1_mat(s1_mat),
    .s1_plv(s1_plv),
    //write port
    .we(we),
    .w_index(w_index),
    .w_vppn(w_vppn),
    .w_asid(w_asid),
    .w_g(w_g),
    .w_ps(w_ps),
    .w_e(w_e),

    .w_v0(w_v0),
    .w_d0(w_d0),
    .w_mat0(w_mat0),
    .w_plv0(w_plv0),
    .w_ppn0(w_ppn0),

    .w_v1(w_v1),
    .w_d1(w_d1),
    .w_mat1(w_mat1),
    .w_plv1(w_plv1),
    .w_ppn1(w_ppn1),

    //read ort
    .r_index(r_index),
    .r_vppn(r_vppn),
    .r_asid(r_asid),
    .r_g(r_g),
    .r_ps(r_ps),
    .r_e(r_e),

    .r_v0(r_v0),
    .r_d0(r_d0),
    .r_mat0(r_mat0),
    .r_plv0(r_plv0),
    .r_ppn0(r_ppn0),

    .r_v1(r_v1),
    .r_d1(r_d1),
    .r_mat1(r_mat1),
    .r_plv1(r_plv1),
    .r_ppn1(r_ppn1),

    .tlbinv_en(tlbinv_en),
    .tlbinv_op(tlbinv_op),
    .tlbinv_asid(tlbinv_asid),
    .tlbinv_vpn(tlbinv_vpn)
);
assign cacop_trans = (cacop_mod == 2'b00 | cacop_mod == 2'b01) & (data_cacop | inst_cacop);
//
assign inst_tlb_trans = !inst_dmw0_en & !inst_dmw1_en & inst_trans_en_buffer;
assign data_tlb_trans = !data_dmw0_en & !data_dmw1_en & data_trans_en_buffer & !cacop_trans;

// paddr
assign inst_paddr = inst_trans_en_buffer? (inst_dmw0_en? {DMW0[27:25],inst_vaddr_temp[28:0]}
                                :(inst_dmw1_en? {DMW1[27:25],inst_vaddr_temp[28:0]}: 
                                (s0_ps == 6'd21)? {s0_ppn[19:10],inst_vaddr_temp[21:0]}:{s0_ppn,inst_vaddr_temp[11:0]})) 
                                :inst_vaddr_temp;
assign data_paddr =(data_trans_en_buffer & ~cacop_trans & ~data_excp)? (data_dmw0_en? {DMW0[27:25],data_vaddr_temp[28:0]}
                                :(data_dmw1_en? {DMW1[27:25],data_vaddr_temp[28:0]}: 
                                (s1_ps == 6'd21)? {s1_ppn[19:10],data_vaddr_temp[21:0]}:{s1_ppn,data_vaddr_temp[11:0]})) 
                                :data_vaddr_temp;

// uncache 
assign inst_uncached_en = ((DAPG == 2'b10) && (DATF == 2'b00) ||
                           (inst_dmw0_en & DMW0[`MAT] == 2'b00) || 
                           (inst_dmw1_en & DMW1[`MAT] == 2'b00) ||
                           (inst_trans_en_buffer & !inst_dmw0_en & !inst_dmw1_en & s0_mat == 2'b00));
assign data_uncached_en = ((DAPG == 2'b10) && (DATM == 2'b00) ||
                           (data_dmw0_en & DMW0[`MAT] == 2'b00) || 
                           (data_dmw1_en & DMW1[`MAT] == 2'b00) ||
                           (data_trans_en_buffer & !data_dmw0_en & !data_dmw1_en & s1_mat == 2'b00));
// output logic
assign inst_tlb_found = s0_found;
assign data_tlb_found = s1_found;

assign inst_valid = inst_valid_temp;
assign data_valid = inst_cacop? 1'b0:data_valid_temp  & !data_excp;

assign inst_vaddr_o = inst_vaddr_temp;
assign data_vaddr_o = data_vaddr_temp;

assign inst_addr_ready = inst_ready;
assign data_addr_ready = data_ready;

assign inst_is_fire = inst_valid && inst_ready;

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
            inst_trans_en_buffer <= inst_trans_en;
            // s0_v_buffer <= s0_v;
            // s0_found_buffer <= s0_found;
            // s0_plv_buffer <= s0_plv;
        end
    end
end
reg trans_state;
always @(posedge clk) begin 
    if(reset | flush | excp_flush | ertn_flush) begin 
        trans_state <= 1'b0;
    end
    else begin 

        if(data_tlbserch_en & !trans_state) begin 
            trans_state <= 1'b1;
        end
        else if(trans_state) begin 
            trans_state <= 1'b0;
        end
    end 
end
assign serch_tlb_finish = trans_state;
// data pipline
always @(posedge clk) begin
    if(reset | flush | excp_flush | ertn_flush) begin 
        data_valid_temp <= `false;
    end
    else begin 
        if(data_fire | data_excp) begin 
            data_valid_temp <= `false;
        end
        if((data_addr_valid) && data_ready) begin 
           data_valid_temp <= `true;
           data_vaddr_temp <= data_vaddr;
           data_trans_en_buffer <= data_trans_en;
           
        end
    end
end
assign data_tlbindex = s1_index;
assign data_tlbfound = s1_found;

//inst excption 

wire inst_excp_adef;
wire inst_excp_pif;
wire inst_excp_ppi;
wire inst_excp_tlbr;

assign inst_excp_adef = (inst_paddr[1] | inst_paddr[0]) | ((plv == 2'b11) & inst_vaddr_o[31] & inst_tlb_trans) & inst_valid_temp;//addr not aligned
assign inst_excp_pif = inst_tlb_trans & !s0_v & inst_valid_temp;// page fault
assign inst_excp_ppi = inst_tlb_trans & (plv > s0_plv) & s0_v & inst_valid_temp;//page privilege not allow 
assign inst_excp_tlbr = inst_tlb_trans & !s0_found & inst_valid_temp;//refill page

assign inst_excp = inst_excp_adef | inst_excp_pif | inst_excp_ppi | inst_excp_tlbr;
assign inst_excp_num = {inst_excp_ppi,inst_excp_pif,inst_excp_tlbr,inst_excp_adef};

//data excption 
wire data_excp_pil;
wire data_excp_pis;
wire data_excp_pme;
wire data_excp_ppi;
wire data_excp_adem;
wire data_excp_ale;
wire data_excp_tlbr;

assign data_excp_pil = data_tlb_trans & !s1_v & (mem_load | data_cacop | inst_cacop) & data_valid_temp;// load page fault 
assign data_excp_pis = data_tlb_trans & !s1_v & mem_store & data_valid_temp;// store page fault 
assign data_excp_ppi = data_tlb_trans & (plv > s1_plv)  & s1_v & data_valid_temp;// page privilege not allow 
assign data_excp_pme = data_tlb_trans  & mem_store & !s1_d & s1_v &  (s1_plv >= plv) & data_valid_temp;// store page but dirt is not 1,syscall to fix 
assign data_excp_adem = ((plv == 2'b11) & data_vaddr_temp[31] & data_tlb_trans)  & data_valid_temp;
assign data_excp_tlbr = data_tlb_trans & !s1_found  & data_valid_temp; //refill page
assign data_excp_ale = ((mem_halfword & data_vaddr_temp[0]) | (mem_word & (data_vaddr_temp[1] | data_vaddr_temp[0]))) & data_valid_temp & !data_cacop & !inst_cacop;

assign data_excp_num = {data_excp_pil, data_excp_pis, data_excp_ppi, data_excp_pme, data_excp_tlbr,data_excp_adem,data_excp_ale};
assign data_excp = (data_excp_pil | data_excp_pis | data_excp_ppi | data_excp_pme | data_excp_adem | data_excp_tlbr | data_excp_ale) & data_valid_temp;

endmodule //addr_trans


//util


