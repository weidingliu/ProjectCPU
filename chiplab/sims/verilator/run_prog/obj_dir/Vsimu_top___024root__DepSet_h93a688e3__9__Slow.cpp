// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top___024root.h"

VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__11(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___settle__TOP__11\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hb1f3ff65__0;
    VlWide<5>/*159:0*/ __Vtemp_h4429a3b9__0;
    VlWide<5>/*159:0*/ __Vtemp_hb93f4b74__0;
    VlWide<14>/*447:0*/ __Vtemp_h51a27a8d__0;
    VlWide<3>/*95:0*/ __Vtemp_h9c16949e__0;
    VlWide<3>/*95:0*/ __Vtemp_h67f969f9__0;
    VlWide<3>/*95:0*/ __Vtemp_h82283d3f__0;
    VlWide<3>/*95:0*/ __Vtemp_h4f73c853__0;
    VlWide<4>/*127:0*/ __Vtemp_h3302bf60__0;
    VlWide<4>/*127:0*/ __Vtemp_hc7ee747e__0;
    VlWide<6>/*191:0*/ __Vtemp_h63cb1d5a__0;
    VlWide<3>/*95:0*/ __Vtemp_hd59e4f36__0;
    VlWide<3>/*95:0*/ __Vtemp_hbf22d13f__0;
    VlWide<5>/*159:0*/ __Vtemp_hc645c105__0;
    VlWide<5>/*159:0*/ __Vtemp_hcc21ba21__0;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)) 
                       & (0x20U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                      | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)) 
                         & (0x40U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                        & (0U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                       & (0x60U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x2fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (0x1000U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                           << 2U)))) 
                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & (((IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                               >> 9U))) 
                      | (((IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))) 
                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                >> 0xaU))) << 1U)) 
                     | (((IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))) 
                         & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                               >> 0xaU))) << 1U)) | 
                    (0x7ffffeU & (((IData)((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))) 
                                   << 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                             >> 9U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig 
        = (1U & (((((IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                       >> 0xbU)) | ((IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig))) 
                                    & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                          >> 0xbU)))) 
                  | ((IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                           >> 0xbU)))) | ((IData)((3U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig))) 
                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                             >> 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x1fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (0x2000U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                           << 2U)))) 
                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
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
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))))))) 
              << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))))))) 
              << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3fdfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x20U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   << 4U)) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      << 5U))) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   << 4U) 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x37ffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x800U & ((0xfffff800U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                         << 2U) & ((IData)(
                                                           (0U 
                                                            != 
                                                            (0x180U 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                                                   << 0xbU))) 
                        | ((IData)((0x180U == (0x180U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                           << 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3fbfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x40U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                         & (IData)((0U != (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                        | (IData)((0x18U == (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                       << 6U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((IData)((0x80U == (0x380U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                      | (IData)((0x100U == (0x380U 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                     | (IData)((0x200U == (0x380U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                    | (IData)((0x380U == (0x380U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((IData)((1U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                     | (IData)((4U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData) 
                        & (8U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData) 
                          & (0x10U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                         & (0U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                        & (0x18U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3bffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x400U & ((0xfffffc00U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                         << 7U) & ((IData)(
                                                           (0U 
                                                            != 
                                                            (6U 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)))) 
                                                   << 0xaU))) 
                        | ((IData)((6U == (6U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)))) 
                           << 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3dffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x200U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                          & (IData)((0U != (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                         | (IData)((0x60U == (0x60U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                        << 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & (((((IData)((2U == (0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)))) 
                       | (IData)((4U == (0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))))) 
                      | (IData)((8U == (0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))))) 
                     | (IData)((0xeU == (0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
                       & (0x20U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                      | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
                         & (0x40U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                        & (0U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                       & (0x60U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x2fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x1000U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                           << 2U)))) 
                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & (((IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                               >> 9U))) 
                      | (((IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))) 
                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                >> 0xaU))) << 1U)) 
                     | (((IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))) 
                         & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                               >> 0xaU))) << 1U)) | 
                    (0x7ffffeU & (((IData)((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))) 
                                   << 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                             >> 9U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x1fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x2000U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                           << 2U)))) 
                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig 
        = (1U & (((((IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                       >> 0xbU)) | ((IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig))) 
                                    & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                          >> 0xbU)))) 
                  | ((IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                           >> 0xbU)))) | ((IData)((3U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig))) 
                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                             >> 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
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
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))))))) 
              << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))))))) 
              << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mul_result 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
            + ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
                << 1U) | (QData)((IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                >> 0xeU)))))) 
           + (QData)((IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result 
        = (((((((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                  >> 6U)))) & (((((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                   >> 0xbU) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                     >> 0xeU))))) 
                                                   & (((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded) 
                                                                      >> 7U)))) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded))) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                     >> 0xbU) 
                                                                    & (~ 
                                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                        >> 0xeU)))))) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded))) 
                                                 | ((- (IData)(
                                                               (1U 
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
                                                | ((- (IData)(
                                                              (1U 
                                                               & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                   >> 0xcU) 
                                                                  & (~ 
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                      >> 0xeU)))))) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded))) 
                                               | ((- (IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                                >> 0xbU)))))))) 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata))) 
               | ((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                    >> 7U)))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mul_result))) 
              | ((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                   >> 8U)))) & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mul_result 
                                                        >> 0x20U)))) 
             | ((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                  >> 9U)))) & (IData)(
                                                      (0x1ffffffffULL 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                                           ? 
                                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31) 
                                                            == 
                                                            (1U 
                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete)
                                                                 ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer)
                                                                 : 
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                                 >> 0x1fU))))
                                                            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS
                                                            : 
                                                           (~ 
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS 
                                                             - 1ULL)))
                                                           : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS))))) 
            | ((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                 >> 0xaU)))) & (IData)(
                                                       (0x1ffffffffULL 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                                            ? 
                                                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31)
                                                             ? 
                                                            (~ 
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR 
                                                              - 1ULL))
                                                             : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR)
                                                            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR))))) 
           | ((- (IData)((1U & ((~ (IData)((0U != (0xfU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                      >> 7U))))) 
                                & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                      >> 6U)))))) & 
              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U]));
    __Vtemp_hb1f3ff65__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                             >> 0x16U)))) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                >> 0x13U)))) 
                                            << 0x2dU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                   >> 0x12U)))) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  (((0x10U 
                                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                                                                   & (~ 
                                                                      (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
                                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop)) 
                                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld)))))) 
                                                  << 0x2bU) 
                                                 | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem)) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        ((0x80000000U 
                                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                             << 0xeU)) 
                                                                         | ((0x40000000U 
                                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xeU)) 
                                                                            | ((0x20000000U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xeU)) 
                                                                               | (0x1fffffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 0x11U)))))))) 
                                                        << 0xaU) 
                                                       | (QData)((IData)(
                                                                         ((0x200U 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                              >> 7U)) 
                                                                          | ((0x100U 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                             | ((0x80U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_index)))))))))))))));
    __Vtemp_hb1f3ff65__0[1U] = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                  << 0x18U) | (0xff8000U 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                  >> 8U))) 
                                | (IData)(((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                 >> 0x16U)))) 
                                             << 0x2eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                    >> 0x13U)))) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                       >> 0x12U)))) 
                                                   << 0x2cU) 
                                                  | (((QData)((IData)(
                                                                      (((0x10U 
                                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                                                                       & (~ 
                                                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
                                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop)) 
                                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld)))))) 
                                                      << 0x2bU) 
                                                     | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem)) 
                                                         << 0x2aU) 
                                                        | (((QData)((IData)(
                                                                            ((0x80000000U 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xeU)) 
                                                                             | ((0x40000000U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xeU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xeU)) 
                                                                                | (0x1fffffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 0x11U)))))))) 
                                                            << 0xaU) 
                                                           | (QData)((IData)(
                                                                             ((0x200U 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                              | ((0x100U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_index)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h4429a3b9__0[2U] = (((IData)((((QData)((IData)(
                                                           ((0x80000000U 
                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                << 0x17U)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil) 
                                                                << 0x1eU) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis) 
                                                                   << 0x1dU) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi) 
                                                                      << 0x1cU) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme) 
                                                                         << 0x1bU) 
                                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
                                                                            << 0x1aU) 
                                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem) 
                                                                               << 0x19U) 
                                                                              | (0x1ffffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                                >> 0xfU)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                              << 0x11U) 
                                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                >> 0xfU)))))) 
                                 << 8U) | ((0x80U & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                             >> 7U)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp) 
                                               << 6U) 
                                              | ((0x20U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]) 
                                                 | (0x1fU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])))));
    __Vtemp_h4429a3b9__0[3U] = (((IData)((((QData)((IData)(
                                                           ((0x80000000U 
                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                << 0x17U)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil) 
                                                                << 0x1eU) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis) 
                                                                   << 0x1dU) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi) 
                                                                      << 0x1cU) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme) 
                                                                         << 0x1bU) 
                                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
                                                                            << 0x1aU) 
                                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem) 
                                                                               << 0x19U) 
                                                                              | (0x1ffffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                                >> 0xfU)))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                              << 0x11U) 
                                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                >> 0xfU)))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((0x80000000U 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                              << 0x17U)) 
                                                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil) 
                                                                              << 0x1eU) 
                                                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem) 
                                                                                << 0x19U) 
                                                                                | (0x1ffffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                                >> 0xfU)))))))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                            << 0x11U) 
                                                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                              >> 0xfU))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_hb93f4b74__0[4U] = ((0x100U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                           >> 1U)) 
                                | ((IData)(((((QData)((IData)(
                                                              ((0x80000000U 
                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                   << 0x17U)) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil) 
                                                                   << 0x1eU) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis) 
                                                                      << 0x1dU) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi) 
                                                                         << 0x1cU) 
                                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme) 
                                                                            << 0x1bU) 
                                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem) 
                                                                                << 0x19U) 
                                                                                | (0x1ffffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                                >> 0xfU)))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                 << 0x11U) 
                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                   >> 0xfU))))) 
                                            >> 0x20U)) 
                                   >> 0x18U));
    __Vtemp_h51a27a8d__0[9U] = (((0x7f8U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                            << 3U)) 
                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[8U] 
                                    >> 0x1dU)) | ((0xf8000000U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                                      << 3U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                                         << 3U)) 
                                                     | (0x3fff800U 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                                           << 3U)))));
    __Vtemp_h51a27a8d__0[0xaU] = (((0x7f8U & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                                              << 4U) 
                                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset))))))) 
                                              << 3U)) 
                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                      >> 0x1dU)) | 
                                  (0xfffff800U & ((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                                                               << 0xcU) 
                                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset))))))) 
                                                  << 3U)));
    __Vtemp_h51a27a8d__0[0xbU] = ((((IData)((((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                                                 << 0xcU) 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                                    << 4U) 
                                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset))))))) 
                                    >> 0x1dU) | (0x7f8U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset)))))) 
                                                             >> 0x20U)) 
                                                    << 3U))) 
                                  | (0xfffff800U & 
                                     ((IData)(((((QData)((IData)(
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                                       << 4U) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset)))))) 
                                               >> 0x20U)) 
                                      << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0U] 
        = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result)) 
                    << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[1U] 
        = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result)) 
                     << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]))) 
                   >> 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[2U] 
        = __Vtemp_h4429a3b9__0[2U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[3U] 
        = __Vtemp_h4429a3b9__0[3U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[4U] 
        = ((0xfffffe00U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                            << 0x12U) | (0x3fe00U & 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                          >> 0xeU)))) 
           | __Vtemp_hb93f4b74__0[4U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[5U] 
        = ((__Vtemp_hb1f3ff65__0[0U] << 0xbU) | (((IData)(
                                                          (0U 
                                                           != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1)) 
                                                  << 0xaU) 
                                                 | ((0x200U 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                        >> 2U)) 
                                                    | (0x1ffU 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                          >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[6U] 
        = ((__Vtemp_hb1f3ff65__0[0U] >> 0x15U) | (__Vtemp_hb1f3ff65__0[1U] 
                                                  << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[7U] 
        = ((__Vtemp_hb1f3ff65__0[1U] >> 0x15U) | ((0x3fff800U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                                      << 3U)) 
                                                  | (0xfc000000U 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                                        << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[8U] 
        = (((0x7f8U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[8U] 
                       << 3U)) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                  >> 0x1dU)) | ((0x3fff800U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[8U] 
                                                    << 3U)) 
                                                | (0xfc000000U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[8U] 
                                                      << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[9U] 
        = __Vtemp_h51a27a8d__0[9U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xaU] 
        = __Vtemp_h51a27a8d__0[0xaU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xbU] 
        = __Vtemp_h51a27a8d__0[0xbU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xcU] 
        = (((0x7f8U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU] 
                       << 3U)) | ((IData)(((((QData)((IData)(
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                                                << 0xcU) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                                   << 4U) 
                                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset)))))) 
                                           >> 0x20U)) 
                                  >> 0x1dU)) | (0xfffff800U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU] 
                                                   << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xdU] 
        = ((0xfffff000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                           << 3U)) | ((0x800U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                                 << 3U)) 
                                      | ((0x7f8U & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                           << 3U)) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU] 
                                            >> 0x1dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xeU] 
        = (0xfffU & ((0xff8U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xdU] 
                                << 3U)) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                           >> 0x1dU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
        = (((QData)((IData)((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                    >> 6U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid)))))) 
            << 0x26U) | (((QData)((IData)((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                             >> 5U) 
                                            & (0U != 
                                               (0x1fU 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid)))) 
                          << 0x25U) | (((QData)((IData)(
                                                        (0x1fU 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result)))));
    if (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
           == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                >> 0x20U)))) & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                        >> 0x25U))) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))) {
        __Vtemp_h9c16949e__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp_h9c16949e__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                            >> 0x20U));
        __Vtemp_h82283d3f__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp_h82283d3f__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                            >> 0x20U));
        __Vtemp_hbf22d13f__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp_hbf22d13f__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                            >> 0x20U));
    } else if (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                  == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x20U)))) 
                 & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                            >> 0x25U))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))) {
        __Vtemp_h9c16949e__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
        __Vtemp_h9c16949e__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                                            >> 0x20U));
        __Vtemp_h82283d3f__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
        __Vtemp_h82283d3f__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                                            >> 0x20U));
        __Vtemp_hbf22d13f__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
        __Vtemp_hbf22d13f__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                                            >> 0x20U));
    } else {
        __Vtemp_h9c16949e__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2;
        __Vtemp_h9c16949e__0[1U] = (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2)));
        __Vtemp_h82283d3f__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2;
        __Vtemp_h82283d3f__0[1U] = (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2)));
        __Vtemp_hbf22d13f__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2;
        __Vtemp_hbf22d13f__0[1U] = (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2)));
    }
    if (((((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                     >> 5U)) == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                  >> 0x20U)))) 
          & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                     >> 0x25U))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))) {
        __Vtemp_h67f969f9__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp_h67f969f9__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                            >> 0x20U));
        __Vtemp_h67f969f9__0[2U] = (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                  >> 0x26U)));
        __Vtemp_h4f73c853__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp_h4f73c853__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                            >> 0x20U));
        __Vtemp_h4f73c853__0[2U] = (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                  >> 0x26U)));
        __Vtemp_hd59e4f36__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp_hd59e4f36__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                            >> 0x20U));
        __Vtemp_hd59e4f36__0[2U] = (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                  >> 0x26U)));
    } else if (((((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                            >> 5U)) == (0x1fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                         >> 0x20U)))) 
                 & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                            >> 0x25U))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))) {
        __Vtemp_h67f969f9__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))));
        __Vtemp_h67f969f9__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))) 
                                            >> 0x20U));
        __Vtemp_h67f969f9__0[2U] = (IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                             >> 0x26U) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)));
        __Vtemp_h4f73c853__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))));
        __Vtemp_h4f73c853__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))) 
                                            >> 0x20U));
        __Vtemp_h4f73c853__0[2U] = (IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                             >> 0x26U) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)));
        __Vtemp_hd59e4f36__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))));
        __Vtemp_hd59e4f36__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))) 
                                            >> 0x20U));
        __Vtemp_hd59e4f36__0[2U] = (IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                             >> 0x26U) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)));
    } else {
        __Vtemp_h67f969f9__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1;
        __Vtemp_h67f969f9__0[1U] = (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)));
        __Vtemp_h67f969f9__0[2U] = (IData)(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)) 
                                            >> 0x20U));
        __Vtemp_h4f73c853__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1;
        __Vtemp_h4f73c853__0[1U] = (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)));
        __Vtemp_h4f73c853__0[2U] = (IData)(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)) 
                                            >> 0x20U));
        __Vtemp_hd59e4f36__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1;
        __Vtemp_hd59e4f36__0[1U] = (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)));
        __Vtemp_hd59e4f36__0[2U] = (IData)(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)) 
                                            >> 0x20U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go 
        = (1U & ((~ (((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                            == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                 >> 0x20U)))) 
                           & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                      >> 0x25U))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                          ? (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                           >> 0x26U)))
                          : (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                                == (0x1fU & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                     >> 0x20U)))) 
                               & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                          >> 0x25U))) 
                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                              ? (IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                          >> 0x26U) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)))
                              : (IData)(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2)) 
                                         >> 0x20U)))) 
                        | __Vtemp_h67f969f9__0[2U]) 
                       | (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                              >> 0x1eU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                           >> 2U)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid)) 
                           | ((IData)((0U != (0x8800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U]))) 
                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))) 
                          | ((IData)((0U != (0x80200U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U]))) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)))) 
                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty))) 
                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es 
        = __Vtemp_h82283d3f__0[0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es 
        = __Vtemp_h4f73c853__0[0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target 
        = (((- (IData)((IData)((0ULL != (0xff00000ULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d))))) 
            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U] 
               + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)) 
           | ((- (IData)((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                        >> 0x13U))))) 
              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es 
                 + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es 
           == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es 
           < vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin)) 
           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                 >> 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign 
        = (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es 
                   >> 0x1fU) & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es 
                                   >> 0x1fU))) | ((~ 
                                                   ((~ 
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es 
                                                      >> 0x1fU)) 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es 
                                                       >> 0x1fU))) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
            & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                  >> 4U))) & ((0ULL != (0x380000ULL 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d)) 
                              | (((((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x16U)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd)) 
                                     | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                 >> 0x17U)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd)))) 
                                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                >> 0x18U)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign))) 
                                   | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x19U)) 
                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign)))) 
                                  | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                              >> 0x1aU)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign))) 
                                 | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                             >> 0x1bU)) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
            & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                  >> 6U))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
               >> 6U)) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                           >> 7U) ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
             & (0xc0U == (0xc0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U]))) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken)) 
           & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                             >> 0xdU)) != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush 
        = (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go)) 
           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                 >> 4U)));
    __Vtemp_h3302bf60__0[0U] = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                 << 0xeU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle) 
                                              << 0xdU) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
                                                    << 0xbU) 
                                                   | ((0x400U 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                          << 5U)) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data) 
                                                           | (0ULL 
                                                              != 
                                                              (0x300000ULL 
                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d))) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld) 
                                                             << 8U) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop) 
                                                                << 7U) 
                                                               | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd) 
                                                                         << 4U) 
                                                                        | (((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill)) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd)) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb)) 
                                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn)) 
                                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar)) 
                                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid)) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch)))))))))))))));
    __Vtemp_hc7ee747e__0[3U] = (((IData)(((0x1400U 
                                           == (0xfffc00U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                                          & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)))) 
                                 << 0x1fU) | ((0xff800000U 
                                               & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w) 
                                                      << 0x19U) 
                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h) 
                                                         << 0x18U) 
                                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b) 
                                                           << 0x17U))))) 
                                              | ((0xffff8000U 
                                                  & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w) 
                                                      << 0x14U) 
                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w) 
                                                         << 0x13U) 
                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                                               << 0x11U) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu) 
                                                                  << 0x10U) 
                                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                                    << 0xfU))))))) 
                                                 | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w)) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)) 
                                                     << 0xeU) 
                                                    | ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                                >> 0x20U)) 
                                                       >> 0x12U)))));
    __Vtemp_h63cb1d5a__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe) 
                                                                 << 8U) 
                                                                | ((0x80U 
                                                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid)) 
                                                                       << 7U)) 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall) 
                                                                          << 5U) 
                                                                         | ((0x1eU 
                                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                                                << 1U)) 
                                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int)))))))) 
                                               << 0x35U) 
                                              | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)))) 
                                                     << 0x33U) 
                                                    | (((QData)((IData)(
                                                                        (0x3fffU 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                            >> 0xaU)))) 
                                                        << 0x25U) 
                                                       | (((QData)((IData)(
                                                                           (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)) 
                                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w)) 
                                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w)) 
                                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)))) 
                                                           << 0x24U) 
                                                          | (((QData)((IData)(
                                                                              ((1U 
                                                                                & (IData)(
                                                                                (((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))) 
                                                                                >> 0x20U) 
                                                                                & (1ULL 
                                                                                | ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                                                                >> 0x20U))) 
                                                                                | (((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))) 
                                                                                >> 0x20U) 
                                                                                & (1ULL 
                                                                                | ((QData)((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                                                >> 0x20U))) 
                                                                                >> 0x20U)))) 
                                                                                | (((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w))) 
                                                                                >> 0x20U) 
                                                                                & (1ULL 
                                                                                | ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)) 
                                                                                >> 0x20U))))))
                                                                                ? 
                                                                               ((((IData)(
                                                                                (0x1ffffffffULL 
                                                                                & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))))) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                                                                | ((IData)(
                                                                                (0x1ffffffffULL 
                                                                                & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))))) 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                                                >> 0x20U)))) 
                                                                                | ((IData)(
                                                                                (0x1ffffffffULL 
                                                                                & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w))))) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))
                                                                                : 
                                                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)
                                                                                 ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)
                                                                                 : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data)))) 
                                                              << 4U) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp) 
                                                                                << 2U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b))))))))))))))));
    __Vtemp_h63cb1d5a__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe) 
                                                                  << 8U) 
                                                                 | ((0x80U 
                                                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid)) 
                                                                        << 7U)) 
                                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall) 
                                                                           << 5U) 
                                                                          | ((0x1eU 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                                                << 1U)) 
                                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int)))))))) 
                                                << 0x35U) 
                                               | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr) 
                                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)))) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(
                                                                         (0x3fffU 
                                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                             >> 0xaU)))) 
                                                         << 0x25U) 
                                                        | (((QData)((IData)(
                                                                            (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)) 
                                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w)) 
                                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w)) 
                                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)))) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(
                                                                               ((1U 
                                                                                & (IData)(
                                                                                (((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))) 
                                                                                >> 0x20U) 
                                                                                & (1ULL 
                                                                                | ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                                                                >> 0x20U))) 
                                                                                | (((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))) 
                                                                                >> 0x20U) 
                                                                                & (1ULL 
                                                                                | ((QData)((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                                                >> 0x20U))) 
                                                                                >> 0x20U)))) 
                                                                                | (((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w))) 
                                                                                >> 0x20U) 
                                                                                & (1ULL 
                                                                                | ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)) 
                                                                                >> 0x20U))))))
                                                                                 ? 
                                                                                ((((IData)(
                                                                                (0x1ffffffffULL 
                                                                                & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))))) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                                                                | ((IData)(
                                                                                (0x1ffffffffULL 
                                                                                & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))))) 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                                                >> 0x20U)))) 
                                                                                | ((IData)(
                                                                                (0x1ffffffffULL 
                                                                                & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w))))) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))
                                                                                 : 
                                                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)
                                                                                 ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)
                                                                                 : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data)))) 
                                                               << 4U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp) 
                                                                                << 2U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hc645c105__0[4U] = ((((((((((((((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h))) 
                                             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w))) 
                                            & (0ULL 
                                               == (0xfd00000ULL 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d))) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall))) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch))) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd))) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr))) 
                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill))) 
                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb))) 
                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop))) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld))) 
                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar))) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar))) 
                                 << 6U) | ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit))) 
                                            << 5U) 
                                           | ((1U & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                             >> 0x15U)))
                                               ? 1U
                                               : (0x1fU 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)
                                                      ? 
                                                     ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                       << 0x1bU) 
                                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                         >> 5U))
                                                      : 
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])))));
    __Vtemp_hcc21ba21__0[4U] = (((IData)((((0ULL != 
                                            (0x280000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i))) 
                                 << 9U) | (((((((((
                                                   (((((((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
                                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)) 
                                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w)) 
                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti)) 
                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui)) 
                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi)) 
                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori)) 
                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi)) 
                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i)) 
                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b)) 
                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld)) 
                                            << 8U) 
                                           | (((IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x280000ULL 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d))) 
                                               << 7U) 
                                              | __Vtemp_hc645c105__0[4U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[1U] 
        = __Vtemp_hbf22d13f__0[1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[2U] 
        = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)) 
                    << 0x20U) | (QData)((IData)(__Vtemp_hd59e4f36__0[1U]))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[3U] 
        = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)) 
                     << 0x20U) | (QData)((IData)(__Vtemp_hd59e4f36__0[1U]))) 
                   >> 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[4U] 
        = ((__Vtemp_h63cb1d5a__0[0U] << 0x1eU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op) 
                                                   << 0x1aU) 
                                                  | ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w) 
                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w)) 
                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w)) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w)) 
                                                      << 0x19U) 
                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op) 
                                                         << 0xbU) 
                                                        | ((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                                                            << 0xaU) 
                                                           | __Vtemp_hcc21ba21__0[4U])))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[5U] 
        = ((__Vtemp_h63cb1d5a__0[0U] >> 2U) | (__Vtemp_h63cb1d5a__0[1U] 
                                               << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[6U] 
        = ((__Vtemp_h63cb1d5a__0[1U] >> 2U) | (__Vtemp_h3302bf60__0[0U] 
                                               << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[7U] 
        = ((__Vtemp_h3302bf60__0[0U] >> 2U) | (0xc0000000U 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  << 0xcU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[8U] 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
             >> 0x14U) | (0x3ffff000U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64) 
                                         << 0xcU))) 
           | (0xc0000000U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64) 
                             << 0xcU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[9U] 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64) 
             >> 0x14U) | (0x3ffff000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                  >> 0x20U)) 
                                         << 0xcU))) 
           | (__Vtemp_hc7ee747e__0[3U] << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[0xaU] 
        = (__Vtemp_hc7ee747e__0[3U] >> 2U);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__br_bus 
        = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush)) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken)
                                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target
                                          : ((IData)(4U) 
                                             + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U])))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill)))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry
            : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry
                : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush)
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era
                    : ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush) 
                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush)) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush))
                        ? ((IData)(4U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])
                        : (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__br_bus 
                                     >> 0x20U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__br_bus)
                            : ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_counter) 
                                 >> 2U) & (0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd))
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc
                                : ((IData)(4U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state)
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_buffer
            : (((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state)) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign)))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_buffer
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset 
            = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index 
            = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                        >> 4U));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset 
            = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index 
            = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                        >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef 
        = (IData)((0U != (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra 
        = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok))) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index)) 
           | ((- (IData)(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                          | (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))))) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_addra 
        = (((- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) 
                           & ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              | (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))))))) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index)) 
           | ((- (IData)((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                           | (8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) 
                          | (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))))) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid 
        = (1U & ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin) 
                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef))) 
                    & (~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req) 
                           & (4U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state))) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state))))) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign)) 
                  | (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__br_bus 
                             >> 0x20U))) & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__req_or_inst_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__to_fs_valid 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go));
}

