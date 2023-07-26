`include "defines.sv"
`include "csr_defines.v"

module CSR_CPU (
    input wire clk,
    input wire reset,
    //read bus
    input wire [13:0] csr_raddr,
    output wire [31:0] csr_rdata,
    //write bus
    input wire csr_wr_en,
    input wire [13:0] csr_waddr,
    input wire [31:0] csr_wdata,

    //excp
    input wire excp_flush,
    input wire [31:0]era_in,
    input wire [5:0]ecode_in,
    input wire [8:0]esubcode_in,
    input wire ertn_flush,
    input wire [31:0]pc,
    
    input wire [31:0]error_vaddr,
    input wire error_va_en,

    input wire excp_tlbrefill,// tlb refile excption
    input wire excp_tlb,// tlb excp such as PPI 

    //llbit 
    input wire llbit_set_en,
    input wire llbit_in,
    output wire llbit_out,

    //for if 
    output wire [31:0]eentry_out,
    output wire [31:0]era_out,
    output wire [31:0]csr_dmw0,
    output wire [31:0]csr_dmw1,
    output wire [1:0]dapg,
    output wire [1:0]datf,
    output wire [1:0]datm,
    output wire [31:0]csr_ASID,
    output wire [31:0]tlbentry_out,

    //for id 
    output wire [63:0]timer_out,
    output wire [31:0]tid_out,

    //for generate
    output wire [1:0] plv_out,
    //for tlb 
    output wire [31:0] csr_tlbehi,
    output wire [31:0] csr_tlbidx,
    output wire [31:0] csr_tlbelo0,
    output wire [31:0] csr_tlbelo1,
    output wire [5:0]encode_in,

        //tlb serch
    input wire [4:0]data_tlbindex,
    input wire data_tlbfound,
    input wire tlb_serch_en,

    //from tlb 
       //read ort
    // input wire [$clog2(TLBNUM)-1:0] r_index,
    output wire [4:0]rand_index,
    input wire tlb_wden,
    input wire [18:0] r_vppn,
    input wire [ 9:0] r_asid,
    input wire r_g,
    input wire [ 5:0] r_ps,
    input wire r_e,

    input wire r_v0,
    input wire r_d0,
    input wire [ 1:0] r_mat0,
    input wire [ 1:0] r_plv0,
    input wire [19:0] r_ppn0,

    input wire r_v1,
    input wire r_d1,
    input wire [ 1:0] r_mat1,
    input wire [ 1:0] r_plv1,
    input wire [19:0] r_ppn1,

    //interrupt
    input wire[7:0]interrupt,
    output wire has_int,

    // csr regs for diff
    output [31:0]                   csr_crmd_diff,
    output [31:0]                   csr_prmd_diff,
    output [31:0]                   csr_ectl_diff,
    output [31:0]                   csr_estat_diff,
    output [31:0]                   csr_era_diff,
    output [31:0]                   csr_badv_diff,
    output [31:0]                   csr_eentry_diff,
    output [31:0]                   csr_tlbidx_diff,
    output [31:0]                   csr_tlbehi_diff,
    output [31:0]                   csr_tlbelo0_diff,
    output [31:0]                   csr_tlbelo1_diff,
    output [31:0]                   csr_asid_diff,
    output [31:0]                   csr_save0_diff,
    output [31:0]                   csr_save1_diff,
    output [31:0]                   csr_save2_diff,
    output [31:0]                   csr_save3_diff,
    output [31:0]                   csr_tid_diff,
    output [31:0]                   csr_tcfg_diff,
    output [31:0]                   csr_tval_diff,
    output [31:0]                   csr_ticlr_diff,
    output [31:0]                   csr_llbctl_diff,
    output [31:0]                   csr_tlbrentry_diff,
    output [31:0]                   csr_dmw0_diff,
    output [31:0]                   csr_dmw1_diff,
    output [31:0]                   csr_pgdl_diff,
    output [31:0]                   csr_pgdh_diff

    `ifdef NEXT_SOFT_INT
    ,
    output wire soft_int
    `endif 

);
localparam CRMD  = 14'h0;
localparam PRMD  = 14'h1;
localparam ECTL  = 14'h4;
localparam ESTAT = 14'h5;
localparam ERA   = 14'h6;
localparam BADV  = 14'h7;
localparam EENTRY = 14'hc;
localparam TLBIDX= 14'h10;
localparam TLBEHI= 14'h11;
localparam TLBELO0=14'h12;
localparam TLBELO1=14'h13;
localparam ASID  = 14'h18;
localparam PGDL  = 14'h19;
localparam PGDH  = 14'h1a;
localparam PGD   = 14'h1b;
localparam CPUID = 14'h20;
localparam SAVE0 = 14'h30;
localparam SAVE1 = 14'h31;
localparam SAVE2 = 14'h32;
localparam SAVE3 = 14'h33;
localparam TID   = 14'h40;
localparam TCFG  = 14'h41;
localparam TVAL  = 14'h42;
localparam CNTC  = 14'h43;
localparam TICLR = 14'h44;
localparam LLBCTL= 14'h60;
localparam TLBRENTRY = 14'h88;
localparam DMW0  = 14'h180;
localparam DMW1  = 14'h181;



