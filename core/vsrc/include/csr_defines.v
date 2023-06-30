//CRMD
`define PLV 1:0
`define IE 2:2
`define DA 3:3
`define PG 4:4
`define DATF 6:5
`define DATM 8:7

//PRMD
`define PPLV 1:0
`define PIE 2:2


//ecfg
`define LIE1 9:0
`define LIE2 12:11

//estat
`define IS1 1:0
`define IS2 9:2
`define IS3 11:11
`define IS4 12:12
`define Ecode 21:16
`define EsubCode 30:22

//eentry
`define VA 31:6

//cpuid
`define CoreID 8:0

//llbit

`define ROLLB 0:0
`define WCLLB 1:1
`define KLO 2:2

//encode
`define ECODE_INT  6'h0
`define ECODE_PIL  6'h1
`define ECODE_PIS  6'h2
`define ECODE_PIF  6'h3
`define ECODE_PME  6'h4
`define ECODE_PPI  6'h7
`define ECODE_ADEF 6'h8
`define ECODE_ALE  6'h9
`define ECODE_SYS  6'hb
`define ECODE_BRK  6'hc
`define ECODE_INE  6'hd
`define ECODE_IPE  6'he
`define ECODE_FPD  6'hf
`define ECODE_TLBR 6'h3f

`define ESUBCODE_ADEF  9'h0

//tcfg 
`define EN        0
`define PERIODIC  1
`define INITVAL   31:2

//TICLR
`define CLR       0

