// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__trace_chg_sub_8(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_sub_8\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 12374);
    VlWide<4>/*127:0*/ __Vtemp_h0ff96379__0;
    VlWide<3>/*95:0*/ __Vtemp_h544f9cfd__0;
    VlWide<3>/*95:0*/ __Vtemp_h2a6e56df__0;
    VlWide<3>/*95:0*/ __Vtemp_h8dbd108e__0;
    VlWide<3>/*95:0*/ __Vtemp_he01ae970__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                    >> 2U))));
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                    >> 1U))));
        bufp->chgBit(oldp+2,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))));
        bufp->chgBit(oldp+3,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                      >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                        >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))));
        bufp->chgBit(oldp+4,((1U & ((((IData)((1U == 
                                               (7U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)))) 
                                      | (IData)((2U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))) 
                                     | (IData)((4U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))) 
                                    | (IData)((7U == 
                                               (7U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))))));
        bufp->chgBit(oldp+5,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                    >> 4U))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                    >> 3U))));
        bufp->chgBit(oldp+8,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                     & (IData)((0U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))) 
                                    | (IData)((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))))));
        bufp->chgBit(oldp+9,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData) 
                                       & (8U == (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)))) 
                                      | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData) 
                                         & (0x10U == 
                                            (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))) 
                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                        & (0U == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))) 
                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                       & (0x18U == 
                                          (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                     >> 1U))));
        bufp->chgBit(oldp+11,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig))));
        bufp->chgBit(oldp+12,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                     >> 1U))));
        bufp->chgBit(oldp+13,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 1U))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                           >> 1U))))));
        bufp->chgBit(oldp+14,((1U & (((((IData)((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig)))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                           >> 1U)) 
                                       | ((IData)((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig)))) 
                                          & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                >> 1U)))) 
                                      | ((IData)((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig)))) 
                                         & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                               >> 1U)))) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig)) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                           >> 1U))))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                     >> 4U))));
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                     >> 3U))));
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                     >> 2U))));
        bufp->chgBit(oldp+18,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+19,((1U & ((((IData)((4U 
                                                == 
                                                (0x1cU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig)))) 
                                       | (IData)((8U 
                                                  == 
                                                  (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0x10U 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0x1cU 
                                                == 
                                                (0x1cU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+22,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     >> 6U))));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     >> 5U))));
        bufp->chgBit(oldp+25,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))))));
        bufp->chgBit(oldp+26,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig)) 
                                        & (0x20U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig)) 
                                          & (0x40U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                         & (0U == (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                        & (0x60U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                     >> 3U))));
        bufp->chgBit(oldp+28,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                     >> 2U))));
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                     >> 1U))));
        bufp->chgBit(oldp+30,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                       >> 3U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig))))) 
                                     | (IData)((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgBit(oldp+31,((1U & ((((IData)((2U 
                                                == 
                                                (0xeU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig)))) 
                                       | (IData)((4U 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((8U 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig))))) 
                                     | (IData)((0xeU 
                                                == 
                                                (0xeU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgIData(oldp+32,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+33,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
        bufp->chgBit(oldp+34,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig)) 
                                        & (0x1000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig)) 
                                          & (0x2000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig) 
                                         & (0U == (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig) 
                                        & (0x3000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
        bufp->chgCData(oldp+35,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig),5);
        bufp->chgCData(oldp+36,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig),4);
        bufp->chgCData(oldp+37,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig),2);
        bufp->chgCData(oldp+38,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig),2);
        bufp->chgBit(oldp+39,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+40,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig) 
                                     >> 1U))));
        bufp->chgBit(oldp+41,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig))));
        bufp->chgBit(oldp+42,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+43,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                                    >> 0xbU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                           >> 0xbU))))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 4U))));
        bufp->chgBit(oldp+45,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 3U))));
        bufp->chgBit(oldp+46,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 2U))));
        bufp->chgBit(oldp+47,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+48,((1U & ((((IData)((4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                       | (IData)((8U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                      | (IData)((0x10U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0x1cU 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+49,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 7U))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 6U))));
        bufp->chgBit(oldp+51,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 5U))));
        bufp->chgBit(oldp+52,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+53,((1U & ((((IData)((0x20U 
                                                == 
                                                (0xe0U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                       | (IData)((0x40U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                      | (IData)((0x80U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0xe0U 
                                                == 
                                                (0xe0U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+54,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xaU))));
        bufp->chgBit(oldp+55,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 9U))));
        bufp->chgBit(oldp+56,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 8U))));
        bufp->chgBit(oldp+57,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+58,((1U & ((((IData)((0x100U 
                                                == 
                                                (0x700U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                       | (IData)((0x200U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                      | (IData)((0x400U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0x700U 
                                                == 
                                                (0x700U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+59,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xdU))));
        bufp->chgBit(oldp+60,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xcU))));
        bufp->chgBit(oldp+61,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xbU))));
        bufp->chgBit(oldp+62,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0x1800U 
                                                == 
                                                (0x1800U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+63,((1U & ((((IData)((0x800U 
                                                == 
                                                (0x3800U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                       | (IData)((0x1000U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                      | (IData)((0x2000U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0x3800U 
                                                == 
                                                (0x3800U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+64,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0x10U))));
        bufp->chgBit(oldp+65,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xfU))));
        bufp->chgBit(oldp+66,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xeU))));
        bufp->chgBit(oldp+67,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+68,((1U & ((((IData)((0x4000U 
                                                == 
                                                (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                       | (IData)((0x8000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                      | (IData)((0x10000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0x1c000U 
                                                == 
                                                (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+69,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 9U))));
        bufp->chgBit(oldp+70,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 8U))));
        bufp->chgBit(oldp+71,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 7U))));
        bufp->chgBit(oldp+72,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                     | (IData)((0x180U 
                                                == 
                                                (0x180U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
        bufp->chgBit(oldp+73,((1U & ((((IData)((0x80U 
                                                == 
                                                (0x380U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029)))) 
                                       | (IData)((0x100U 
                                                  == 
                                                  (0x380U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                      | (IData)((0x200U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                     | (IData)((0x380U 
                                                == 
                                                (0x380U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
        bufp->chgBit(oldp+74,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig) 
                                     >> 1U))));
        bufp->chgBit(oldp+75,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig))));
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+77,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                                    >> 0xaU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                           >> 0xaU))))));
        bufp->chgBit(oldp+78,((1U & (((((IData)((0U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig))) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                           >> 0xaU)) 
                                       | ((IData)((1U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig))) 
                                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                                >> 0xaU)))) 
                                      | ((IData)((2U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig))) 
                                         & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                               >> 0xaU)))) 
                                     | ((IData)((3U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig))) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                           >> 0xaU))))));
        bufp->chgBit(oldp+79,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 2U))));
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 1U))));
        bufp->chgBit(oldp+81,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))));
        bufp->chgBit(oldp+82,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                       >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                         >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))));
        bufp->chgBit(oldp+83,((1U & ((((IData)((1U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029)))) 
                                       | (IData)((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                      | (IData)((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                     | (IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
        bufp->chgBit(oldp+84,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+85,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 4U))));
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 3U))));
        bufp->chgBit(oldp+87,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                     | (IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
        bufp->chgBit(oldp+88,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData) 
                                        & (8U == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029)))) 
                                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData) 
                                          & (0x10U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                         & (0U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                        & (0x18U == 
                                           (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
        bufp->chgBit(oldp+89,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                     >> 1U))));
        bufp->chgBit(oldp+90,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig))));
        bufp->chgBit(oldp+91,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 1U))));
        bufp->chgBit(oldp+92,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                    >> 1U))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                           >> 1U))))));
        bufp->chgBit(oldp+93,((1U & (((((IData)((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig)))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                           >> 1U)) 
                                       | ((IData)((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig)))) 
                                          & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                >> 1U)))) 
                                      | ((IData)((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig)))) 
                                         & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                               >> 1U)))) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig)) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                           >> 1U))))));
        bufp->chgBit(oldp+94,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                     >> 4U))));
        bufp->chgBit(oldp+95,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                     >> 3U))));
        bufp->chgBit(oldp+96,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                     >> 2U))));
        bufp->chgBit(oldp+97,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+98,((1U & ((((IData)((4U 
                                                == 
                                                (0x1cU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig)))) 
                                       | (IData)((8U 
                                                  == 
                                                  (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0x10U 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0x1cU 
                                                == 
                                                (0x1cU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+99,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+100,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+101,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig))));
        bufp->chgBit(oldp+102,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                      >> 6U))));
        bufp->chgBit(oldp+103,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                      >> 5U))));
        bufp->chgBit(oldp+104,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
        bufp->chgBit(oldp+105,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig)) 
                                         & (0x20U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig)) 
                                           & (0x40U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                          & (0U == 
                                             (0x60U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                         & (0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
        bufp->chgBit(oldp+106,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+107,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+108,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+109,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                        >> 3U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgBit(oldp+110,((1U & ((((IData)((2U 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig)))) 
                                        | (IData)((4U 
                                                   == 
                                                   (0xeU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig))))) 
                                       | (IData)((8U 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((0xeU 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgIData(oldp+111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+112,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                      | (IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
        bufp->chgBit(oldp+113,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                         & (0x1000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                           & (0x2000U 
                                              == (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                          & (0U == 
                                             (0x3000U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                         & (0x3000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
        bufp->chgCData(oldp+114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig),5);
        bufp->chgCData(oldp+115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig),4);
        bufp->chgCData(oldp+116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig),2);
        bufp->chgCData(oldp+117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig),2);
        bufp->chgBit(oldp+118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+119,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+120,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig))));
        bufp->chgBit(oldp+121,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+122,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 0xbU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+123,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 4U))));
        bufp->chgBit(oldp+124,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 3U))));
        bufp->chgBit(oldp+125,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 2U))));
        bufp->chgBit(oldp+126,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+127,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+128,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 7U))));
        bufp->chgBit(oldp+129,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 6U))));
        bufp->chgBit(oldp+130,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 5U))));
        bufp->chgBit(oldp+131,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                        >> 7U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x60U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+132,((1U & ((((IData)((0x20U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                                        | (IData)((0x40U 
                                                   == 
                                                   (0xe0U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                       | (IData)((0x80U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                      | (IData)((0xe0U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+133,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 0xaU))));
        bufp->chgBit(oldp+134,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 9U))));
        bufp->chgBit(oldp+135,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 8U))));
        bufp->chgBit(oldp+136,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                        >> 0xaU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x300U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                      | (IData)((0x300U 
                                                 == 
                                                 (0x300U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+137,((1U & ((((IData)((0x100U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                                        | (IData)((0x200U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                       | (IData)((0x400U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                      | (IData)((0x700U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+138,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 0xdU))));
        bufp->chgBit(oldp+139,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 0xcU))));
        bufp->chgBit(oldp+140,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 0xbU))));
        bufp->chgBit(oldp+141,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                        >> 0xdU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1800U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1800U 
                                                 == 
                                                 (0x1800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+142,((1U & ((((IData)((0x800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                                        | (IData)((0x1000U 
                                                   == 
                                                   (0x3800U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                       | (IData)((0x2000U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                      | (IData)((0x3800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+143,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 0x10U))));
        bufp->chgBit(oldp+144,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 0xfU))));
        bufp->chgBit(oldp+145,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 0xeU))));
        bufp->chgBit(oldp+146,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                        >> 0x10U) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                      | (IData)((0xc000U 
                                                 == 
                                                 (0xc000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+147,((1U & ((((IData)((0x4000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                                        | (IData)((0x8000U 
                                                   == 
                                                   (0x1c000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1c000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+148,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 9U))));
        bufp->chgBit(oldp+149,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 8U))));
        bufp->chgBit(oldp+150,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 7U))));
        bufp->chgBit(oldp+151,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                        >> 9U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x180U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                      | (IData)((0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
        bufp->chgBit(oldp+152,((1U & ((((IData)((0x80U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))) 
                                        | (IData)((0x100U 
                                                   == 
                                                   (0x380U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                       | (IData)((0x200U 
                                                  == 
                                                  (0x380U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                      | (IData)((0x380U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
        bufp->chgBit(oldp+153,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+154,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig))));
        bufp->chgBit(oldp+155,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+156,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 0xaU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+157,((1U & (((((IData)((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 0xaU)) 
                                        | ((IData)(
                                                   (1U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig))) 
                                           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                 >> 0xaU)))) 
                                       | ((IData)((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig))) 
                                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                >> 0xaU)))) 
                                      | ((IData)((3U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+158,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 2U))));
        bufp->chgBit(oldp+159,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 1U))));
        bufp->chgBit(oldp+160,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))));
        bufp->chgBit(oldp+161,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                        >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))) 
                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))));
        bufp->chgBit(oldp+162,((1U & ((((IData)((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))) 
                                        | (IData)((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                       | (IData)((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                      | (IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
        bufp->chgBit(oldp+163,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+164,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 4U))));
        bufp->chgBit(oldp+165,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 3U))));
        bufp->chgBit(oldp+166,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                       & (IData)((0U 
                                                  != 
                                                  (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                      | (IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
        bufp->chgBit(oldp+167,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData) 
                                         & (8U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))) 
                                        | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData) 
                                           & (0x10U 
                                              == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                          & (0U == 
                                             (0x18U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                         & (0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
        bufp->chgBit(oldp+168,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+169,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig))));
        bufp->chgBit(oldp+170,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      >> 1U))));
        bufp->chgBit(oldp+171,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+172,((1U & (((((IData)((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)))) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 1U)) 
                                        | ((IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)))) 
                                           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                 >> 1U)))) 
                                       | ((IData)((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)))) 
                                          & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                >> 1U)))) 
                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                           >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+173,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                      >> 4U))));
        bufp->chgBit(oldp+174,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+175,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+176,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+177,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig))))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+178,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+179,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+180,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig))));
        bufp->chgBit(oldp+181,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 6U))));
        bufp->chgBit(oldp+182,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 5U))));
        bufp->chgBit(oldp+183,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
        bufp->chgBit(oldp+184,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig)) 
                                         & (0x20U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig)) 
                                           & (0x40U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                          & (0U == 
                                             (0x60U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                         & (0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
        bufp->chgBit(oldp+185,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+186,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+187,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+188,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                        >> 3U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgBit(oldp+189,((1U & ((((IData)((2U 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig)))) 
                                        | (IData)((4U 
                                                   == 
                                                   (0xeU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig))))) 
                                       | (IData)((8U 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((0xeU 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgIData(oldp+190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+191,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                      | (IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
        bufp->chgBit(oldp+192,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                         & (0x1000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                           & (0x2000U 
                                              == (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                          & (0U == 
                                             (0x3000U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                         & (0x3000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
        bufp->chgCData(oldp+193,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig),5);
        bufp->chgCData(oldp+194,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig),4);
        bufp->chgCData(oldp+195,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig),2);
        bufp->chgCData(oldp+196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig),2);
        bufp->chgBit(oldp+197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+198,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+199,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig))));
        bufp->chgBit(oldp+200,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+201,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 0xbU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+202,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 4U))));
        bufp->chgBit(oldp+203,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 3U))));
        bufp->chgBit(oldp+204,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 2U))));
        bufp->chgBit(oldp+205,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+206,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+207,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 7U))));
        bufp->chgBit(oldp+208,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 6U))));
        bufp->chgBit(oldp+209,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 5U))));
        bufp->chgBit(oldp+210,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                        >> 7U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x60U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+211,((1U & ((((IData)((0x20U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                                        | (IData)((0x40U 
                                                   == 
                                                   (0xe0U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                       | (IData)((0x80U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                      | (IData)((0xe0U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+212,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 0xaU))));
        bufp->chgBit(oldp+213,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 9U))));
        bufp->chgBit(oldp+214,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 8U))));
        bufp->chgBit(oldp+215,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                        >> 0xaU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x300U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                      | (IData)((0x300U 
                                                 == 
                                                 (0x300U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+216,((1U & ((((IData)((0x100U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                                        | (IData)((0x200U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                       | (IData)((0x400U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                      | (IData)((0x700U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+217,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 0xdU))));
        bufp->chgBit(oldp+218,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 0xcU))));
        bufp->chgBit(oldp+219,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 0xbU))));
        bufp->chgBit(oldp+220,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                        >> 0xdU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1800U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1800U 
                                                 == 
                                                 (0x1800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+221,((1U & ((((IData)((0x800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                                        | (IData)((0x1000U 
                                                   == 
                                                   (0x3800U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                       | (IData)((0x2000U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                      | (IData)((0x3800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+222,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 0x10U))));
        bufp->chgBit(oldp+223,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 0xfU))));
        bufp->chgBit(oldp+224,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 0xeU))));
        bufp->chgBit(oldp+225,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                        >> 0x10U) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                      | (IData)((0xc000U 
                                                 == 
                                                 (0xc000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+226,((1U & ((((IData)((0x4000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                                        | (IData)((0x8000U 
                                                   == 
                                                   (0x1c000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1c000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+227,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 9U))));
        bufp->chgBit(oldp+228,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 8U))));
        bufp->chgBit(oldp+229,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 7U))));
        bufp->chgBit(oldp+230,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                        >> 9U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x180U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                      | (IData)((0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
        bufp->chgBit(oldp+231,((1U & ((((IData)((0x80U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))) 
                                        | (IData)((0x100U 
                                                   == 
                                                   (0x380U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                       | (IData)((0x200U 
                                                  == 
                                                  (0x380U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                      | (IData)((0x380U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
        bufp->chgBit(oldp+232,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+233,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig))));
        bufp->chgBit(oldp+234,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+235,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 0xaU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+236,((1U & (((((IData)((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 0xaU)) 
                                        | ((IData)(
                                                   (1U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig))) 
                                           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                 >> 0xaU)))) 
                                       | ((IData)((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig))) 
                                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                >> 0xaU)))) 
                                      | ((IData)((3U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+237,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 2U))));
        bufp->chgBit(oldp+238,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 1U))));
        bufp->chgBit(oldp+239,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))));
        bufp->chgBit(oldp+240,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                        >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))) 
                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))));
        bufp->chgBit(oldp+241,((1U & ((((IData)((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))) 
                                        | (IData)((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                       | (IData)((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                      | (IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
        bufp->chgBit(oldp+242,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+243,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 4U))));
        bufp->chgBit(oldp+244,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 3U))));
        bufp->chgBit(oldp+245,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                       & (IData)((0U 
                                                  != 
                                                  (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                      | (IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
        bufp->chgBit(oldp+246,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData) 
                                         & (8U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))) 
                                        | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData) 
                                           & (0x10U 
                                              == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                          & (0U == 
                                             (0x18U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                         & (0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
        bufp->chgBit(oldp+247,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+248,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig))));
        bufp->chgBit(oldp+249,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      >> 1U))));
        bufp->chgBit(oldp+250,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+251,((1U & (((((IData)((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)))) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 1U)) 
                                        | ((IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)))) 
                                           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                 >> 1U)))) 
                                       | ((IData)((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)))) 
                                          & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                >> 1U)))) 
                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                           >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+252,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                      >> 4U))));
        bufp->chgBit(oldp+253,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+254,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+255,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+256,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig))))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+257,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+258,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+259,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig))));
        bufp->chgBit(oldp+260,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 6U))));
        bufp->chgBit(oldp+261,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 5U))));
        bufp->chgBit(oldp+262,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
        bufp->chgBit(oldp+263,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig)) 
                                         & (0x20U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig)) 
                                           & (0x40U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                          & (0U == 
                                             (0x60U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                         & (0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
        bufp->chgBit(oldp+264,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+265,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+266,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+267,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                        >> 3U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgBit(oldp+268,((1U & ((((IData)((2U 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig)))) 
                                        | (IData)((4U 
                                                   == 
                                                   (0xeU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig))))) 
                                       | (IData)((8U 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((0xeU 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgIData(oldp+269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+270,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                      | (IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
        bufp->chgBit(oldp+271,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                         & (0x1000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                           & (0x2000U 
                                              == (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                          & (0U == 
                                             (0x3000U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                         & (0x3000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
        bufp->chgCData(oldp+272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig),5);
        bufp->chgCData(oldp+273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig),4);
        bufp->chgCData(oldp+274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig),2);
        bufp->chgCData(oldp+275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig),2);
        bufp->chgBit(oldp+276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+277,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+278,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig))));
        bufp->chgBit(oldp+279,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+280,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 0xbU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+281,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 4U))));
        bufp->chgBit(oldp+282,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 3U))));
        bufp->chgBit(oldp+283,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 2U))));
        bufp->chgBit(oldp+284,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+285,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+286,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 7U))));
        bufp->chgBit(oldp+287,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 6U))));
        bufp->chgBit(oldp+288,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 5U))));
        bufp->chgBit(oldp+289,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                        >> 7U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x60U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+290,((1U & ((((IData)((0x20U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                                        | (IData)((0x40U 
                                                   == 
                                                   (0xe0U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                       | (IData)((0x80U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                      | (IData)((0xe0U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+291,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 0xaU))));
        bufp->chgBit(oldp+292,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 9U))));
        bufp->chgBit(oldp+293,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 8U))));
        bufp->chgBit(oldp+294,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                        >> 0xaU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x300U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                      | (IData)((0x300U 
                                                 == 
                                                 (0x300U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+295,((1U & ((((IData)((0x100U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                                        | (IData)((0x200U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                       | (IData)((0x400U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                      | (IData)((0x700U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+296,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 0xdU))));
        bufp->chgBit(oldp+297,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 0xcU))));
        bufp->chgBit(oldp+298,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 0xbU))));
        bufp->chgBit(oldp+299,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                        >> 0xdU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1800U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1800U 
                                                 == 
                                                 (0x1800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+300,((1U & ((((IData)((0x800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                                        | (IData)((0x1000U 
                                                   == 
                                                   (0x3800U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                       | (IData)((0x2000U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                      | (IData)((0x3800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+301,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 0x10U))));
        bufp->chgBit(oldp+302,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 0xfU))));
        bufp->chgBit(oldp+303,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 0xeU))));
        bufp->chgBit(oldp+304,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                        >> 0x10U) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                      | (IData)((0xc000U 
                                                 == 
                                                 (0xc000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+305,((1U & ((((IData)((0x4000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                                        | (IData)((0x8000U 
                                                   == 
                                                   (0x1c000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1c000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+306,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 9U))));
        bufp->chgBit(oldp+307,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 8U))));
        bufp->chgBit(oldp+308,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 7U))));
        bufp->chgBit(oldp+309,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                        >> 9U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x180U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                      | (IData)((0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
        bufp->chgBit(oldp+310,((1U & ((((IData)((0x80U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                                        | (IData)((0x100U 
                                                   == 
                                                   (0x380U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                       | (IData)((0x200U 
                                                  == 
                                                  (0x380U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                      | (IData)((0x380U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
        bufp->chgBit(oldp+311,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+312,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))));
        bufp->chgBit(oldp+313,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+314,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 0xaU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+315,((1U & (((((IData)((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 0xaU)) 
                                        | ((IData)(
                                                   (1U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))) 
                                           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                 >> 0xaU)))) 
                                       | ((IData)((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))) 
                                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                >> 0xaU)))) 
                                      | ((IData)((3U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+316,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 2U))));
        bufp->chgBit(oldp+317,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 1U))));
        bufp->chgBit(oldp+318,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))));
        bufp->chgBit(oldp+319,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                        >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))) 
                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))));
        bufp->chgBit(oldp+320,((1U & ((((IData)((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                                        | (IData)((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                       | (IData)((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                      | (IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
        bufp->chgBit(oldp+321,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+322,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 4U))));
        bufp->chgBit(oldp+323,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 3U))));
        bufp->chgBit(oldp+324,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                       & (IData)((0U 
                                                  != 
                                                  (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                      | (IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
        bufp->chgBit(oldp+325,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData) 
                                         & (8U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                                        | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData) 
                                           & (0x10U 
                                              == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                          & (0U == 
                                             (0x18U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                         & (0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
        bufp->chgBit(oldp+326,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+327,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig))));
        bufp->chgBit(oldp+328,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      >> 1U))));
        bufp->chgBit(oldp+329,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+330,((1U & (((((IData)((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)))) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 1U)) 
                                        | ((IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)))) 
                                           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                 >> 1U)))) 
                                       | ((IData)((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)))) 
                                          & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                >> 1U)))) 
                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                           >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+331,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                      >> 4U))));
        bufp->chgBit(oldp+332,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+333,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+334,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+335,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig))))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+336,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+337,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+338,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig))));
        bufp->chgBit(oldp+339,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 6U))));
        bufp->chgBit(oldp+340,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 5U))));
        bufp->chgBit(oldp+341,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
        bufp->chgBit(oldp+342,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)) 
                                         & (0x20U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)) 
                                           & (0x40U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                          & (0U == 
                                             (0x60U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                         & (0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
        bufp->chgBit(oldp+343,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+344,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+345,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+346,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                        >> 3U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgBit(oldp+347,((1U & ((((IData)((2U 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)))) 
                                        | (IData)((4U 
                                                   == 
                                                   (0xeU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig))))) 
                                       | (IData)((8U 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((0xeU 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgIData(oldp+348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+349,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                      | (IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
        bufp->chgBit(oldp+350,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                         & (0x1000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                           & (0x2000U 
                                              == (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                          & (0U == 
                                             (0x3000U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                         & (0x3000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
        bufp->chgCData(oldp+351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig),5);
        bufp->chgCData(oldp+352,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig),4);
        bufp->chgCData(oldp+353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig),2);
        bufp->chgCData(oldp+354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig),2);
        bufp->chgBit(oldp+355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+356,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+357,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig))));
        bufp->chgBit(oldp+358,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+359,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 0xbU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+360,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 4U))));
        bufp->chgBit(oldp+361,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 3U))));
        bufp->chgBit(oldp+362,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 2U))));
        bufp->chgBit(oldp+363,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+364,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+365,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 7U))));
        bufp->chgBit(oldp+366,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 6U))));
        bufp->chgBit(oldp+367,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 5U))));
        bufp->chgBit(oldp+368,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                        >> 7U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x60U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+369,((1U & ((((IData)((0x20U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                                        | (IData)((0x40U 
                                                   == 
                                                   (0xe0U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                       | (IData)((0x80U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                      | (IData)((0xe0U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+370,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 0xaU))));
        bufp->chgBit(oldp+371,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 9U))));
        bufp->chgBit(oldp+372,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 8U))));
        bufp->chgBit(oldp+373,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                        >> 0xaU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x300U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                      | (IData)((0x300U 
                                                 == 
                                                 (0x300U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+374,((1U & ((((IData)((0x100U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                                        | (IData)((0x200U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                       | (IData)((0x400U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                      | (IData)((0x700U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+375,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 0xdU))));
        bufp->chgBit(oldp+376,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 0xcU))));
        bufp->chgBit(oldp+377,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 0xbU))));
        bufp->chgBit(oldp+378,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                        >> 0xdU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1800U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1800U 
                                                 == 
                                                 (0x1800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+379,((1U & ((((IData)((0x800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                                        | (IData)((0x1000U 
                                                   == 
                                                   (0x3800U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                       | (IData)((0x2000U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                      | (IData)((0x3800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+380,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 0x10U))));
        bufp->chgBit(oldp+381,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 0xfU))));
        bufp->chgBit(oldp+382,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 0xeU))));
        bufp->chgBit(oldp+383,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                        >> 0x10U) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                      | (IData)((0xc000U 
                                                 == 
                                                 (0xc000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+384,((1U & ((((IData)((0x4000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                                        | (IData)((0x8000U 
                                                   == 
                                                   (0x1c000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1c000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+385,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 9U))));
        bufp->chgBit(oldp+386,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 8U))));
        bufp->chgBit(oldp+387,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 7U))));
        bufp->chgBit(oldp+388,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                        >> 9U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x180U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                      | (IData)((0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
        bufp->chgBit(oldp+389,((1U & ((((IData)((0x80U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                                        | (IData)((0x100U 
                                                   == 
                                                   (0x380U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                       | (IData)((0x200U 
                                                  == 
                                                  (0x380U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                      | (IData)((0x380U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
        bufp->chgBit(oldp+390,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+391,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))));
        bufp->chgBit(oldp+392,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+393,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 0xaU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+394,((1U & (((((IData)((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 0xaU)) 
                                        | ((IData)(
                                                   (1U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))) 
                                           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                 >> 0xaU)))) 
                                       | ((IData)((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))) 
                                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                >> 0xaU)))) 
                                      | ((IData)((3U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+395,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 2U))));
        bufp->chgBit(oldp+396,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 1U))));
        bufp->chgBit(oldp+397,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))));
        bufp->chgBit(oldp+398,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                        >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))) 
                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))));
        bufp->chgBit(oldp+399,((1U & ((((IData)((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                                        | (IData)((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                       | (IData)((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                      | (IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
        bufp->chgBit(oldp+400,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+401,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 4U))));
        bufp->chgBit(oldp+402,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 3U))));
        bufp->chgBit(oldp+403,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                       & (IData)((0U 
                                                  != 
                                                  (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                      | (IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
        bufp->chgBit(oldp+404,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData) 
                                         & (8U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                                        | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData) 
                                           & (0x10U 
                                              == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                          & (0U == 
                                             (0x18U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                         & (0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
        bufp->chgBit(oldp+405,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+406,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig))));
        bufp->chgBit(oldp+407,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      >> 1U))));
        bufp->chgBit(oldp+408,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+409,((1U & (((((IData)((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)))) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 1U)) 
                                        | ((IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)))) 
                                           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                 >> 1U)))) 
                                       | ((IData)((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)))) 
                                          & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                >> 1U)))) 
                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                           >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+410,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                      >> 4U))));
        bufp->chgBit(oldp+411,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+412,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+413,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+414,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig))))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+415,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+416,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+417,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))));
        bufp->chgBit(oldp+418,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 6U))));
        bufp->chgBit(oldp+419,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 5U))));
        bufp->chgBit(oldp+420,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
        bufp->chgBit(oldp+421,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
                                         & (0x20U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
                                           & (0x40U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                          & (0U == 
                                             (0x60U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                         & (0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
        bufp->chgBit(oldp+422,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+423,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+424,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+425,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                        >> 3U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgBit(oldp+426,((1U & ((((IData)((2U 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)))) 
                                        | (IData)((4U 
                                                   == 
                                                   (0xeU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))))) 
                                       | (IData)((8U 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((0xeU 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgIData(oldp+427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+428,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                      | (IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
        bufp->chgBit(oldp+429,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig)) 
                                         & (0x1000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig)) 
                                           & (0x2000U 
                                              == (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig) 
                                          & (0U == 
                                             (0x3000U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig) 
                                         & (0x3000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
        bufp->chgCData(oldp+430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig),5);
        bufp->chgCData(oldp+431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig),4);
        bufp->chgCData(oldp+432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig),2);
        bufp->chgCData(oldp+433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig),2);
        bufp->chgBit(oldp+434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+435,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+436,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig))));
        bufp->chgBit(oldp+437,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+438,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                                     >> 0xbU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+439,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 4U))));
        bufp->chgBit(oldp+440,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 3U))));
        bufp->chgBit(oldp+441,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 2U))));
        bufp->chgBit(oldp+442,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+443,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+444,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 7U))));
        bufp->chgBit(oldp+445,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 6U))));
        bufp->chgBit(oldp+446,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 5U))));
        bufp->chgBit(oldp+447,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                        >> 7U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x60U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+448,((1U & ((((IData)((0x20U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                        | (IData)((0x40U 
                                                   == 
                                                   (0xe0U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                       | (IData)((0x80U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                      | (IData)((0xe0U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+449,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 0xaU))));
        bufp->chgBit(oldp+450,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 9U))));
        bufp->chgBit(oldp+451,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 8U))));
        bufp->chgBit(oldp+452,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                        >> 0xaU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x300U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                      | (IData)((0x300U 
                                                 == 
                                                 (0x300U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+453,((1U & ((((IData)((0x100U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                        | (IData)((0x200U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                       | (IData)((0x400U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                      | (IData)((0x700U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+454,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 0xdU))));
        bufp->chgBit(oldp+455,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 0xcU))));
        bufp->chgBit(oldp+456,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 0xbU))));
        bufp->chgBit(oldp+457,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                        >> 0xdU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1800U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1800U 
                                                 == 
                                                 (0x1800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+458,((1U & ((((IData)((0x800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                        | (IData)((0x1000U 
                                                   == 
                                                   (0x3800U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                       | (IData)((0x2000U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                      | (IData)((0x3800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+459,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 0x10U))));
        bufp->chgBit(oldp+460,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 0xfU))));
        bufp->chgBit(oldp+461,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 0xeU))));
        bufp->chgBit(oldp+462,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                        >> 0x10U) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                      | (IData)((0xc000U 
                                                 == 
                                                 (0xc000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+463,((1U & ((((IData)((0x4000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                        | (IData)((0x8000U 
                                                   == 
                                                   (0x1c000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1c000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+464,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 9U))));
        bufp->chgBit(oldp+465,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 8U))));
        bufp->chgBit(oldp+466,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 7U))));
        bufp->chgBit(oldp+467,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                        >> 9U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x180U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                      | (IData)((0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
        bufp->chgBit(oldp+468,((1U & ((((IData)((0x80U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)))) 
                                        | (IData)((0x100U 
                                                   == 
                                                   (0x380U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                       | (IData)((0x200U 
                                                  == 
                                                  (0x380U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                      | (IData)((0x380U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
        bufp->chgBit(oldp+469,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+470,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig))));
        bufp->chgBit(oldp+471,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+472,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                                     >> 0xaU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+473,((1U & (((((IData)((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                            >> 0xaU)) 
                                        | ((IData)(
                                                   (1U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig))) 
                                           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                                 >> 0xaU)))) 
                                       | ((IData)((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig))) 
                                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                                >> 0xaU)))) 
                                      | ((IData)((3U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+474,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 2U))));
        bufp->chgBit(oldp+475,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 1U))));
        bufp->chgBit(oldp+476,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))));
        bufp->chgBit(oldp+477,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                        >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                                   >> 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))) 
                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))));
        bufp->chgBit(oldp+478,((1U & ((((IData)((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)))) 
                                        | (IData)((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                       | (IData)((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                      | (IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
        bufp->chgBit(oldp+479,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+480,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 4U))));
        bufp->chgBit(oldp+481,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 3U))));
        bufp->chgBit(oldp+482,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       & (IData)((0U 
                                                  != 
                                                  (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                      | (IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
        bufp->chgBit(oldp+483,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData) 
                                         & (8U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)))) 
                                        | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData) 
                                           & (0x10U 
                                              == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                          & (0U == 
                                             (0x18U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                         & (0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
        bufp->chgBit(oldp+484,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+485,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig))));
        bufp->chgBit(oldp+486,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 1U))));
        bufp->chgBit(oldp+487,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                     >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+488,((1U & (((((IData)((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig)))) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                            >> 1U)) 
                                        | ((IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig)))) 
                                           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                 >> 1U)))) 
                                       | ((IData)((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig)))) 
                                          & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                >> 1U)))) 
                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                           >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig)) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+489,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                      >> 4U))));
        bufp->chgBit(oldp+490,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+491,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+492,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+493,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig)))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig))))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+494,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+495,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+496,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig))));
        bufp->chgBit(oldp+497,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 6U))));
        bufp->chgBit(oldp+498,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                      >> 5U))));
        bufp->chgBit(oldp+499,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
        bufp->chgBit(oldp+500,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig)) 
                                         & (0x20U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig)) 
                                           & (0x40U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                          & (0U == 
                                             (0x60U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                         & (0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
        bufp->chgBit(oldp+501,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+502,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+503,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+504,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                        >> 3U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgBit(oldp+505,((1U & ((((IData)((2U 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig)))) 
                                        | (IData)((4U 
                                                   == 
                                                   (0xeU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig))))) 
                                       | (IData)((8U 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((0xeU 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgIData(oldp+506,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+507,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                      | (IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
        bufp->chgBit(oldp+508,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig)) 
                                         & (0x1000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig)) 
                                           & (0x2000U 
                                              == (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig) 
                                          & (0U == 
                                             (0x3000U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig) 
                                         & (0x3000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
        bufp->chgCData(oldp+509,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig),5);
        bufp->chgCData(oldp+510,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig),4);
        bufp->chgCData(oldp+511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig),2);
        bufp->chgCData(oldp+512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig),2);
        bufp->chgBit(oldp+513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+514,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+515,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig))));
        bufp->chgBit(oldp+516,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+517,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                                     >> 0xbU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+518,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 4U))));
        bufp->chgBit(oldp+519,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 3U))));
        bufp->chgBit(oldp+520,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 2U))));
        bufp->chgBit(oldp+521,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+522,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+523,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 7U))));
        bufp->chgBit(oldp+524,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 6U))));
        bufp->chgBit(oldp+525,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 5U))));
        bufp->chgBit(oldp+526,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                        >> 7U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x60U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+527,((1U & ((((IData)((0x20U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                        | (IData)((0x40U 
                                                   == 
                                                   (0xe0U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                       | (IData)((0x80U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                      | (IData)((0xe0U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+528,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 0xaU))));
        bufp->chgBit(oldp+529,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 9U))));
        bufp->chgBit(oldp+530,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 8U))));
        bufp->chgBit(oldp+531,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                        >> 0xaU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x300U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                      | (IData)((0x300U 
                                                 == 
                                                 (0x300U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+532,((1U & ((((IData)((0x100U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                        | (IData)((0x200U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                       | (IData)((0x400U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                      | (IData)((0x700U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+533,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 0xdU))));
        bufp->chgBit(oldp+534,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 0xcU))));
        bufp->chgBit(oldp+535,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 0xbU))));
        bufp->chgBit(oldp+536,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                        >> 0xdU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1800U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1800U 
                                                 == 
                                                 (0x1800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+537,((1U & ((((IData)((0x800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                        | (IData)((0x1000U 
                                                   == 
                                                   (0x3800U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                       | (IData)((0x2000U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                      | (IData)((0x3800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+538,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 0x10U))));
        bufp->chgBit(oldp+539,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 0xfU))));
        bufp->chgBit(oldp+540,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 0xeU))));
        bufp->chgBit(oldp+541,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                        >> 0x10U) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                      | (IData)((0xc000U 
                                                 == 
                                                 (0xc000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+542,((1U & ((((IData)((0x4000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                        | (IData)((0x8000U 
                                                   == 
                                                   (0x1c000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1c000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+543,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 9U))));
        bufp->chgBit(oldp+544,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 8U))));
        bufp->chgBit(oldp+545,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 7U))));
        bufp->chgBit(oldp+546,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                        >> 9U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x180U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                      | (IData)((0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
        bufp->chgBit(oldp+547,((1U & ((((IData)((0x80U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)))) 
                                        | (IData)((0x100U 
                                                   == 
                                                   (0x380U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                       | (IData)((0x200U 
                                                  == 
                                                  (0x380U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                      | (IData)((0x380U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
        bufp->chgBit(oldp+548,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+549,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig))));
        bufp->chgBit(oldp+550,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+551,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                                     >> 0xaU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+552,((1U & (((((IData)((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                            >> 0xaU)) 
                                        | ((IData)(
                                                   (1U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig))) 
                                           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                                 >> 0xaU)))) 
                                       | ((IData)((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig))) 
                                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                                >> 0xaU)))) 
                                      | ((IData)((3U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+553,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 2U))));
        bufp->chgBit(oldp+554,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 1U))));
        bufp->chgBit(oldp+555,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))));
        bufp->chgBit(oldp+556,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                        >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                                   >> 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))) 
                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))));
        bufp->chgBit(oldp+557,((1U & ((((IData)((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)))) 
                                        | (IData)((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                       | (IData)((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                      | (IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
        bufp->chgBit(oldp+558,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+559,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 4U))));
        bufp->chgBit(oldp+560,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 3U))));
        bufp->chgBit(oldp+561,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       & (IData)((0U 
                                                  != 
                                                  (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                      | (IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
        bufp->chgBit(oldp+562,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData) 
                                         & (8U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)))) 
                                        | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData) 
                                           & (0x10U 
                                              == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                          & (0U == 
                                             (0x18U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                         & (0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
        bufp->chgBit(oldp+563,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+564,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig))));
        bufp->chgBit(oldp+565,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 1U))));
        bufp->chgBit(oldp+566,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                     >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+567,((1U & (((((IData)((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig)))) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                            >> 1U)) 
                                        | ((IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig)))) 
                                           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                 >> 1U)))) 
                                       | ((IData)((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig)))) 
                                          & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                >> 1U)))) 
                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                           >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig)) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+568,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                      >> 4U))));
        bufp->chgBit(oldp+569,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+570,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+571,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+572,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig)))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig))))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+573,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+574,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+575,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig))));
        bufp->chgBit(oldp+576,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 6U))));
        bufp->chgBit(oldp+577,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                      >> 5U))));
        bufp->chgBit(oldp+578,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
        bufp->chgBit(oldp+579,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig)) 
                                         & (0x20U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig)) 
                                           & (0x40U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                          & (0U == 
                                             (0x60U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                         & (0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
        bufp->chgBit(oldp+580,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+581,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+582,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+583,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                        >> 3U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgBit(oldp+584,((1U & ((((IData)((2U 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig)))) 
                                        | (IData)((4U 
                                                   == 
                                                   (0xeU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig))))) 
                                       | (IData)((8U 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((0xeU 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgIData(oldp+585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+586,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                      | (IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
        bufp->chgBit(oldp+587,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig)) 
                                         & (0x1000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig)) 
                                           & (0x2000U 
                                              == (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig) 
                                          & (0U == 
                                             (0x3000U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig) 
                                         & (0x3000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
        bufp->chgCData(oldp+588,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig),5);
        bufp->chgCData(oldp+589,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig),4);
        bufp->chgCData(oldp+590,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig),2);
        bufp->chgCData(oldp+591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig),2);
        bufp->chgBit(oldp+592,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+593,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+594,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig))));
        bufp->chgBit(oldp+595,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+596,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                                     >> 0xbU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+597,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 4U))));
        bufp->chgBit(oldp+598,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 3U))));
        bufp->chgBit(oldp+599,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 2U))));
        bufp->chgBit(oldp+600,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+601,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+602,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 7U))));
        bufp->chgBit(oldp+603,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 6U))));
        bufp->chgBit(oldp+604,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 5U))));
        bufp->chgBit(oldp+605,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                        >> 7U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x60U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+606,((1U & ((((IData)((0x20U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                        | (IData)((0x40U 
                                                   == 
                                                   (0xe0U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                       | (IData)((0x80U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                      | (IData)((0xe0U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+607,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 0xaU))));
        bufp->chgBit(oldp+608,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 9U))));
        bufp->chgBit(oldp+609,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 8U))));
        bufp->chgBit(oldp+610,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                        >> 0xaU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x300U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                      | (IData)((0x300U 
                                                 == 
                                                 (0x300U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+611,((1U & ((((IData)((0x100U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                        | (IData)((0x200U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                       | (IData)((0x400U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                      | (IData)((0x700U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+612,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 0xdU))));
        bufp->chgBit(oldp+613,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 0xcU))));
        bufp->chgBit(oldp+614,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 0xbU))));
        bufp->chgBit(oldp+615,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                        >> 0xdU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1800U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1800U 
                                                 == 
                                                 (0x1800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+616,((1U & ((((IData)((0x800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                        | (IData)((0x1000U 
                                                   == 
                                                   (0x3800U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                       | (IData)((0x2000U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                      | (IData)((0x3800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+617,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 0x10U))));
        bufp->chgBit(oldp+618,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 0xfU))));
        bufp->chgBit(oldp+619,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 0xeU))));
        bufp->chgBit(oldp+620,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                        >> 0x10U) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                      | (IData)((0xc000U 
                                                 == 
                                                 (0xc000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+621,((1U & ((((IData)((0x4000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                        | (IData)((0x8000U 
                                                   == 
                                                   (0x1c000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1c000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+622,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 9U))));
        bufp->chgBit(oldp+623,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 8U))));
        bufp->chgBit(oldp+624,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 7U))));
        bufp->chgBit(oldp+625,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                        >> 9U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x180U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                      | (IData)((0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
        bufp->chgBit(oldp+626,((1U & ((((IData)((0x80U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)))) 
                                        | (IData)((0x100U 
                                                   == 
                                                   (0x380U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                       | (IData)((0x200U 
                                                  == 
                                                  (0x380U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                      | (IData)((0x380U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
        bufp->chgBit(oldp+627,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+628,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig))));
        bufp->chgBit(oldp+629,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+630,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                                     >> 0xaU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+631,((1U & (((((IData)((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                            >> 0xaU)) 
                                        | ((IData)(
                                                   (1U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig))) 
                                           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                                 >> 0xaU)))) 
                                       | ((IData)((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig))) 
                                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                                >> 0xaU)))) 
                                      | ((IData)((3U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+632,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 2U))));
        bufp->chgBit(oldp+633,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 1U))));
        bufp->chgBit(oldp+634,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))));
        bufp->chgBit(oldp+635,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                        >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                                   >> 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))) 
                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))));
        bufp->chgBit(oldp+636,((1U & ((((IData)((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)))) 
                                        | (IData)((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                       | (IData)((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                      | (IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
        bufp->chgBit(oldp+637,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+638,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 4U))));
        bufp->chgBit(oldp+639,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 3U))));
        bufp->chgBit(oldp+640,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       & (IData)((0U 
                                                  != 
                                                  (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                      | (IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
        bufp->chgBit(oldp+641,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData) 
                                         & (8U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)))) 
                                        | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData) 
                                           & (0x10U 
                                              == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                          & (0U == 
                                             (0x18U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                         & (0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
        bufp->chgBit(oldp+642,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+643,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig))));
        bufp->chgBit(oldp+644,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 1U))));
        bufp->chgBit(oldp+645,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                     >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+646,((1U & (((((IData)((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig)))) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                            >> 1U)) 
                                        | ((IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig)))) 
                                           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                 >> 1U)))) 
                                       | ((IData)((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig)))) 
                                          & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                >> 1U)))) 
                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                           >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig)) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+647,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                      >> 4U))));
        bufp->chgBit(oldp+648,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+649,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+650,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+651,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig)))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig))))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+652,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+653,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+654,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig))));
        bufp->chgBit(oldp+655,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 6U))));
        bufp->chgBit(oldp+656,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                      >> 5U))));
        bufp->chgBit(oldp+657,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
        bufp->chgBit(oldp+658,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig)) 
                                         & (0x20U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig)) 
                                           & (0x40U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                          & (0U == 
                                             (0x60U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                         & (0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
        bufp->chgBit(oldp+659,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+660,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+661,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+662,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                        >> 3U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgBit(oldp+663,((1U & ((((IData)((2U 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig)))) 
                                        | (IData)((4U 
                                                   == 
                                                   (0xeU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig))))) 
                                       | (IData)((8U 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((0xeU 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgIData(oldp+664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData),17);
        bufp->chgBit(oldp+665,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                      | (IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
        bufp->chgBit(oldp+666,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig)) 
                                         & (0x1000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig)) 
                                           & (0x2000U 
                                              == (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig) 
                                          & (0U == 
                                             (0x3000U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig) 
                                         & (0x3000U 
                                            == (0x3000U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
        bufp->chgCData(oldp+667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig),5);
        bufp->chgCData(oldp+668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig),4);
        bufp->chgCData(oldp+669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig),2);
        bufp->chgCData(oldp+670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig),2);
        bufp->chgBit(oldp+671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig));
        bufp->chgBit(oldp+672,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+673,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig))));
        bufp->chgBit(oldp+674,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+675,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                                     >> 0xbU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+676,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 4U))));
        bufp->chgBit(oldp+677,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 3U))));
        bufp->chgBit(oldp+678,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 2U))));
        bufp->chgBit(oldp+679,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+680,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+681,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 7U))));
        bufp->chgBit(oldp+682,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 6U))));
        bufp->chgBit(oldp+683,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 5U))));
        bufp->chgBit(oldp+684,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                        >> 7U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x60U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+685,((1U & ((((IData)((0x20U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                        | (IData)((0x40U 
                                                   == 
                                                   (0xe0U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                       | (IData)((0x80U 
                                                  == 
                                                  (0xe0U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                      | (IData)((0xe0U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+686,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 0xaU))));
        bufp->chgBit(oldp+687,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 9U))));
        bufp->chgBit(oldp+688,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 8U))));
        bufp->chgBit(oldp+689,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                        >> 0xaU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x300U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                      | (IData)((0x300U 
                                                 == 
                                                 (0x300U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+690,((1U & ((((IData)((0x100U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                        | (IData)((0x200U 
                                                   == 
                                                   (0x700U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                       | (IData)((0x400U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                      | (IData)((0x700U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+691,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 0xdU))));
        bufp->chgBit(oldp+692,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 0xcU))));
        bufp->chgBit(oldp+693,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 0xbU))));
        bufp->chgBit(oldp+694,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                        >> 0xdU) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1800U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1800U 
                                                 == 
                                                 (0x1800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+695,((1U & ((((IData)((0x800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                        | (IData)((0x1000U 
                                                   == 
                                                   (0x3800U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                       | (IData)((0x2000U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                      | (IData)((0x3800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+696,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 0x10U))));
        bufp->chgBit(oldp+697,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 0xfU))));
        bufp->chgBit(oldp+698,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 0xeU))));
        bufp->chgBit(oldp+699,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                        >> 0x10U) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                      | (IData)((0xc000U 
                                                 == 
                                                 (0xc000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+700,((1U & ((((IData)((0x4000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                        | (IData)((0x8000U 
                                                   == 
                                                   (0x1c000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                       | (IData)((0x10000U 
                                                  == 
                                                  (0x1c000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                      | (IData)((0x1c000U 
                                                 == 
                                                 (0x1c000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
        bufp->chgBit(oldp+701,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 9U))));
        bufp->chgBit(oldp+702,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 8U))));
        bufp->chgBit(oldp+703,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 7U))));
        bufp->chgBit(oldp+704,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                        >> 9U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x180U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                      | (IData)((0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
        bufp->chgBit(oldp+705,((1U & ((((IData)((0x80U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)))) 
                                        | (IData)((0x100U 
                                                   == 
                                                   (0x380U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                       | (IData)((0x200U 
                                                  == 
                                                  (0x380U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                      | (IData)((0x380U 
                                                 == 
                                                 (0x380U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
        bufp->chgBit(oldp+706,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+707,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig))));
        bufp->chgBit(oldp+708,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+709,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                                     >> 0xaU))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+710,((1U & (((((IData)((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                            >> 0xaU)) 
                                        | ((IData)(
                                                   (1U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig))) 
                                           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                                 >> 0xaU)))) 
                                       | ((IData)((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig))) 
                                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                                >> 0xaU)))) 
                                      | ((IData)((3U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig))) 
                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+711,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 2U))));
        bufp->chgBit(oldp+712,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 1U))));
        bufp->chgBit(oldp+713,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))));
        bufp->chgBit(oldp+714,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                        >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                                   >> 1U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))) 
                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))));
        bufp->chgBit(oldp+715,((1U & ((((IData)((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)))) 
                                        | (IData)((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                       | (IData)((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                      | (IData)((7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
        bufp->chgBit(oldp+716,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+717,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 4U))));
        bufp->chgBit(oldp+718,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 3U))));
        bufp->chgBit(oldp+719,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       & (IData)((0U 
                                                  != 
                                                  (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                      | (IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
        bufp->chgBit(oldp+720,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData) 
                                         & (8U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)))) 
                                        | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData) 
                                           & (0x10U 
                                              == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                          & (0U == 
                                             (0x18U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                         & (0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
        bufp->chgBit(oldp+721,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+722,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig))));
        bufp->chgBit(oldp+723,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 1U))));
        bufp->chgBit(oldp+724,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                        >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                     >> 1U))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+725,((1U & (((((IData)((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig)))) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                            >> 1U)) 
                                        | ((IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig)))) 
                                           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                 >> 1U)))) 
                                       | ((IData)((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig)))) 
                                          & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                >> 1U)))) 
                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                           >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig)) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                            >> 1U))))));
        bufp->chgBit(oldp+726,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                      >> 4U))));
        bufp->chgBit(oldp+727,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+728,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+729,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                        >> 4U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xcU 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+730,((1U & ((((IData)((4U 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig)))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0x1cU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig))))) 
                                       | (IData)((0x10U 
                                                  == 
                                                  (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig))))) 
                                      | (IData)((0x1cU 
                                                 == 
                                                 (0x1cU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig))))))));
        bufp->chgBit(oldp+731,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+732,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+733,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig))));
        bufp->chgBit(oldp+734,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 6U))));
        bufp->chgBit(oldp+735,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                      >> 5U))));
        bufp->chgBit(oldp+736,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                      | (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
        bufp->chgBit(oldp+737,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig)) 
                                         & (0x20U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)))) 
                                        | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig)) 
                                           & (0x40U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                          & (0U == 
                                             (0x60U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                         & (0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
        bufp->chgBit(oldp+738,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                      >> 3U))));
        bufp->chgBit(oldp+739,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                      >> 2U))));
        bufp->chgBit(oldp+740,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                      >> 1U))));
        bufp->chgBit(oldp+741,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                        >> 3U) & (IData)(
                                                         (0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgBit(oldp+742,((1U & ((((IData)((2U 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig)))) 
                                        | (IData)((4U 
                                                   == 
                                                   (0xeU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig))))) 
                                       | (IData)((8U 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig))))) 
                                      | (IData)((0xeU 
                                                 == 
                                                 (0xeU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig))))))));
        bufp->chgBit(oldp+743,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush))));
        bufp->chgWData(oldp+744,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r),460);
        bufp->chgBit(oldp+759,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+760,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                      >> 6U))));
        bufp->chgSData(oldp+761,((0xffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                              << 9U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                >> 0x17U)))),16);
        bufp->chgBit(oldp+762,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                      >> 7U))));
        bufp->chgIData(oldp+763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U]),32);
        bufp->chgBit(oldp+764,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+765,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                      >> 8U))));
        bufp->chgIData(oldp+766,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                   << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                >> 9U))),32);
        bufp->chgBit(oldp+767,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 9U))));
        bufp->chgBit(oldp+768,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+769,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+770,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+771,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+772,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+773,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+774,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+775,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+776,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+777,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+778,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+779,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+780,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+781,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we));
        bufp->chgBit(oldp+782,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar));
        bufp->chgBit(oldp+783,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
        bufp->chgBit(oldp+784,((1U & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
        bufp->chgBit(oldp+785,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw));
        bufp->chgBit(oldp+786,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
        bufp->chgBit(oldp+787,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                      >> 1U))));
        bufp->chgBit(oldp+788,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                      >> 2U))));
        bufp->chgBit(oldp+789,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
        bufp->chgBit(oldp+790,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                      >> 3U))));
        bufp->chgIData(oldp+791,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
        bufp->chgIData(oldp+792,(((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                << 1U)) 
                                  | (1U & VL_REDXOR_32(
                                                       (0x420000U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))))),23);
        bufp->chgBit(oldp+793,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
        bufp->chgBit(oldp+794,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w));
        bufp->chgBit(oldp+795,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
        bufp->chgBit(oldp+796,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                      >> 4U))));
        bufp->chgQData(oldp+797,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                   << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                       << 4U) 
                                                      | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        bufp->chgIData(oldp+799,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
        bufp->chgIData(oldp+800,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                   >> 2U)) 
                                   << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))),32);
        bufp->chgIData(oldp+801,(((((- (IData)((0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                   | ((- (IData)((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                      & ((((IData)(1U) 
                                           + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                              >> 2U)) 
                                          << 2U) | 
                                         (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)))) 
                                  | ((- (IData)((2U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
        bufp->chgIData(oldp+802,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
        bufp->chgCData(oldp+803,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
        bufp->chgBit(oldp+804,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+805,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+806,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgCData(oldp+807,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
        bufp->chgCData(oldp+808,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
        bufp->chgBit(oldp+809,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
        bufp->chgCData(oldp+810,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
        bufp->chgBit(oldp+811,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
        bufp->chgQData(oldp+812,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
        bufp->chgIData(oldp+814,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                          >> 0xdU))),32);
        bufp->chgCData(oldp+815,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 0xbU)))),2);
        bufp->chgCData(oldp+816,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
        bufp->chgCData(oldp+817,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+818,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 8U)))),3);
        bufp->chgBit(oldp+819,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
        bufp->chgCData(oldp+820,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
        bufp->chgQData(oldp+821,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                   << 0xdU) | (QData)((IData)(
                                                              (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                      << 4U) 
                                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        bufp->chgIData(oldp+823,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
        bufp->chgIData(oldp+824,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                   >> 2U)) 
                                   << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))),32);
        bufp->chgIData(oldp+825,(((((- (IData)((0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                   | ((- (IData)((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                      & ((((IData)(1U) 
                                           + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                              >> 2U)) 
                                          << 2U) | 
                                         (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)))) 
                                  | ((- (IData)((2U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
        bufp->chgIData(oldp+826,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
        bufp->chgCData(oldp+827,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
        bufp->chgBit(oldp+828,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+829,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+830,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgCData(oldp+831,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
        bufp->chgCData(oldp+832,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
        bufp->chgCData(oldp+833,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
        bufp->chgBit(oldp+834,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
        bufp->chgQData(oldp+835,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
        bufp->chgIData(oldp+837,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                          >> 0xdU))),32);
        bufp->chgCData(oldp+838,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 0xbU)))),2);
        bufp->chgCData(oldp+839,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
        bufp->chgCData(oldp+840,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+841,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 8U)))),3);
        bufp->chgBit(oldp+842,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
        bufp->chgBit(oldp+843,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
        bufp->chgBit(oldp+844,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
        bufp->chgCData(oldp+845,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
        bufp->chgBit(oldp+846,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
        bufp->chgCData(oldp+847,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
        bufp->chgIData(oldp+848,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
        bufp->chgBit(oldp+849,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
        bufp->chgBit(oldp+850,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+851,(((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                    >> 2U)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                  >> 2U)))));
        bufp->chgIData(oldp+852,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0]),32);
        bufp->chgIData(oldp+853,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1]),32);
        bufp->chgIData(oldp+854,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2]),32);
        bufp->chgIData(oldp+855,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3]),32);
        bufp->chgIData(oldp+856,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4]),32);
        bufp->chgBit(oldp+857,(((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wlast))));
        bufp->chgBit(oldp+858,(((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rready)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast))));
        bufp->chgBit(oldp+859,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        bufp->chgBit(oldp+860,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
        bufp->chgBit(oldp+861,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                       >> 3U) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))))));
        bufp->chgBit(oldp+862,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)))));
        bufp->chgBit(oldp+863,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
        bufp->chgBit(oldp+864,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                   | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))))));
        bufp->chgBit(oldp+865,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid))));
        bufp->chgBit(oldp+866,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8000U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+867,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8010U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+868,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8020U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+869,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8030U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+870,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8040U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+871,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8050U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+872,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8060U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+873,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8070U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+874,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xff00U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+875,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xff30U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+876,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xff40U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+877,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf020U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+878,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf030U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+879,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf040U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+880,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf050U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+881,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                    >> 6U)) & (~ ((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   >> 7U) 
                                                  ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken))))));
        __Vtemp_h0ff96379__0[0U] = (IData)((((QData)((IData)(
                                                             ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable)
                                                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff
                                                               : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc))));
        __Vtemp_h0ff96379__0[1U] = (IData)(((((QData)((IData)(
                                                              ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable)
                                                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff
                                                                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc))) 
                                            >> 0x20U));
        __Vtemp_h0ff96379__0[2U] = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc 
                                     << 0xdU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_index) 
                                                  << 8U) 
                                                 | ((0x80U 
                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_counter) 
                                                        << 5U)) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd)) 
                                                        << 6U) 
                                                       | (((((0x10U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last)) 
                                                            & (~ 
                                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en) 
                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop)))) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__excp) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr) 
                                                                       << 1U) 
                                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_num) 
                                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef)))))))))));
        __Vtemp_h0ff96379__0[3U] = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc 
                                    >> 0x13U);
        bufp->chgWData(oldp+882,(__Vtemp_h0ff96379__0),109);
        bufp->chgBit(oldp+886,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive))));
        bufp->chgIData(oldp+887,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op) 
                                   & ((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                             >> 2U)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num)))
                                   ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                            >> 0x18U)
                                         : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                            >> 0x18U)) 
                                       << 0x18U) | 
                                      ((0xff0000U & 
                                        (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                           ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                              >> 0x10U)
                                           : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                              >> 0x10U)) 
                                         << 0x10U)) 
                                       | ((0xff00U 
                                           & (((2U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                   >> 8U)
                                                : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                   >> 8U)) 
                                              << 8U)) 
                                          | (0xffU 
                                             & ((1U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata
                                                 : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))
                                   : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)),32);
        bufp->chgIData(oldp+888,(((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                     ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                        >> 0x18U) : 
                                    (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                     >> 0x18U)) << 0x18U) 
                                  | ((0xff0000U & (
                                                   ((4U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                     ? 
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                     >> 0x10U)) 
                                                   << 0x10U)) 
                                     | ((0xff00U & 
                                         (((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                            ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                               >> 8U)
                                            : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                               >> 8U)) 
                                          << 8U)) | 
                                        (0xffU & ((1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata
                                                   : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))),32);
        bufp->chgBit(oldp+889,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) 
                                & (1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))));
        bufp->chgIData(oldp+890,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target
                                   : ((IData)(4U) + 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U]))),32);
        if (((((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                         >> 5U)) == (0x1fU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                      >> 0x20U)))) 
              & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                         >> 0x25U))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))) {
            __Vtemp_h544f9cfd__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
            __Vtemp_h544f9cfd__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                                >> 0x20U));
            __Vtemp_h544f9cfd__0[2U] = (1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                      >> 0x26U)));
        } else if (((((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 5U)) == (0x1fU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                             >> 0x20U)))) 
                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                >> 0x25U))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))) {
            __Vtemp_h544f9cfd__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))));
            __Vtemp_h544f9cfd__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))) 
                                                >> 0x20U));
            __Vtemp_h544f9cfd__0[2U] = (IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                 >> 0x26U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)));
        } else {
            __Vtemp_h544f9cfd__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1;
            __Vtemp_h544f9cfd__0[1U] = (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)));
            __Vtemp_h544f9cfd__0[2U] = (IData)(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)) 
                                                >> 0x20U));
        }
        bufp->chgIData(oldp+891,(__Vtemp_h544f9cfd__0[1U]),32);
        if (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
               == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                    >> 0x20U)))) & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                            >> 0x25U))) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))) {
            __Vtemp_h2a6e56df__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
            __Vtemp_h2a6e56df__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                                >> 0x20U));
        } else if (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                      == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                           >> 0x20U)))) 
                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                >> 0x25U))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))) {
            __Vtemp_h2a6e56df__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
            __Vtemp_h2a6e56df__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                                                >> 0x20U));
        } else {
            __Vtemp_h2a6e56df__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2;
            __Vtemp_h2a6e56df__0[1U] = (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2)));
        }
        bufp->chgIData(oldp+892,(__Vtemp_h2a6e56df__0[1U]),32);
        if (((((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                         >> 5U)) == (0x1fU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                      >> 0x20U)))) 
              & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                         >> 0x25U))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))) {
            __Vtemp_h8dbd108e__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
            __Vtemp_h8dbd108e__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                                >> 0x20U));
            __Vtemp_h8dbd108e__0[2U] = (1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                      >> 0x26U)));
        } else if (((((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 5U)) == (0x1fU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                             >> 0x20U)))) 
                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                >> 0x25U))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))) {
            __Vtemp_h8dbd108e__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))));
            __Vtemp_h8dbd108e__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))) 
                                                >> 0x20U));
            __Vtemp_h8dbd108e__0[2U] = (IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                 >> 0x26U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)));
        } else {
            __Vtemp_h8dbd108e__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1;
            __Vtemp_h8dbd108e__0[1U] = (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)));
            __Vtemp_h8dbd108e__0[2U] = (IData)(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)) 
                                                >> 0x20U));
        }
        bufp->chgBit(oldp+893,((1U & __Vtemp_h8dbd108e__0[2U])));
        if (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
               == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                    >> 0x20U)))) & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                            >> 0x25U))) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))) {
            __Vtemp_he01ae970__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
            __Vtemp_he01ae970__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                                >> 0x20U));
        } else if (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                      == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                           >> 0x20U)))) 
                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                >> 0x25U))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))) {
            __Vtemp_he01ae970__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
            __Vtemp_he01ae970__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                                                >> 0x20U));
        } else {
            __Vtemp_he01ae970__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2;
            __Vtemp_he01ae970__0[1U] = (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2)));
        }
        bufp->chgBit(oldp+894,((1U & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                        >> 0x20U)))) 
                                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                   >> 0x25U))) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                                       ? (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                        >> 0x26U)))
                                       : (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                            >> 0x20U)))) 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                       >> 0x25U))) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                                           ? (IData)(
                                                     ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                       >> 0x26U) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)))
                                           : (IData)(
                                                     ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2)) 
                                                      >> 0x20U)))))));
        bufp->chgIData(oldp+895,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff
                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata)),32);
        bufp->chgBit(oldp+896,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                       >> 6U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid))))));
        bufp->chgIData(oldp+897,(((((((- (IData)((1U 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                      >> 0xbU) 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                        >> 0xeU))))) 
                                      & (((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded) 
                                                         >> 7U)))) 
                                          << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded))) 
                                     | ((- (IData)(
                                                   (1U 
                                                    & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                        >> 0xbU) 
                                                       & (~ 
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                           >> 0xeU)))))) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded))) 
                                    | ((- (IData)((1U 
                                                   & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                       >> 0xcU) 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                         >> 0xeU))))) 
                                       & (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded) 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded)))) 
                                   | ((- (IData)((1U 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                      >> 0xcU) 
                                                     & (~ 
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                         >> 0xeU)))))) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded))) 
                                  | ((- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                   >> 0xbU)))))))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata))),32);
        bufp->chgBit(oldp+898,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))));
        bufp->chgBit(oldp+899,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))));
        bufp->chgBit(oldp+900,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))));
        bufp->chgBit(oldp+901,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        bufp->chgBit(oldp+902,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
        bufp->chgBit(oldp+903,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                      | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))))));
        bufp->chgBit(oldp+904,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)))));
        bufp->chgBit(oldp+905,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
        bufp->chgBit(oldp+906,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                   | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))));
        bufp->chgBit(oldp+907,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+908,(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid));
        bufp->chgBit(oldp+909,(vlSelf->simu_top__DOT__soc__DOT__cpu_arready));
        bufp->chgIData(oldp+910,(vlSelf->simu_top__DOT__soc__DOT__m0_rdata),32);
        bufp->chgBit(oldp+911,(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid));
        bufp->chgBit(oldp+912,(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
        bufp->chgBit(oldp+913,(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid));
        bufp->chgBit(oldp+914,(vlSelf->simu_top__DOT__soc__DOT__m0_bready));
        bufp->chgBit(oldp+915,(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
        bufp->chgBit(oldp+916,(vlSelf->simu_top__DOT__soc__DOT__m0_rready));
        bufp->chgBit(oldp+917,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
        bufp->chgBit(oldp+918,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
        bufp->chgBit(oldp+919,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
        bufp->chgBit(oldp+920,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
        bufp->chgBit(oldp+921,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
        bufp->chgBit(oldp+922,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                      >> 3U))));
        bufp->chgBit(oldp+923,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                      >> 3U))));
        bufp->chgBit(oldp+924,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                      >> 3U))));
        bufp->chgBit(oldp+925,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                      >> 3U))));
        bufp->chgBit(oldp+926,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                      >> 3U))));
        bufp->chgBit(oldp+927,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                      >> 2U))));
        bufp->chgBit(oldp+928,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                      >> 2U))));
        bufp->chgBit(oldp+929,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                      >> 2U))));
        bufp->chgBit(oldp+930,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                      >> 2U))));
        bufp->chgBit(oldp+931,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                      >> 2U))));
        bufp->chgBit(oldp+932,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
        bufp->chgCData(oldp+933,(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
        bufp->chgBit(oldp+934,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
        bufp->chgCData(oldp+935,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt),4);
        bufp->chgBit(oldp+936,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
        bufp->chgBit(oldp+937,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                      >> 1U))));
        bufp->chgBit(oldp+938,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                      >> 1U))));
        bufp->chgBit(oldp+939,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                      >> 1U))));
        bufp->chgBit(oldp+940,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                      >> 1U))));
        bufp->chgBit(oldp+941,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                      >> 1U))));
        bufp->chgBit(oldp+942,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                      >> 4U))));
        bufp->chgBit(oldp+943,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                      >> 4U))));
        bufp->chgBit(oldp+944,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                      >> 4U))));
        bufp->chgBit(oldp+945,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                      >> 4U))));
        bufp->chgBit(oldp+946,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                      >> 4U))));
        bufp->chgCData(oldp+947,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
        bufp->chgCData(oldp+948,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
        bufp->chgCData(oldp+949,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
        bufp->chgCData(oldp+950,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
        bufp->chgCData(oldp+951,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
        bufp->chgBit(oldp+952,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
        bufp->chgBit(oldp+953,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
        bufp->chgBit(oldp+954,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
        bufp->chgBit(oldp+955,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
        bufp->chgBit(oldp+956,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
        bufp->chgBit(oldp+957,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
        bufp->chgBit(oldp+958,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
        bufp->chgBit(oldp+959,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
        bufp->chgBit(oldp+960,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
        bufp->chgBit(oldp+961,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
        bufp->chgBit(oldp+962,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
        bufp->chgBit(oldp+963,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
        bufp->chgBit(oldp+964,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
        bufp->chgBit(oldp+965,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
        bufp->chgBit(oldp+966,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
        bufp->chgBit(oldp+967,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
        bufp->chgBit(oldp+968,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
        bufp->chgCData(oldp+969,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
        bufp->chgSData(oldp+970,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
        bufp->chgBit(oldp+971,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin));
        bufp->chgBit(oldp+972,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin));
        bufp->chgBit(oldp+973,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin));
        bufp->chgBit(oldp+974,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid));
        bufp->chgBit(oldp+975,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid));
        bufp->chgBit(oldp+976,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_valid));
        bufp->chgBit(oldp+977,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid));
        bufp->chgBit(oldp+978,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en));
        bufp->chgBit(oldp+979,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en));
        bufp->chgIData(oldp+980,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc),32);
        bufp->chgBit(oldp+981,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en));
        bufp->chgBit(oldp+982,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry));
        bufp->chgBit(oldp+983,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en));
        bufp->chgBit(oldp+984,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error));
        bufp->chgBit(oldp+985,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error));
        bufp->chgBit(oldp+986,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken));
        bufp->chgIData(oldp+987,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target),32);
        bufp->chgBit(oldp+988,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch));
        bufp->chgWData(oldp+989,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus),350);
        bufp->chgWData(oldp+1000,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus),425);
        bufp->chgWData(oldp+1014,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus),460);
        bufp->chgQData(oldp+1029,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__br_bus),33);
        bufp->chgQData(oldp+1031,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus),39);
        bufp->chgBit(oldp+1033,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid));
        bufp->chgCData(oldp+1034,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 4U))),8);
        bufp->chgCData(oldp+1035,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc)),4);
        bufp->chgBit(oldp+1036,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok));
        bufp->chgBit(oldp+1037,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_data_ok));
        bufp->chgIData(oldp+1038,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata),32);
        bufp->chgBit(oldp+1039,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid));
        bufp->chgBit(oldp+1040,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_valid));
        bufp->chgBit(oldp+1041,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_data_ok));
        bufp->chgIData(oldp+1042,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rdata),32);
        bufp->chgBit(oldp+1043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive));
        bufp->chgBit(oldp+1044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid));
        bufp->chgBit(oldp+1045,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__preld_en));
        bufp->chgIData(oldp+1046,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0xdU)),19);
        bufp->chgBit(oldp+1047,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xcU))));
        bufp->chgIData(oldp+1048,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina),32);
        bufp->chgCData(oldp+1049,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea),4);
        bufp->chgCData(oldp+1050,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea),4);
        bufp->chgCData(oldp+1051,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea),4);
        bufp->chgCData(oldp+1052,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea),4);
        bufp->chgCData(oldp+1053,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea),4);
        bufp->chgCData(oldp+1054,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea),4);
        bufp->chgCData(oldp+1055,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea),4);
        bufp->chgCData(oldp+1056,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea),4);
        bufp->chgBit(oldp+1057,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea));
        bufp->chgBit(oldp+1058,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea));
        bufp->chgBit(oldp+1059,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en));
        bufp->chgBit(oldp+1060,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en));
        bufp->chgBit(oldp+1061,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en));
        bufp->chgBit(oldp+1062,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid));
        bufp->chgBit(oldp+1063,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_ready_go));
        bufp->chgBit(oldp+1064,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en));
        bufp->chgCData(oldp+1065,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra),8);
        bufp->chgIData(oldp+1066,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina),32);
        bufp->chgCData(oldp+1067,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea),4);
        bufp->chgCData(oldp+1068,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea),4);
        bufp->chgCData(oldp+1069,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea),4);
        bufp->chgCData(oldp+1070,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea),4);
        bufp->chgCData(oldp+1071,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea),4);
        bufp->chgCData(oldp+1072,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea),4);
        bufp->chgCData(oldp+1073,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea),4);
        bufp->chgCData(oldp+1074,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea),4);
        bufp->chgCData(oldp+1075,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_addra),8);
        bufp->chgBit(oldp+1076,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_wea));
        bufp->chgBit(oldp+1077,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv_wea));
        bufp->chgBit(oldp+1078,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_wea_en));
        bufp->chgBit(oldp+1079,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en));
        bufp->chgBit(oldp+1080,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en));
        bufp->chgCData(oldp+1081,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset),4);
        bufp->chgCData(oldp+1082,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index),8);
        bufp->chgBit(oldp+1083,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__req_or_inst_valid));
        bufp->chgBit(oldp+1084,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go));
        bufp->chgBit(oldp+1085,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush));
        bufp->chgBit(oldp+1086,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd));
        bufp->chgBit(oldp+1087,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign));
        bufp->chgBit(oldp+1088,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign));
        bufp->chgBit(oldp+1089,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                               >> 0x25U)))));
        bufp->chgCData(oldp+1090,((0x1fU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                    >> 0x20U)))),5);
        bufp->chgIData(oldp+1091,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)),32);
        bufp->chgBit(oldp+1092,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                               >> 0x26U)))));
        bufp->chgIData(oldp+1093,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es),32);
        bufp->chgIData(oldp+1094,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es),32);
        bufp->chgBit(oldp+1095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go));
        bufp->chgBit(oldp+1096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin));
        bufp->chgBit(oldp+1097,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__to_fs_valid));
        bufp->chgBit(oldp+1098,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go));
        bufp->chgIData(oldp+1099,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc),32);
        bufp->chgBit(oldp+1100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef));
        bufp->chgBit(oldp+1101,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__br_bus 
                                               >> 0x20U)))));
        bufp->chgIData(oldp+1102,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__br_bus)),32);
        bufp->chgBit(oldp+1103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_delay));
        bufp->chgBit(oldp+1104,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_go_dirt));
        bufp->chgBit(oldp+1105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go));
        bufp->chgIData(oldp+1106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result),32);
        bufp->chgIData(oldp+1107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata),32);
        bufp->chgCData(oldp+1108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded),8);
        bufp->chgSData(oldp+1109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded),16);
        bufp->chgBit(oldp+1110,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
        bufp->chgBit(oldp+1111,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
        bufp->chgBit(oldp+1112,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
        bufp->chgBit(oldp+1113,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
        bufp->chgBit(oldp+1114,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en));
        bufp->chgBit(oldp+1115,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
        bufp->chgBit(oldp+1116,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
        bufp->chgBit(oldp+1117,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
        bufp->chgBit(oldp+1118,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
        bufp->chgBit(oldp+1119,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
        bufp->chgBit(oldp+1120,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
        bufp->chgBit(oldp+1121,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
        bufp->chgBit(oldp+1122,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
    }
    bufp->chgBit(oldp+1123,(vlSelf->aclk));
    bufp->chgBit(oldp+1124,(vlSelf->aresetn));
    bufp->chgBit(oldp+1125,(vlSelf->enable_delay));
    bufp->chgIData(oldp+1126,(vlSelf->random_seed),23);
    bufp->chgBit(oldp+1127,(vlSelf->ram_ren));
    bufp->chgIData(oldp+1128,(vlSelf->ram_raddr),32);
    bufp->chgIData(oldp+1129,(vlSelf->ram_rdata),32);
    bufp->chgCData(oldp+1130,(vlSelf->ram_wen),4);
    bufp->chgIData(oldp+1131,(vlSelf->ram_waddr),32);
    bufp->chgIData(oldp+1132,(vlSelf->ram_wdata),32);
    bufp->chgIData(oldp+1133,(vlSelf->debug0_wb_pc),32);
    bufp->chgBit(oldp+1134,(vlSelf->debug0_wb_rf_wen));
    bufp->chgCData(oldp+1135,(vlSelf->debug0_wb_rf_wnum),5);
    bufp->chgIData(oldp+1136,(vlSelf->debug0_wb_rf_wdata),32);
    bufp->chgIData(oldp+1137,(vlSelf->num_data),32);
    bufp->chgBit(oldp+1138,(vlSelf->open_trace));
    bufp->chgBit(oldp+1139,(vlSelf->num_monitor));
    bufp->chgCData(oldp+1140,(vlSelf->confreg_uart_data),8);
    bufp->chgBit(oldp+1141,(vlSelf->write_uart_valid));
    bufp->chgWData(oldp+1142,(vlSelf->uart_ctr_bus),128);
    bufp->chgBit(oldp+1146,(vlSelf->uart_rx));
    bufp->chgBit(oldp+1147,(vlSelf->uart_tx));
    bufp->chgSData(oldp+1148,(vlSelf->led),16);
    bufp->chgCData(oldp+1149,(vlSelf->led_rg0),2);
    bufp->chgCData(oldp+1150,(vlSelf->led_rg1),2);
    bufp->chgCData(oldp+1151,(vlSelf->num_csn),8);
    bufp->chgCData(oldp+1152,(vlSelf->num_a_g),7);
    bufp->chgCData(oldp+1153,(vlSelf->btn_key_col),4);
    bufp->chgCData(oldp+1154,(vlSelf->btn_key_row),4);
    bufp->chgCData(oldp+1155,(vlSelf->btn_step),2);
    bufp->chgCData(oldp+1156,(vlSelf->__SYM__switch),8);
    bufp->chgBit(oldp+1157,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                | (~ (IData)(vlSelf->enable_delay))))));
    bufp->chgBit(oldp+1158,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                | (~ (IData)(vlSelf->enable_delay))))));
    bufp->chgBit(oldp+1159,((1U & (~ (IData)(vlSelf->aresetn)))));
    bufp->chgBit(oldp+1160,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                    ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                       | (IData)(vlSelf->uart_tx))
                                    : (IData)(vlSelf->uart_rx)))));
    bufp->chgBit(oldp+1161,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
    bufp->chgIData(oldp+1162,(vlSelf->__SYM__switch),32);
    bufp->chgIData(oldp+1163,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
                                           << 8U)) 
                               | ((0x2000U & ((IData)(vlSelf->__SYM__switch) 
                                              << 7U)) 
                                  | ((0x800U & ((IData)(vlSelf->__SYM__switch) 
                                                << 6U)) 
                                     | ((0x200U & ((IData)(vlSelf->__SYM__switch) 
                                                   << 5U)) 
                                        | ((0x80U & 
                                            ((IData)(vlSelf->__SYM__switch) 
                                             << 4U)) 
                                           | ((0x20U 
                                               & ((IData)(vlSelf->__SYM__switch) 
                                                  << 3U)) 
                                              | ((8U 
                                                  & ((IData)(vlSelf->__SYM__switch) 
                                                     << 2U)) 
                                                 | (2U 
                                                    & ((IData)(vlSelf->__SYM__switch) 
                                                       << 1U)))))))))),32);
    bufp->chgBit(oldp+1164,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                             & (~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))))));
    bufp->chgBit(oldp+1165,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                             & (0xfU == (IData)(vlSelf->btn_key_row)))));
    bufp->chgBit(oldp+1166,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                             & (~ (IData)(vlSelf->btn_step)))));
    bufp->chgBit(oldp+1167,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                   & (IData)(vlSelf->btn_step)))));
    bufp->chgBit(oldp+1168,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                             & (~ ((IData)(vlSelf->btn_step) 
                                   >> 1U)))));
    bufp->chgBit(oldp+1169,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                             & ((IData)(vlSelf->btn_step) 
                                >> 1U))));
    bufp->chgBit(oldp+1170,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
}

void Vsimu_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_cleanup\n"); );
    // Init
    Vsimu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimu_top___024root*>(voidSelf);
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
