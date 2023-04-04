// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


VL_ATTR_COLD void Vsimu_top___024root__trace_full_sub_8(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_full_sub_8\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h0ff96379__0;
    VlWide<3>/*95:0*/ __Vtemp_h544f9cfd__0;
    VlWide<3>/*95:0*/ __Vtemp_h2a6e56df__0;
    VlWide<3>/*95:0*/ __Vtemp_h8dbd108e__0;
    VlWide<3>/*95:0*/ __Vtemp_he01ae970__0;
    // Body
    bufp->fullBit(oldp+12374,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     >> 2U))));
    bufp->fullBit(oldp+12375,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     >> 1U))));
    bufp->fullBit(oldp+12376,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))));
    bufp->fullBit(oldp+12377,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                       >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                         >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))));
    bufp->fullBit(oldp+12378,((1U & ((((IData)((1U 
                                                == 
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
                                     | (IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))))));
    bufp->fullBit(oldp+12379,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12380,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     >> 4U))));
    bufp->fullBit(oldp+12381,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     >> 3U))));
    bufp->fullBit(oldp+12382,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))) 
                                     | (IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))))));
    bufp->fullBit(oldp+12383,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData) 
                                        & (8U == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)))) 
                                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData) 
                                          & (0x10U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                         & (0U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))) 
                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                        & (0x18U == 
                                           (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))))));
    bufp->fullBit(oldp+12384,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12385,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig))));
    bufp->fullBit(oldp+12386,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12387,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 1U))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                           >> 1U))))));
    bufp->fullBit(oldp+12388,((1U & (((((IData)((0U 
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
    bufp->fullBit(oldp+12389,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                     >> 4U))));
    bufp->fullBit(oldp+12390,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12391,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12392,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig))))))));
    bufp->fullBit(oldp+12393,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12394,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12395,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12396,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig))));
    bufp->fullBit(oldp+12397,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     >> 6U))));
    bufp->fullBit(oldp+12398,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     >> 5U))));
    bufp->fullBit(oldp+12399,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))))));
    bufp->fullBit(oldp+12400,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig)) 
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
    bufp->fullBit(oldp+12401,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12402,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12403,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12404,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                       >> 3U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig))))) 
                                     | (IData)((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig))))))));
    bufp->fullBit(oldp+12405,((1U & ((((IData)((2U 
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
    bufp->fullIData(oldp+12406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+12407,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
    bufp->fullBit(oldp+12408,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig)) 
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
    bufp->fullCData(oldp+12409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig),5);
    bufp->fullCData(oldp+12410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig),4);
    bufp->fullCData(oldp+12411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig),2);
    bufp->fullCData(oldp+12412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig),2);
    bufp->fullBit(oldp+12413,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+12414,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12415,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig))));
    bufp->fullBit(oldp+12416,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12417,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                                    >> 0xbU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+12418,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12419,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12420,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12421,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12422,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12423,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12424,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12425,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12426,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12427,((1U & ((((IData)((0x20U 
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
    bufp->fullBit(oldp+12428,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12429,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12430,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12431,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12432,((1U & ((((IData)((0x100U 
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
    bufp->fullBit(oldp+12433,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12434,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12435,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12436,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0x1800U 
                                                == 
                                                (0x1800U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12437,((1U & ((((IData)((0x800U 
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
    bufp->fullBit(oldp+12438,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12439,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12440,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12441,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12442,((1U & ((((IData)((0x4000U 
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
    bufp->fullBit(oldp+12443,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 9U))));
    bufp->fullBit(oldp+12444,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 8U))));
    bufp->fullBit(oldp+12445,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 7U))));
    bufp->fullBit(oldp+12446,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                     | (IData)((0x180U 
                                                == 
                                                (0x180U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
    bufp->fullBit(oldp+12447,((1U & ((((IData)((0x80U 
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
    bufp->fullBit(oldp+12448,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12449,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig))));
    bufp->fullBit(oldp+12450,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12451,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                                    >> 0xaU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+12452,((1U & (((((IData)((0U 
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
    bufp->fullBit(oldp+12453,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 2U))));
    bufp->fullBit(oldp+12454,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 1U))));
    bufp->fullBit(oldp+12455,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))));
    bufp->fullBit(oldp+12456,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                       >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                         >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))));
    bufp->fullBit(oldp+12457,((1U & ((((IData)((1U 
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
    bufp->fullBit(oldp+12458,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12459,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 4U))));
    bufp->fullBit(oldp+12460,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 3U))));
    bufp->fullBit(oldp+12461,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                     | (IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
    bufp->fullBit(oldp+12462,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData) 
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
    bufp->fullBit(oldp+12463,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12464,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig))));
    bufp->fullBit(oldp+12465,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12466,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                    >> 1U))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                           >> 1U))))));
    bufp->fullBit(oldp+12467,((1U & (((((IData)((0U 
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
    bufp->fullBit(oldp+12468,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                     >> 4U))));
    bufp->fullBit(oldp+12469,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12470,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12471,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig) 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig))))))));
    bufp->fullBit(oldp+12472,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12473,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12474,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12475,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig))));
    bufp->fullBit(oldp+12476,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 6U))));
    bufp->fullBit(oldp+12477,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029) 
                                     >> 5U))));
    bufp->fullBit(oldp+12478,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
    bufp->fullBit(oldp+12479,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig)) 
                                        & (0x20U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig)) 
                                          & (0x40U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                         & (0U == (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                        & (0x60U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029))))))));
    bufp->fullBit(oldp+12480,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12481,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12482,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12483,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig) 
                                       >> 3U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig))))) 
                                     | (IData)((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig))))))));
    bufp->fullBit(oldp+12484,((1U & ((((IData)((2U 
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
    bufp->fullIData(oldp+12485,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+12486,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
    bufp->fullBit(oldp+12487,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                        & (0x1000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                          & (0x2000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                         & (0U == (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                        & (0x3000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
    bufp->fullCData(oldp+12488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig),5);
    bufp->fullCData(oldp+12489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig),4);
    bufp->fullCData(oldp+12490,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig),2);
    bufp->fullCData(oldp+12491,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig),2);
    bufp->fullBit(oldp+12492,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+12493,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12494,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig))));
    bufp->fullBit(oldp+12495,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12496,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 0xbU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+12497,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12498,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12499,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12500,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12501,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12502,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12503,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12504,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12505,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12506,((1U & ((((IData)((0x20U 
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
    bufp->fullBit(oldp+12507,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12508,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12509,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12510,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                     | (IData)((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12511,((1U & ((((IData)((0x100U 
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
    bufp->fullBit(oldp+12512,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12513,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12514,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12515,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                     | (IData)((0x1800U 
                                                == 
                                                (0x1800U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12516,((1U & ((((IData)((0x800U 
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
    bufp->fullBit(oldp+12517,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12518,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12519,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12520,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                                     | (IData)((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12521,((1U & ((((IData)((0x4000U 
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
    bufp->fullBit(oldp+12522,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 9U))));
    bufp->fullBit(oldp+12523,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 8U))));
    bufp->fullBit(oldp+12524,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 7U))));
    bufp->fullBit(oldp+12525,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                     | (IData)((0x180U 
                                                == 
                                                (0x180U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
    bufp->fullBit(oldp+12526,((1U & ((((IData)((0x80U 
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
    bufp->fullBit(oldp+12527,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12528,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig))));
    bufp->fullBit(oldp+12529,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12530,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 0xaU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+12531,((1U & (((((IData)((0U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig))) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                           >> 0xaU)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+12532,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 2U))));
    bufp->fullBit(oldp+12533,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 1U))));
    bufp->fullBit(oldp+12534,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))));
    bufp->fullBit(oldp+12535,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                       >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                         >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))));
    bufp->fullBit(oldp+12536,((1U & ((((IData)((1U 
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
    bufp->fullBit(oldp+12537,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12538,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 4U))));
    bufp->fullBit(oldp+12539,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 3U))));
    bufp->fullBit(oldp+12540,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                     | (IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
    bufp->fullBit(oldp+12541,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData) 
                                        & (8U == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))) 
                                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData) 
                                          & (0x10U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                         & (0U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                        & (0x18U == 
                                           (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
    bufp->fullBit(oldp+12542,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12543,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig))));
    bufp->fullBit(oldp+12544,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12545,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 1U))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                           >> 1U))))));
    bufp->fullBit(oldp+12546,((1U & (((((IData)((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                           >> 1U)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+12547,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                     >> 4U))));
    bufp->fullBit(oldp+12548,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12549,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12550,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig))))))));
    bufp->fullBit(oldp+12551,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12552,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12553,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12554,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig))));
    bufp->fullBit(oldp+12555,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 6U))));
    bufp->fullBit(oldp+12556,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     >> 5U))));
    bufp->fullBit(oldp+12557,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
    bufp->fullBit(oldp+12558,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig)) 
                                        & (0x20U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig)) 
                                          & (0x40U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                         & (0U == (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                        & (0x60U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))))));
    bufp->fullBit(oldp+12559,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12560,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12561,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12562,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                       >> 3U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig))))) 
                                     | (IData)((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig))))))));
    bufp->fullBit(oldp+12563,((1U & ((((IData)((2U 
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
    bufp->fullIData(oldp+12564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+12565,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
    bufp->fullBit(oldp+12566,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                        & (0x1000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                          & (0x2000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                         & (0U == (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                        & (0x3000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
    bufp->fullCData(oldp+12567,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig),5);
    bufp->fullCData(oldp+12568,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig),4);
    bufp->fullCData(oldp+12569,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig),2);
    bufp->fullCData(oldp+12570,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig),2);
    bufp->fullBit(oldp+12571,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+12572,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12573,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig))));
    bufp->fullBit(oldp+12574,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12575,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 0xbU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+12576,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12577,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12578,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12579,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12580,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12581,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12582,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12583,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12584,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12585,((1U & ((((IData)((0x20U 
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
    bufp->fullBit(oldp+12586,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12587,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12588,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12589,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                     | (IData)((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12590,((1U & ((((IData)((0x100U 
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
    bufp->fullBit(oldp+12591,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12592,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12593,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12594,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                     | (IData)((0x1800U 
                                                == 
                                                (0x1800U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12595,((1U & ((((IData)((0x800U 
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
    bufp->fullBit(oldp+12596,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12597,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12598,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12599,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                                     | (IData)((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12600,((1U & ((((IData)((0x4000U 
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
    bufp->fullBit(oldp+12601,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 9U))));
    bufp->fullBit(oldp+12602,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 8U))));
    bufp->fullBit(oldp+12603,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 7U))));
    bufp->fullBit(oldp+12604,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                     | (IData)((0x180U 
                                                == 
                                                (0x180U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
    bufp->fullBit(oldp+12605,((1U & ((((IData)((0x80U 
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
    bufp->fullBit(oldp+12606,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12607,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig))));
    bufp->fullBit(oldp+12608,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12609,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 0xaU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+12610,((1U & (((((IData)((0U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig))) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                           >> 0xaU)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+12611,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 2U))));
    bufp->fullBit(oldp+12612,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 1U))));
    bufp->fullBit(oldp+12613,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))));
    bufp->fullBit(oldp+12614,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                       >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                         >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))));
    bufp->fullBit(oldp+12615,((1U & ((((IData)((1U 
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
    bufp->fullBit(oldp+12616,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12617,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 4U))));
    bufp->fullBit(oldp+12618,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 3U))));
    bufp->fullBit(oldp+12619,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                     | (IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
    bufp->fullBit(oldp+12620,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData) 
                                        & (8U == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))) 
                                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData) 
                                          & (0x10U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                         & (0U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                        & (0x18U == 
                                           (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
    bufp->fullBit(oldp+12621,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12622,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig))));
    bufp->fullBit(oldp+12623,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12624,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 1U))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                           >> 1U))))));
    bufp->fullBit(oldp+12625,((1U & (((((IData)((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                           >> 1U)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+12626,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                     >> 4U))));
    bufp->fullBit(oldp+12627,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12628,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12629,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig))))))));
    bufp->fullBit(oldp+12630,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12631,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12632,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12633,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig))));
    bufp->fullBit(oldp+12634,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 6U))));
    bufp->fullBit(oldp+12635,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     >> 5U))));
    bufp->fullBit(oldp+12636,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
    bufp->fullBit(oldp+12637,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig)) 
                                        & (0x20U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig)) 
                                          & (0x40U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                         & (0U == (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                        & (0x60U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))))));
    bufp->fullBit(oldp+12638,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12639,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12640,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12641,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                       >> 3U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig))))) 
                                     | (IData)((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig))))))));
    bufp->fullBit(oldp+12642,((1U & ((((IData)((2U 
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
    bufp->fullIData(oldp+12643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+12644,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
    bufp->fullBit(oldp+12645,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                        & (0x1000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                          & (0x2000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                         & (0U == (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                        & (0x3000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
    bufp->fullCData(oldp+12646,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig),5);
    bufp->fullCData(oldp+12647,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig),4);
    bufp->fullCData(oldp+12648,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig),2);
    bufp->fullCData(oldp+12649,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig),2);
    bufp->fullBit(oldp+12650,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+12651,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12652,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig))));
    bufp->fullBit(oldp+12653,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12654,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 0xbU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+12655,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12656,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12657,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12658,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12659,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12660,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12661,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12662,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12663,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12664,((1U & ((((IData)((0x20U 
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
    bufp->fullBit(oldp+12665,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12666,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12667,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12668,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                     | (IData)((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12669,((1U & ((((IData)((0x100U 
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
    bufp->fullBit(oldp+12670,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12671,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12672,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12673,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                     | (IData)((0x1800U 
                                                == 
                                                (0x1800U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12674,((1U & ((((IData)((0x800U 
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
    bufp->fullBit(oldp+12675,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12676,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12677,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12678,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                                     | (IData)((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12679,((1U & ((((IData)((0x4000U 
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
    bufp->fullBit(oldp+12680,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 9U))));
    bufp->fullBit(oldp+12681,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 8U))));
    bufp->fullBit(oldp+12682,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 7U))));
    bufp->fullBit(oldp+12683,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                     | (IData)((0x180U 
                                                == 
                                                (0x180U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
    bufp->fullBit(oldp+12684,((1U & ((((IData)((0x80U 
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
    bufp->fullBit(oldp+12685,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12686,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))));
    bufp->fullBit(oldp+12687,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12688,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 0xaU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+12689,((1U & (((((IData)((0U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                           >> 0xaU)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+12690,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 2U))));
    bufp->fullBit(oldp+12691,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 1U))));
    bufp->fullBit(oldp+12692,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))));
    bufp->fullBit(oldp+12693,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                       >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                         >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))));
    bufp->fullBit(oldp+12694,((1U & ((((IData)((1U 
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
    bufp->fullBit(oldp+12695,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12696,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 4U))));
    bufp->fullBit(oldp+12697,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 3U))));
    bufp->fullBit(oldp+12698,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                     | (IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
    bufp->fullBit(oldp+12699,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData) 
                                        & (8U == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData) 
                                          & (0x10U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                         & (0U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                        & (0x18U == 
                                           (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
    bufp->fullBit(oldp+12700,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12701,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig))));
    bufp->fullBit(oldp+12702,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12703,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 1U))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                           >> 1U))))));
    bufp->fullBit(oldp+12704,((1U & (((((IData)((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                           >> 1U)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+12705,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                     >> 4U))));
    bufp->fullBit(oldp+12706,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12707,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12708,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig))))))));
    bufp->fullBit(oldp+12709,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12710,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12711,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12712,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig))));
    bufp->fullBit(oldp+12713,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 6U))));
    bufp->fullBit(oldp+12714,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     >> 5U))));
    bufp->fullBit(oldp+12715,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
    bufp->fullBit(oldp+12716,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)) 
                                        & (0x20U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)) 
                                          & (0x40U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                         & (0U == (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                        & (0x60U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))))));
    bufp->fullBit(oldp+12717,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12718,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12719,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12720,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                       >> 3U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig))))) 
                                     | (IData)((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig))))))));
    bufp->fullBit(oldp+12721,((1U & ((((IData)((2U 
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
    bufp->fullIData(oldp+12722,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+12723,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
    bufp->fullBit(oldp+12724,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                        & (0x1000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                          & (0x2000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                         & (0U == (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                        & (0x3000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
    bufp->fullCData(oldp+12725,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig),5);
    bufp->fullCData(oldp+12726,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig),4);
    bufp->fullCData(oldp+12727,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig),2);
    bufp->fullCData(oldp+12728,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig),2);
    bufp->fullBit(oldp+12729,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+12730,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12731,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig))));
    bufp->fullBit(oldp+12732,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12733,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 0xbU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+12734,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12735,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12736,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12737,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12738,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12739,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12740,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12741,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12742,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12743,((1U & ((((IData)((0x20U 
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
    bufp->fullBit(oldp+12744,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12745,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12746,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12747,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                     | (IData)((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12748,((1U & ((((IData)((0x100U 
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
    bufp->fullBit(oldp+12749,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12750,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12751,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12752,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                     | (IData)((0x1800U 
                                                == 
                                                (0x1800U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12753,((1U & ((((IData)((0x800U 
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
    bufp->fullBit(oldp+12754,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12755,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12756,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12757,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                                     | (IData)((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12758,((1U & ((((IData)((0x4000U 
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
    bufp->fullBit(oldp+12759,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 9U))));
    bufp->fullBit(oldp+12760,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 8U))));
    bufp->fullBit(oldp+12761,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 7U))));
    bufp->fullBit(oldp+12762,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                     | (IData)((0x180U 
                                                == 
                                                (0x180U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
    bufp->fullBit(oldp+12763,((1U & ((((IData)((0x80U 
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
    bufp->fullBit(oldp+12764,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12765,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))));
    bufp->fullBit(oldp+12766,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12767,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 0xaU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+12768,((1U & (((((IData)((0U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                           >> 0xaU)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+12769,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 2U))));
    bufp->fullBit(oldp+12770,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 1U))));
    bufp->fullBit(oldp+12771,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))));
    bufp->fullBit(oldp+12772,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                       >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                         >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))));
    bufp->fullBit(oldp+12773,((1U & ((((IData)((1U 
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
    bufp->fullBit(oldp+12774,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12775,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 4U))));
    bufp->fullBit(oldp+12776,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 3U))));
    bufp->fullBit(oldp+12777,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                     | (IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
    bufp->fullBit(oldp+12778,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData) 
                                        & (8U == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData) 
                                          & (0x10U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                         & (0U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                        & (0x18U == 
                                           (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
    bufp->fullBit(oldp+12779,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12780,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig))));
    bufp->fullBit(oldp+12781,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12782,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 1U))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                           >> 1U))))));
    bufp->fullBit(oldp+12783,((1U & (((((IData)((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                           >> 1U)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+12784,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                     >> 4U))));
    bufp->fullBit(oldp+12785,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12786,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12787,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig))))))));
    bufp->fullBit(oldp+12788,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12789,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12790,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12791,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))));
    bufp->fullBit(oldp+12792,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 6U))));
    bufp->fullBit(oldp+12793,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     >> 5U))));
    bufp->fullBit(oldp+12794,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
    bufp->fullBit(oldp+12795,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
                                        & (0x20U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
                                          & (0x40U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                         & (0U == (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                        & (0x60U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))))));
    bufp->fullBit(oldp+12796,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12797,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12798,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12799,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                       >> 3U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))))) 
                                     | (IData)((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))))))));
    bufp->fullBit(oldp+12800,((1U & ((((IData)((2U 
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
    bufp->fullIData(oldp+12801,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+12802,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
    bufp->fullBit(oldp+12803,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig)) 
                                        & (0x1000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig)) 
                                          & (0x2000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig) 
                                         & (0U == (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig) 
                                        & (0x3000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
    bufp->fullCData(oldp+12804,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig),5);
    bufp->fullCData(oldp+12805,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig),4);
    bufp->fullCData(oldp+12806,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig),2);
    bufp->fullCData(oldp+12807,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig),2);
    bufp->fullBit(oldp+12808,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+12809,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12810,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig))));
    bufp->fullBit(oldp+12811,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12812,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                                    >> 0xbU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+12813,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12814,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12815,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12816,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12817,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12818,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12819,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12820,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12821,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12822,((1U & ((((IData)((0x20U 
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
    bufp->fullBit(oldp+12823,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12824,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12825,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12826,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                     | (IData)((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12827,((1U & ((((IData)((0x100U 
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
    bufp->fullBit(oldp+12828,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12829,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12830,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12831,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                     | (IData)((0x1800U 
                                                == 
                                                (0x1800U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12832,((1U & ((((IData)((0x800U 
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
    bufp->fullBit(oldp+12833,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12834,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12835,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12836,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                     | (IData)((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12837,((1U & ((((IData)((0x4000U 
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
    bufp->fullBit(oldp+12838,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 9U))));
    bufp->fullBit(oldp+12839,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 8U))));
    bufp->fullBit(oldp+12840,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 7U))));
    bufp->fullBit(oldp+12841,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                     | (IData)((0x180U 
                                                == 
                                                (0x180U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
    bufp->fullBit(oldp+12842,((1U & ((((IData)((0x80U 
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
    bufp->fullBit(oldp+12843,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12844,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig))));
    bufp->fullBit(oldp+12845,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12846,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                                    >> 0xaU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+12847,((1U & (((((IData)((0U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig))) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                           >> 0xaU)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+12848,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 2U))));
    bufp->fullBit(oldp+12849,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 1U))));
    bufp->fullBit(oldp+12850,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))));
    bufp->fullBit(oldp+12851,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                       >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                         >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))));
    bufp->fullBit(oldp+12852,((1U & ((((IData)((1U 
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
    bufp->fullBit(oldp+12853,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12854,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 4U))));
    bufp->fullBit(oldp+12855,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 3U))));
    bufp->fullBit(oldp+12856,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                     | (IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
    bufp->fullBit(oldp+12857,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData) 
                                        & (8U == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)))) 
                                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData) 
                                          & (0x10U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                         & (0U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                        & (0x18U == 
                                           (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
    bufp->fullBit(oldp+12858,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12859,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig))));
    bufp->fullBit(oldp+12860,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12861,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                    >> 1U))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                           >> 1U))))));
    bufp->fullBit(oldp+12862,((1U & (((((IData)((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig)))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                           >> 1U)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+12863,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                     >> 4U))));
    bufp->fullBit(oldp+12864,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12865,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12866,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig) 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig))))))));
    bufp->fullBit(oldp+12867,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12868,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12869,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12870,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig))));
    bufp->fullBit(oldp+12871,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 6U))));
    bufp->fullBit(oldp+12872,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029) 
                                     >> 5U))));
    bufp->fullBit(oldp+12873,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
    bufp->fullBit(oldp+12874,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig)) 
                                        & (0x20U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig)) 
                                          & (0x40U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                         & (0U == (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                        & (0x60U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029))))))));
    bufp->fullBit(oldp+12875,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12876,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12877,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12878,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig) 
                                       >> 3U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig))))) 
                                     | (IData)((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig))))))));
    bufp->fullBit(oldp+12879,((1U & ((((IData)((2U 
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
    bufp->fullIData(oldp+12880,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+12881,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
    bufp->fullBit(oldp+12882,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig)) 
                                        & (0x1000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig)) 
                                          & (0x2000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig) 
                                         & (0U == (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig) 
                                        & (0x3000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
    bufp->fullCData(oldp+12883,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig),5);
    bufp->fullCData(oldp+12884,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig),4);
    bufp->fullCData(oldp+12885,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig),2);
    bufp->fullCData(oldp+12886,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig),2);
    bufp->fullBit(oldp+12887,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+12888,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12889,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig))));
    bufp->fullBit(oldp+12890,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12891,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                                    >> 0xbU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+12892,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12893,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12894,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12895,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12896,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12897,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12898,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12899,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12900,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12901,((1U & ((((IData)((0x20U 
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
    bufp->fullBit(oldp+12902,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12903,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12904,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12905,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                     | (IData)((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12906,((1U & ((((IData)((0x100U 
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
    bufp->fullBit(oldp+12907,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12908,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12909,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12910,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                     | (IData)((0x1800U 
                                                == 
                                                (0x1800U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12911,((1U & ((((IData)((0x800U 
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
    bufp->fullBit(oldp+12912,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12913,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12914,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12915,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                     | (IData)((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12916,((1U & ((((IData)((0x4000U 
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
    bufp->fullBit(oldp+12917,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 9U))));
    bufp->fullBit(oldp+12918,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 8U))));
    bufp->fullBit(oldp+12919,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 7U))));
    bufp->fullBit(oldp+12920,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                     | (IData)((0x180U 
                                                == 
                                                (0x180U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
    bufp->fullBit(oldp+12921,((1U & ((((IData)((0x80U 
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
    bufp->fullBit(oldp+12922,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12923,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig))));
    bufp->fullBit(oldp+12924,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12925,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                                    >> 0xaU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+12926,((1U & (((((IData)((0U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig))) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                           >> 0xaU)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+12927,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 2U))));
    bufp->fullBit(oldp+12928,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 1U))));
    bufp->fullBit(oldp+12929,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))));
    bufp->fullBit(oldp+12930,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                       >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                         >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))));
    bufp->fullBit(oldp+12931,((1U & ((((IData)((1U 
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
    bufp->fullBit(oldp+12932,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12933,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 4U))));
    bufp->fullBit(oldp+12934,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 3U))));
    bufp->fullBit(oldp+12935,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                     | (IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
    bufp->fullBit(oldp+12936,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData) 
                                        & (8U == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)))) 
                                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData) 
                                          & (0x10U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                         & (0U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                        & (0x18U == 
                                           (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
    bufp->fullBit(oldp+12937,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12938,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig))));
    bufp->fullBit(oldp+12939,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12940,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                    >> 1U))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                           >> 1U))))));
    bufp->fullBit(oldp+12941,((1U & (((((IData)((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig)))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                           >> 1U)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+12942,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                     >> 4U))));
    bufp->fullBit(oldp+12943,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12944,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12945,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig) 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig))))))));
    bufp->fullBit(oldp+12946,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12947,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12948,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12949,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig))));
    bufp->fullBit(oldp+12950,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 6U))));
    bufp->fullBit(oldp+12951,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029) 
                                     >> 5U))));
    bufp->fullBit(oldp+12952,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
    bufp->fullBit(oldp+12953,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig)) 
                                        & (0x20U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig)) 
                                          & (0x40U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                         & (0U == (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                        & (0x60U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029))))))));
    bufp->fullBit(oldp+12954,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+12955,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+12956,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12957,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig) 
                                       >> 3U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig))))) 
                                     | (IData)((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig))))))));
    bufp->fullBit(oldp+12958,((1U & ((((IData)((2U 
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
    bufp->fullIData(oldp+12959,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+12960,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
    bufp->fullBit(oldp+12961,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig)) 
                                        & (0x1000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig)) 
                                          & (0x2000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig) 
                                         & (0U == (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig) 
                                        & (0x3000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
    bufp->fullCData(oldp+12962,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig),5);
    bufp->fullCData(oldp+12963,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig),4);
    bufp->fullCData(oldp+12964,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig),2);
    bufp->fullCData(oldp+12965,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig),2);
    bufp->fullBit(oldp+12966,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+12967,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+12968,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig))));
    bufp->fullBit(oldp+12969,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12970,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                                    >> 0xbU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+12971,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12972,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12973,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12974,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12975,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+12976,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12977,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12978,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12979,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12980,((1U & ((((IData)((0x20U 
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
    bufp->fullBit(oldp+12981,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12982,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12983,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12984,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                     | (IData)((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12985,((1U & ((((IData)((0x100U 
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
    bufp->fullBit(oldp+12986,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12987,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12988,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12989,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                     | (IData)((0x1800U 
                                                == 
                                                (0x1800U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12990,((1U & ((((IData)((0x800U 
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
    bufp->fullBit(oldp+12991,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12992,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12993,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12994,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                     | (IData)((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+12995,((1U & ((((IData)((0x4000U 
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
    bufp->fullBit(oldp+12996,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 9U))));
    bufp->fullBit(oldp+12997,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 8U))));
    bufp->fullBit(oldp+12998,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 7U))));
    bufp->fullBit(oldp+12999,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                     | (IData)((0x180U 
                                                == 
                                                (0x180U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
    bufp->fullBit(oldp+13000,((1U & ((((IData)((0x80U 
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
    bufp->fullBit(oldp+13001,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+13002,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig))));
    bufp->fullBit(oldp+13003,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+13004,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                                    >> 0xaU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+13005,((1U & (((((IData)((0U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig))) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                           >> 0xaU)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+13006,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 2U))));
    bufp->fullBit(oldp+13007,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 1U))));
    bufp->fullBit(oldp+13008,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))));
    bufp->fullBit(oldp+13009,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                       >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                         >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))));
    bufp->fullBit(oldp+13010,((1U & ((((IData)((1U 
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
    bufp->fullBit(oldp+13011,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+13012,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 4U))));
    bufp->fullBit(oldp+13013,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 3U))));
    bufp->fullBit(oldp+13014,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                     | (IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
    bufp->fullBit(oldp+13015,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData) 
                                        & (8U == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)))) 
                                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData) 
                                          & (0x10U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                         & (0U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                        & (0x18U == 
                                           (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
    bufp->fullBit(oldp+13016,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+13017,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig))));
    bufp->fullBit(oldp+13018,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+13019,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                    >> 1U))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                           >> 1U))))));
    bufp->fullBit(oldp+13020,((1U & (((((IData)((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig)))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                           >> 1U)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+13021,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                     >> 4U))));
    bufp->fullBit(oldp+13022,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+13023,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+13024,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig) 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig))))))));
    bufp->fullBit(oldp+13025,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+13026,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+13027,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+13028,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig))));
    bufp->fullBit(oldp+13029,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 6U))));
    bufp->fullBit(oldp+13030,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029) 
                                     >> 5U))));
    bufp->fullBit(oldp+13031,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
    bufp->fullBit(oldp+13032,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig)) 
                                        & (0x20U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig)) 
                                          & (0x40U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                         & (0U == (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                        & (0x60U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029))))))));
    bufp->fullBit(oldp+13033,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+13034,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+13035,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+13036,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig) 
                                       >> 3U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig))))) 
                                     | (IData)((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig))))))));
    bufp->fullBit(oldp+13037,((1U & ((((IData)((2U 
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
    bufp->fullIData(oldp+13038,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData),17);
    bufp->fullBit(oldp+13039,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
    bufp->fullBit(oldp+13040,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig)) 
                                        & (0x1000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig)) 
                                          & (0x2000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig) 
                                         & (0U == (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig) 
                                        & (0x3000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
    bufp->fullCData(oldp+13041,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig),5);
    bufp->fullCData(oldp+13042,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig),4);
    bufp->fullCData(oldp+13043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig),2);
    bufp->fullCData(oldp+13044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig),2);
    bufp->fullBit(oldp+13045,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig));
    bufp->fullBit(oldp+13046,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+13047,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig))));
    bufp->fullBit(oldp+13048,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+13049,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                                    >> 0xbU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+13050,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+13051,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+13052,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+13053,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+13054,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+13055,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+13056,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+13057,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+13058,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+13059,((1U & ((((IData)((0x20U 
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
    bufp->fullBit(oldp+13060,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+13061,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+13062,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+13063,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                     | (IData)((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+13064,((1U & ((((IData)((0x100U 
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
    bufp->fullBit(oldp+13065,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+13066,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+13067,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+13068,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                     | (IData)((0x1800U 
                                                == 
                                                (0x1800U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+13069,((1U & ((((IData)((0x800U 
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
    bufp->fullBit(oldp+13070,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+13071,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+13072,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+13073,((1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                     | (IData)((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))))));
    bufp->fullBit(oldp+13074,((1U & ((((IData)((0x4000U 
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
    bufp->fullBit(oldp+13075,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 9U))));
    bufp->fullBit(oldp+13076,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 8U))));
    bufp->fullBit(oldp+13077,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 7U))));
    bufp->fullBit(oldp+13078,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                     | (IData)((0x180U 
                                                == 
                                                (0x180U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
    bufp->fullBit(oldp+13079,((1U & ((((IData)((0x80U 
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
    bufp->fullBit(oldp+13080,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+13081,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig))));
    bufp->fullBit(oldp+13082,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+13083,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                                    >> 0xaU))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+13084,((1U & (((((IData)((0U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig))) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                           >> 0xaU)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+13085,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 2U))));
    bufp->fullBit(oldp+13086,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 1U))));
    bufp->fullBit(oldp+13087,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))));
    bufp->fullBit(oldp+13088,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                       >> 2U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                                  >> 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))) 
                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                         >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))));
    bufp->fullBit(oldp+13089,((1U & ((((IData)((1U 
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
    bufp->fullBit(oldp+13090,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+13091,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 4U))));
    bufp->fullBit(oldp+13092,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 3U))));
    bufp->fullBit(oldp+13093,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                     | (IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
    bufp->fullBit(oldp+13094,((1U & (((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData) 
                                        & (8U == (0x18U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)))) 
                                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData) 
                                          & (0x10U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                         & (0U == (0x18U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                        & (0x18U == 
                                           (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
    bufp->fullBit(oldp+13095,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+13096,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig))));
    bufp->fullBit(oldp+13097,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+13098,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                       >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                    >> 1U))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                           >> 1U))))));
    bufp->fullBit(oldp+13099,((1U & (((((IData)((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig)))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                           >> 1U)) 
                                       | ((IData)((1U 
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
    bufp->fullBit(oldp+13100,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                     >> 4U))));
    bufp->fullBit(oldp+13101,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+13102,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+13103,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig) 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig))))) 
                                     | (IData)((0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig))))))));
    bufp->fullBit(oldp+13104,((1U & ((((IData)((4U 
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
    bufp->fullBit(oldp+13105,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+13106,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+13107,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig))));
    bufp->fullBit(oldp+13108,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 6U))));
    bufp->fullBit(oldp+13109,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029) 
                                     >> 5U))));
    bufp->fullBit(oldp+13110,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x60U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                     | (IData)((0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
    bufp->fullBit(oldp+13111,((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig)) 
                                        & (0x20U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig)) 
                                          & (0x40U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                         & (0U == (0x60U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                        & (0x60U == 
                                           (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029))))))));
    bufp->fullBit(oldp+13112,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                     >> 3U))));
    bufp->fullBit(oldp+13113,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                     >> 2U))));
    bufp->fullBit(oldp+13114,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                     >> 1U))));
    bufp->fullBit(oldp+13115,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig) 
                                       >> 3U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig))))) 
                                     | (IData)((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig))))))));
    bufp->fullBit(oldp+13116,((1U & ((((IData)((2U 
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
    bufp->fullBit(oldp+13117,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush)) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush))));
    bufp->fullWData(oldp+13118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r),460);
    bufp->fullBit(oldp+13133,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                     >> 5U))));
    bufp->fullBit(oldp+13134,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                     >> 6U))));
    bufp->fullSData(oldp+13135,((0xffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                             << 9U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                               >> 0x17U)))),16);
    bufp->fullBit(oldp+13136,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                     >> 7U))));
    bufp->fullIData(oldp+13137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U]),32);
    bufp->fullBit(oldp+13138,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+13139,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                     >> 8U))));
    bufp->fullIData(oldp+13140,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                  << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                               >> 9U))),32);
    bufp->fullBit(oldp+13141,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                     >> 9U))));
    bufp->fullBit(oldp+13142,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+13143,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+13144,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+13145,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+13146,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+13147,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+13148,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+13149,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+13150,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+13151,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+13152,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+13153,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+13154,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+13155,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we));
    bufp->fullBit(oldp+13156,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar));
    bufp->fullBit(oldp+13157,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
    bufp->fullBit(oldp+13158,((1U & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
    bufp->fullBit(oldp+13159,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw));
    bufp->fullBit(oldp+13160,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
    bufp->fullBit(oldp+13161,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                     >> 1U))));
    bufp->fullBit(oldp+13162,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                     >> 2U))));
    bufp->fullBit(oldp+13163,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
    bufp->fullBit(oldp+13164,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                     >> 3U))));
    bufp->fullIData(oldp+13165,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
    bufp->fullIData(oldp+13166,(((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                               << 1U)) 
                                 | (1U & VL_REDXOR_32(
                                                      (0x420000U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))))),23);
    bufp->fullBit(oldp+13167,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
    bufp->fullBit(oldp+13168,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w));
    bufp->fullBit(oldp+13169,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
    bufp->fullBit(oldp+13170,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                     >> 4U))));
    bufp->fullQData(oldp+13171,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                  << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                      << 4U) 
                                                     | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
    bufp->fullIData(oldp+13173,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
    bufp->fullIData(oldp+13174,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                  >> 2U)) 
                                  << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))),32);
    bufp->fullIData(oldp+13175,(((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                  | ((- (IData)((1U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                     & ((((IData)(1U) 
                                          + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                             >> 2U)) 
                                         << 2U) | (3U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)))) 
                                 | ((- (IData)((2U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
    bufp->fullIData(oldp+13176,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
    bufp->fullCData(oldp+13177,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
    bufp->fullBit(oldp+13178,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullBit(oldp+13179,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullBit(oldp+13180,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullCData(oldp+13181,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
    bufp->fullCData(oldp+13182,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
    bufp->fullBit(oldp+13183,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    bufp->fullCData(oldp+13184,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
    bufp->fullBit(oldp+13185,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
    bufp->fullQData(oldp+13186,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
    bufp->fullIData(oldp+13188,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                         >> 0xdU))),32);
    bufp->fullCData(oldp+13189,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                               >> 0xbU)))),2);
    bufp->fullCData(oldp+13190,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
    bufp->fullCData(oldp+13191,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                 >> 4U)))),4);
    bufp->fullCData(oldp+13192,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                               >> 8U)))),3);
    bufp->fullBit(oldp+13193,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
    bufp->fullCData(oldp+13194,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
    bufp->fullQData(oldp+13195,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                  << 0xdU) | (QData)((IData)(
                                                             (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                     << 4U) 
                                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
    bufp->fullIData(oldp+13197,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
    bufp->fullIData(oldp+13198,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                  >> 2U)) 
                                  << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))),32);
    bufp->fullIData(oldp+13199,(((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                  | ((- (IData)((1U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                     & ((((IData)(1U) 
                                          + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                             >> 2U)) 
                                         << 2U) | (3U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)))) 
                                 | ((- (IData)((2U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
    bufp->fullIData(oldp+13200,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
    bufp->fullCData(oldp+13201,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
    bufp->fullBit(oldp+13202,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullBit(oldp+13203,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullBit(oldp+13204,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullCData(oldp+13205,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
    bufp->fullCData(oldp+13206,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
    bufp->fullCData(oldp+13207,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
    bufp->fullBit(oldp+13208,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
    bufp->fullQData(oldp+13209,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
    bufp->fullIData(oldp+13211,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                         >> 0xdU))),32);
    bufp->fullCData(oldp+13212,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                               >> 0xbU)))),2);
    bufp->fullCData(oldp+13213,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
    bufp->fullCData(oldp+13214,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 4U)))),4);
    bufp->fullCData(oldp+13215,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                               >> 8U)))),3);
    bufp->fullBit(oldp+13216,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
    bufp->fullBit(oldp+13217,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
    bufp->fullBit(oldp+13218,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
    bufp->fullCData(oldp+13219,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
    bufp->fullBit(oldp+13220,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
    bufp->fullCData(oldp+13221,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
    bufp->fullIData(oldp+13222,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
    bufp->fullBit(oldp+13223,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
    bufp->fullBit(oldp+13224,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
    bufp->fullBit(oldp+13225,(((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                   >> 2U)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                 >> 2U)))));
    bufp->fullIData(oldp+13226,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0]),32);
    bufp->fullIData(oldp+13227,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1]),32);
    bufp->fullIData(oldp+13228,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2]),32);
    bufp->fullIData(oldp+13229,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3]),32);
    bufp->fullIData(oldp+13230,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4]),32);
    bufp->fullBit(oldp+13231,(((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready)) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wlast))));
    bufp->fullBit(oldp+13232,(((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rready)) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast))));
    bufp->fullBit(oldp+13233,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)))));
    bufp->fullBit(oldp+13234,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
    bufp->fullBit(oldp+13235,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                      >> 3U) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))))));
    bufp->fullBit(oldp+13236,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)))));
    bufp->fullBit(oldp+13237,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
    bufp->fullBit(oldp+13238,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                  | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))))));
    bufp->fullBit(oldp+13239,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid))));
    bufp->fullBit(oldp+13240,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8000U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13241,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8010U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13242,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8020U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13243,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8030U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13244,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8040U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13245,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8050U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13246,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8060U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13247,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8070U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13248,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0xff00U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13249,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0xff30U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13250,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0xff40U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13251,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0xf020U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13252,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0xf030U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13253,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0xf040U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13254,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0xf050U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+13255,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                   >> 6U)) & (~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
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
    bufp->fullWData(oldp+13256,(__Vtemp_h0ff96379__0),109);
    bufp->fullBit(oldp+13260,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req)) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive))));
    bufp->fullIData(oldp+13261,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op) 
                                  & ((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                            >> 2U)) 
                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num)))
                                  ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                        ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                           >> 0x18U)
                                        : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                           >> 0x18U)) 
                                      << 0x18U) | (
                                                   (0xff0000U 
                                                    & (((4U 
                                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                         ? 
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                         >> 0x10U)
                                                         : 
                                                        (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                         >> 0x10U)) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (((2U 
                                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                            ? 
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                            >> 8U)
                                                            : 
                                                           (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                            >> 8U)) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & ((1U 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata
                                                             : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))
                                  : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)),32);
    bufp->fullIData(oldp+13262,(((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                    ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                       >> 0x18U) : 
                                   (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                    >> 0x18U)) << 0x18U) 
                                 | ((0xff0000U & ((
                                                   (4U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                    >> 0x10U)) 
                                                  << 0x10U)) 
                                    | ((0xff00U & (
                                                   ((2U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                     ? 
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                     >> 8U)
                                                     : 
                                                    (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                     >> 8U)) 
                                                   << 8U)) 
                                       | (0xffU & (
                                                   (1U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata
                                                    : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))),32);
    bufp->fullBit(oldp+13263,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) 
                               & (1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))));
    bufp->fullIData(oldp+13264,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken)
                                  ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target
                                  : ((IData)(4U) + 
                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U]))),32);
    if (((((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                     >> 5U)) == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
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
        __Vtemp_h544f9cfd__0[2U] = (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
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
    bufp->fullIData(oldp+13265,(__Vtemp_h544f9cfd__0[1U]),32);
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
    bufp->fullIData(oldp+13266,(__Vtemp_h2a6e56df__0[1U]),32);
    if (((((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                     >> 5U)) == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
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
        __Vtemp_h8dbd108e__0[2U] = (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
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
    bufp->fullBit(oldp+13267,((1U & __Vtemp_h8dbd108e__0[2U])));
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
    bufp->fullBit(oldp+13268,((1U & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                                        == (0x1fU & (IData)(
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
    bufp->fullIData(oldp+13269,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable)
                                  ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff
                                  : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata)),32);
    bufp->fullBit(oldp+13270,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                      >> 6U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid))))));
    bufp->fullIData(oldp+13271,(((((((- (IData)((1U 
                                                 & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                     >> 0xbU) 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                       >> 0xeU))))) 
                                     & (((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded) 
                                                        >> 7U)))) 
                                         << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded))) 
                                    | ((- (IData)((1U 
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
    bufp->fullBit(oldp+13272,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))));
    bufp->fullBit(oldp+13273,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))));
    bufp->fullBit(oldp+13274,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))));
    bufp->fullBit(oldp+13275,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))));
    bufp->fullBit(oldp+13276,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
    bufp->fullBit(oldp+13277,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))))));
    bufp->fullBit(oldp+13278,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)))));
    bufp->fullBit(oldp+13279,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
    bufp->fullBit(oldp+13280,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                  | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))));
    bufp->fullBit(oldp+13281,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid))));
    bufp->fullBit(oldp+13282,(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid));
    bufp->fullBit(oldp+13283,(vlSelf->simu_top__DOT__soc__DOT__cpu_arready));
    bufp->fullIData(oldp+13284,(vlSelf->simu_top__DOT__soc__DOT__m0_rdata),32);
    bufp->fullBit(oldp+13285,(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid));
    bufp->fullBit(oldp+13286,(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    bufp->fullBit(oldp+13287,(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid));
    bufp->fullBit(oldp+13288,(vlSelf->simu_top__DOT__soc__DOT__m0_bready));
    bufp->fullBit(oldp+13289,(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    bufp->fullBit(oldp+13290,(vlSelf->simu_top__DOT__soc__DOT__m0_rready));
    bufp->fullBit(oldp+13291,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
    bufp->fullBit(oldp+13292,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
    bufp->fullBit(oldp+13293,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
    bufp->fullBit(oldp+13294,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
    bufp->fullBit(oldp+13295,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
    bufp->fullBit(oldp+13296,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 3U))));
    bufp->fullBit(oldp+13297,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 3U))));
    bufp->fullBit(oldp+13298,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 3U))));
    bufp->fullBit(oldp+13299,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 3U))));
    bufp->fullBit(oldp+13300,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 3U))));
    bufp->fullBit(oldp+13301,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 2U))));
    bufp->fullBit(oldp+13302,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 2U))));
    bufp->fullBit(oldp+13303,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 2U))));
    bufp->fullBit(oldp+13304,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 2U))));
    bufp->fullBit(oldp+13305,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 2U))));
    bufp->fullBit(oldp+13306,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
    bufp->fullCData(oldp+13307,(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
    bufp->fullBit(oldp+13308,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
    bufp->fullCData(oldp+13309,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt),4);
    bufp->fullBit(oldp+13310,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
    bufp->fullBit(oldp+13311,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 1U))));
    bufp->fullBit(oldp+13312,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 1U))));
    bufp->fullBit(oldp+13313,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 1U))));
    bufp->fullBit(oldp+13314,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 1U))));
    bufp->fullBit(oldp+13315,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 1U))));
    bufp->fullBit(oldp+13316,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 4U))));
    bufp->fullBit(oldp+13317,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 4U))));
    bufp->fullBit(oldp+13318,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 4U))));
    bufp->fullBit(oldp+13319,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 4U))));
    bufp->fullBit(oldp+13320,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 4U))));
    bufp->fullCData(oldp+13321,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
    bufp->fullCData(oldp+13322,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
    bufp->fullCData(oldp+13323,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
    bufp->fullCData(oldp+13324,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
    bufp->fullCData(oldp+13325,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
    bufp->fullBit(oldp+13326,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
    bufp->fullBit(oldp+13327,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
    bufp->fullBit(oldp+13328,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
    bufp->fullBit(oldp+13329,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
    bufp->fullBit(oldp+13330,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
    bufp->fullBit(oldp+13331,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
    bufp->fullBit(oldp+13332,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
    bufp->fullBit(oldp+13333,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
    bufp->fullBit(oldp+13334,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
    bufp->fullBit(oldp+13335,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
    bufp->fullBit(oldp+13336,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
    bufp->fullBit(oldp+13337,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
    bufp->fullBit(oldp+13338,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
    bufp->fullBit(oldp+13339,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
    bufp->fullBit(oldp+13340,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
    bufp->fullBit(oldp+13341,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
    bufp->fullBit(oldp+13342,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
    bufp->fullCData(oldp+13343,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
    bufp->fullSData(oldp+13344,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
    bufp->fullBit(oldp+13345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin));
    bufp->fullBit(oldp+13346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin));
    bufp->fullBit(oldp+13347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin));
    bufp->fullBit(oldp+13348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid));
    bufp->fullBit(oldp+13349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid));
    bufp->fullBit(oldp+13350,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_valid));
    bufp->fullBit(oldp+13351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid));
    bufp->fullBit(oldp+13352,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en));
    bufp->fullBit(oldp+13353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en));
    bufp->fullIData(oldp+13354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc),32);
    bufp->fullBit(oldp+13355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en));
    bufp->fullBit(oldp+13356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry));
    bufp->fullBit(oldp+13357,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en));
    bufp->fullBit(oldp+13358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error));
    bufp->fullBit(oldp+13359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error));
    bufp->fullBit(oldp+13360,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken));
    bufp->fullIData(oldp+13361,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target),32);
    bufp->fullBit(oldp+13362,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch));
    bufp->fullWData(oldp+13363,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus),350);
    bufp->fullWData(oldp+13374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus),425);
    bufp->fullWData(oldp+13388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus),460);
    bufp->fullQData(oldp+13403,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__br_bus),33);
    bufp->fullQData(oldp+13405,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus),39);
    bufp->fullBit(oldp+13407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid));
    bufp->fullCData(oldp+13408,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 4U))),8);
    bufp->fullCData(oldp+13409,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc)),4);
    bufp->fullBit(oldp+13410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok));
    bufp->fullBit(oldp+13411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_data_ok));
    bufp->fullIData(oldp+13412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata),32);
    bufp->fullBit(oldp+13413,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid));
    bufp->fullBit(oldp+13414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_valid));
    bufp->fullBit(oldp+13415,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_data_ok));
    bufp->fullIData(oldp+13416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rdata),32);
    bufp->fullBit(oldp+13417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive));
    bufp->fullBit(oldp+13418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid));
    bufp->fullBit(oldp+13419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__preld_en));
    bufp->fullIData(oldp+13420,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                 >> 0xdU)),19);
    bufp->fullBit(oldp+13421,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                     >> 0xcU))));
    bufp->fullIData(oldp+13422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina),32);
    bufp->fullCData(oldp+13423,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea),4);
    bufp->fullCData(oldp+13424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea),4);
    bufp->fullCData(oldp+13425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea),4);
    bufp->fullCData(oldp+13426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea),4);
    bufp->fullCData(oldp+13427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea),4);
    bufp->fullCData(oldp+13428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea),4);
    bufp->fullCData(oldp+13429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea),4);
    bufp->fullCData(oldp+13430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea),4);
    bufp->fullBit(oldp+13431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea));
    bufp->fullBit(oldp+13432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea));
    bufp->fullBit(oldp+13433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en));
    bufp->fullBit(oldp+13434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en));
    bufp->fullBit(oldp+13435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en));
    bufp->fullBit(oldp+13436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid));
    bufp->fullBit(oldp+13437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_ready_go));
    bufp->fullBit(oldp+13438,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en));
    bufp->fullCData(oldp+13439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra),8);
    bufp->fullIData(oldp+13440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina),32);
    bufp->fullCData(oldp+13441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea),4);
    bufp->fullCData(oldp+13442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea),4);
    bufp->fullCData(oldp+13443,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea),4);
    bufp->fullCData(oldp+13444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea),4);
    bufp->fullCData(oldp+13445,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea),4);
    bufp->fullCData(oldp+13446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea),4);
    bufp->fullCData(oldp+13447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea),4);
    bufp->fullCData(oldp+13448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea),4);
    bufp->fullCData(oldp+13449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_addra),8);
    bufp->fullBit(oldp+13450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_wea));
    bufp->fullBit(oldp+13451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv_wea));
    bufp->fullBit(oldp+13452,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_wea_en));
    bufp->fullBit(oldp+13453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en));
    bufp->fullBit(oldp+13454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en));
    bufp->fullCData(oldp+13455,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset),4);
    bufp->fullCData(oldp+13456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index),8);
    bufp->fullBit(oldp+13457,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__req_or_inst_valid));
    bufp->fullBit(oldp+13458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go));
    bufp->fullBit(oldp+13459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush));
    bufp->fullBit(oldp+13460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd));
    bufp->fullBit(oldp+13461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign));
    bufp->fullBit(oldp+13462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign));
    bufp->fullBit(oldp+13463,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                             >> 0x25U)))));
    bufp->fullCData(oldp+13464,((0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                  >> 0x20U)))),5);
    bufp->fullIData(oldp+13465,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)),32);
    bufp->fullBit(oldp+13466,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                             >> 0x26U)))));
    bufp->fullIData(oldp+13467,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es),32);
    bufp->fullIData(oldp+13468,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es),32);
    bufp->fullBit(oldp+13469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go));
    bufp->fullBit(oldp+13470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin));
    bufp->fullBit(oldp+13471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__to_fs_valid));
    bufp->fullBit(oldp+13472,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go));
    bufp->fullIData(oldp+13473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc),32);
    bufp->fullBit(oldp+13474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef));
    bufp->fullBit(oldp+13475,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__br_bus 
                                             >> 0x20U)))));
    bufp->fullIData(oldp+13476,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__br_bus)),32);
    bufp->fullBit(oldp+13477,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_delay));
    bufp->fullBit(oldp+13478,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_go_dirt));
    bufp->fullBit(oldp+13479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go));
    bufp->fullIData(oldp+13480,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result),32);
    bufp->fullIData(oldp+13481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata),32);
    bufp->fullCData(oldp+13482,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded),8);
    bufp->fullSData(oldp+13483,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded),16);
    bufp->fullBit(oldp+13484,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
    bufp->fullBit(oldp+13485,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
    bufp->fullBit(oldp+13486,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
    bufp->fullBit(oldp+13487,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
    bufp->fullBit(oldp+13488,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en));
    bufp->fullBit(oldp+13489,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
    bufp->fullBit(oldp+13490,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
    bufp->fullBit(oldp+13491,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
    bufp->fullBit(oldp+13492,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
    bufp->fullBit(oldp+13493,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
    bufp->fullBit(oldp+13494,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
    bufp->fullBit(oldp+13495,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
    bufp->fullBit(oldp+13496,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
    bufp->fullBit(oldp+13497,(vlSelf->aclk));
    bufp->fullBit(oldp+13498,(vlSelf->aresetn));
    bufp->fullBit(oldp+13499,(vlSelf->enable_delay));
    bufp->fullIData(oldp+13500,(vlSelf->random_seed),23);
    bufp->fullBit(oldp+13501,(vlSelf->ram_ren));
    bufp->fullIData(oldp+13502,(vlSelf->ram_raddr),32);
    bufp->fullIData(oldp+13503,(vlSelf->ram_rdata),32);
    bufp->fullCData(oldp+13504,(vlSelf->ram_wen),4);
    bufp->fullIData(oldp+13505,(vlSelf->ram_waddr),32);
    bufp->fullIData(oldp+13506,(vlSelf->ram_wdata),32);
    bufp->fullIData(oldp+13507,(vlSelf->debug0_wb_pc),32);
    bufp->fullBit(oldp+13508,(vlSelf->debug0_wb_rf_wen));
    bufp->fullCData(oldp+13509,(vlSelf->debug0_wb_rf_wnum),5);
    bufp->fullIData(oldp+13510,(vlSelf->debug0_wb_rf_wdata),32);
    bufp->fullIData(oldp+13511,(vlSelf->num_data),32);
    bufp->fullBit(oldp+13512,(vlSelf->open_trace));
    bufp->fullBit(oldp+13513,(vlSelf->num_monitor));
    bufp->fullCData(oldp+13514,(vlSelf->confreg_uart_data),8);
    bufp->fullBit(oldp+13515,(vlSelf->write_uart_valid));
    bufp->fullWData(oldp+13516,(vlSelf->uart_ctr_bus),128);
    bufp->fullBit(oldp+13520,(vlSelf->uart_rx));
    bufp->fullBit(oldp+13521,(vlSelf->uart_tx));
    bufp->fullSData(oldp+13522,(vlSelf->led),16);
    bufp->fullCData(oldp+13523,(vlSelf->led_rg0),2);
    bufp->fullCData(oldp+13524,(vlSelf->led_rg1),2);
    bufp->fullCData(oldp+13525,(vlSelf->num_csn),8);
    bufp->fullCData(oldp+13526,(vlSelf->num_a_g),7);
    bufp->fullCData(oldp+13527,(vlSelf->btn_key_col),4);
    bufp->fullCData(oldp+13528,(vlSelf->btn_key_row),4);
    bufp->fullCData(oldp+13529,(vlSelf->btn_step),2);
    bufp->fullCData(oldp+13530,(vlSelf->__SYM__switch),8);
    bufp->fullBit(oldp+13531,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                  | (~ (IData)(vlSelf->enable_delay))))));
    bufp->fullBit(oldp+13532,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                  | (~ (IData)(vlSelf->enable_delay))))));
    bufp->fullBit(oldp+13533,((1U & (~ (IData)(vlSelf->aresetn)))));
    bufp->fullBit(oldp+13534,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                      ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                         | (IData)(vlSelf->uart_tx))
                                      : (IData)(vlSelf->uart_rx)))));
    bufp->fullBit(oldp+13535,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
    bufp->fullIData(oldp+13536,(vlSelf->__SYM__switch),32);
    bufp->fullIData(oldp+13537,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
                                             << 8U)) 
                                 | ((0x2000U & ((IData)(vlSelf->__SYM__switch) 
                                                << 7U)) 
                                    | ((0x800U & ((IData)(vlSelf->__SYM__switch) 
                                                  << 6U)) 
                                       | ((0x200U & 
                                           ((IData)(vlSelf->__SYM__switch) 
                                            << 5U)) 
                                          | ((0x80U 
                                              & ((IData)(vlSelf->__SYM__switch) 
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
    bufp->fullBit(oldp+13538,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                               & (~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))))));
    bufp->fullBit(oldp+13539,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                               & (0xfU == (IData)(vlSelf->btn_key_row)))));
    bufp->fullBit(oldp+13540,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                               & (~ (IData)(vlSelf->btn_step)))));
    bufp->fullBit(oldp+13541,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                     & (IData)(vlSelf->btn_step)))));
    bufp->fullBit(oldp+13542,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                               & (~ ((IData)(vlSelf->btn_step) 
                                     >> 1U)))));
    bufp->fullBit(oldp+13543,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                               & ((IData)(vlSelf->btn_step) 
                                  >> 1U))));
    bufp->fullBit(oldp+13544,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
    bufp->fullIData(oldp+13545,(0x20U),32);
    bufp->fullCData(oldp+13546,(1U),4);
    bufp->fullCData(oldp+13547,(1U),2);
    bufp->fullCData(oldp+13548,(0U),2);
    bufp->fullCData(oldp+13549,(0U),4);
    bufp->fullCData(oldp+13550,(0U),3);
    bufp->fullBit(oldp+13551,(0U));
    bufp->fullBit(oldp+13552,(vlSelf->simu_top__DOT__soc__DOT__UART_RI));
    bufp->fullIData(oldp+13553,(0x14U),32);
    bufp->fullIData(oldp+13554,(8U),32);
    bufp->fullIData(oldp+13555,(0x40U),32);
    bufp->fullIData(oldp+13556,(0x80U),32);
    bufp->fullIData(oldp+13557,(0x10U),32);
    bufp->fullBit(oldp+13558,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma));
    bufp->fullBit(oldp+13559,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma));
    bufp->fullBit(oldp+13560,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma));
    bufp->fullIData(oldp+13561,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma),20);
    bufp->fullIData(oldp+13562,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma),32);
    bufp->fullBit(oldp+13563,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma));
    bufp->fullBit(oldp+13564,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i));
    bufp->fullCData(oldp+13565,(0U),8);
    bufp->fullBit(oldp+13566,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma));
    bufp->fullBit(oldp+13567,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma));
    bufp->fullCData(oldp+13568,(2U),4);
    bufp->fullCData(oldp+13569,(8U),4);
    bufp->fullCData(oldp+13570,(0U),5);
    bufp->fullCData(oldp+13571,(1U),5);
    bufp->fullCData(oldp+13572,(2U),5);
    bufp->fullCData(oldp+13573,(0xaU),5);
    bufp->fullCData(oldp+13574,(3U),5);
    bufp->fullCData(oldp+13575,(4U),5);
    bufp->fullCData(oldp+13576,(6U),5);
    bufp->fullCData(oldp+13577,(7U),5);
    bufp->fullCData(oldp+13578,(0x10U),5);
    bufp->fullCData(oldp+13579,(0x11U),5);
    bufp->fullCData(oldp+13580,(0x12U),5);
    bufp->fullCData(oldp+13581,(0x13U),5);
    bufp->fullCData(oldp+13582,(0x14U),5);
    bufp->fullCData(oldp+13583,(0x15U),5);
    bufp->fullCData(oldp+13584,(0x16U),5);
    bufp->fullCData(oldp+13585,(0x17U),5);
    bufp->fullCData(oldp+13586,(0x18U),5);
    bufp->fullCData(oldp+13587,(0x19U),5);
    bufp->fullCData(oldp+13588,(0x1aU),5);
    bufp->fullCData(oldp+13589,(0x1bU),5);
    bufp->fullCData(oldp+13590,(((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                 << 1U)),4);
    bufp->fullBit(oldp+13591,(0U));
    bufp->fullBit(oldp+13592,(0U));
    bufp->fullBit(oldp+13593,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI))));
    bufp->fullBit(oldp+13594,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                     << 1U))));
    bufp->fullBit(oldp+13595,(1U));
    bufp->fullBit(oldp+13596,(1U));
    bufp->fullBit(oldp+13597,((1U & (~ (0x7fffffffU 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI))))));
    bufp->fullBit(oldp+13598,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                        << 1U)))));
    bufp->fullBit(oldp+13599,(1U));
    bufp->fullIData(oldp+13600,(1U),32);
    bufp->fullBit(oldp+13601,(1U));
    bufp->fullCData(oldp+13602,(3U),4);
    bufp->fullCData(oldp+13603,(4U),4);
    bufp->fullCData(oldp+13604,(5U),4);
    bufp->fullCData(oldp+13605,(6U),4);
    bufp->fullCData(oldp+13606,(7U),4);
    bufp->fullCData(oldp+13607,(9U),4);
    bufp->fullCData(oldp+13608,(0xaU),4);
    bufp->fullIData(oldp+13609,(0xbU),32);
    bufp->fullIData(oldp+13610,(4U),32);
    bufp->fullIData(oldp+13611,(5U),32);
    bufp->fullCData(oldp+13612,(1U),3);
    bufp->fullCData(oldp+13613,(2U),3);
    bufp->fullCData(oldp+13614,(3U),3);
    bufp->fullCData(oldp+13615,(4U),3);
    bufp->fullCData(oldp+13616,(5U),3);
    bufp->fullCData(oldp+13617,(6U),3);
    bufp->fullBit(oldp+13618,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready));
    bufp->fullBit(oldp+13619,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready));
    bufp->fullCData(oldp+13620,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid),4);
    bufp->fullCData(oldp+13621,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp),2);
    bufp->fullBit(oldp+13622,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid));
    bufp->fullBit(oldp+13623,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready));
    bufp->fullCData(oldp+13624,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid),4);
    bufp->fullIData(oldp+13625,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata),32);
    bufp->fullCData(oldp+13626,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp),2);
    bufp->fullBit(oldp+13627,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast));
    bufp->fullBit(oldp+13628,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid));
    bufp->fullBit(oldp+13629,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready));
    bufp->fullBit(oldp+13630,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready));
    bufp->fullCData(oldp+13631,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid),4);
    bufp->fullCData(oldp+13632,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp),2);
    bufp->fullBit(oldp+13633,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid));
    bufp->fullBit(oldp+13634,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready));
    bufp->fullCData(oldp+13635,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid),4);
    bufp->fullIData(oldp+13636,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata),32);
    bufp->fullCData(oldp+13637,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp),2);
    bufp->fullBit(oldp+13638,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast));
    bufp->fullBit(oldp+13639,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid));
    bufp->fullCData(oldp+13640,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[0]),5);
    bufp->fullCData(oldp+13641,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[1]),5);
    bufp->fullCData(oldp+13642,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[2]),5);
    bufp->fullCData(oldp+13643,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[3]),5);
    bufp->fullCData(oldp+13644,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[4]),5);
    bufp->fullCData(oldp+13645,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0),3);
    bufp->fullCData(oldp+13646,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1),3);
    bufp->fullIData(oldp+13647,(5U),32);
    bufp->fullIData(oldp+13648,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int),32);
    bufp->fullIData(oldp+13649,(3U),32);
    bufp->fullIData(oldp+13650,(2U),32);
    bufp->fullBit(oldp+13651,(0U));
    bufp->fullBit(oldp+13652,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache_unbusy));
    bufp->fullIData(oldp+13653,(0U),32);
    bufp->fullCData(oldp+13654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_type),3);
    bufp->fullIData(oldp+13655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_addr),32);
    bufp->fullCData(oldp+13656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_wstrb),4);
    bufp->fullWData(oldp+13657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_data),128);
    bufp->fullQData(oldp+13661,(0ULL),64);
    bufp->fullBit(oldp+13663,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__preld_st_en));
    bufp->fullBit(oldp+13664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__preld_ld_en));
    bufp->fullBit(oldp+13665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__preld_ld_st_en));
    bufp->fullCData(oldp+13666,(8U),5);
    bufp->fullIData(oldp+13667,(0x100U),32);
    bufp->fullIData(oldp+13668,(0x15U),32);
    bufp->fullBit(oldp+13669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_jirl));
    bufp->fullSData(oldp+13670,(0U),14);
    bufp->fullSData(oldp+13671,(1U),14);
    bufp->fullSData(oldp+13672,(4U),14);
    bufp->fullSData(oldp+13673,(5U),14);
    bufp->fullSData(oldp+13674,(6U),14);
    bufp->fullSData(oldp+13675,(7U),14);
    bufp->fullSData(oldp+13676,(0xcU),14);
    bufp->fullSData(oldp+13677,(0x10U),14);
    bufp->fullSData(oldp+13678,(0x11U),14);
    bufp->fullSData(oldp+13679,(0x12U),14);
    bufp->fullSData(oldp+13680,(0x13U),14);
    bufp->fullSData(oldp+13681,(0x18U),14);
    bufp->fullSData(oldp+13682,(0x19U),14);
    bufp->fullSData(oldp+13683,(0x1aU),14);
    bufp->fullSData(oldp+13684,(0x1bU),14);
    bufp->fullSData(oldp+13685,(0x20U),14);
    bufp->fullSData(oldp+13686,(0x30U),14);
    bufp->fullSData(oldp+13687,(0x31U),14);
    bufp->fullSData(oldp+13688,(0x32U),14);
    bufp->fullSData(oldp+13689,(0x33U),14);
    bufp->fullSData(oldp+13690,(0x40U),14);
    bufp->fullSData(oldp+13691,(0x41U),14);
    bufp->fullSData(oldp+13692,(0x42U),14);
    bufp->fullSData(oldp+13693,(0x43U),14);
    bufp->fullSData(oldp+13694,(0x44U),14);
    bufp->fullSData(oldp+13695,(0x60U),14);
    bufp->fullSData(oldp+13696,(0x88U),14);
    bufp->fullSData(oldp+13697,(0x180U),14);
    bufp->fullSData(oldp+13698,(0x181U),14);
    bufp->fullSData(oldp+13699,(0x100U),14);
    bufp->fullSData(oldp+13700,(0x101U),14);
    bufp->fullSData(oldp+13701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0280__029),14);
}
