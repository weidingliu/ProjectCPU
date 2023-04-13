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
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(inst,31,0);
    VL_OUT(PC,31,0);
    VL_IN(rdata,31,0);
    VL_OUT(addr,31,0);
    VL_OUT(wdata,31,0);
    IData/*31:0*/ Top__DOT__if_stage__DOT__temp;

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