wire crmd_wen   = csr_wr_en & (csr_waddr == CRMD);
wire prmd_wen   = csr_wr_en & (csr_waddr == PRMD);
wire ecfg_wen   = csr_wr_en & (csr_waddr == ECTL);
wire estat_wen  = csr_wr_en & (csr_waddr == ESTAT);
wire era_wen    = csr_wr_en & (csr_waddr == ERA);
wire badv_wen   = csr_wr_en & (csr_waddr == BADV);
wire eentry_wen = csr_wr_en & (csr_waddr == EENTRY);
wire tlbidx_wen = csr_wr_en & (csr_waddr == TLBIDX);
wire tlbehi_wen = csr_wr_en & (csr_waddr == TLBEHI);
wire tlbelo0_wen= csr_wr_en & (csr_waddr == TLBELO0);
wire tlbelo1_wen= csr_wr_en & (csr_waddr == TLBELO1);
wire asid_wen   = csr_wr_en & (csr_waddr == ASID);
wire pgdl_wen   = csr_wr_en & (csr_waddr == PGDL);
wire pgdh_wen   = csr_wr_en & (csr_waddr == PGDH);
wire pgd_wen    = csr_wr_en & (csr_waddr == PGD);
wire cpuid_wen  = csr_wr_en & (csr_waddr == CPUID);
wire save0_wen  = csr_wr_en & (csr_waddr == SAVE0);
wire save1_wen  = csr_wr_en & (csr_waddr == SAVE1);
wire save2_wen  = csr_wr_en & (csr_waddr == SAVE2);
wire save3_wen  = csr_wr_en & (csr_waddr == SAVE3);
wire tid_wen    = csr_wr_en & (csr_waddr == TID);
wire tcfg_wen   = csr_wr_en & (csr_waddr == TCFG);
wire tval_wen   = csr_wr_en & (csr_waddr == TVAL);
wire cntc_wen   = csr_wr_en & (csr_waddr == CNTC);
wire ticlr_wen  = csr_wr_en & (csr_waddr == TICLR);
wire llbctl_wen = csr_wr_en & (csr_waddr == LLBCTL);
wire tlbrentry_wen = csr_wr_en & (csr_waddr == TLBRENTRY);
wire DMW0_wen   = csr_wr_en & (csr_waddr == DMW0);
wire DMW1_wen   = csr_wr_en & (csr_waddr == DMW1);

wire [31:0]    tlbehi_in;
wire [31:0]    tlbelo0_in;
wire [31:0]    tlbelo1_in;
wire [31:0]    tlbidx_in;
wire [ 9:0]    asid_in;

wire tlbrd_valid;
wire tlbrd_invalid;

reg [31:0]crmd;
reg [31:0]prmd;
reg [31:0]ecfg;
reg [31:0]estat;
reg [31:0]era;
reg [31:0]badv;
reg [31:0]eentry;
reg [31:0]cpuid;
reg [31:0]csr_save0;
reg [31:0]csr_save1;
reg [31:0]csr_save2;
reg [31:0]csr_save3;
reg llbit;
reg [31:0]llbctl;
reg [31:0]tid;
reg [31:0]tcfg;
reg [31:0]tval;
reg [31:0]ticlr;
reg timer_en;
reg [31:0]dmw0;
reg [31:0]dmw1;
reg [31:0]tlbrentry;
reg [31:0]tlbidx;
reg [31:0]asid;
reg [31:0]tlbehi;
reg [31:0]tlbelo0;
reg [31:0]tlbelo1;
reg [31:0]pgdh;
reg [31:0]pgdl;
reg [31:0]cntc;

