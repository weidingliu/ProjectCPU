// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__trace_chg_sub_3(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 6625);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & (IData)((0x3ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU))))));
        bufp->chgBit(oldp+1,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                              [0x2eU])));
        bufp->chgBit(oldp+2,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU] >> 1U))));
        bufp->chgBit(oldp+3,((1U & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU)))))));
        bufp->chgBit(oldp+4,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x2eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU]))));
        bufp->chgBit(oldp+5,((1U & (IData)((0x1ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2bU))))));
        bufp->chgBit(oldp+6,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                              [0x2fU])));
        bufp->chgBit(oldp+7,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU] >> 1U))));
        bufp->chgBit(oldp+8,((1U & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU)))))));
        bufp->chgBit(oldp+9,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x2fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU]))));
        bufp->chgBit(oldp+10,((1U & (IData)((0xffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2cU))))));
        bufp->chgBit(oldp+11,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x30U])));
        bufp->chgBit(oldp+12,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x30U] >> 1U))));
        bufp->chgBit(oldp+13,((1U & (~ (IData)((0xffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU)))))));
        bufp->chgBit(oldp+14,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0xffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x30U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x30U]))));
        bufp->chgBit(oldp+15,((1U & (IData)((0x7fffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2dU))))));
        bufp->chgBit(oldp+16,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x31U])));
        bufp->chgBit(oldp+17,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x31U] >> 1U))));
        bufp->chgBit(oldp+18,((1U & (~ (IData)((0x7fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU)))))));
        bufp->chgBit(oldp+19,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0x7fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x31U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x31U]))));
        bufp->chgBit(oldp+20,((1U & (IData)((0xfffffffffffffffULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+21,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [4U])));
        bufp->chgBit(oldp+22,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [4U] >> 1U))));
        bufp->chgBit(oldp+23,((1U & (~ (IData)((0xfffffffffffffffULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+24,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0xfffffffffffffffULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0xfffffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [4U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [4U]))));
        bufp->chgBit(oldp+25,((1U & (IData)((0x3fffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2eU))))));
        bufp->chgBit(oldp+26,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x32U])));
        bufp->chgBit(oldp+27,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x32U] >> 1U))));
        bufp->chgBit(oldp+28,((1U & (~ (IData)((0x3fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU)))))));
        bufp->chgBit(oldp+29,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0x3fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x32U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x32U]))));
        bufp->chgBit(oldp+30,((1U & (IData)((0x1fffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2fU))))));
        bufp->chgBit(oldp+31,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x33U])));
        bufp->chgBit(oldp+32,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x33U] >> 1U))));
        bufp->chgBit(oldp+33,((1U & (~ (IData)((0x1fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU)))))));
        bufp->chgBit(oldp+34,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0x1fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x33U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x33U]))));
        bufp->chgBit(oldp+35,((1U & (IData)((0xfffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x30U))))));
        bufp->chgBit(oldp+36,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x34U])));
        bufp->chgBit(oldp+37,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x34U] >> 1U))));
        bufp->chgBit(oldp+38,((1U & (~ (IData)((0xfffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x30U)))))));
        bufp->chgBit(oldp+39,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0xfffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x30U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x34U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x34U]))));
        bufp->chgBit(oldp+40,((1U & (IData)((0x7ffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x31U))))));
        bufp->chgBit(oldp+41,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x35U])));
        bufp->chgBit(oldp+42,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x35U] >> 1U))));
        bufp->chgBit(oldp+43,((1U & (~ (IData)((0x7ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x31U)))))));
        bufp->chgBit(oldp+44,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0x7ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x31U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x35U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x35U]))));
        bufp->chgBit(oldp+45,((1U & (IData)((0x3ffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x32U))))));
        bufp->chgBit(oldp+46,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x36U])));
        bufp->chgBit(oldp+47,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x36U] >> 1U))));
        bufp->chgBit(oldp+48,((1U & (~ (IData)((0x3ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x32U)))))));
        bufp->chgBit(oldp+49,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0x3ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x32U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x36U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x36U]))));
        bufp->chgBit(oldp+50,((1U & (IData)((0x1ffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x33U))))));
        bufp->chgBit(oldp+51,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x37U])));
        bufp->chgBit(oldp+52,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x37U] >> 1U))));
        bufp->chgBit(oldp+53,((1U & (~ (IData)((0x1ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x33U)))))));
        bufp->chgBit(oldp+54,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0x1ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x33U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x37U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x37U]))));
        bufp->chgBit(oldp+55,((1U & (IData)((0xffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x34U))))));
        bufp->chgBit(oldp+56,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x38U])));
        bufp->chgBit(oldp+57,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x38U] >> 1U))));
        bufp->chgBit(oldp+58,((1U & (~ (IData)((0xffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x34U)))))));
        bufp->chgBit(oldp+59,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0xffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x34U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x38U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x38U]))));
        bufp->chgBit(oldp+60,((1U & (IData)((0x7fULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x35U))))));
        bufp->chgBit(oldp+61,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x39U])));
        bufp->chgBit(oldp+62,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x39U] >> 1U))));
        bufp->chgBit(oldp+63,((1U & (~ (IData)((0x7fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x35U)))))));
        bufp->chgBit(oldp+64,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0x7fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x35U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x39U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x39U]))));
        bufp->chgBit(oldp+65,((1U & (IData)((0x3fULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x36U))))));
        bufp->chgBit(oldp+66,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x3aU])));
        bufp->chgBit(oldp+67,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x3aU] >> 1U))));
        bufp->chgBit(oldp+68,((1U & (~ (IData)((0x3fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x36U)))))));
        bufp->chgBit(oldp+69,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0x3fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x36U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x3aU] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x3aU]))));
        bufp->chgBit(oldp+70,((1U & (IData)((0x1fULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x37U))))));
        bufp->chgBit(oldp+71,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x3bU])));
        bufp->chgBit(oldp+72,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x3bU] >> 1U))));
        bufp->chgBit(oldp+73,((1U & (~ (IData)((0x1fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x37U)))))));
        bufp->chgBit(oldp+74,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0x1fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x37U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x3bU] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x3bU]))));
        bufp->chgBit(oldp+75,((1U & (IData)((0x7ffffffffffffffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 1U))))));
        bufp->chgBit(oldp+76,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [5U])));
        bufp->chgBit(oldp+77,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [5U] >> 1U))));
        bufp->chgBit(oldp+78,((1U & (~ (IData)((0x7ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 1U)))))));
        bufp->chgBit(oldp+79,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0x7ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 1U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [5U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [5U]))));
        bufp->chgBit(oldp+80,((1U & (IData)((0xfULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x38U))))));
        bufp->chgBit(oldp+81,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x3cU])));
        bufp->chgBit(oldp+82,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x3cU] >> 1U))));
        bufp->chgBit(oldp+83,((1U & (~ (IData)((0xfULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x38U)))))));
        bufp->chgBit(oldp+84,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((0xfULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x38U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x3cU] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x3cU]))));
        bufp->chgBit(oldp+85,((1U & (IData)((7ULL & 
                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x39U))))));
        bufp->chgBit(oldp+86,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x3dU])));
        bufp->chgBit(oldp+87,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x3dU] >> 1U))));
        bufp->chgBit(oldp+88,((1U & (~ (IData)((7ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x39U)))))));
        bufp->chgBit(oldp+89,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((7ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x39U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x3dU] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x3dU]))));
        bufp->chgBit(oldp+90,((1U & (IData)((3ULL & 
                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3aU))))));
        bufp->chgBit(oldp+91,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x3eU])));
        bufp->chgBit(oldp+92,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x3eU] >> 1U))));
        bufp->chgBit(oldp+93,((1U & (~ (IData)((3ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x3aU)))))));
        bufp->chgBit(oldp+94,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((3ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x3aU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x3eU] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x3eU]))));
        bufp->chgBit(oldp+95,((1U & (IData)((1ULL & 
                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU))))));
        bufp->chgBit(oldp+96,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                               [0x3fU])));
        bufp->chgBit(oldp+97,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                     [0x3fU] >> 1U))));
        bufp->chgBit(oldp+98,((1U & (~ (IData)((1ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x3bU)))))));
        bufp->chgBit(oldp+99,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((1ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x3bU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x3bU))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [0x3fU] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                  [0x3fU]))));
        bufp->chgBit(oldp+100,((1U & (IData)((0x3ffffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+101,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+102,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+103,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+104,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 2U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                   [6U]))));
        bufp->chgBit(oldp+105,((1U & (IData)((0x1ffffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+106,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+107,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+108,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+109,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 3U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                   [7U]))));
        bufp->chgBit(oldp+110,((1U & (IData)((0xffffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+111,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+112,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+113,((1U & (~ (IData)((0xffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+114,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 4U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                   [8U]))));
        bufp->chgBit(oldp+115,((1U & (IData)((0x7fffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+116,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+117,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+118,((1U & (~ (IData)((0x7fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+119,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 5U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                   [9U]))));
        bufp->chgBit(oldp+120,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                              >> 5U)))));
        bufp->chgBit(oldp+121,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                              >> 4U)))));
        bufp->chgCData(oldp+122,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                >> 5U)))),3);
        bufp->chgQData(oldp+123,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                  << 6U)),64);
        bufp->chgQData(oldp+125,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__6__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+127,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+128,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+130,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+131,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              << 6U)))));
        bufp->chgBit(oldp+132,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 6U))))));
        bufp->chgBit(oldp+133,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                << 6U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 6U)))) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+134,((1U & (IData)((0x3fffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+135,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+136,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+137,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+138,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 4U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0xaU]))));
        bufp->chgBit(oldp+139,((1U & (IData)((0x1fffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+140,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+141,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+142,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+143,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 5U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0xbU]))));
        bufp->chgBit(oldp+144,((1U & (IData)((0xfffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+145,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+146,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+147,((1U & (~ (IData)((0xfffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+148,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 6U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0xcU]))));
        bufp->chgBit(oldp+149,((1U & (IData)((0x7ffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+150,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+151,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+152,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+153,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 7U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0xdU]))));
        bufp->chgBit(oldp+154,((1U & (IData)((0x3ffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+155,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+156,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+157,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+158,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 8U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0xeU]))));
        bufp->chgBit(oldp+159,((1U & (IData)((0x1ffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+160,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+161,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+162,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+163,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 9U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0xfU]))));
        bufp->chgBit(oldp+164,((1U & (IData)((0xffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+165,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+166,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+167,((1U & (~ (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+168,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xaU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x10U]))));
        bufp->chgBit(oldp+169,((1U & (IData)((0x7fffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+170,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+171,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+172,((1U & (~ (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+173,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xbU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x11U]))));
        bufp->chgBit(oldp+174,((1U & (IData)((0x3fffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+175,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+176,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+177,((1U & (~ (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+178,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xcU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x12U]))));
        bufp->chgBit(oldp+179,((1U & (IData)((0x1fffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+180,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+181,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+182,((1U & (~ (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+183,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xdU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x13U]))));
        bufp->chgBit(oldp+184,((1U & (IData)((0x7fffffffffffffe0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 5U))))));
        bufp->chgBit(oldp+185,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+186,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+187,((1U & (~ (IData)((0x7fffffffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U)))))));
        bufp->chgBit(oldp+188,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffffffffe0ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 5U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [1U]))));
        bufp->chgBit(oldp+189,((1U & (IData)((0xfffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+190,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+191,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+192,((1U & (~ (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+193,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xeU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x14U]))));
        bufp->chgBit(oldp+194,((1U & (IData)((0x7ffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+195,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+196,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+197,((1U & (~ (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+198,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xfU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x15U]))));
        bufp->chgBit(oldp+199,((1U & (IData)((0x3ffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+200,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+201,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+202,((1U & (~ (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+203,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x16U]))));
        bufp->chgBit(oldp+204,((1U & (IData)((0x1ffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+205,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+206,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+207,((1U & (~ (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+208,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x17U]))));
        bufp->chgBit(oldp+209,((1U & (IData)((0xffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+210,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+211,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+212,((1U & (~ (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+213,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x18U]))));
        bufp->chgBit(oldp+214,((1U & (IData)((0x7fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+215,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+216,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+217,((1U & (~ (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+218,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x19U]))));
        bufp->chgBit(oldp+219,((1U & (IData)((0x3fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+220,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+221,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+222,((1U & (~ (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+223,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x1aU]))));
        bufp->chgBit(oldp+224,((1U & (IData)((0x1fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+225,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+226,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+227,((1U & (~ (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+228,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x1bU]))));
        bufp->chgBit(oldp+229,((1U & (IData)((0xfffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+230,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+231,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+232,((1U & (~ (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+233,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x1cU]))));
        bufp->chgBit(oldp+234,((1U & (IData)((0x7ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+235,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+236,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+237,((1U & (~ (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+238,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x1dU]))));
        bufp->chgBit(oldp+239,((1U & (IData)((0x3ffffffffffffff0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 4U))))));
        bufp->chgBit(oldp+240,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+241,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+242,((1U & (~ (IData)((0x3ffffffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U)))))));
        bufp->chgBit(oldp+243,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffffffffffff0ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 4U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [2U]))));
        bufp->chgBit(oldp+244,((1U & (IData)((0x3ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+245,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+246,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+247,((1U & (~ (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+248,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x1eU]))));
        bufp->chgBit(oldp+249,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+250,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+251,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+252,((1U & (~ (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+253,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x1fU]))));
        bufp->chgBit(oldp+254,((1U & (IData)((0xffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+255,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+256,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+257,((1U & (~ (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+258,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x20U]))));
        bufp->chgBit(oldp+259,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+260,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+261,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+262,((1U & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+263,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x21U]))));
        bufp->chgBit(oldp+264,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+265,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+266,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+267,((1U & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+268,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x22U]))));
        bufp->chgBit(oldp+269,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+270,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+271,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+272,((1U & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+273,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x23U]))));
        bufp->chgBit(oldp+274,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+275,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+276,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+277,((1U & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+278,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x24U]))));
        bufp->chgBit(oldp+279,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+280,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+281,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+282,((1U & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+283,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x25U]))));
        bufp->chgBit(oldp+284,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+285,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+286,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+287,((1U & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+288,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x20U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x26U]))));
        bufp->chgBit(oldp+289,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+290,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+291,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+292,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+293,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x21U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x27U]))));
        bufp->chgBit(oldp+294,((1U & (IData)((0x1ffffffffffffff8ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 3U))))));
        bufp->chgBit(oldp+295,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+296,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+297,((1U & (~ (IData)((0x1ffffffffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U)))))));
        bufp->chgBit(oldp+298,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffffffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffffffffffff8ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 3U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [3U]))));
        bufp->chgBit(oldp+299,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+300,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+301,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+302,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+303,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x22U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x28U]))));
        bufp->chgBit(oldp+304,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+305,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+306,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+307,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+308,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x23U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x29U]))));
        bufp->chgBit(oldp+309,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+310,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+311,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+312,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+313,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x24U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x2aU]))));
        bufp->chgBit(oldp+314,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+315,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+316,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+317,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+318,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x25U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x2bU]))));
        bufp->chgBit(oldp+319,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+320,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+321,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+322,((1U & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+323,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x26U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x2cU]))));
        bufp->chgBit(oldp+324,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+325,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+326,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+327,((1U & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+328,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x27U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x2dU]))));
        bufp->chgBit(oldp+329,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+330,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+331,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+332,((1U & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+333,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x28U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x28U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x2eU]))));
        bufp->chgBit(oldp+334,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+335,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+336,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+337,((1U & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+338,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x29U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x29U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x2fU]))));
        bufp->chgBit(oldp+339,((1U & (IData)((0xffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+340,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+341,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+342,((1U & (~ (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+343,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2aU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x30U]))));
        bufp->chgBit(oldp+344,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+345,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+346,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+347,((1U & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+348,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2bU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x31U]))));
        bufp->chgBit(oldp+349,((1U & (IData)((0xffffffffffffffcULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 2U))))));
        bufp->chgBit(oldp+350,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+351,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+352,((1U & (~ (IData)((0xffffffffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 2U)))))));
        bufp->chgBit(oldp+353,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffffffffffcULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 2U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [4U]))));
        bufp->chgBit(oldp+354,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+355,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+356,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+357,((1U & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+358,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x32U]))));
        bufp->chgBit(oldp+359,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+360,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+361,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+362,((1U & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+363,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x33U]))));
        bufp->chgBit(oldp+364,((1U & (IData)((0xfffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+365,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+366,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+367,((1U & (~ (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+368,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x34U]))));
        bufp->chgBit(oldp+369,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+370,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+371,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+372,((1U & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+373,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x35U]))));
        bufp->chgBit(oldp+374,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+375,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+376,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+377,((1U & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+378,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x30U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x30U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x36U]))));
        bufp->chgBit(oldp+379,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+380,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+381,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+382,((1U & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+383,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x31U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x31U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x37U]))));
        bufp->chgBit(oldp+384,((1U & (IData)((0xffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+385,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+386,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+387,((1U & (~ (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+388,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x32U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x32U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x38U]))));
        bufp->chgBit(oldp+389,((1U & (IData)((0x7fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+390,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+391,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+392,((1U & (~ (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+393,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x33U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x33U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x39U]))));
        bufp->chgBit(oldp+394,((1U & (IData)((0x3fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+395,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+396,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+397,((1U & (~ (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+398,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x34U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x34U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x3aU]))));
        bufp->chgBit(oldp+399,((1U & (IData)((0x1fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+400,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+401,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+402,((1U & (~ (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+403,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x35U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x35U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x3bU]))));
        bufp->chgBit(oldp+404,((1U & (IData)((0x7fffffffffffffeULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 1U))))));
        bufp->chgBit(oldp+405,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+406,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+407,((1U & (~ (IData)((0x7fffffffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 1U)))))));
        bufp->chgBit(oldp+408,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffffffffeULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 1U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [5U]))));
        bufp->chgBit(oldp+409,((1U & (IData)((0xfULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+410,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+411,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+412,((1U & (~ (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+413,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x36U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x36U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x3cU]))));
        bufp->chgBit(oldp+414,((1U & (IData)((7ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+415,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+416,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+417,((1U & (~ (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+418,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x37U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((7ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x37U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x3dU]))));
        bufp->chgBit(oldp+419,((1U & (IData)((3ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+420,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+421,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+422,((1U & (~ (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+423,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x38U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((3ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x38U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x3eU]))));
        bufp->chgBit(oldp+424,((1U & (IData)((1ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+425,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+426,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+427,((1U & (~ (IData)((1ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+428,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((1ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x39U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0x39U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [0x3fU]))));
        bufp->chgBit(oldp+429,((1U & (IData)((0x3ffffffffffffffULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+430,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+431,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+432,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+433,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffffffffffffULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [6U]))));
        bufp->chgBit(oldp+434,((1U & (IData)((0x1ffffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+435,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+436,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+437,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+438,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 1U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [7U]))));
        bufp->chgBit(oldp+439,((1U & (IData)((0xffffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+440,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+441,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+442,((1U & (~ (IData)((0xffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+443,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 2U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [8U]))));
        bufp->chgBit(oldp+444,((1U & (IData)((0x7fffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+445,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+446,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+447,((1U & (~ (IData)((0x7fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+448,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 3U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
                                   [9U]))));
        bufp->chgBit(oldp+449,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                              >> 7U)))));
        bufp->chgBit(oldp+450,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                              >> 6U)))));
        bufp->chgCData(oldp+451,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                >> 7U)))),3);
        bufp->chgQData(oldp+452,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                  << 8U)),64);
        bufp->chgQData(oldp+454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__8__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+456,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+457,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+460,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              << 8U)))));
        bufp->chgBit(oldp+461,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 8U))))));
        bufp->chgBit(oldp+462,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                << 8U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 8U)))) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+463,((1U & (IData)((0x3fffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+464,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+465,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+466,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+467,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 2U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0xaU]))));
        bufp->chgBit(oldp+468,((1U & (IData)((0x1fffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+469,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+470,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+471,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+472,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 3U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0xbU]))));
        bufp->chgBit(oldp+473,((1U & (IData)((0xfffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+474,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+475,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+476,((1U & (~ (IData)((0xfffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+477,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 4U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0xcU]))));
        bufp->chgBit(oldp+478,((1U & (IData)((0x7ffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+479,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+480,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+481,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+482,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 5U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0xdU]))));
        bufp->chgBit(oldp+483,((1U & (IData)((0x3ffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+484,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+485,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+486,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+487,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 6U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0xeU]))));
        bufp->chgBit(oldp+488,((1U & (IData)((0x1ffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+489,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+490,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+491,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+492,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 7U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0xfU]))));
        bufp->chgBit(oldp+493,((1U & (IData)((0xffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+494,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+495,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+496,((1U & (~ (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+497,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 8U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x10U]))));
        bufp->chgBit(oldp+498,((1U & (IData)((0x7fffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+499,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+500,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+501,((1U & (~ (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+502,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 9U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x11U]))));
        bufp->chgBit(oldp+503,((1U & (IData)((0x3fffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+504,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+505,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+506,((1U & (~ (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+507,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xaU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x12U]))));
        bufp->chgBit(oldp+508,((1U & (IData)((0x1fffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+509,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+510,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+511,((1U & (~ (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+512,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xbU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x13U]))));
        bufp->chgBit(oldp+513,((1U & (IData)((0x7fffffffffffff80ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 7U))))));
        bufp->chgBit(oldp+514,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+515,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+516,((1U & (~ (IData)((0x7fffffffffffff80ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 7U)))))));
        bufp->chgBit(oldp+517,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffffffff80ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffffffff80ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 7U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [1U]))));
        bufp->chgBit(oldp+518,((1U & (IData)((0xfffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+519,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+520,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+521,((1U & (~ (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+522,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xcU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x14U]))));
        bufp->chgBit(oldp+523,((1U & (IData)((0x7ffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+524,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+525,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+526,((1U & (~ (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+527,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xdU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x15U]))));
        bufp->chgBit(oldp+528,((1U & (IData)((0x3ffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+529,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+530,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+531,((1U & (~ (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+532,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xeU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x16U]))));
        bufp->chgBit(oldp+533,((1U & (IData)((0x1ffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+534,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+535,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+536,((1U & (~ (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+537,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0xfU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x17U]))));
        bufp->chgBit(oldp+538,((1U & (IData)((0xffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+539,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+540,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+541,((1U & (~ (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+542,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x18U]))));
        bufp->chgBit(oldp+543,((1U & (IData)((0x7fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+544,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+545,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+546,((1U & (~ (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+547,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x19U]))));
        bufp->chgBit(oldp+548,((1U & (IData)((0x3fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+549,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+550,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+551,((1U & (~ (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+552,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x1aU]))));
        bufp->chgBit(oldp+553,((1U & (IData)((0x1fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+554,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+555,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+556,((1U & (~ (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+557,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x1bU]))));
        bufp->chgBit(oldp+558,((1U & (IData)((0xfffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+559,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+560,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+561,((1U & (~ (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+562,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x1cU]))));
        bufp->chgBit(oldp+563,((1U & (IData)((0x7ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+564,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+565,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+566,((1U & (~ (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+567,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x1dU]))));
        bufp->chgBit(oldp+568,((1U & (IData)((0x3fffffffffffffc0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 6U))))));
        bufp->chgBit(oldp+569,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+570,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+571,((1U & (~ (IData)((0x3fffffffffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 6U)))))));
        bufp->chgBit(oldp+572,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffffffffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffffffffffffc0ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 6U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [2U]))));
        bufp->chgBit(oldp+573,((1U & (IData)((0x3ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+574,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+575,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+576,((1U & (~ (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+577,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x1eU]))));
        bufp->chgBit(oldp+578,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+579,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+580,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+581,((1U & (~ (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+582,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x1fU]))));
        bufp->chgBit(oldp+583,((1U & (IData)((0xffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+584,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+585,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+586,((1U & (~ (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+587,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x20U]))));
        bufp->chgBit(oldp+588,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+589,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+590,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+591,((1U & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+592,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x21U]))));
        bufp->chgBit(oldp+593,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+594,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+595,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+596,((1U & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+597,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x22U]))));
        bufp->chgBit(oldp+598,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+599,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+600,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+601,((1U & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+602,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x23U]))));
        bufp->chgBit(oldp+603,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+604,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+605,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+606,((1U & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+607,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x24U]))));
        bufp->chgBit(oldp+608,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+609,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+610,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+611,((1U & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+612,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x25U]))));
        bufp->chgBit(oldp+613,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+614,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+615,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+616,((1U & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+617,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x26U]))));
        bufp->chgBit(oldp+618,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+619,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+620,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+621,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+622,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x27U]))));
        bufp->chgBit(oldp+623,((1U & (IData)((0x1fffffffffffffe0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 5U))))));
        bufp->chgBit(oldp+624,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+625,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+626,((1U & (~ (IData)((0x1fffffffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U)))))));
        bufp->chgBit(oldp+627,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffffffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffffffffffffe0ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 5U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [3U]))));
        bufp->chgBit(oldp+628,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+629,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+630,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+631,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+632,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x20U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x28U]))));
        bufp->chgBit(oldp+633,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+634,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+635,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+636,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+637,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x21U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x29U]))));
        bufp->chgBit(oldp+638,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+639,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+640,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+641,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+642,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x22U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x2aU]))));
        bufp->chgBit(oldp+643,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+644,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+645,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+646,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+647,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x23U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x2bU]))));
        bufp->chgBit(oldp+648,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+649,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+650,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+651,((1U & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+652,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x24U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x2cU]))));
        bufp->chgBit(oldp+653,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+654,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+655,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+656,((1U & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+657,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x25U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x2dU]))));
        bufp->chgBit(oldp+658,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+659,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+660,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+661,((1U & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+662,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x26U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x2eU]))));
        bufp->chgBit(oldp+663,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+664,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+665,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+666,((1U & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+667,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x27U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x2fU]))));
        bufp->chgBit(oldp+668,((1U & (IData)((0xffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+669,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+670,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+671,((1U & (~ (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+672,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x28U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x28U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x30U]))));
        bufp->chgBit(oldp+673,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+674,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+675,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+676,((1U & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+677,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x29U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x29U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x31U]))));
        bufp->chgBit(oldp+678,((1U & (IData)((0xffffffffffffff0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 4U))))));
        bufp->chgBit(oldp+679,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+680,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+681,((1U & (~ (IData)((0xffffffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U)))))));
        bufp->chgBit(oldp+682,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffffffffff0ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 4U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [4U]))));
        bufp->chgBit(oldp+683,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+684,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+685,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+686,((1U & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+687,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2aU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x32U]))));
        bufp->chgBit(oldp+688,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+689,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+690,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+691,((1U & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+692,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2bU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x33U]))));
        bufp->chgBit(oldp+693,((1U & (IData)((0xfffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+694,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+695,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+696,((1U & (~ (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+697,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x34U]))));
        bufp->chgBit(oldp+698,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+699,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+700,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+701,((1U & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+702,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x35U]))));
        bufp->chgBit(oldp+703,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+704,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+705,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+706,((1U & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+707,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x36U]))));
        bufp->chgBit(oldp+708,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+709,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+710,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+711,((1U & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+712,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x37U]))));
        bufp->chgBit(oldp+713,((1U & (IData)((0xffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+714,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+715,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+716,((1U & (~ (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+717,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x30U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x30U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x38U]))));
        bufp->chgBit(oldp+718,((1U & (IData)((0x7fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+719,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+720,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+721,((1U & (~ (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+722,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x31U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x31U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x39U]))));
        bufp->chgBit(oldp+723,((1U & (IData)((0x3fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+724,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+725,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+726,((1U & (~ (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+727,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x32U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x32U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x3aU]))));
        bufp->chgBit(oldp+728,((1U & (IData)((0x1fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+729,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+730,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+731,((1U & (~ (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+732,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x33U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x33U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x3bU]))));
        bufp->chgBit(oldp+733,((1U & (IData)((0x7fffffffffffff8ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 3U))))));
        bufp->chgBit(oldp+734,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+735,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+736,((1U & (~ (IData)((0x7fffffffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U)))))));
        bufp->chgBit(oldp+737,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffffffff8ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 3U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [5U]))));
        bufp->chgBit(oldp+738,((1U & (IData)((0xfULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+739,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+740,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+741,((1U & (~ (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+742,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x34U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xfULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x34U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x3cU]))));
        bufp->chgBit(oldp+743,((1U & (IData)((7ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+744,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+745,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+746,((1U & (~ (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+747,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x35U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((7ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x35U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x3dU]))));
        bufp->chgBit(oldp+748,((1U & (IData)((3ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+749,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+750,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+751,((1U & (~ (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+752,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x36U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((3ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x36U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x3eU]))));
        bufp->chgBit(oldp+753,((1U & (IData)((1ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+754,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+755,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+756,((1U & (~ (IData)((1ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+757,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((1ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x37U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0x37U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [0x3fU]))));
        bufp->chgBit(oldp+758,((1U & (IData)((0x3fffffffffffffcULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 2U))))));
        bufp->chgBit(oldp+759,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+760,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+761,((1U & (~ (IData)((0x3fffffffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 2U)))))));
        bufp->chgBit(oldp+762,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x3fffffffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x3fffffffffffffcULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 2U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [6U]))));
        bufp->chgBit(oldp+763,((1U & (IData)((0x1fffffffffffffeULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 1U))))));
        bufp->chgBit(oldp+764,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+765,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+766,((1U & (~ (IData)((0x1fffffffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 1U)))))));
        bufp->chgBit(oldp+767,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x1fffffffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x1fffffffffffffeULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   << 1U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [7U]))));
        bufp->chgBit(oldp+768,((1U & (IData)((0xffffffffffffffULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+769,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+770,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+771,((1U & (~ (IData)((0xffffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+772,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0xffffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0xffffffffffffffULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [8U]))));
        bufp->chgBit(oldp+773,((1U & (IData)((0x7fffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+774,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+775,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+776,((1U & (~ (IData)((0x7fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+777,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((0x7fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x) 
                                     & (IData)((0x7fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 1U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
                                   [9U]))));
        bufp->chgBit(oldp+778,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                              >> 8U)))));
        bufp->chgCData(oldp+779,((6U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY) 
                                        << 1U))),3);
        bufp->chgQData(oldp+780,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__fir__OutX),64);
        bufp->chgBit(oldp+782,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x))));
        bufp->chgBit(oldp+783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx));
        bufp->chgBit(oldp+784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x));
        bufp->chgBit(oldp+785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x));
        bufp->chgBit(oldp+786,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
        bufp->chgBit(oldp+787,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+788,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x))));
        bufp->chgBit(oldp+789,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+790,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+791,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+792,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+793,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0xaU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xaU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xaU] >> 1U)))));
        bufp->chgBit(oldp+794,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+795,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+796,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+797,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+798,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0xbU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xbU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xbU] >> 1U)))));
        bufp->chgBit(oldp+799,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+800,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+801,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+802,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+803,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0xcU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xcU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xcU] >> 1U)))));
        bufp->chgBit(oldp+804,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+805,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+806,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+807,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+808,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0xdU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xdU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xdU] >> 1U)))));
        bufp->chgBit(oldp+809,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+810,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+811,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+812,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+813,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0xeU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xeU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xeU] >> 1U)))));
        bufp->chgBit(oldp+814,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+815,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+816,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+817,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+818,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0xfU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0xfU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xfU] >> 1U)))));
        bufp->chgBit(oldp+819,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+820,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+821,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+822,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+823,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x10U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x10U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x10U] >> 1U)))));
        bufp->chgBit(oldp+824,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+825,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+826,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+827,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+828,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x11U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x11U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x11U] >> 1U)))));
        bufp->chgBit(oldp+829,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+830,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+831,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+832,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+833,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x12U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x12U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x12U] >> 1U)))));
        bufp->chgBit(oldp+834,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+835,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+836,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+837,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+838,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x13U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x13U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x13U] >> 1U)))));
        bufp->chgBit(oldp+839,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 1U)))));
        bufp->chgBit(oldp+840,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+841,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+842,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+843,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 1U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 1U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [1U] >> 1U)))));
        bufp->chgBit(oldp+844,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+845,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+846,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+847,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+848,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x14U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x14U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x14U] >> 1U)))));
        bufp->chgBit(oldp+849,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+850,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+851,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+852,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+853,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x15U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x15U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x15U] >> 1U)))));
        bufp->chgBit(oldp+854,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+855,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+856,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+857,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+858,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x16U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x16U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x16U] >> 1U)))));
        bufp->chgBit(oldp+859,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+860,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+861,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+862,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+863,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x17U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x17U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x17U] >> 1U)))));
        bufp->chgBit(oldp+864,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+865,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+866,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+867,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+868,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x18U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x18U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x18U] >> 1U)))));
        bufp->chgBit(oldp+869,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+870,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+871,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+872,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+873,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x19U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x19U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x19U] >> 1U)))));
        bufp->chgBit(oldp+874,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+875,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+876,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+877,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+878,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1aU] >> 1U)))));
        bufp->chgBit(oldp+879,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+880,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+881,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+882,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+883,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1bU] >> 1U)))));
        bufp->chgBit(oldp+884,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+885,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+886,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+887,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+888,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1cU] >> 1U)))));
        bufp->chgBit(oldp+889,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+890,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+891,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+892,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+893,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1dU] >> 1U)))));
        bufp->chgBit(oldp+894,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 2U)))));
        bufp->chgBit(oldp+895,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+896,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+897,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+898,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 2U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 2U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [2U] >> 1U)))));
        bufp->chgBit(oldp+899,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+900,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+901,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+902,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+903,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1eU] >> 1U)))));
        bufp->chgBit(oldp+904,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+905,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+906,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+907,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+908,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x1fU] >> 1U)))));
        bufp->chgBit(oldp+909,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+910,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+911,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+912,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+913,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x20U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x20U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x20U] >> 1U)))));
        bufp->chgBit(oldp+914,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+915,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+916,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+917,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+918,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x21U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x21U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x21U] >> 1U)))));
        bufp->chgBit(oldp+919,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+920,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+921,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+922,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+923,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x22U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x22U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x22U] >> 1U)))));
        bufp->chgBit(oldp+924,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+925,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+926,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+927,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+928,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x23U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x23U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x23U] >> 1U)))));
        bufp->chgBit(oldp+929,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+930,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+931,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+932,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+933,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x24U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x24U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x24U] >> 1U)))));
        bufp->chgBit(oldp+934,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+935,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+936,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+937,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+938,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x25U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x25U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x25U] >> 1U)))));
        bufp->chgBit(oldp+939,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+940,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+941,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+942,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+943,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x26U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x26U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x26U] >> 1U)))));
        bufp->chgBit(oldp+944,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+945,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+946,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+947,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+948,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x27U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x27U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x27U] >> 1U)))));
        bufp->chgBit(oldp+949,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 3U)))));
        bufp->chgBit(oldp+950,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+951,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+952,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+953,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 3U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 3U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [3U] >> 1U)))));
        bufp->chgBit(oldp+954,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+955,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+956,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+957,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+958,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x28U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x28U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x28U] >> 1U)))));
        bufp->chgBit(oldp+959,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+960,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+961,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+962,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+963,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x29U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x29U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x29U] >> 1U)))));
        bufp->chgBit(oldp+964,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+965,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+966,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+967,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+968,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2aU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2aU] >> 1U)))));
        bufp->chgBit(oldp+969,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+970,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+971,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+972,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+973,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2bU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2bU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2bU] >> 1U)))));
        bufp->chgBit(oldp+974,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+975,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+976,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+977,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+978,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2cU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2cU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2cU] >> 1U)))));
        bufp->chgBit(oldp+979,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+980,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+981,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+982,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+983,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2dU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2dU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2dU] >> 1U)))));
        bufp->chgBit(oldp+984,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+985,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+986,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+987,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+988,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2eU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2eU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2eU] >> 1U)))));
        bufp->chgBit(oldp+989,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+990,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+991,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+992,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+993,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2fU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x2fU)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x2fU] >> 1U)))));
        bufp->chgBit(oldp+994,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+995,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+996,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+997,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+998,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                  & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x30U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x30U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x30U] >> 1U)))));
        bufp->chgBit(oldp+999,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+1000,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+1001,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+1002,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1003,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x31U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x31U] >> 1U)))));
        bufp->chgBit(oldp+1004,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 4U)))));
        bufp->chgBit(oldp+1005,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+1006,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1007,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1008,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 4U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 4U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [4U] >> 1U)))));
        bufp->chgBit(oldp+1009,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1010,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+1011,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+1012,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1013,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x32U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x32U] >> 1U)))));
        bufp->chgBit(oldp+1014,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1015,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+1016,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+1017,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1018,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x33U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x33U] >> 1U)))));
        bufp->chgBit(oldp+1019,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1020,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+1021,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+1022,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1023,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x34U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x34U] >> 1U)))));
        bufp->chgBit(oldp+1024,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1025,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+1026,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+1027,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1028,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x35U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x35U] >> 1U)))));
        bufp->chgBit(oldp+1029,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1030,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+1031,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+1032,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1033,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x36U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x36U] >> 1U)))));
        bufp->chgBit(oldp+1034,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1035,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+1036,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+1037,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1038,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x37U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x37U] >> 1U)))));
        bufp->chgBit(oldp+1039,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1040,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+1041,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+1042,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1043,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x38U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x38U] >> 1U)))));
        bufp->chgBit(oldp+1044,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1045,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+1046,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+1047,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1048,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x39U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x39U] >> 1U)))));
        bufp->chgBit(oldp+1049,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1050,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+1051,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+1052,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1053,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x3aU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3aU] >> 1U)))));
        bufp->chgBit(oldp+1054,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1055,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+1056,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+1057,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1058,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x3bU)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x3bU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3bU] >> 1U)))));
        bufp->chgBit(oldp+1059,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 5U)))));
        bufp->chgBit(oldp+1060,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+1061,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1062,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1063,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 5U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 5U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [5U] >> 1U)))));
        bufp->chgBit(oldp+1064,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1065,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+1066,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+1067,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1068,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x3cU)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x3cU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3cU] >> 1U)))));
        bufp->chgBit(oldp+1069,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1070,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+1071,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+1072,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1073,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x3dU)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x3dU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3dU] >> 1U)))));
        bufp->chgBit(oldp+1074,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1075,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+1076,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+1077,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1078,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x3eU)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x3eU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3eU] >> 1U)))));
        bufp->chgBit(oldp+1079,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1080,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+1081,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1082,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3fU))))));
        bufp->chgBit(oldp+1083,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x3fU)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x3fU)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3fU] >> 1U)))));
        bufp->chgBit(oldp+1084,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 6U)))));
        bufp->chgBit(oldp+1085,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+1086,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1087,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1088,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 6U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 6U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [6U] >> 1U)))));
        bufp->chgBit(oldp+1089,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 7U)))));
        bufp->chgBit(oldp+1090,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+1091,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1092,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1093,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 7U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 7U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [7U] >> 1U)))));
        bufp->chgBit(oldp+1094,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 8U)))));
        bufp->chgBit(oldp+1095,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1096,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1097,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1098,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 8U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 8U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [8U] >> 1U)))));
        bufp->chgBit(oldp+1099,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               >> 9U)))));
        bufp->chgBit(oldp+1100,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1101,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1102,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1103,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 9U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 9U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [9U] >> 1U)))));
        bufp->chgBit(oldp+1104,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))));
        bufp->chgIData(oldp+1105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData),17);
        bufp->chgSData(oldp+1106,((0x3fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)),14);
        bufp->chgBit(oldp+1107,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                        & (IData)((0U 
                                                   != 
                                                   (0x3000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                       | (IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))))));
        bufp->chgBit(oldp+1108,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                          & (0x1000U 
                                             == (0x3000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                         | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                            & (0x2000U 
                                               == (0x3000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                           & (0U == 
                                              (0x3000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                          & (0x3000U 
                                             == (0x3000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))))));
        bufp->chgCData(oldp+1109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig),5);
        bufp->chgCData(oldp+1110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig),4);
        bufp->chgCData(oldp+1111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig),2);
        bufp->chgCData(oldp+1112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig),2);
        bufp->chgBit(oldp+1113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig));
        bufp->chgBit(oldp+1114,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                                       >> 1U))));
        bufp->chgBit(oldp+1115,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig))));
        bufp->chgBit(oldp+1116,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1117,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                                         >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 0xbU))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 0xbU))))));
        bufp->chgBit(oldp+1118,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1119,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1120,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1121,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))))));
        bufp->chgBit(oldp+1122,((1U & ((((IData)((4U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                         | (IData)(
                                                   (8U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                        | (IData)((0x10U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)((0x1cU 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))))));
        bufp->chgBit(oldp+1123,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1124,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1125,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1126,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)((0x60U 
                                                  == 
                                                  (0x60U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))))));
        bufp->chgBit(oldp+1127,((1U & ((((IData)((0x20U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                         | (IData)(
                                                   (0x40U 
                                                    == 
                                                    (0xe0U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                        | (IData)((0x80U 
                                                   == 
                                                   (0xe0U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)((0xe0U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))))));
        bufp->chgBit(oldp+1128,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1129,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1130,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1131,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)((0x300U 
                                                  == 
                                                  (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))))));
        bufp->chgBit(oldp+1132,((1U & ((((IData)((0x100U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                         | (IData)(
                                                   (0x200U 
                                                    == 
                                                    (0x700U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                        | (IData)((0x400U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)((0x700U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))))));
        bufp->chgBit(oldp+1133,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1134,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1135,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1136,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)((0x1800U 
                                                  == 
                                                  (0x1800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))))));
        bufp->chgBit(oldp+1137,((1U & ((((IData)((0x800U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                         | (IData)(
                                                   (0x1000U 
                                                    == 
                                                    (0x3800U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                        | (IData)((0x2000U 
                                                   == 
                                                   (0x3800U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)((0x3800U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))))));
        bufp->chgBit(oldp+1138,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1139,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1140,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1141,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)((0xc000U 
                                                  == 
                                                  (0xc000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))))));
        bufp->chgBit(oldp+1142,((1U & ((((IData)((0x4000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                         | (IData)(
                                                   (0x8000U 
                                                    == 
                                                    (0x1c000U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                        | (IData)((0x10000U 
                                                   == 
                                                   (0x1c000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)((0x1c000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)))))));
        bufp->chgBit(oldp+1143,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 9U))));
        bufp->chgBit(oldp+1144,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 8U))));
        bufp->chgBit(oldp+1145,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 7U))));
        bufp->chgBit(oldp+1146,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                       | (IData)((0x180U 
                                                  == 
                                                  (0x180U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))))));
        bufp->chgBit(oldp+1147,((1U & ((((IData)((0x80U 
                                                  == 
                                                  (0x380U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                         | (IData)(
                                                   (0x100U 
                                                    == 
                                                    (0x380U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                        | (IData)((0x200U 
                                                   == 
                                                   (0x380U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                       | (IData)((0x380U 
                                                  == 
                                                  (0x380U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))))));
        bufp->chgBit(oldp+1148,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                       >> 1U))));
        bufp->chgBit(oldp+1149,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))));
        bufp->chgBit(oldp+1150,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1151,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                         >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 0xaU))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 0xaU))))));
        bufp->chgBit(oldp+1152,((1U & (((((IData)((0U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 0xaU)) 
                                         | ((IData)(
                                                    (1U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))) 
                                            & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                  >> 0xaU)))) 
                                        | ((IData)(
                                                   (2U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))) 
                                           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                 >> 0xaU)))) 
                                       | ((IData)((3U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 0xaU))))));
        bufp->chgBit(oldp+1153,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 2U))));
        bufp->chgBit(oldp+1154,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 1U))));
        bufp->chgBit(oldp+1155,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)));
        bufp->chgBit(oldp+1156,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                         >> 2U) & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 1U) 
                                                   | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)) 
                                       | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                           >> 1U) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))));
        bufp->chgBit(oldp+1157,((1U & ((((IData)((1U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                         | (IData)(
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                        | (IData)((4U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                       | (IData)((7U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))))));
        bufp->chgBit(oldp+1158,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)));
        bufp->chgBit(oldp+1159,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 4U))));
        bufp->chgBit(oldp+1160,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 3U))));
        bufp->chgBit(oldp+1161,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                       | (IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))))));
        bufp->chgBit(oldp+1162,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData) 
                                          & (8U == 
                                             (0x18U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                         | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData) 
                                            & (0x10U 
                                               == (0x18U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                           & (0U == 
                                              (0x18U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                          & (0x18U 
                                             == (0x18U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))))));
        bufp->chgBit(oldp+1163,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                       >> 1U))));
        bufp->chgBit(oldp+1164,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig))));
        bufp->chgBit(oldp+1165,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1166,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                         >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 1U))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 1U))))));
        bufp->chgBit(oldp+1167,((1U & (((((IData)((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig)))) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 1U)) 
                                         | ((IData)(
                                                    (1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig)))) 
                                            & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 1U)))) 
                                        | ((IData)(
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig)))) 
                                           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                 >> 1U)))) 
                                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                            >> 1U) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig)) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 1U))))));
        bufp->chgBit(oldp+1168,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                       >> 4U))));
        bufp->chgBit(oldp+1169,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                       >> 3U))));
        bufp->chgBit(oldp+1170,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                       >> 2U))));
        bufp->chgBit(oldp+1171,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig))))) 
                                       | (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig))))))));
        bufp->chgBit(oldp+1172,((1U & ((((IData)((4U 
                                                  == 
                                                  (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig)))) 
                                         | (IData)(
                                                   (8U 
                                                    == 
                                                    (0x1cU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig))))) 
                                        | (IData)((0x10U 
                                                   == 
                                                   (0x1cU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig))))) 
                                       | (IData)((0x1cU 
                                                  == 
                                                  (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig))))))));
        bufp->chgBit(oldp+1173,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1174,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1175,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig))));
        bufp->chgBit(oldp+1176,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 6U))));
        bufp->chgBit(oldp+1177,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 5U))));
        bufp->chgBit(oldp+1178,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                        & (IData)((0U 
                                                   != 
                                                   (0x60U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                       | (IData)((0x60U 
                                                  == 
                                                  (0x60U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))))));
        bufp->chgBit(oldp+1179,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig)) 
                                          & (0x20U 
                                             == (0x60U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                         | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig)) 
                                            & (0x40U 
                                               == (0x60U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                           & (0U == 
                                              (0x60U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                          & (0x60U 
                                             == (0x60U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))))));
        bufp->chgBit(oldp+1180,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                       >> 3U))));
        bufp->chgBit(oldp+1181,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                       >> 2U))));
        bufp->chgBit(oldp+1182,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                       >> 1U))));
        bufp->chgBit(oldp+1183,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                         >> 3U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (6U 
                                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig))))) 
                                       | (IData)((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig))))))));
        bufp->chgBit(oldp+1184,((1U & ((((IData)((2U 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig)))) 
                                         | (IData)(
                                                   (4U 
                                                    == 
                                                    (0xeU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig))))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0xeU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig))))) 
                                       | (IData)((0xeU 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig))))))));
        bufp->chgCData(oldp+1185,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__las__y),3);
        bufp->chgQData(oldp+1186,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 0x20U)),64);
        bufp->chgQData(oldp+1188,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__las__OutX),64);
        bufp->chgBit(oldp+1190,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x))));
        bufp->chgBit(oldp+1191,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx));
        bufp->chgBit(oldp+1192,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x));
        bufp->chgBit(oldp+1193,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x));
        bufp->chgBit(oldp+1194,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x20U)))));
        bufp->chgBit(oldp+1195,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x20U))))));
        bufp->chgBit(oldp+1196,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x20U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                << 0x20U)))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x))));
        bufp->chgBit(oldp+1197,((1U & (IData)((0x3fffffffc00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x16U))))));
        bufp->chgBit(oldp+1198,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+1199,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+1200,((1U & (~ (IData)((0x3fffffffc00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x16U)))))));
        bufp->chgBit(oldp+1201,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3fffffffc00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x16U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3fffffffc00000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x16U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0xaU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0xaU]))));
        bufp->chgBit(oldp+1202,((1U & (IData)((0x1fffffffe00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x15U))))));
        bufp->chgBit(oldp+1203,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+1204,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+1205,((1U & (~ (IData)((0x1fffffffe00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x15U)))))));
        bufp->chgBit(oldp+1206,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1fffffffe00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x15U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1fffffffe00000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x15U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0xbU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0xbU]))));
        bufp->chgBit(oldp+1207,((1U & (IData)((0xffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x14U))))));
        bufp->chgBit(oldp+1208,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+1209,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+1210,((1U & (~ (IData)((0xffffffff00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x14U)))))));
        bufp->chgBit(oldp+1211,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xffffffff00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xffffffff00000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x14U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0xcU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0xcU]))));
        bufp->chgBit(oldp+1212,((1U & (IData)((0x7fffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x13U))))));
        bufp->chgBit(oldp+1213,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+1214,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+1215,((1U & (~ (IData)((0x7fffffff80000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x13U)))))));
        bufp->chgBit(oldp+1216,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7fffffff80000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7fffffff80000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x13U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0xdU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0xdU]))));
        bufp->chgBit(oldp+1217,((1U & (IData)((0x3fffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x12U))))));
        bufp->chgBit(oldp+1218,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+1219,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+1220,((1U & (~ (IData)((0x3fffffffc0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x12U)))))));
        bufp->chgBit(oldp+1221,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3fffffffc0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3fffffffc0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x12U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0xeU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0xeU]))));
        bufp->chgBit(oldp+1222,((1U & (IData)((0x1fffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x11U))))));
        bufp->chgBit(oldp+1223,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+1224,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+1225,((1U & (~ (IData)((0x1fffffffe0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x11U)))))));
        bufp->chgBit(oldp+1226,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1fffffffe0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1fffffffe0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x11U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0xfU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0xfU]))));
        bufp->chgBit(oldp+1227,((1U & (IData)((0xffffffff0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x10U))))));
        bufp->chgBit(oldp+1228,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+1229,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+1230,((1U & (~ (IData)((0xffffffff0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x10U)))))));
        bufp->chgBit(oldp+1231,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xffffffff0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xffffffff0000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x10U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x10U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x10U]))));
        bufp->chgBit(oldp+1232,((1U & (IData)((0x7fffffff8000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xfU))))));
        bufp->chgBit(oldp+1233,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+1234,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+1235,((1U & (~ (IData)((0x7fffffff8000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xfU)))))));
        bufp->chgBit(oldp+1236,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7fffffff8000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7fffffff8000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xfU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x11U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x11U]))));
        bufp->chgBit(oldp+1237,((1U & (IData)((0x3fffffffc000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xeU))))));
        bufp->chgBit(oldp+1238,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+1239,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+1240,((1U & (~ (IData)((0x3fffffffc000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU)))))));
        bufp->chgBit(oldp+1241,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3fffffffc000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3fffffffc000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xeU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x12U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x12U]))));
        bufp->chgBit(oldp+1242,((1U & (IData)((0x1fffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xdU))))));
        bufp->chgBit(oldp+1243,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+1244,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+1245,((1U & (~ (IData)((0x1fffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU)))))));
        bufp->chgBit(oldp+1246,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1fffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1fffffffe000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xdU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x13U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x13U]))));
        bufp->chgBit(oldp+1247,((1U & (IData)((0x7fffffff80000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1fU))))));
        bufp->chgBit(oldp+1248,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+1249,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+1250,((1U & (~ (IData)((0x7fffffff80000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1fU)))))));
        bufp->chgBit(oldp+1251,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7fffffff80000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1fU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7fffffff80000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [1U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [1U]))));
        bufp->chgBit(oldp+1252,((1U & (IData)((0xffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xcU))))));
        bufp->chgBit(oldp+1253,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+1254,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+1255,((1U & (~ (IData)((0xffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU)))))));
        bufp->chgBit(oldp+1256,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xffffffff000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xcU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x14U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x14U]))));
        bufp->chgBit(oldp+1257,((1U & (IData)((0x7fffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xbU))))));
        bufp->chgBit(oldp+1258,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+1259,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+1260,((1U & (~ (IData)((0x7fffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU)))))));
        bufp->chgBit(oldp+1261,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7fffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7fffffff800ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x15U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x15U]))));
        bufp->chgBit(oldp+1262,((1U & (IData)((0x3fffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))));
        bufp->chgBit(oldp+1263,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+1264,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+1265,((1U & (~ (IData)((0x3fffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU)))))));
        bufp->chgBit(oldp+1266,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3fffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3fffffffc00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x16U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x16U]))));
        bufp->chgBit(oldp+1267,((1U & (IData)((0x1fffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 9U))))));
        bufp->chgBit(oldp+1268,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+1269,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+1270,((1U & (~ (IData)((0x1fffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U)))))));
        bufp->chgBit(oldp+1271,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1fffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1fffffffe00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x17U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x17U]))));
        bufp->chgBit(oldp+1272,((1U & (IData)((0xffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 8U))))));
        bufp->chgBit(oldp+1273,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+1274,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+1275,((1U & (~ (IData)((0xffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U)))))));
        bufp->chgBit(oldp+1276,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xffffffff00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x18U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x18U]))));
        bufp->chgBit(oldp+1277,((1U & (IData)((0x7fffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 7U))))));
        bufp->chgBit(oldp+1278,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+1279,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+1280,((1U & (~ (IData)((0x7fffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U)))))));
        bufp->chgBit(oldp+1281,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7fffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7fffffff80ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x19U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x19U]))));
        bufp->chgBit(oldp+1282,((1U & (IData)((0x3fffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+1283,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+1284,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+1285,((1U & (~ (IData)((0x3fffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U)))))));
        bufp->chgBit(oldp+1286,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3fffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3fffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x1aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x1aU]))));
        bufp->chgBit(oldp+1287,((1U & (IData)((0x1fffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+1288,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+1289,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+1290,((1U & (~ (IData)((0x1fffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+1291,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1fffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1fffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x1bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x1bU]))));
        bufp->chgBit(oldp+1292,((1U & (IData)((0xffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+1293,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+1294,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+1295,((1U & (~ (IData)((0xffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+1296,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x1cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x1cU]))));
        bufp->chgBit(oldp+1297,((1U & (IData)((0x7fffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+1298,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+1299,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+1300,((1U & (~ (IData)((0x7fffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+1301,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7fffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7fffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x1dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x1dU]))));
        bufp->chgBit(oldp+1302,((1U & (IData)((0x3fffffffc0000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1eU))))));
        bufp->chgBit(oldp+1303,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+1304,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+1305,((1U & (~ (IData)((0x3fffffffc0000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1eU)))))));
        bufp->chgBit(oldp+1306,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3fffffffc0000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1eU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3fffffffc0000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [2U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [2U]))));
        bufp->chgBit(oldp+1307,((1U & (IData)((0x3fffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+1308,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+1309,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+1310,((1U & (~ (IData)((0x3fffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+1311,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3fffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3fffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x1eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x1eU]))));
        bufp->chgBit(oldp+1312,((1U & (IData)((0x1fffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+1313,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+1314,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+1315,((1U & (~ (IData)((0x1fffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+1316,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1fffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1fffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x1fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x1fU]))));
        bufp->chgBit(oldp+1317,((1U & (IData)((0xffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+1318,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+1319,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+1320,((1U & (~ (IData)((0xffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+1321,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x20U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x20U]))));
        bufp->chgBit(oldp+1322,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1323,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+1324,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+1325,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1326,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x21U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x21U]))));
        bufp->chgBit(oldp+1327,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1328,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+1329,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+1330,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1331,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x22U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x22U]))));
        bufp->chgBit(oldp+1332,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1333,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+1334,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+1335,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1336,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x23U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x23U]))));
        bufp->chgBit(oldp+1337,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1338,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+1339,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+1340,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1341,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x24U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x24U]))));
        bufp->chgBit(oldp+1342,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1343,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+1344,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+1345,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1346,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x25U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x25U]))));
        bufp->chgBit(oldp+1347,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1348,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+1349,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+1350,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1351,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x26U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x26U]))));
        bufp->chgBit(oldp+1352,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1353,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+1354,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+1355,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1356,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x27U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x27U]))));
        bufp->chgBit(oldp+1357,((1U & (IData)((0x1fffffffe0000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1dU))))));
        bufp->chgBit(oldp+1358,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+1359,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+1360,((1U & (~ (IData)((0x1fffffffe0000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1dU)))))));
        bufp->chgBit(oldp+1361,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1fffffffe0000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1dU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1fffffffe0000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [3U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [3U]))));
        bufp->chgBit(oldp+1362,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1363,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+1364,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+1365,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1366,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x28U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x28U]))));
        bufp->chgBit(oldp+1367,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1368,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+1369,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+1370,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1371,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x29U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x29U]))));
        bufp->chgBit(oldp+1372,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1373,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+1374,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+1375,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1376,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x2aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x2aU]))));
        bufp->chgBit(oldp+1377,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1378,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+1379,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+1380,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1381,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x2bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x2bU]))));
        bufp->chgBit(oldp+1382,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1383,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+1384,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+1385,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1386,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x2cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x2cU]))));
        bufp->chgBit(oldp+1387,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1388,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+1389,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+1390,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1391,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x2dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x2dU]))));
        bufp->chgBit(oldp+1392,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1393,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+1394,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+1395,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1396,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x2eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x2eU]))));
        bufp->chgBit(oldp+1397,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1398,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+1399,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+1400,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1401,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x2fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x2fU]))));
        bufp->chgBit(oldp+1402,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1403,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+1404,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+1405,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1406,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x30U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x30U]))));
        bufp->chgBit(oldp+1407,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1408,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+1409,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+1410,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1411,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x31U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x31U]))));
        bufp->chgBit(oldp+1412,((1U & (IData)((0xffffffff0000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1cU))))));
        bufp->chgBit(oldp+1413,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+1414,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1415,((1U & (~ (IData)((0xffffffff0000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1cU)))))));
        bufp->chgBit(oldp+1416,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xffffffff0000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1cU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xffffffff0000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [4U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [4U]))));
        bufp->chgBit(oldp+1417,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1418,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+1419,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+1420,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1421,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x32U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x32U]))));
        bufp->chgBit(oldp+1422,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1423,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+1424,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+1425,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1426,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x33U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x33U]))));
        bufp->chgBit(oldp+1427,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1428,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+1429,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+1430,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1431,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x34U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x34U]))));
        bufp->chgBit(oldp+1432,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1433,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+1434,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+1435,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1436,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x35U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x35U]))));
        bufp->chgBit(oldp+1437,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1438,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+1439,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+1440,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1441,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x36U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x36U]))));
        bufp->chgBit(oldp+1442,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1443,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+1444,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+1445,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1446,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x37U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x37U]))));
        bufp->chgBit(oldp+1447,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1448,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+1449,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+1450,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1451,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x38U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x38U]))));
        bufp->chgBit(oldp+1452,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1453,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+1454,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+1455,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1456,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x39U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x39U]))));
        bufp->chgBit(oldp+1457,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1458,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+1459,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+1460,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1461,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x3aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3aU]))));
        bufp->chgBit(oldp+1462,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1463,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+1464,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+1465,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1466,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x3bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3bU]))));
        bufp->chgBit(oldp+1467,((1U & (IData)((0x7fffffff8000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU))))));
        bufp->chgBit(oldp+1468,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+1469,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1470,((1U & (~ (IData)((0x7fffffff8000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1bU)))))));
        bufp->chgBit(oldp+1471,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7fffffff8000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1bU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7fffffff8000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [5U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [5U]))));
        bufp->chgBit(oldp+1472,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1473,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+1474,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+1475,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1476,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x3cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3cU]))));
        bufp->chgBit(oldp+1477,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1478,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+1479,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+1480,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1481,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x3dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3dU]))));
        bufp->chgBit(oldp+1482,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1483,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+1484,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+1485,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1486,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x3eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3eU]))));
        bufp->chgBit(oldp+1487,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1488,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+1489,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1490,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1491,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [0x3fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3fU]))));
        bufp->chgBit(oldp+1492,((1U & (IData)((0x3fffffffc000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU))))));
        bufp->chgBit(oldp+1493,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+1494,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1495,((1U & (~ (IData)((0x3fffffffc000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU)))))));
        bufp->chgBit(oldp+1496,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x3fffffffc000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x3fffffffc000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x1aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [6U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [6U]))));
        bufp->chgBit(oldp+1497,((1U & (IData)((0x1fffffffe000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x19U))))));
        bufp->chgBit(oldp+1498,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+1499,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1500,((1U & (~ (IData)((0x1fffffffe000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x19U)))))));
        bufp->chgBit(oldp+1501,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x1fffffffe000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x19U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x1fffffffe000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x19U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [7U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [7U]))));
        bufp->chgBit(oldp+1502,((1U & (IData)((0xffffffff000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x18U))))));
        bufp->chgBit(oldp+1503,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1504,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1505,((1U & (~ (IData)((0xffffffff000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x18U)))))));
        bufp->chgBit(oldp+1506,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0xffffffff000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x18U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0xffffffff000000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x18U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [8U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [8U]))));
        bufp->chgBit(oldp+1507,((1U & (IData)((0x7fffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x17U))))));
        bufp->chgBit(oldp+1508,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1509,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1510,((1U & (~ (IData)((0x7fffffff800000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x17U)))))));
        bufp->chgBit(oldp+1511,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                    & (~ (IData)((0x7fffffff800000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x17U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                      & (IData)((0x7fffffff800000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0x17U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                        [9U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [9U]))));
        bufp->chgBit(oldp+1512,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__las__y) 
                                       >> 2U))));
        bufp->chgBit(oldp+1513,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__las__y) 
                                       >> 1U))));
        bufp->chgBit(oldp+1514,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__las__y))));
        bufp->chgIData(oldp+1515,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+1516,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig) 
                                        & (IData)((0U 
                                                   != 
                                                   (0x3000U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))) 
                                       | (IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))))));
        bufp->chgBit(oldp+1517,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig)) 
                                          & (0x1000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029)))) 
                                         | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig)) 
                                            & (0x2000U 
                                               == (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig) 
                                           & (0U == 
                                              (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig) 
                                          & (0x3000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))))));
        bufp->chgCData(oldp+1518,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig),5);
        bufp->chgCData(oldp+1519,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__SecSig),4);
        bufp->chgCData(oldp+1520,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ThiSig),2);
        bufp->chgCData(oldp+1521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ForSig),2);
        bufp->chgBit(oldp+1522,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+1523,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ForSig) 
                                       >> 1U))));
        bufp->chgBit(oldp+1524,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ForSig))));
        bufp->chgBit(oldp+1525,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1526,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ForSig) 
                                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                                      >> 0xbU))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ForSig) 
                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                             >> 0xbU))))));
        bufp->chgBit(oldp+1527,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1528,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1529,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1530,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+1531,((1U & ((((IData)((4U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                         | (IData)(
                                                   (8U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                        | (IData)((0x10U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)((0x1cU 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+1532,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1533,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1534,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1535,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)((0x60U 
                                                  == 
                                                  (0x60U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+1536,((1U & ((((IData)((0x20U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                         | (IData)(
                                                   (0x40U 
                                                    == 
                                                    (0xe0U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                        | (IData)((0x80U 
                                                   == 
                                                   (0xe0U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)((0xe0U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+1537,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1538,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1539,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1540,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)((0x300U 
                                                  == 
                                                  (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+1541,((1U & ((((IData)((0x100U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                         | (IData)(
                                                   (0x200U 
                                                    == 
                                                    (0x700U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                        | (IData)((0x400U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)((0x700U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+1542,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1543,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1544,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1545,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)((0x1800U 
                                                  == 
                                                  (0x1800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+1546,((1U & ((((IData)((0x800U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                         | (IData)(
                                                   (0x1000U 
                                                    == 
                                                    (0x3800U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                        | (IData)((0x2000U 
                                                   == 
                                                   (0x3800U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)((0x3800U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+1547,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1548,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1549,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1550,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)((0xc000U 
                                                  == 
                                                  (0xc000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+1551,((1U & ((((IData)((0x4000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                         | (IData)(
                                                   (0x8000U 
                                                    == 
                                                    (0x1c000U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                        | (IData)((0x10000U 
                                                   == 
                                                   (0x1c000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)((0x1c000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+1552,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                       >> 9U))));
        bufp->chgBit(oldp+1553,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                       >> 8U))));
        bufp->chgBit(oldp+1554,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                       >> 7U))));
        bufp->chgBit(oldp+1555,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))) 
                                       | (IData)((0x180U 
                                                  == 
                                                  (0x180U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))))));
        bufp->chgBit(oldp+1556,((1U & ((((IData)((0x80U 
                                                  == 
                                                  (0x380U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029)))) 
                                         | (IData)(
                                                   (0x100U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))) 
                                        | (IData)((0x200U 
                                                   == 
                                                   (0x380U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))) 
                                       | (IData)((0x380U 
                                                  == 
                                                  (0x380U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))))));
        bufp->chgBit(oldp+1557,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ThiSig) 
                                       >> 1U))));
        bufp->chgBit(oldp+1558,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ThiSig))));
        bufp->chgBit(oldp+1559,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1560,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ThiSig) 
                                         >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ThiSig) 
                                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                                      >> 0xaU))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ThiSig) 
                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                             >> 0xaU))))));
        bufp->chgBit(oldp+1561,((1U & (((((IData)((0U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ThiSig))) 
                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                             >> 0xaU)) 
                                         | ((IData)(
                                                    (1U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ThiSig))) 
                                            & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                                  >> 0xaU)))) 
                                        | ((IData)(
                                                   (2U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ThiSig))) 
                                           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                                 >> 0xaU)))) 
                                       | ((IData)((3U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ThiSig))) 
                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                             >> 0xaU))))));
        bufp->chgBit(oldp+1562,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                       >> 2U))));
        bufp->chgBit(oldp+1563,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                       >> 1U))));
        bufp->chgBit(oldp+1564,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))));
        bufp->chgBit(oldp+1565,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                         >> 2U) & (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                                    >> 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                           >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))));
        bufp->chgBit(oldp+1566,((1U & ((((IData)((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029)))) 
                                         | (IData)(
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))) 
                                        | (IData)((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))) 
                                       | (IData)((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))))));
        bufp->chgBit(oldp+1567,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1568,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                       >> 4U))));
        bufp->chgBit(oldp+1569,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029) 
                                       >> 3U))));
        bufp->chgBit(oldp+1570,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))) 
                                       | (IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))))));
        bufp->chgBit(oldp+1571,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData) 
                                          & (8U == 
                                             (0x18U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029)))) 
                                         | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData) 
                                            & (0x10U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                           & (0U == 
                                              (0x18U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))) 
                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                          & (0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029))))))));
    }
}