VL_ATTR_COLD void Vsimu_top___024root___initial__TOP__0(Vsimu_top___024root* vlSelf);

VL_ATTR_COLD void Vsimu_top___024root___eval_initial(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_initial\n"); );
    // Body
    Vsimu_top___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__aclk = vlSelf->aclk;
}

VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__0(Vsimu_top___024root* vlSelf);
VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__1(Vsimu_top___024root* vlSelf);
VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__2(Vsimu_top___024root* vlSelf);
VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__3(Vsimu_top___024root* vlSelf);
VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__4(Vsimu_top___024root* vlSelf);
VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__5(Vsimu_top___024root* vlSelf);
VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__6(Vsimu_top___024root* vlSelf);
VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__7(Vsimu_top___024root* vlSelf);
VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__8(Vsimu_top___024root* vlSelf);
VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__9(Vsimu_top___024root* vlSelf);
VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__10(Vsimu_top___024root* vlSelf);

VL_ATTR_COLD void Vsimu_top___024root___eval_settle(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_settle\n"); );
    // Body
    Vsimu_top___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vsimu_top___024root___settle__TOP__1(vlSelf);
    Vsimu_top___024root___settle__TOP__2(vlSelf);
    Vsimu_top___024root___settle__TOP__3(vlSelf);
    Vsimu_top___024root___settle__TOP__4(vlSelf);
    Vsimu_top___024root___settle__TOP__5(vlSelf);
    Vsimu_top___024root___settle__TOP__6(vlSelf);
    Vsimu_top___024root___settle__TOP__7(vlSelf);
    Vsimu_top___024root___settle__TOP__8(vlSelf);
    Vsimu_top___024root___settle__TOP__9(vlSelf);
    Vsimu_top___024root___settle__TOP__10(vlSelf);
    Vsimu_top___024root___settle__TOP__11(vlSelf);
}