reg [31:0]lsfr_reg;

wire [31:0]pgd;
reg [63:0]timer64;

wire dapg_forward;

assign rand_index = lsfr_reg[4:0];
assign tlbehi_in = {r_vppn, 13'b0};
assign tlbelo0_in = {4'b0, r_ppn0, 1'b0, r_g, r_mat0, r_plv0, r_d0, r_v0};
assign tlbelo1_in = {4'b0, r_ppn1, 1'b0, r_g, r_mat1, r_plv1, r_d1, r_v1};
assign tlbidx_in = {!r_e, 1'b0, r_ps, 24'b0}; 
assign asid_in = r_asid;

assign llbit_out = llbit;

assign tlbrd_valid = tlb_wden & !tlbidx_in[`NE];
assign tlbrd_invalid = tlb_wden & tlbidx_in[`NE];

`ifdef NEXT_SOFT_INT
assign soft_int = ((estat[`IS1] & ecfg[`IS1]) != 2'b0) & crmd[`IE];
`endif

assign plv_out = {2{excp_flush}} & 2'b0            |
                 {2{ertn_flush}} & prmd[`PPLV] |
                 {2{crmd_wen  }} & csr_wdata[`PLV] |
                 {2{!excp_flush && !ertn_flush && !crmd_wen}} & crmd[`PLV];
assign eentry_out = eentry;
assign era_out = era;
assign csr_ASID = asid;

