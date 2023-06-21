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
reg csr_llbit;
reg [31:0]csr_llbctl;
// reg[31:0] csr_era;

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
        else if(crmd_wen) begin 
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
    end
    else begin 


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
        csr_llbctl[`KLO] <= 1'b0;
        csr_llbctl[31:3] <= 29'b0;
        csr_llbit <= 1'b0;
    end
    else begin 

    end
end


endmodule //CSR

