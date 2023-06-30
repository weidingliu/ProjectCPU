`include "defines.sv"
`include "csr_defines.v"

module CSR (
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

    //for if 
    output wire [31:0]eentry_out,
    output wire [31:0]era_out,


    //for generate
    output wire [1:0] plv_out,

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
localparam BRK = 14'h100;
localparam DISABLE_CACHE = 14'h101;


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
wire BRK_wen    = csr_wr_en & (csr_waddr == BRK);
wire disable_cache_wen = csr_wr_en & (csr_waddr == DISABLE_CACHE);

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
// reg[31:0] csr_era;
reg [31:0]tid;
reg [31:0]tcfg;
reg [31:0]tval;
reg [31:0]ticlr;
reg timer_en;

assign plv_out = {2{excp_flush}} & 2'b0            |
                 {2{ertn_flush}} & prmd[`PPLV] |
                 {2{crmd_wen  }} & csr_wdata[`PLV] |
                 {2{!excp_flush && !ertn_flush && !crmd_wen}} & crmd[`PLV];
assign eentry_out = eentry;
assign era_out = era;

assign has_int = ((ecfg[12:0] & estat[12:0]) != 13'b0) & crmd[`IE];

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
         end
         else if(ertn_flush) begin 
            crmd[ `PLV] <=  prmd[ `PLV];
            crmd[  `IE] <=  prmd[  `IE];
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
    if (excp_flush) begin
        era <= era_in;
    end
    // else if(excp_flush) begin 
    //     era <= pc;
    // end
    else if (era_wen) begin
        era <= csr_wdata;
    end
end

//badv
always @(posedge clk) begin 
    badv <= 32'h0;
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



//difftest
assign csr_crmd_diff        = crmd;
assign csr_prmd_diff        = prmd;
assign csr_ectl_diff        = ecfg;
assign csr_estat_diff       = estat;
assign csr_era_diff         = era;
assign csr_badv_diff        = badv;
assign csr_eentry_diff      = eentry;
// assign csr_tlbidx_diff      = tlbidx;
// assign csr_tlbehi_diff      = tlbehi;
// assign csr_tlbelo0_diff     = tlbelo0;
// assign csr_tlbelo1_diff     = tlbelo1;
// assign csr_asid_diff        = asid;
assign csr_save0_diff       = csr_save0;
assign csr_save1_diff       = csr_save1;
assign csr_save2_diff       = csr_save2;
assign csr_save3_diff       = csr_save3;
assign csr_tid_diff         = tid;
assign csr_tcfg_diff        = tcfg;
assign csr_tval_diff        = tval;
assign csr_ticlr_diff       = ticlr;
// assign csr_llbctl_diff      = {llbctl[31:1], llbit};
// assign csr_tlbrentry_diff   = tlbrentry;
// assign csr_dmw0_diff        = dmw0;
// assign csr_dmw1_diff        = dmw1;
// assign csr_pgdl_diff        = pgdl;
// assign csr_pgdh_diff        = pgdh;

assign csr_rdata = ((csr_waddr == csr_raddr) && csr_wr_en) ? csr_wdata:
                    {32{csr_raddr == CRMD  }}  & crmd    |
                   {32{csr_raddr == PRMD  }}  & prmd    |
                   {32{csr_raddr== ECTL  }}  & ecfg    |
                    {32{csr_raddr == ESTAT }}  & estat   |
                    {32{csr_raddr == ERA   }}  & era	    |
                    // {32{csr_raddr == BADV  }}  & csr_badv    |
                    {32{csr_raddr == EENTRY}}  & eentry  |
                    // {32{csr_raddr == TLBIDX}}  & csr_tlbidx  |
                    // {32{csr_raddr == TLBEHI}}  & csr_tlbehi  |
                    // {32{csr_raddr == TLBELO0}} & csr_tlbelo0 |
                    // {32{csr_raddr == TLBELO1}} & csr_tlbelo1 |
                    // {32{csr_raddr == ASID  }}  & csr_asid    |
                    // {32{csr_raddr == PGDL  }}  & csr_pgdl    |
                    // {32{csr_raddr == PGDH  }}  & csr_pgdh    |
                    // {32{csr_raddr == PGD   }}  & csr_pgd     |
                    {32{csr_raddr == CPUID }}  & cpuid   |
                    {32{csr_raddr == SAVE0 }}  & csr_save0   |
                    {32{csr_raddr == SAVE1 }}  & csr_save1   |
                    {32{csr_raddr == SAVE2 }}  & csr_save2   |
                    {32{csr_raddr == SAVE3 }}  & csr_save3   |
                    {32{csr_raddr == TID   }}  & tid     |
                    {32{csr_raddr == TCFG  }}  & tcfg    |
                    // {32{csr_raddr == CNTC  }}  & csr_cntc    |
                    {32{csr_raddr == TICLR }}  & ticlr   |
                    // {32{csr_raddr == LLBCTL}}  & {csr_llbctl[31:1], llbit} |
                    {32{csr_raddr == TVAL  }}  & tval    ;
                    // {32{csr_raddr == TLBRENTRY}} & csr_tlbrentry   |
                    // {32{csr_raddr == DMW0}}    & csr_dmw0    |
                    // {32{csr_raddr == DMW1}}    & csr_dmw1    ;

endmodule //CSR