assign has_int = ((ecfg[12:0] & estat[12:0]) != 13'b0) & crmd[`IE];

assign pgd = badv[31]? pgdh:pgdl;
// timer 
always @(posedge clk) begin
    if(reset) begin 
        timer64 <= 64'h0;
    end
    else begin 
        timer64 <= timer64 + 64'h1;
    end
end

//crmd
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        crmd[ `PLV] <=  2'b0;
        crmd[  `IE] <=  1'b0;
        crmd[  `DA] <=  1'b1;
        crmd[  `PG] <=  1'b0;
        crmd[`DATF] <=  2'b0;
        crmd[`DATM] <=  2'b0;
        crmd[31: 9] <= 23'b0;

    end
    else begin 
        if (excp_flush) begin
            crmd[ `PLV] <=  2'b0;
            crmd[  `IE] <=  1'b0;
            if(excp_tlbrefill) begin 
                crmd [`DA] <= 1'b1;
                crmd [`PG] <= 1'b0;
            end
         end
         else if(ertn_flush) begin 
            crmd[ `PLV] <=  prmd[ `PLV];
            crmd[  `IE] <=  prmd[  `IE];
            if(estat[`Ecode] == 6'h3f) begin 
                crmd [`DA] <= 1'b0;
                crmd [`PG] <= 1'b1;
            end
         end
        else if(crmd_wen) begin 
            crmd[ `PLV] <= csr_wdata[ `PLV];
            crmd[  `IE] <= csr_wdata[  `IE];
            crmd[  `DA] <= csr_wdata[  `DA];
            crmd[  `PG] <= csr_wdata[  `PG];
            crmd[`DATF] <= csr_wdata[`DATF];
            crmd[`DATM] <= csr_wdata[`DATM];
            // crmd[31: 9] <= csr_wdata[`DATM];
        end
    end
end

//prmd
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        prmd[ `PPLV] <=  2'b0;
        prmd[  `PIE] <=  1'b0;
        prmd[  31:3] <=  29'h0;
    end
    else begin 
        if (excp_flush) begin
            prmd[`PPLV] <= crmd[`PLV];
            prmd[ `PIE] <= crmd[`IE ];
        end
        else if(prmd_wen) begin 
            prmd[ `PPLV] <=  csr_wdata[ `PPLV];
            prmd[  `PIE] <=  csr_wdata[  `PIE];
        end
    end
end

//ecfg
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        ecfg <=  32'h0;

    end
    else begin 
        
        if(ecfg_wen) begin 
            ecfg[ `LIE1] <=  csr_wdata[ `LIE1];
            ecfg[ `LIE2] <=  csr_wdata[ `LIE2];
        end
    end
end

//estat for interrupt 
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        estat <=  32'h0;
        timer_en <= 1'b0;
    end
    else begin 
        if (ticlr_wen && csr_wdata[`CLR]) begin
            estat[11] <= 1'b0;
        end
        else if (tcfg_wen) begin
            timer_en <= csr_wdata[`EN];
        end
        else if (timer_en && (tval == 32'b0)) begin
            estat[11] <= 1'b1;
            timer_en      <= tcfg[`PERIODIC];
        end

        estat[`IS2] <= interrupt;
        if (excp_flush) begin
            estat[   `Ecode] <= ecode_in;
            estat[`EsubCode] <= esubcode_in;
        end
        else if(estat_wen) begin 
            estat[ `IS1] <=  csr_wdata[ `IS1];
            // estat[ `Ecode] <=  csr_wdata[ `Ecode];
            // estat[ `EsubCode] <=  csr_wdata[ `EsubCode];
        end
    end
end
//era
always @(posedge clk) begin
    if(reset) begin 
        era <= 32'h0;
    end
    if (excp_flush) begin
        era <= era_in;
    end
    else if (era_wen) begin
        era <= csr_wdata;
    end
end


//eentry
always @(posedge clk) begin
    if(reset) begin 
        eentry[5:0] <= 6'h0; 
    end
    else begin 
        if(eentry_wen) begin 
            eentry[`VA] <= csr_wdata[`VA];
        end
    end
    
end
//cpuid
always @(posedge clk) begin 
    if(reset) begin 
        cpuid <= 32'h0;
    end
end
//save0
always @(posedge clk) begin
    if (save0_wen) begin
        csr_save0 <= csr_wdata;
    end 
end
//save1
always @(posedge clk) begin
    if (save1_wen) begin
        csr_save1 <= csr_wdata;
    end 
end
//save2 
always @(posedge clk) begin
    if (save2_wen) begin
        csr_save2 <= csr_wdata;
    end 
end
//save3
always @(posedge clk) begin
    if (save3_wen) begin
        csr_save3 <= csr_wdata;
    end 
end

// llbit
always @(posedge clk) begin
    if(reset) begin 
        llbctl[`KLO] <= 1'b0;
        llbctl[31:3] <= 29'b0;
        llbit <= 1'b0;
    end
    else begin 
        if(ertn_flush & llbctl[`KLO]) begin 
            llbit <= 1'b0;
            llbctl[`KLO] <= 1'b0;
        end
        else if (llbctl_wen) begin 
            llbctl[  `KLO] <= csr_wdata[  `KLO];
            if (csr_wdata[`WCLLB] == 1'b1) begin
                llbit <= 1'b0;
            end
        end
        else if(llbit_set_en) begin 
            llbit <= llbit_in;
        end

    end
end
// tid
always @(posedge clk) begin
    if(reset) begin 
        tid <= 32'h0;
    end
    else begin 
        if(tid_wen) begin 
            tid <= csr_wdata;
        end
    end
end
//tcfg
always @(posedge clk) begin
    if (reset) begin
        tcfg[`EN] <= 1'b0;
    end
    else if (tcfg_wen) begin
        tcfg[      `EN] <= csr_wdata[      `EN];
        tcfg[`PERIODIC] <= csr_wdata[`PERIODIC];
        tcfg[ `INITVAL] <= csr_wdata[ `INITVAL];
    end
end

//tval
always @(posedge clk) begin
    if (tcfg_wen) begin
        tval <= {csr_wdata[ `INITVAL], 2'b0};
    end
    else if (timer_en) begin
        if (tval != 32'b0) begin
            tval <= tval - 32'b1;
        end
        else if (tval == 32'b0) begin
            tval <= tcfg[`PERIODIC] ? {tcfg[`INITVAL], 2'b0} : 32'hffffffff;
        end
    end
end
//ticlr
always @(posedge clk) begin
    if (reset) begin
        ticlr <= 32'b0;
    end
end

//dmw0 dmw1
always @(posedge clk) begin 
    if(reset) begin 
        dmw0 <= 32'h0;
    end
    else begin 
        if(DMW0_wen) begin 
            dmw0[`PLV0] <= csr_wdata[`PLV0];
            dmw0[`PLV3] <= csr_wdata[`PLV3];
            dmw0[`MAT] <= csr_wdata[`MAT];
            dmw0[`PSEG] <= csr_wdata[`PSEG];
            dmw0[`VSEG] <= csr_wdata[`VSEG];
        end
    end
end
always @(posedge clk) begin 
    if(reset) begin 
        dmw1 <= 32'h0;
    end
    else begin 
        if(DMW1_wen) begin 
            dmw1[`PLV0] <= csr_wdata[`PLV0];
            dmw1[`PLV3] <= csr_wdata[`PLV3];
            dmw1[`MAT] <= csr_wdata[`MAT];
            dmw1[`PSEG] <= csr_wdata[`PSEG];
            dmw1[`VSEG] <= csr_wdata[`VSEG];
        end
    end
end

//tlbrentry
always @(posedge clk) begin
    if(reset) begin 
        tlbrentry <= 32'h0;
    end 
    else begin 
        if(tlbrentry_wen) begin 
            tlbrentry[`PA] <= csr_wdata[`PA];
        end
    end
end

//tlbidx
always @(posedge clk) begin
    if(reset) begin 
        tlbidx <= 32'h0;
    end
    else begin 
        if(tlbidx_wen) begin 
            tlbidx[`INDEX] <= csr_wdata[`INDEX];
            tlbidx[`PS]    <= csr_wdata[`PS];
            tlbidx[`NE]    <= csr_wdata[`NE];
        end
        else if(tlb_serch_en) begin 
            if(data_tlbfound) begin 
                tlbidx[`INDEX] <= data_tlbindex;
                tlbidx[`NE]    <= 1'b0;
            end
            else tlbidx[`NE]    <= 1'b1;
        end
        else if(tlbrd_valid) begin 
            tlbidx[`PS] <= tlbidx_in[`PS];
            tlbidx[`NE] <= tlbidx_in[`NE];
        end
        else if(tlbrd_invalid) begin 
            tlbidx[`PS] <= 6'b0;
            tlbidx[`NE] <= tlbidx_in[`NE];
        end
    end
end

//asid 
always @(posedge clk) begin
    if(reset) begin 
        asid[31:10] <= 22'h280;
    end
    else begin 
        if(asid_wen) begin 
            asid[`ASID] <= csr_wdata[`ASID];
        end 
        else if(tlbrd_valid) begin 
            asid[`ASID] <= asid_in;
        end 
        else if(tlbrd_invalid) begin 
            asid[`ASID] <= 10'h0;
        end
    end 
end

// badv
always @(posedge clk) begin
    if(reset) begin 
        badv <= 32'h0;
    end 
    else begin 
        if(badv_wen) begin 
            badv <= csr_wdata;
        end
        else if(error_va_en)begin 
            badv <= error_vaddr;
        end
    end
end

// cnt

 always @(posedge clk) begin
     if(reset) begin 
         cntc <= 32'h0;
     end
     else if(cntc_wen) begin 
        cntc <= csr_wdata;
     end
 end

// tlbehi
always @(posedge clk) begin
    if(reset) begin 
        tlbehi <= 32'h0;
    end
    else begin 
        if (tlbehi_wen) begin
            tlbehi[`VPPN] <= csr_wdata[`VPPN];
        end
        else if(tlbrd_valid) begin 
            tlbehi[`VPPN] <= tlbehi_in[`VPPN];
        end
        else if(tlbrd_invalid) begin 
            tlbehi[`VPPN] <= 19'b0;
        end
        else if(excp_tlb) begin 
            tlbehi[`VPPN] <= error_vaddr[`VPPN];
        end
    end
end
//tlblo0
always @(posedge clk) begin
    if(reset) begin 
        tlbelo0 <= 32'h0;
    end
    else begin 
        if(tlbelo0_wen) begin 
            tlbelo0[`TLB_V]   <= csr_wdata[`TLB_V];
            tlbelo0[`TLB_D]   <= csr_wdata[`TLB_D];
            tlbelo0[`TLB_PLV] <= csr_wdata[`TLB_PLV];
            tlbelo0[`TLB_MAT] <= csr_wdata[`TLB_MAT];
            tlbelo0[`TLB_G]   <= csr_wdata[`TLB_G];
            tlbelo0[`TLB_PPN] <= csr_wdata[`TLB_PPN];
        end
        else if(tlbrd_valid) begin 
            tlbelo0[`TLB_V]   <= tlbelo0_in[`TLB_V];
            tlbelo0[`TLB_D]   <= tlbelo0_in[`TLB_D];
            tlbelo0[`TLB_PLV] <= tlbelo0_in[`TLB_PLV];
            tlbelo0[`TLB_MAT] <= tlbelo0_in[`TLB_MAT];
            tlbelo0[`TLB_G]   <= tlbelo0_in[`TLB_G];
            tlbelo0[`TLB_PPN] <= tlbelo0_in[`TLB_PPN];
        end
        else if(tlbrd_invalid) begin 
            tlbelo0[`TLB_V]   <= 1'b0;
            tlbelo0[`TLB_D]   <= 1'b0;
            tlbelo0[`TLB_PLV] <= 2'b0;
            tlbelo0[`TLB_MAT] <= 2'b0;
            tlbelo0[`TLB_G]   <= 1'b0;
            tlbelo0[`TLB_PPN] <= 24'b0;
        end
    end
end
//tlblo1
always @(posedge clk) begin
    if(reset) begin 
        tlbelo1 <= 32'h0;
    end
    else begin 
        if(tlbelo1_wen) begin 
            tlbelo1[`TLB_V]   <= csr_wdata[`TLB_V];
            tlbelo1[`TLB_D]   <= csr_wdata[`TLB_D];
            tlbelo1[`TLB_PLV] <= csr_wdata[`TLB_PLV];
            tlbelo1[`TLB_MAT] <= csr_wdata[`TLB_MAT];
            tlbelo1[`TLB_G]   <= csr_wdata[`TLB_G];
            tlbelo1[`TLB_PPN] <= csr_wdata[`TLB_PPN];
        end
        else if(tlbrd_valid) begin 
            tlbelo1[`TLB_V]   <= tlbelo1_in[`TLB_V];
            tlbelo1[`TLB_D]   <= tlbelo1_in[`TLB_D];
            tlbelo1[`TLB_PLV] <= tlbelo1_in[`TLB_PLV];
            tlbelo1[`TLB_MAT] <= tlbelo1_in[`TLB_MAT];
            tlbelo1[`TLB_G]   <= tlbelo1_in[`TLB_G];
            tlbelo1[`TLB_PPN] <= tlbelo1_in[`TLB_PPN];
        end
        else if(tlbrd_invalid) begin 
            tlbelo1[`TLB_V]   <= 1'b0;
            tlbelo1[`TLB_D]   <= 1'b0;
            tlbelo1[`TLB_PLV] <= 2'b0;
            tlbelo1[`TLB_MAT] <= 2'b0;
            tlbelo1[`TLB_G]   <= 1'b0;
            tlbelo1[`TLB_PPN] <= 24'b0;
        end
    end
end
//pgdh
always @(posedge clk) begin
    if(reset) begin 
        pgdh <= 32'h0;
    end
    else begin 
        if(pgdh_wen) begin 
            pgdh[`BASE] <= csr_wdata[`BASE];
        end
    end
end
always @(posedge clk) begin
    if(reset) begin 
        pgdl <= 32'h0;
    end
    else begin 
        if(pgdl_wen) begin 
            pgdl[`BASE] <= csr_wdata[`BASE];
        end
    end
end
//lsfr 
always @(posedge clk) begin
    if(reset) begin 
        lsfr_reg <= 32'h0327;
    end
    else begin 
        lsfr_reg <= {lsfr_reg[0] ^ lsfr_reg[31] ^ lsfr_reg[20] ^ lsfr_reg[8] ,lsfr_reg[31:1]};
    end
end

assign timer_out =  timer64 + {{32{cntc[31]}}, cntc}; 
assign tid_out = tid;

//difftest
assign csr_crmd_diff        = crmd;
assign csr_prmd_diff        = prmd;
assign csr_ectl_diff        = ecfg;
assign csr_estat_diff       = estat;
assign csr_era_diff         = era;
assign csr_badv_diff        = badv;
assign csr_eentry_diff      = eentry;
assign csr_tlbidx_diff      = tlbidx;
assign csr_tlbehi_diff      = tlbehi;
assign csr_tlbelo0_diff     = tlbelo0;
assign csr_tlbelo1_diff     = tlbelo1;
assign csr_asid_diff        = asid;
assign csr_save0_diff       = csr_save0;
assign csr_save1_diff       = csr_save1;
assign csr_save2_diff       = csr_save2;
assign csr_save3_diff       = csr_save3;
assign csr_tid_diff         = tid;
assign csr_tcfg_diff        = tcfg;
assign csr_tval_diff        = tval;
assign csr_ticlr_diff       = ticlr;
assign csr_llbctl_diff      = {llbctl[31:1], llbit};
assign csr_tlbrentry_diff   = tlbrentry;
assign csr_dmw0_diff        = dmw0;
assign csr_dmw1_diff        = dmw1;
assign csr_pgdl_diff        = pgdl;
assign csr_pgdh_diff        = pgdh;

assign csr_rdata = ((csr_waddr == csr_raddr) && csr_wr_en) ? csr_wdata:
                    {32{csr_raddr == CRMD  }}  & crmd    |
                   {32{csr_raddr == PRMD  }}  & prmd    |
                   {32{csr_raddr== ECTL  }}  & ecfg    |
                    {32{csr_raddr == ESTAT }}  & estat   |
                    {32{csr_raddr == ERA   }}  & era	    |
                    {32{csr_raddr == BADV  }}  & badv    |
                    {32{csr_raddr == EENTRY}}  & eentry  |
                    {32{csr_raddr == TLBIDX}}  & tlbidx  |
                    {32{csr_raddr == TLBEHI}}  & tlbehi  |
                    {32{csr_raddr == TLBELO0}} & tlbelo0 |
                    {32{csr_raddr == TLBELO1}} & tlbelo1 |
                    {32{csr_raddr == ASID  }}  & asid    |
                    {32{csr_raddr == PGDL  }}  & pgdl    |
                    {32{csr_raddr == PGDH  }}  & pgdh    |
                    {32{csr_raddr == PGD   }}  & pgd     |
                    {32{csr_raddr == CPUID }}  & cpuid   |
                    {32{csr_raddr == SAVE0 }}  & csr_save0   |
                    {32{csr_raddr == SAVE1 }}  & csr_save1   |
                    {32{csr_raddr == SAVE2 }}  & csr_save2   |
                    {32{csr_raddr == SAVE3 }}  & csr_save3   |
                    {32{csr_raddr == TID   }}  & tid     |
                    {32{csr_raddr == TCFG  }}  & tcfg    |
                    {32{csr_raddr == CNTC  }}  & cntc    |
                    {32{csr_raddr == TICLR }}  & ticlr   |
                    {32{csr_raddr == LLBCTL}}  & {llbctl[31:1], llbit} |
                    {32{csr_raddr == TVAL  }}  & tval    |
                    {32{csr_raddr == TLBRENTRY}} & tlbrentry   |
                    {32{csr_raddr == DMW0}}    & dmw0    |
                    {32{csr_raddr == DMW1}}    & dmw1    ;

assign dapg_forward = !excp_tlbrefill & !(ertn_flush & (estat[`Ecode] == 6'h3f)) & !crmd_wen;
assign csr_dmw0 = DMW0_wen? csr_wdata:dmw0;
assign csr_dmw1 = DMW1_wen? csr_wdata:dmw1;
assign dapg = {2{excp_tlbrefill}} & {1'b1,1'b0} |
              {2{ertn_flush & (estat[`Ecode] == 6'h3f)}} & {1'b0,1'b1}|
              {2{crmd_wen}} & {csr_wdata[`DA],csr_wdata[`PG]} |
              {2{dapg_forward}} & {crmd[`DA],crmd[`PG]};

assign datf = crmd[`DATF];
assign datm = crmd[`DATM];
assign csr_ASID = asid;
assign tlbentry_out = tlbrentry;

assign csr_tlbehi = tlbehi_wen ? csr_wdata :tlbehi;
assign csr_tlbidx = tlbidx;
assign csr_tlbelo0 = tlbelo0;
assign csr_tlbelo1 = tlbelo1;
assign encode_in = estat[`Ecode];

endmodule //CSR