VL_ATTR_COLD void Vsimu_top___024root___final(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___final\n"); );
}

VL_ATTR_COLD void Vsimu_top___024root___ctor_var_reset(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->aclk = VL_RAND_RESET_I(1);
    vlSelf->aresetn = VL_RAND_RESET_I(1);
    vlSelf->enable_delay = VL_RAND_RESET_I(1);
    vlSelf->random_seed = VL_RAND_RESET_I(23);
    vlSelf->ram_ren = VL_RAND_RESET_I(1);
    vlSelf->ram_raddr = VL_RAND_RESET_I(32);
    vlSelf->ram_rdata = VL_RAND_RESET_I(32);
    vlSelf->ram_wen = VL_RAND_RESET_I(4);
    vlSelf->ram_waddr = VL_RAND_RESET_I(32);
    vlSelf->ram_wdata = VL_RAND_RESET_I(32);
    vlSelf->debug0_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->debug0_wb_rf_wen = VL_RAND_RESET_I(1);
    vlSelf->debug0_wb_rf_wnum = VL_RAND_RESET_I(5);
    vlSelf->debug0_wb_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->num_data = VL_RAND_RESET_I(32);
    vlSelf->open_trace = VL_RAND_RESET_I(1);
    vlSelf->num_monitor = VL_RAND_RESET_I(1);
    vlSelf->confreg_uart_data = VL_RAND_RESET_I(8);
    vlSelf->write_uart_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->uart_ctr_bus);
    vlSelf->uart_rx = VL_RAND_RESET_I(1);
    vlSelf->uart_tx = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(16);
    vlSelf->led_rg0 = VL_RAND_RESET_I(2);
    vlSelf->led_rg1 = VL_RAND_RESET_I(2);
    vlSelf->num_csn = VL_RAND_RESET_I(8);
    vlSelf->num_a_g = VL_RAND_RESET_I(7);
    vlSelf->__SYM__switch = VL_RAND_RESET_I(8);
    vlSelf->btn_key_col = VL_RAND_RESET_I(4);
    vlSelf->btn_key_row = VL_RAND_RESET_I(4);
    vlSelf->btn_step = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu_awsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu_wlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_bready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_arid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu_araddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu_arsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_rready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_awready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_bid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__m0_bresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__m0_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_bready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__m0_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__m0_rresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__m0_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_rready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__s0_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_s_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_awready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__UART_RI = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__uart0_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_csr_esubcode = VL_RAND_RESET_I(9);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_csr_ecode = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_bad_va = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_va_error = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mul_result = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbrd_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbidx = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_v = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_mat = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_plv = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_index = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_v = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_mat = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_plv = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacop_op_mode_di = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlb = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlb_vppn = VL_RAND_RESET_I(19);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache_unbusy = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(350, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus);
    VL_RAND_RESET_W(425, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus);
    VL_RAND_RESET_W(460, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus = VL_RAND_RESET_Q(38);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__br_bus = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus = VL_RAND_RESET_Q(39);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus = VL_RAND_RESET_Q(39);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_data_ok = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_type = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_addr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_wstrb = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_uncache_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_op = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_size = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_ok = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_data_ok = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_uncache_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_excp_cancel_req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__preld_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_cnt_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_timer_64 = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_ld_en = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_st_en = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_rstat_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wen = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdest = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_excp_flush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ertn = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_tlbfill_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_rand_index = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap_code = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__instrCnt = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__to_fs_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_num = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__excp = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_delay = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_go_dirt = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_buffer = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_buffer = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(109, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__i26 = VL_RAND_RESET_I(26);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2 = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_jirl = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_ready_go = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(350, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp_ale = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__access_mem = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__icacop_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcacop_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_result = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__exe_result = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__slt_result = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_result = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_d = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__result_r = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__div_signed_buffer = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__x_31_buffer = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__complete_delay = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__Carry = VL_RAND_RESET_I(17);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__fir__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__las__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__las__y = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry = VL_RAND_RESET_I(17);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__p = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0280__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__2__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__4__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__6__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__8__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__10__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__12__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__14__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__16__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__18__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__20__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__22__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__24__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__26__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__28__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__30__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_hda9f4e12__0 = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(425, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_rd_buff = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_buff_enable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(460, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW0_wen = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW1_wen = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ticlr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_brk = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64 = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_valid_wr_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_invalid_wr_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__data_real_rd_size = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__inst_real_rd_size = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ps = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ppn = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ps = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ppn = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__r_g = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_vaddr_buffer = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_vaddr_buffer = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_paddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_index = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_op = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__ret_num_add_one = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_wea = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv_wea = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cache_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_dina = VL_RAND_RESET_I(21);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_wea_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__replace_way = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2_hit_wr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_tag = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__req_or_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__rd_req_buffer = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer = VL_RAND_RESET_I(21);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer = VL_RAND_RESET_I(21);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg);
    VL_RAND_RESET_W(256, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_way = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank3 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank3 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cache_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_idle2lookup = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_lookup2lookup = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_dina = VL_RAND_RESET_I(21);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__preld_st_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__preld_ld_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__preld_ld_st_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer = VL_RAND_RESET_I(21);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer = VL_RAND_RESET_I(21);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[__Vi0] = VL_RAND_RESET_I(30);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_buffer = VL_RAND_RESET_I(30);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_full = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_empty = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_target = VL_RAND_RESET_I(30);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_counter = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_index = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_jirl_flag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__select_one_invalid_entry = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random = VL_RAND_RESET_I(23);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next = VL_RAND_RESET_I(23);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h61abb7ff__1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h02122bf1__1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr = VL_RAND_RESET_I(24);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl = VL_RAND_RESET_I(24);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out = VL_RAND_RESET_I(11);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = VL_RAND_RESET_I(10);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt = VL_RAND_RESET_I(9);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next = VL_RAND_RESET_I(9);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in = VL_RAND_RESET_I(11);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value = VL_RAND_RESET_I(10);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0 = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1 = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1 = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2 = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r = VL_RAND_RESET_I(25);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die = VL_RAND_RESET_Q(38);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM = VL_RAND_RESET_Q(48);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = VL_RAND_RESET_Q(38);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__instrCnt = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r = VL_RAND_RESET_Q(33);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS = VL_RAND_RESET_Q(33);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v0 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v1 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v2 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v3 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v4 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v5 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v6 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v7 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v8 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v9 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v10 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v11 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v12 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v13 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v14 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v15 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v16 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu_bready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 = VL_RAND_RESET_I(19);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 = VL_RAND_RESET_I(20);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 = VL_RAND_RESET_I(20);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v0 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v1 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v2 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v3 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v4 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v5 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v6 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v7 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v8 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v9 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v10 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v11 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v12 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v13 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v14 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v15 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v16 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v17 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v18 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v19 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v20 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v21 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v22 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v23 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v24 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v25 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v26 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v27 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v28 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v29 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v30 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v31 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v32 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v33 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v34 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v35 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v36 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v37 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v38 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v39 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v40 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v41 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v42 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v43 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v44 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v45 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v46 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v47 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v48 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v49 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v50 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v51 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v52 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v53 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v54 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v55 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v56 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v57 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v58 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v59 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v60 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v61 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v62 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v63 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v64 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v65 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v66 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v67 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v68 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v69 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v70 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v71 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v72 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v73 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v74 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v75 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v76 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v77 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v78 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v79 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v80 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v81 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v82 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v83 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v84 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v85 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v86 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v87 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v88 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v89 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v90 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v91 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v92 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v93 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v94 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v95 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v96 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v97 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v98 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v99 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v100 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v101 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v102 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v103 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v104 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v105 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v106 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v107 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v108 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v109 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v110 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v111 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v112 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v113 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v114 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v115 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v116 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v117 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v118 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v119 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v120 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v121 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v122 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v123 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v124 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v125 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v126 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v127 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v128 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v129 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v130 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v131 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v132 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v133 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v134 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v135 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v136 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v137 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v138 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v139 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v140 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v141 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v142 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v143 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v144 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v145 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v146 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v147 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v148 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v149 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v150 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v151 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v152 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v153 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v154 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v155 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v156 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v157 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v158 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v159 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v160 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v161 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v162 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v163 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v164 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v165 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v166 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v167 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v168 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v169 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v170 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v171 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v172 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v173 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v174 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v175 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v176 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v177 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v178 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v179 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v180 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v181 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v182 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v183 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v184 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v185 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v186 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v187 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v188 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v189 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v190 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v191 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v192 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v193 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v194 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v195 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v196 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v197 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v198 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v199 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v200 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v201 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v202 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v203 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v204 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v205 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v206 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v207 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v208 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v209 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v210 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v211 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v212 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v213 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v214 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v215 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v216 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v217 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v218 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v219 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v220 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v221 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v222 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v223 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 = VL_RAND_RESET_I(30);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 = VL_RAND_RESET_I(30);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 = VL_RAND_RESET_I(30);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v0 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v1 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 = VL_RAND_RESET_I(30);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = VL_RAND_RESET_I(14);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = VL_RAND_RESET_Q(38);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = VL_RAND_RESET_I(14);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = VL_RAND_RESET_I(14);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}