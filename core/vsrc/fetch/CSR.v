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
    input wire [8:0]esubcode_in

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


wire crmd_wen   = csr_wr_en & (wr_addr == CRMD);
wire prmd_wen   = csr_wr_en & (wr_addr == PRMD);
wire ecfg_wen   = csr_wr_en & (wr_addr == ECTL);
wire estat_wen  = csr_wr_en & (wr_addr == ESTAT);
wire era_wen    = csr_wr_en & (wr_addr == ERA);
wire badv_wen   = csr_wr_en & (wr_addr == BADV);
wire eentry_wen = csr_wr_en & (wr_addr == EENTRY);
wire tlbidx_wen = csr_wr_en & (wr_addr == TLBIDX);
wire tlbehi_wen = csr_wr_en & (wr_addr == TLBEHI);
wire tlbelo0_wen= csr_wr_en & (wr_addr == TLBELO0);
wire tlbelo1_wen= csr_wr_en & (wr_addr == TLBELO1);
wire asid_wen   = csr_wr_en & (wr_addr == ASID);
wire pgdl_wen   = csr_wr_en & (wr_addr == PGDL);
wire pgdh_wen   = csr_wr_en & (wr_addr == PGDH);
wire pgd_wen    = csr_wr_en & (wr_addr == PGD);
wire cpuid_wen  = csr_wr_en & (wr_addr == CPUID);
wire save0_wen  = csr_wr_en & (wr_addr == SAVE0);
wire save1_wen  = csr_wr_en & (wr_addr == SAVE1);
wire save2_wen  = csr_wr_en & (wr_addr == SAVE2);
wire save3_wen  = csr_wr_en & (wr_addr == SAVE3);
wire tid_wen    = csr_wr_en & (wr_addr == TID);
wire tcfg_wen   = csr_wr_en & (wr_addr == TCFG);
wire tval_wen   = csr_wr_en & (wr_addr == TVAL);
wire cntc_wen   = csr_wr_en & (wr_addr == CNTC);
wire ticlr_wen  = csr_wr_en & (wr_addr == TICLR);
wire llbctl_wen = csr_wr_en & (wr_addr == LLBCTL);
wire tlbrentry_wen = csr_wr_en & (wr_addr == TLBRENTRY);
wire DMW0_wen   = csr_wr_en & (wr_addr == DMW0);
wire DMW1_wen   = csr_wr_en & (wr_addr == DMW1);
wire BRK_wen    = csr_wr_en & (wr_addr == BRK);
wire disable_cache_wen = csr_wr_en & (wr_addr == DISABLE_CACHE);

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
            csr_crmd[ `PLV] <=  2'b0;
            csr_crmd[  `IE] <=  1'b0;
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
            csr_prmd[`PPLV] <= csr_crmd[`PLV];
            csr_prmd[ `PIE] <= csr_crmd[`IE ];
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

//estat
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        estat <=  32'h0;
    end
    else begin 

        if (excp_flush) begin
            csr_estat[   `Ecode] <= ecode_in;
            csr_estat[`EsubCode] <= esubcode_in;
        end
        else if(ecfg_wen) begin 
            estat[ `IS1] <=  csr_wdata[ `IS1];
            // estat[ `Ecode] <=  csr_wdata[ `Ecode];
            // estat[ `EsubCode] <=  csr_wdata[ `EsubCode];
        end
    end
end
//era
always @(posedge clk) begin
    if (excp_flush) begin
        csr_era <= era_in;
    end
    else if (era_wen) begin
        csr_era <= wr_data;
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
        csr_save0 <= wr_data;
    end 
end
//save1
always @(posedge clk) begin
    if (save1_wen) begin
        csr_save1 <= wr_data;
    end 
end
//save2 
always @(posedge clk) begin
    if (save2_wen) begin
        csr_save2 <= wr_data;
    end 
end
//save3
always @(posedge clk) begin
    if (save3_wen) begin
        csr_save3 <= wr_data;
    end 
end

// llbit
always @(posedge clk) begin
    if(reset) begin 
        csr_llbctl[`KLO] <= 1'b0;
        csr_llbctl[31:3] <= 29'b0;
        csr_llbit <= 1'b0;
    end
end


endmodule //CSR

