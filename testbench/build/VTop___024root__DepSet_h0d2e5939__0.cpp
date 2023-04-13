// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop___024root.h"

VL_INLINE_OPT void VTop___024root___sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__Top__DOT__if_stage__DOT__temp;
    // Body
    __Vdly__Top__DOT__if_stage__DOT__temp = vlSelf->Top__DOT__if_stage__DOT__temp;
    if (vlSelf->reset) {
        __Vdly__Top__DOT__if_stage__DOT__temp = 0U;
        vlSelf->Top__DOT__if_stage__DOT__valid = 0U;
    } else {
        if (vlSelf->Top__DOT__if_stage__DOT__valid) {
            __Vdly__Top__DOT__if_stage__DOT__temp = 
                ((IData)(4U) + vlSelf->Top__DOT__if_stage__DOT__temp);
        }
        if (vlSelf->inst_ready) {
            vlSelf->Top__DOT__if_stage__DOT__valid = 1U;
        } else if ((1U & (~ (IData)(vlSelf->Top__DOT__if_stage__DOT__right_fire)))) {
            vlSelf->Top__DOT__if_stage__DOT__valid = 0U;
        }
    }
    vlSelf->Top__DOT__if_stage__DOT__temp = __Vdly__Top__DOT__if_stage__DOT__temp;
    vlSelf->PC = vlSelf->Top__DOT__if_stage__DOT__temp;
    vlSelf->Top__DOT__if_stage__DOT__right_fire = vlSelf->Top__DOT__if_stage__DOT__valid;
}

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VTop___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->inst_ready & 0xfeU))) {
        Verilated::overWidthError("inst_ready");}
}
#endif  // VL_DEBUG
