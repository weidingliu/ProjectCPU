// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class VTop__Syms;

class VTop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(pc_valid,0,0);
    VL_IN8(inst_ready,0,0);
    VL_OUT8(wmask,3,0);
    VL_OUT8(en,0,0);
    CData/*0:0*/ Top__DOT__if_stage__DOT__valid;
    CData/*0:0*/ Top__DOT__if_stage__DOT__right_fire;
    CData/*0:0*/ Top__DOT__id_stage__DOT__right_fire;
    CData/*0:0*/ Top__DOT__id_stage__DOT__valid;
    CData/*3:0*/ Top__DOT__id_stage__DOT__decoder_op_21_20;
    CData/*1:0*/ Top__DOT__id_stage__DOT__select_src1;
    CData/*1:0*/ Top__DOT__id_stage__DOT__select_src2;
    CData/*0:0*/ Top__DOT__id_stage__DOT__inst_add;
    CData/*0:0*/ Top__DOT__id_stage__DOT__inst_or;
    CData/*0:0*/ Top__DOT__exe_stage__DOT__valid;
    CData/*0:0*/ Top__DOT__exe_stage__DOT__alu__DOT__adder_cin;
    CData/*0:0*/ Top__DOT__mem_stage__DOT__valid;
    CData/*0:0*/ Top__DOT__wb_syage__DOT__valid;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*13:0*/ Top__DOT__id_stage__DOT__alu_op;
    SData/*15:0*/ Top__DOT__id_stage__DOT__decoder_op_25_22;
    VL_IN(inst,31,0);
    VL_OUT(PC,31,0);
    VL_IN(rdata,31,0);
    VL_OUT(addr,31,0);
    VL_OUT(wdata,31,0);
    VlWide<4>/*102:0*/ Top__DOT__difftest_bus;
    IData/*31:0*/ Top__DOT__if_stage__DOT__temp;
    VlWide<6>/*181:0*/ Top__DOT__id_stage__DOT__bus_temp;
    IData/*31:0*/ Top__DOT__id_stage__DOT__Imm;
    IData/*31:0*/ Top__DOT__id_stage__DOT__decoder_op_31_26;
    IData/*31:0*/ Top__DOT__id_stage__DOT__decoder_op_19_15;
    VlWide<7>/*212:0*/ Top__DOT__exe_stage__DOT__ctrl_temp_bus;
    IData/*31:0*/ Top__DOT__exe_stage__DOT__alu__DOT__add_result;
    IData/*31:0*/ Top__DOT__exe_stage__DOT__alu__DOT__adder_a;
    IData/*31:0*/ Top__DOT__exe_stage__DOT__alu__DOT__adder_b;
    VlWide<4>/*102:0*/ Top__DOT__mem_stage__DOT__bus_temp;
    VlWide<4>/*102:0*/ Top__DOT__wb_syage__DOT__bus_temp;
    QData/*63:0*/ Top__DOT__if_stage__DOT__bus_temp;
    VlUnpacked<IData/*31:0*/, 32> Top__DOT__Regfile__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
