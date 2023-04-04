// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top___024root.h"

extern const VlUnpacked<CData/*2:0*/, 32> Vsimu_top__ConstPool__TABLE_hc3b7fa0f_0;
extern const VlUnpacked<IData/*31:0*/, 32> Vsimu_top__ConstPool__TABLE_h1da55f25_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vsimu_top__ConstPool__TABLE_hb8238e9e_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vsimu_top__ConstPool__TABLE_hf182b53e_0;

VL_INLINE_OPT void Vsimu_top___024root___sequent__TOP__7(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___sequent__TOP__7\n"); );
    // Init
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0;
    CData/*4:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*7:0*/ __Vtableidx5;
    CData/*7:0*/ __Vtableidx8;
    VlWide<3>/*95:0*/ __Vtemp_h721ebe7d__0;
    VlWide<3>/*95:0*/ __Vtemp_ha6927b5b__0;
    VlWide<3>/*95:0*/ __Vtemp_h2cb96564__0;
    VlWide<3>/*95:0*/ __Vtemp_h81352072__0;
    VlWide<3>/*95:0*/ __Vtemp_hbbfeb4aa__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d6b89aa__0;
    VlWide<3>/*95:0*/ __Vtemp_h0788125c__0;
    VlWide<3>/*95:0*/ __Vtemp_h3b0b92ad__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a9f0241__0;
    VlWide<3>/*95:0*/ __Vtemp_hf54cffc0__0;
    VlWide<3>/*95:0*/ __Vtemp_h26424a69__0;
    VlWide<3>/*95:0*/ __Vtemp_hd778bfdb__0;
    VlWide<3>/*95:0*/ __Vtemp_h507a58fe__0;
    VlWide<3>/*95:0*/ __Vtemp_h75d86e0f__0;
    VlWide<3>/*95:0*/ __Vtemp_h329954d1__0;
    VlWide<3>/*95:0*/ __Vtemp_h195d1ebb__0;
    VlWide<3>/*95:0*/ __Vtemp_h4fea2519__0;
    VlWide<3>/*95:0*/ __Vtemp_he0293b80__0;
    VlWide<3>/*95:0*/ __Vtemp_h3dc8dfae__0;
    VlWide<3>/*95:0*/ __Vtemp_hf1b89d41__0;
    VlWide<3>/*95:0*/ __Vtemp_he9d2f94d__0;
    VlWide<3>/*95:0*/ __Vtemp_hc418b3b1__0;
    VlWide<3>/*95:0*/ __Vtemp_h274d0f48__0;
    VlWide<3>/*95:0*/ __Vtemp_h8a65369f__0;
    VlWide<3>/*95:0*/ __Vtemp_h3cbbf0c4__0;
    VlWide<3>/*95:0*/ __Vtemp_h178f00c5__0;
    VlWide<3>/*95:0*/ __Vtemp_hf7fe1837__0;
    VlWide<3>/*95:0*/ __Vtemp_h42bb0ef1__0;
    VlWide<3>/*95:0*/ __Vtemp_h1da781e9__0;
    VlWide<3>/*95:0*/ __Vtemp_h41390341__0;
    VlWide<3>/*95:0*/ __Vtemp_haec2593c__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d97be07__0;
    VlWide<3>/*95:0*/ __Vtemp_h09d415bc__0;
    VlWide<3>/*95:0*/ __Vtemp_hc68c2812__0;
    VlWide<3>/*95:0*/ __Vtemp_hc7119b20__0;
    VlWide<3>/*95:0*/ __Vtemp_hfefcb2d8__0;
    VlWide<3>/*95:0*/ __Vtemp_h4a6fa84a__0;
    VlWide<3>/*95:0*/ __Vtemp_h0e1871d5__0;
    VlWide<3>/*95:0*/ __Vtemp_haa08c39e__0;
    VlWide<3>/*95:0*/ __Vtemp_h78d223ba__0;
    VlWide<3>/*95:0*/ __Vtemp_ha97d6b79__0;
    VlWide<3>/*95:0*/ __Vtemp_h77bcdcbf__0;
    VlWide<3>/*95:0*/ __Vtemp_haa7f2cec__0;
    VlWide<3>/*95:0*/ __Vtemp_hc05b2473__0;
    VlWide<3>/*95:0*/ __Vtemp_h7a39baa8__0;
    VlWide<3>/*95:0*/ __Vtemp_h256e6733__0;
    VlWide<3>/*95:0*/ __Vtemp_hc260c69f__0;
    VlWide<3>/*95:0*/ __Vtemp_h18b5d710__0;
    VlWide<3>/*95:0*/ __Vtemp_h2284460a__0;
    VlWide<3>/*95:0*/ __Vtemp_h95118cee__0;
    VlWide<4>/*127:0*/ __Vtemp_hb7103fa3__0;
    VlWide<3>/*95:0*/ __Vtemp_hdcd30b01__0;
    VlWide<4>/*127:0*/ __Vtemp_ha6ef75fe__0;
    VlWide<4>/*127:0*/ __Vtemp_h17b52804__0;
    VlWide<4>/*127:0*/ __Vtemp_ha2e91cf0__0;
    VlWide<4>/*127:0*/ __Vtemp_hb849b1f5__0;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xf1ffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | (((0xbU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                 >> 0x16U))) << 0xbU) 
              | (((0xaU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                    >> 0x16U))) << 0xaU) 
                 | ((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                    >> 0x16U))) << 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0x8fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | (((0xeU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                 >> 0x16U))) << 0xeU) 
              | (((0xdU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                    >> 0x16U))) << 0xdU) 
                 | ((0xcU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0x16U))) << 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0x7fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | ((0xfU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 0x16U))) << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffffff8ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | (IData)((IData)((((2U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       >> 0x1aU)) << 2U) 
                              | (((1U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0x1aU)) 
                                  << 1U) | (0U == (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 0x1aU)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffffffc7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((5U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x1aU)) 
                                << 2U) | (((4U == (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 0x1aU)) 
                                           << 1U) | 
                                          (3U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)))))) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffffe3fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((8U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x1aU)) 
                                << 2U) | (((7U == (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 0x1aU)) 
                                           << 1U) | 
                                          (6U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)))))) 
              << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffff1ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0xbU == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0x1aU)) 
                                << 2U) | (((0xaU == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (9U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)))))) 
              << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffff8fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0xeU == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0x1aU)) 
                                << 2U) | (((0xdU == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0xcU == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffffffc7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x11U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x10U == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0xfU == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffffe3ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x14U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x13U == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x12U == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffff1fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x17U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x16U == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x15U == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffff8ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x1aU == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x19U == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x18U == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffffffc7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x1dU == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x1cU == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x1bU == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffffe3fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x20U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x1fU == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x1eU == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffff1ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x23U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x22U == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x21U == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffff8fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x26U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x25U == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x24U == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfffffc7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x29U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x28U == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x27U == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffffe3ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x2cU == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x2bU == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x2aU == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffff1fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x2fU == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x2eU == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x2dU == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfff8ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x32U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x31U == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x30U == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xffc7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x35U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x34U == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x33U == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xfe3fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x38U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x37U == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x36U == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0xf1ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x3bU == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x3aU == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x39U == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0x8fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((((0x3eU == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                << 2U) | (((0x3dU == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << 1U) | 
                                          (0x3cU == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))))) 
              << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
           | ((QData)((IData)((0x3fU == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x1aU)))) 
              << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e 
        = (1U & ((0x3fU == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                     >> 0x10U))) | 
                 (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                     >> 0x1fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbidx 
        = (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
             [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]) 
            << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                         [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                         << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__r_g 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
        [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data 
        = ((((((((((((((((((((((((((((((- (IData)((0U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                       >> 0xaU))))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                                      | ((- (IData)(
                                                    (1U 
                                                     == 
                                                     (0x3fffU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                         >> 0xaU))))) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd)) 
                                     | ((- (IData)(
                                                   (4U 
                                                    == 
                                                    (0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                        >> 0xaU))))) 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl)) 
                                    | ((- (IData)((5U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                       >> 0xaU))))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat)) 
                                   | ((- (IData)((6U 
                                                  == 
                                                  (0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                      >> 0xaU))))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era)) 
                                  | ((- (IData)((7U 
                                                 == 
                                                 (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0xaU))))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv)) 
                                 | ((- (IData)((0xcU 
                                                == 
                                                (0x3fffU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0xaU))))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry)) 
                                | ((- (IData)((0x10U 
                                               == (0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                      >> 0xaU))))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)) 
                               | ((- (IData)((0x11U 
                                              == (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0xaU))))) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi)) 
                              | ((- (IData)((0x12U 
                                             == (0x3fffU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0xaU))))) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0)) 
                             | ((- (IData)((0x13U == 
                                            (0x3fffU 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xaU))))) 
                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1)) 
                            | ((- (IData)((0x18U == 
                                           (0x3fffU 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 0xaU))))) 
                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid)) 
                           | ((- (IData)((0x19U == 
                                          (0x3fffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                              >> 0xaU))))) 
                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl)) 
                          | ((- (IData)((0x1aU == (0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                      >> 0xaU))))) 
                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh)) 
                         | ((- (IData)((0x1bU == (0x3fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0xaU))))) 
                            & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv 
                                >> 0x1fU) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh
                                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl))) 
                        | ((- (IData)((0x20U == (0x3fffU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0xaU))))) 
                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid)) 
                       | ((- (IData)((0x30U == (0x3fffU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 0xaU))))) 
                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0)) 
                      | ((- (IData)((0x31U == (0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0xaU))))) 
                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1)) 
                     | ((- (IData)((0x32U == (0x3fffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                 >> 0xaU))))) 
                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2)) 
                    | ((- (IData)((0x33U == (0x3fffU 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xaU))))) 
                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3)) 
                   | ((- (IData)((0x40U == (0x3fffU 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 0xaU))))) 
                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)) 
                  | ((- (IData)((0x41U == (0x3fffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                              >> 0xaU))))) 
                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg)) 
                 | ((- (IData)((0x43U == (0x3fffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0xaU))))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc)) 
                | ((- (IData)((0x44U == (0x3fffU & 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0xaU))))) 
                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ticlr)) 
               | ((- (IData)((0x60U == (0x3fffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 0xaU))))) 
                  & ((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)))) 
              | ((- (IData)((0x42U == (0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0xaU))))) 
                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval)) 
             | ((- (IData)((0x88U == (0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                 >> 0xaU))))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry)) 
            | ((- (IData)((0x180U == (0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                 >> 0xaU))))) 
               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0)) 
           | ((- (IData)((0x181U == (0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0xaU))))) 
              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[3U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[4U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[5U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[6U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[7U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[7U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[8U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[8U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[9U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[9U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xaU];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xbU] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xbU];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xcU];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xdU];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xeU];
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029 
        = ((0x2fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)) 
           | (0x1000U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                           << 2U)))) 
                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                             << 0xcU) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & (((IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))) 
                                     << 1U) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                               >> 9U))) 
                      | (((IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))) 
                          & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                >> 0xaU))) << 1U)) 
                     | (((IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))) 
                         & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                               >> 0xaU))) << 1U)) | 
                    (0x7ffffeU & (((IData)((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))) 
                                   << 1U) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 9U))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY 
        = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i)
                  : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                      ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i) 
                         >> 1U) : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                                    ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i) 
                                       >> 2U) : ((3U 
                                                  != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i) 
                                                    >> 3U))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    vlSelf->simu_top__DOT__soc__DOT__s0_wready = (1U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out) 
                                                     | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid))));
    vlSelf->simu_top__DOT__soc__DOT__conf_s_wready 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out) 
                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid))));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h90ddc2f0__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_jirl_flag)
            ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_buffer 
               << 2U) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_target 
                         << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x1fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (0x2000U & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                           << 0xdU) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                                       << 0xcU)) & 
                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                          << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb 
        = (IData)((0ULL != (0xff80000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w 
        = (1U & ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                     >> 0x18U)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w 
        = (1U & ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                     >> 0x19U)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w 
        = (1U & (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                      >> 0x18U)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 6U)) & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x19U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar 
        = (IData)(((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                      >> 0xeU) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                  >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                                             >> 3U)) 
                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                      >> 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar 
        = (IData)(((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                      >> 0xeU) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                  >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                                             >> 3U)) 
                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                      >> 5U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x14U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x16U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd 
        = (IData)((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                     >> 1U) & (0U == (0x3000000U & 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle 
        = (1U & ((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 0x11U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn 
        = (1U & (((((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xeU)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch 
        = (1U & (((((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xaU)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd 
        = (1U & (((((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xbU)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr 
        = (1U & (((((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xcU)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill 
        = (1U & (((((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xdU)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 5U)) & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x19U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 7U)) & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x19U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data 
        = (IData)((0ULL != (0xfc80000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 8U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 0xdU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 0xeU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori 
        = (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                      >> 0xfU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                      >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                      >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                      >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 0x11U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 0xaU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 8U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 0xbU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w 
        = (1U & (IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 8U) & (0U == (0x3000000U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                     >> 8U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x1aU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 5U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 8U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0xaU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0xbU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0xeU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0xfU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x10U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x18U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x19U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb 
        = (1U & ((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 0x13U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr 
        = (IData)((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                     >> 1U) & (0U == (0x3000000U & 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
                      >> 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg 
        = (IData)((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                     >> 1U) & (0U == (0x3000000U & 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                   & (0U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 5U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 6U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w 
        = (1U & (IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 8U) & (0x1000000U == (0x3000000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0
            [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
            << 8U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__r_g) 
                       << 6U) | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
                                  [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                  << 4U) | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                             [(0x1fU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                             << 2U) 
                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0
                                                [(0x1fU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                                << 1U) 
                                               | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0
                                               [(0x1fU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)])))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo1 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1
            [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
            << 8U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__r_g) 
                       << 6U) | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
                                  [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                  << 4U) | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                             [(0x1fU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                             << 2U) 
                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1
                                                [(0x1fU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                                << 1U) 
                                               | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1
                                               [(0x1fU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)])))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig 
        = (1U & (((((IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig))) 
                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                       >> 0xbU)) | ((IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig))) 
                                    & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                          >> 0xbU)))) 
                  | ((IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig))) 
                     & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                           >> 0xbU)))) | ((IData)((3U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig))) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029 
        = ((0x1fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)) 
           | (0x2000U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                           << 2U)))) 
                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                             << 0xdU) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                         << 2U)))));
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1 = 0U;
    }
    if (vlSelf->aresetn) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable 
            = ((0U != vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
               & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc)))));
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (7U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (1U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                    = ((0xff00ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                    = ((0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                          << 0x10U));
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                    = ((0xffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai));
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (3U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
            = (0xff00ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
            = (0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
            = (0xffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr = 3U;
    }
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_wdata;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_wlast;
    }
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((0xfffffffcU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | ((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
              | (0x3cU & ((0xfffffffcU & (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                          & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen)) 
                                             << 2U))) 
                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                              & ((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                                >> 2U))) 
                             << 2U)))));
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
            = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr)) 
                << 0xdU) | (QData)((IData)((0x801U 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awsize) 
                                                << 8U) 
                                               | (0xf0U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen) 
                                                     << 4U)))))));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__m0_bid = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [0U];
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [1U];
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [2U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [0U];
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [1U];
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [2U];
    }
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [3U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_bvalid = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid));
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 1U));
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 2U));
    }
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 3U));
    }
    if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = ((0x19U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           | ((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                           >> 0x10U)) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           | (((0x1fafU == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                       >> 0x10U))) 
               | (0x1fd0U == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                         >> 0x10U)))) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           | (1U & (~ (((0x1fafU == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                >> 0x10U))) 
                        | (0x1fd0U == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                  >> 0x10U)))) 
                       | (0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                      >> 0x10U))))));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_op = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wdata = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu_bready = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U] = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U] = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U] = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__rd_req_buffer = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer = 0U;
    } else {
        if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else if ((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last)) 
                              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__rd_req_buffer))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__ret_num_add_one;
            }
        } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req)) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 0x10U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num = 0U;
            }
        } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 8U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__replace_way;
            }
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__req_or_inst_valid) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cache_hit))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 2U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_op = 0U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wstrb = 0U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wdata = 0U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode 
                    = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 3U));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cache_hit) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 4U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_tag;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_uncache_en) 
                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop)));
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__req_or_inst_valid) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 2U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_op = 0U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wstrb = 0U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wdata = 0U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode 
                    = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 3U));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en;
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = 1U;
        }
        if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 0U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bready))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu_bready = 0U;
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                        | (~ (IData)(vlSelf->enable_delay))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 4U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = 1U;
                }
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                           | (~ (IData)(vlSelf->enable_delay))))) {
                if (vlSelf->simu_top__DOT__soc__DOT__cpu_wlast) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 6U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu_bready = 1U;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num) 
                                 - (IData)(1U)));
                    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_last) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast = 1U;
                    }
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 4U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu_wdata 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U];
                    vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = 1U;
                    __Vtemp_h95118cee__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U];
                    __Vtemp_h95118cee__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U];
                    __Vtemp_h95118cee__0[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U];
                    VL_EXTEND_WW(128,96, __Vtemp_hb7103fa3__0, __Vtemp_h95118cee__0);
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U] 
                        = __Vtemp_hb7103fa3__0[0U];
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U] 
                        = __Vtemp_hb7103fa3__0[1U];
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U] 
                        = __Vtemp_hb7103fa3__0[2U];
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U] 
                        = __Vtemp_hb7103fa3__0[3U];
                }
            }
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 0U;
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = 5U;
            vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                = (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr)
                            ? (QData)((IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                   << 4U) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset)))))
                            : (((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)
                                                  ? 
                                                 (0xfffffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
                                                     >> 1U))
                                                  : 
                                                 (0xfffffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
                                                     >> 1U))))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                            << 4U))))));
            if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu_awsize = 2U;
                vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen = 3U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num = 3U;
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu_awsize 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type;
                vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast = 1U;
            }
            vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid = 1U;
            vlSelf->simu_top__DOT__soc__DOT__cpu_wdata 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[0U];
            vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr)
                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb)
                    : 0xfU);
            __Vtemp_hdcd30b01__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[1U];
            __Vtemp_hdcd30b01__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[2U];
            __Vtemp_hdcd30b01__0[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[3U];
            VL_EXTEND_WW(128,96, __Vtemp_ha6ef75fe__0, __Vtemp_hdcd30b01__0);
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U] 
                = __Vtemp_ha6ef75fe__0[0U];
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U] 
                = __Vtemp_ha6ef75fe__0[1U];
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U] 
                = __Vtemp_ha6ef75fe__0[2U];
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U] 
                = __Vtemp_ha6ef75fe__0[3U];
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__rd_req_buffer = 1U;
        } else if (((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) 
                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__rd_req_buffer = 0U;
        }
        if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one;
            }
        } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else {
                if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = 0U;
                }
                if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 0x10U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 8U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr) 
                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_d) 
                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way)
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer
                                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer)) 
                           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr))) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0))));
            }
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_lookup2lookup))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 2U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_op;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__preld_en;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_size;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                >> 4U));
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset 
                    = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr);
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb 
                    = (0xfU & ((0x1fffffffU & ((((- (IData)(
                                                            (1U 
                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                >> 0x1eU)))) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen)) 
                                               | (((- (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                               >> 0x1fU))) 
                                                   >> 3U) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen)))) 
                               | (0xfU & ((- (IData)(
                                                     (1U 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                     >> 0x1eU))))))) 
                                          >> 3U))));
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wdata;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode 
                    = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 3U));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_excp_cancel_req) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cache_hit) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 4U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_uncache_en) 
                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop)));
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_idle2lookup))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 2U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_op;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__preld_en;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_size;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                >> 4U));
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset 
                    = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr);
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb 
                    = (0xfU & ((0x1fffffffU & ((((- (IData)(
                                                            (1U 
                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                >> 0x1eU)))) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen)) 
                                               | (((- (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                               >> 0x1fU))) 
                                                   >> 3U) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen)))) 
                               | (0xfU & ((- (IData)(
                                                     (1U 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                     >> 0x1eU))))))) 
                                          >> 3U))));
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wdata;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode 
                    = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 3U));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en;
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer = 1U;
        } else if (((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer = 0U;
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb)) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                    >> 6U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3ff1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui)) 
               << 3U) | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt) 
                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti)) 
                          << 2U) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w) 
                                    << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3f8fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
               << 6U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor) 
                          << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi)) 
                                    << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3c7fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
               << 9U) | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w) 
                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w)) 
                          << 8U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori)) 
                                    << 7U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x23ffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | ((0x1000U & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                            << 0xcU) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                                        << 0xbU)) & 
                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                           >> 1U))) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w) 
                                        << 0xbU) | 
                                       (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)) 
                                        << 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op 
        = ((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op)) 
           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu)) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op)) 
           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu)) 
               << 2U) | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w) 
                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu)) 
                          << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (((((((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w)) 
                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b)) 
                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                  | (0ULL != (0x280000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi)) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid 
        = (1U & (((((((((((((((((((((((((((((((((((
                                                   ((((((((((((((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w) 
                                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w)) 
                                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt)) 
                                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu)) 
                                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor)) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and)) 
                                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or)) 
                                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor)) 
                                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w)) 
                                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w)) 
                                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w)) 
                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w)) 
                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w)) 
                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu)) 
                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w)) 
                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w)) 
                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu)) 
                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu)) 
                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break)) 
                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall)) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w)) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle)) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti)) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui)) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w)) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi)) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                   | (0ULL != (0xff80000ULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d))) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd)) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)) 
                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w)) 
                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w)) 
                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn)) 
                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld)) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar)) 
                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar)) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch)) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd)) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr)) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb) 
                    & (((((((0U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                            | (1U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                           | (2U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                          | (3U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                         | (4U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                        | (5U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                       | (6U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm 
        = ((((((((0x1fU & ((- (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)))) 
                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                              >> 0xaU))) | ((- (IData)(
                                                       (((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b)) 
                                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti)) 
                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui)) 
                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld)))) 
                                            & (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                               >> 0x15U)))) 
                                                << 0xcU) 
                                               | (0xfffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0xaU))))) 
                | (0xfffU & ((- (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori)))) 
                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 0xaU)))) | ((- (IData)(
                                                          ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w) 
                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)))) 
                                               & (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                  >> 0x17U)))) 
                                                   << 0x10U) 
                                                  | (0xfffcU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                        >> 8U))))) 
              | ((- (IData)((IData)((0ULL != (0xfc80000ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d))))) 
                 & (((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       >> 0x19U)))) 
                     << 0x12U) | (0x3fffcU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                              >> 8U))))) 
             | (0xfffff000U & ((- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i)))) 
                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                  << 7U)))) | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi))) 
                                               & (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                  >> 0x18U)))) 
                                                   << 0x16U) 
                                                  | (0x3ffffcU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                        >> 3U))))) 
           | ((- (IData)((IData)((0ULL != (0x300000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d))))) 
              & (((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__i26 
                                    >> 0x19U)))) << 0x1cU) 
                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__i26 
                    << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd 
        = ((((((((((((((((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and)) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor)) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor)) 
                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w)) 
                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w)) 
                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu)) 
                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w)) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu)) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w)) 
                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu)) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w)) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w)) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w)) 
                  | (0ULL != (0xfc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj 
        = ((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w)) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w)) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt)) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu)) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu)) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w)) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w)) 
                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w)) 
                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)) 
                         | (0ULL != (0xfc80000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b)) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2 
        = (0x1fU & ((IData)((((((((0ULL != (0xfc00000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)))
                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]
                     : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                         << 0x16U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0xaU))));
    vlSelf->debug0_wb_pc = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U];
    vlSelf->debug0_wb_rf_wnum = (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U]);
    vlSelf->debug0_wb_rf_wdata = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U];
    if ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_h721ebe7d__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h721ebe7d__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
        __Vtemp_h3b0b92ad__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h3b0b92ad__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
        __Vtemp_h329954d1__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h329954d1__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
        __Vtemp_hc418b3b1__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_hc418b3b1__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
        __Vtemp_h1da781e9__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h1da781e9__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
        __Vtemp_hfefcb2d8__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_hfefcb2d8__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
        __Vtemp_haa7f2cec__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_haa7f2cec__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
    } else if ((0x40U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_h721ebe7d__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h721ebe7d__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
        __Vtemp_h3b0b92ad__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h3b0b92ad__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
        __Vtemp_h329954d1__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h329954d1__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
        __Vtemp_hc418b3b1__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_hc418b3b1__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
        __Vtemp_h1da781e9__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h1da781e9__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
        __Vtemp_hfefcb2d8__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_hfefcb2d8__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
        __Vtemp_haa7f2cec__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_haa7f2cec__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
    } else {
        __Vtemp_h721ebe7d__0[0U] = 0U;
        __Vtemp_h721ebe7d__0[1U] = 0U;
        __Vtemp_h3b0b92ad__0[0U] = 0U;
        __Vtemp_h3b0b92ad__0[1U] = 0U;
        __Vtemp_h329954d1__0[0U] = 0U;
        __Vtemp_h329954d1__0[1U] = 0U;
        __Vtemp_hc418b3b1__0[0U] = 0U;
        __Vtemp_hc418b3b1__0[1U] = 0U;
        __Vtemp_h1da781e9__0[0U] = 0U;
        __Vtemp_h1da781e9__0[1U] = 0U;
        __Vtemp_hfefcb2d8__0[0U] = 0U;
        __Vtemp_hfefcb2d8__0[1U] = 0U;
        __Vtemp_haa7f2cec__0[0U] = 0U;
        __Vtemp_haa7f2cec__0[1U] = 0U;
    }
    if ((8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_ha6927b5b__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_ha6927b5b__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
        __Vtemp_h3a9f0241__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h3a9f0241__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
        __Vtemp_h195d1ebb__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h195d1ebb__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
        __Vtemp_h274d0f48__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h274d0f48__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
        __Vtemp_h41390341__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h41390341__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
        __Vtemp_h4a6fa84a__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h4a6fa84a__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
        __Vtemp_hc05b2473__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_hc05b2473__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                   << 0x17U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                     >> 9U)))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                    << 0x13U) 
                                                                   | (0x7ffffU 
                                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                            >> 0x16U)))))))) 
                                            >> 0x20U));
    } else if ((0x10U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_ha6927b5b__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_ha6927b5b__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
        __Vtemp_h3a9f0241__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h3a9f0241__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
        __Vtemp_h195d1ebb__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h195d1ebb__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
        __Vtemp_h274d0f48__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h274d0f48__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
        __Vtemp_h41390341__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h41390341__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
        __Vtemp_h4a6fa84a__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_h4a6fa84a__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
        __Vtemp_hc05b2473__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (0x7ffffU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                         << 0xaU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                           >> 0x16U)))))))));
        __Vtemp_hc05b2473__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U)))))))) 
                                                           >> 0x20U)));
    } else {
        __Vtemp_ha6927b5b__0[0U] = __Vtemp_h721ebe7d__0[0U];
        __Vtemp_ha6927b5b__0[1U] = __Vtemp_h721ebe7d__0[1U];
        __Vtemp_h3a9f0241__0[0U] = __Vtemp_h3b0b92ad__0[0U];
        __Vtemp_h3a9f0241__0[1U] = __Vtemp_h3b0b92ad__0[1U];
        __Vtemp_h195d1ebb__0[0U] = __Vtemp_h329954d1__0[0U];
        __Vtemp_h195d1ebb__0[1U] = __Vtemp_h329954d1__0[1U];
        __Vtemp_h274d0f48__0[0U] = __Vtemp_hc418b3b1__0[0U];
        __Vtemp_h274d0f48__0[1U] = __Vtemp_hc418b3b1__0[1U];
        __Vtemp_h41390341__0[0U] = __Vtemp_h1da781e9__0[0U];
        __Vtemp_h41390341__0[1U] = __Vtemp_h1da781e9__0[1U];
        __Vtemp_h4a6fa84a__0[0U] = __Vtemp_hfefcb2d8__0[0U];
        __Vtemp_h4a6fa84a__0[1U] = __Vtemp_hfefcb2d8__0[1U];
        __Vtemp_hc05b2473__0[0U] = __Vtemp_haa7f2cec__0[0U];
        __Vtemp_hc05b2473__0[1U] = __Vtemp_haa7f2cec__0[1U];
    }
    if ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_h2cb96564__0[0U] = (IData)((0x200000ULL 
                                            | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                << 0x3eU) 
                                               | ((QData)((IData)(
                                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU))));
        __Vtemp_h2cb96564__0[1U] = (IData)(((0x200000ULL 
                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                 << 0x3eU) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                     << 0x17U) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                       >> 9U)))) 
                                                   << 0x1eU))) 
                                            >> 0x20U));
        __Vtemp_hf54cffc0__0[0U] = (IData)((0x200000ULL 
                                            | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                << 0x3eU) 
                                               | ((QData)((IData)(
                                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU))));
        __Vtemp_hf54cffc0__0[1U] = (IData)(((0x200000ULL 
                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                 << 0x3eU) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                     << 0x17U) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                       >> 9U)))) 
                                                   << 0x1eU))) 
                                            >> 0x20U));
        __Vtemp_h4fea2519__0[0U] = (IData)((0x200000ULL 
                                            | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                << 0x3eU) 
                                               | ((QData)((IData)(
                                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU))));
        __Vtemp_h4fea2519__0[1U] = (IData)(((0x200000ULL 
                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                 << 0x3eU) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                     << 0x17U) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                       >> 9U)))) 
                                                   << 0x1eU))) 
                                            >> 0x20U));
        __Vtemp_h8a65369f__0[0U] = (IData)((0x200000ULL 
                                            | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                << 0x3eU) 
                                               | ((QData)((IData)(
                                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU))));
        __Vtemp_h8a65369f__0[1U] = (IData)(((0x200000ULL 
                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                 << 0x3eU) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                     << 0x17U) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                       >> 9U)))) 
                                                   << 0x1eU))) 
                                            >> 0x20U));
        __Vtemp_haec2593c__0[0U] = (IData)((0x200000ULL 
                                            | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                << 0x3eU) 
                                               | ((QData)((IData)(
                                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU))));
        __Vtemp_haec2593c__0[1U] = (IData)(((0x200000ULL 
                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                 << 0x3eU) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                     << 0x17U) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                       >> 9U)))) 
                                                   << 0x1eU))) 
                                            >> 0x20U));
        __Vtemp_h0e1871d5__0[0U] = (IData)((0x200000ULL 
                                            | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                << 0x3eU) 
                                               | ((QData)((IData)(
                                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU))));
        __Vtemp_h0e1871d5__0[1U] = (IData)(((0x200000ULL 
                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                 << 0x3eU) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                     << 0x17U) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                       >> 9U)))) 
                                                   << 0x1eU))) 
                                            >> 0x20U));
        __Vtemp_h7a39baa8__0[0U] = (IData)((0x200000ULL 
                                            | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                << 0x3eU) 
                                               | ((QData)((IData)(
                                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                    << 0x17U) 
                                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                      >> 9U)))) 
                                                  << 0x1eU))));
        __Vtemp_h7a39baa8__0[1U] = (IData)(((0x200000ULL 
                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                 << 0x3eU) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                     << 0x17U) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                       >> 9U)))) 
                                                   << 0x1eU))) 
                                            >> 0x20U));
    } else if ((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_h2cb96564__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U))))))))));
        __Vtemp_h2cb96564__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                           >> 0x20U)));
        __Vtemp_hf54cffc0__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U))))))))));
        __Vtemp_hf54cffc0__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                           >> 0x20U)));
        __Vtemp_h4fea2519__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U))))))))));
        __Vtemp_h4fea2519__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                           >> 0x20U)));
        __Vtemp_h8a65369f__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U))))))))));
        __Vtemp_h8a65369f__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                           >> 0x20U)));
        __Vtemp_haec2593c__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U))))))))));
        __Vtemp_haec2593c__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                           >> 0x20U)));
        __Vtemp_h0e1871d5__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U))))))))));
        __Vtemp_h0e1871d5__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                           >> 0x20U)));
        __Vtemp_h7a39baa8__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                    >> 9U)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (0x7ffffU 
                                                                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                            << 0xaU) 
                                                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                              >> 0x16U))))))))));
        __Vtemp_h7a39baa8__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (0x7ffffU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 0x16U))))))))) 
                                                           >> 0x20U)));
    } else {
        __Vtemp_h2cb96564__0[0U] = __Vtemp_ha6927b5b__0[0U];
        __Vtemp_h2cb96564__0[1U] = __Vtemp_ha6927b5b__0[1U];
        __Vtemp_hf54cffc0__0[0U] = __Vtemp_h3a9f0241__0[0U];
        __Vtemp_hf54cffc0__0[1U] = __Vtemp_h3a9f0241__0[1U];
        __Vtemp_h4fea2519__0[0U] = __Vtemp_h195d1ebb__0[0U];
        __Vtemp_h4fea2519__0[1U] = __Vtemp_h195d1ebb__0[1U];
        __Vtemp_h8a65369f__0[0U] = __Vtemp_h274d0f48__0[0U];
        __Vtemp_h8a65369f__0[1U] = __Vtemp_h274d0f48__0[1U];
        __Vtemp_haec2593c__0[0U] = __Vtemp_h41390341__0[0U];
        __Vtemp_haec2593c__0[1U] = __Vtemp_h41390341__0[1U];
        __Vtemp_h0e1871d5__0[0U] = __Vtemp_h4a6fa84a__0[0U];
        __Vtemp_h0e1871d5__0[1U] = __Vtemp_h4a6fa84a__0[1U];
        __Vtemp_h7a39baa8__0[0U] = __Vtemp_hc05b2473__0[0U];
        __Vtemp_h7a39baa8__0[1U] = __Vtemp_hc05b2473__0[1U];
    }
    if ((0x10000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp_h81352072__0[2U] = 5U;
        __Vtemp_h26424a69__0[2U] = 5U;
        __Vtemp_he0293b80__0[2U] = 5U;
        __Vtemp_h3cbbf0c4__0[2U] = 5U;
        __Vtemp_h3d97be07__0[2U] = 5U;
        __Vtemp_haa08c39e__0[2U] = 5U;
        __Vtemp_h256e6733__0[2U] = 5U;
    } else if ((0x20000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp_h81352072__0[2U] = 6U;
        __Vtemp_h26424a69__0[2U] = 6U;
        __Vtemp_he0293b80__0[2U] = 6U;
        __Vtemp_h3cbbf0c4__0[2U] = 6U;
        __Vtemp_h3d97be07__0[2U] = 6U;
        __Vtemp_haa08c39e__0[2U] = 6U;
        __Vtemp_h256e6733__0[2U] = 6U;
    } else if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp_h81352072__0[2U] = 6U;
        __Vtemp_h26424a69__0[2U] = 6U;
        __Vtemp_he0293b80__0[2U] = 6U;
        __Vtemp_h3cbbf0c4__0[2U] = 6U;
        __Vtemp_h3d97be07__0[2U] = 6U;
        __Vtemp_haa08c39e__0[2U] = 6U;
        __Vtemp_h256e6733__0[2U] = 6U;
    } else if ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                >> 0x1fU)) {
        __Vtemp_h81352072__0[2U] = 7U;
        __Vtemp_h26424a69__0[2U] = 7U;
        __Vtemp_he0293b80__0[2U] = 7U;
        __Vtemp_h3cbbf0c4__0[2U] = 7U;
        __Vtemp_h3d97be07__0[2U] = 7U;
        __Vtemp_haa08c39e__0[2U] = 7U;
        __Vtemp_h256e6733__0[2U] = 7U;
    } else if ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_h81352072__0[2U] = 4U;
        __Vtemp_h26424a69__0[2U] = 4U;
        __Vtemp_he0293b80__0[2U] = 4U;
        __Vtemp_h3cbbf0c4__0[2U] = 4U;
        __Vtemp_h3d97be07__0[2U] = 4U;
        __Vtemp_haa08c39e__0[2U] = 4U;
        __Vtemp_h256e6733__0[2U] = 4U;
    } else if ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_h81352072__0[2U] = 4U;
        __Vtemp_h26424a69__0[2U] = 4U;
        __Vtemp_he0293b80__0[2U] = 4U;
        __Vtemp_h3cbbf0c4__0[2U] = 4U;
        __Vtemp_h3d97be07__0[2U] = 4U;
        __Vtemp_haa08c39e__0[2U] = 4U;
        __Vtemp_h256e6733__0[2U] = 4U;
    } else if ((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_h81352072__0[2U] = 0x1fU;
        __Vtemp_h26424a69__0[2U] = 0x1fU;
        __Vtemp_he0293b80__0[2U] = 0x1fU;
        __Vtemp_h3cbbf0c4__0[2U] = 0x1fU;
        __Vtemp_h3d97be07__0[2U] = 0x1fU;
        __Vtemp_haa08c39e__0[2U] = 0x1fU;
        __Vtemp_h256e6733__0[2U] = 0x1fU;
    } else if ((8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_h81352072__0[2U] = 2U;
        __Vtemp_h26424a69__0[2U] = 2U;
        __Vtemp_he0293b80__0[2U] = 2U;
        __Vtemp_h3cbbf0c4__0[2U] = 2U;
        __Vtemp_h3d97be07__0[2U] = 2U;
        __Vtemp_haa08c39e__0[2U] = 2U;
        __Vtemp_h256e6733__0[2U] = 2U;
    } else if ((0x10U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_h81352072__0[2U] = 3U;
        __Vtemp_h26424a69__0[2U] = 3U;
        __Vtemp_he0293b80__0[2U] = 3U;
        __Vtemp_h3cbbf0c4__0[2U] = 3U;
        __Vtemp_h3d97be07__0[2U] = 3U;
        __Vtemp_haa08c39e__0[2U] = 3U;
        __Vtemp_h256e6733__0[2U] = 3U;
    } else if ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_h81352072__0[2U] = 1U;
        __Vtemp_h26424a69__0[2U] = 1U;
        __Vtemp_he0293b80__0[2U] = 1U;
        __Vtemp_h3cbbf0c4__0[2U] = 1U;
        __Vtemp_h3d97be07__0[2U] = 1U;
        __Vtemp_haa08c39e__0[2U] = 1U;
        __Vtemp_h256e6733__0[2U] = 1U;
    } else {
        __Vtemp_h81352072__0[2U] = 0U;
        __Vtemp_h26424a69__0[2U] = 0U;
        __Vtemp_he0293b80__0[2U] = 0U;
        __Vtemp_h3cbbf0c4__0[2U] = 0U;
        __Vtemp_h3d97be07__0[2U] = 0U;
        __Vtemp_haa08c39e__0[2U] = 0U;
        __Vtemp_h256e6733__0[2U] = 0U;
    }
    if ((0x8000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp_hbbfeb4aa__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_hbbfeb4aa__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
        __Vtemp_hd778bfdb__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_hd778bfdb__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
        __Vtemp_h3dc8dfae__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_h3dc8dfae__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
        __Vtemp_h178f00c5__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_h178f00c5__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
        __Vtemp_h09d415bc__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_h09d415bc__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
        __Vtemp_h78d223ba__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_h78d223ba__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
        __Vtemp_hc260c69f__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_hc260c69f__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
    } else if ((0x10000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp_hbbfeb4aa__0[0U] = 0U;
        __Vtemp_hbbfeb4aa__0[1U] = 0x80000000U;
        __Vtemp_hd778bfdb__0[0U] = 0U;
        __Vtemp_hd778bfdb__0[1U] = 0x80000000U;
        __Vtemp_h3dc8dfae__0[0U] = 0U;
        __Vtemp_h3dc8dfae__0[1U] = 0x80000000U;
        __Vtemp_h178f00c5__0[0U] = 0U;
        __Vtemp_h178f00c5__0[1U] = 0x80000000U;
        __Vtemp_h09d415bc__0[0U] = 0U;
        __Vtemp_h09d415bc__0[1U] = 0x80000000U;
        __Vtemp_h78d223ba__0[0U] = 0U;
        __Vtemp_h78d223ba__0[1U] = 0x80000000U;
        __Vtemp_hc260c69f__0[0U] = 0U;
        __Vtemp_hc260c69f__0[1U] = 0x80000000U;
    } else if ((0x20000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp_hbbfeb4aa__0[0U] = 0U;
        __Vtemp_hbbfeb4aa__0[1U] = 0U;
        __Vtemp_hd778bfdb__0[0U] = 0U;
        __Vtemp_hd778bfdb__0[1U] = 0U;
        __Vtemp_h3dc8dfae__0[0U] = 0U;
        __Vtemp_h3dc8dfae__0[1U] = 0U;
        __Vtemp_h178f00c5__0[0U] = 0U;
        __Vtemp_h178f00c5__0[1U] = 0U;
        __Vtemp_h09d415bc__0[0U] = 0U;
        __Vtemp_h09d415bc__0[1U] = 0U;
        __Vtemp_h78d223ba__0[0U] = 0U;
        __Vtemp_h78d223ba__0[1U] = 0U;
        __Vtemp_hc260c69f__0[0U] = 0U;
        __Vtemp_hc260c69f__0[1U] = 0U;
    } else if ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp_hbbfeb4aa__0[0U] = 0U;
        __Vtemp_hbbfeb4aa__0[1U] = 0x80000000U;
        __Vtemp_hd778bfdb__0[0U] = 0U;
        __Vtemp_hd778bfdb__0[1U] = 0x80000000U;
        __Vtemp_h3dc8dfae__0[0U] = 0U;
        __Vtemp_h3dc8dfae__0[1U] = 0x80000000U;
        __Vtemp_h178f00c5__0[0U] = 0U;
        __Vtemp_h178f00c5__0[1U] = 0x80000000U;
        __Vtemp_h09d415bc__0[0U] = 0U;
        __Vtemp_h09d415bc__0[1U] = 0x80000000U;
        __Vtemp_h78d223ba__0[0U] = 0U;
        __Vtemp_h78d223ba__0[1U] = 0x80000000U;
        __Vtemp_hc260c69f__0[0U] = 0U;
        __Vtemp_hc260c69f__0[1U] = 0x80000000U;
    } else if ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                >> 0x1fU)) {
        __Vtemp_hbbfeb4aa__0[0U] = 0U;
        __Vtemp_hbbfeb4aa__0[1U] = 0U;
        __Vtemp_hd778bfdb__0[0U] = 0U;
        __Vtemp_hd778bfdb__0[1U] = 0U;
        __Vtemp_h3dc8dfae__0[0U] = 0U;
        __Vtemp_h3dc8dfae__0[1U] = 0U;
        __Vtemp_h178f00c5__0[0U] = 0U;
        __Vtemp_h178f00c5__0[1U] = 0U;
        __Vtemp_h09d415bc__0[0U] = 0U;
        __Vtemp_h09d415bc__0[1U] = 0U;
        __Vtemp_h78d223ba__0[0U] = 0U;
        __Vtemp_h78d223ba__0[1U] = 0U;
        __Vtemp_hc260c69f__0[0U] = 0U;
        __Vtemp_hc260c69f__0[1U] = 0U;
    } else if ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U])) {
        __Vtemp_hbbfeb4aa__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                 << 0x17U) 
                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                   >> 9U)))) 
                                               << 0x1eU)));
        __Vtemp_hbbfeb4aa__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | ((QData)((IData)(
                                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                               << 0x1eU)) 
                                                           >> 0x20U)));
        __Vtemp_hd778bfdb__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                 << 0x17U) 
                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                   >> 9U)))) 
                                               << 0x1eU)));
        __Vtemp_hd778bfdb__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | ((QData)((IData)(
                                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                               << 0x1eU)) 
                                                           >> 0x20U)));
        __Vtemp_h3dc8dfae__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                 << 0x17U) 
                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                   >> 9U)))) 
                                               << 0x1eU)));
        __Vtemp_h3dc8dfae__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | ((QData)((IData)(
                                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                               << 0x1eU)) 
                                                           >> 0x20U)));
        __Vtemp_h178f00c5__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                 << 0x17U) 
                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                   >> 9U)))) 
                                               << 0x1eU)));
        __Vtemp_h178f00c5__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | ((QData)((IData)(
                                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                               << 0x1eU)) 
                                                           >> 0x20U)));
        __Vtemp_h09d415bc__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                 << 0x17U) 
                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                   >> 9U)))) 
                                               << 0x1eU)));
        __Vtemp_h09d415bc__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | ((QData)((IData)(
                                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                               << 0x1eU)) 
                                                           >> 0x20U)));
        __Vtemp_h78d223ba__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                 << 0x17U) 
                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                   >> 9U)))) 
                                               << 0x1eU)));
        __Vtemp_h78d223ba__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | ((QData)((IData)(
                                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                               << 0x1eU)) 
                                                           >> 0x20U)));
        __Vtemp_hc260c69f__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                 << 0x17U) 
                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                   >> 9U)))) 
                                               << 0x1eU)));
        __Vtemp_hc260c69f__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | ((QData)((IData)(
                                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                                                >> 9U)))) 
                                                               << 0x1eU)) 
                                                           >> 0x20U)));
    } else {
        __Vtemp_hbbfeb4aa__0[0U] = __Vtemp_h2cb96564__0[0U];
        __Vtemp_hbbfeb4aa__0[1U] = __Vtemp_h2cb96564__0[1U];
        __Vtemp_hd778bfdb__0[0U] = __Vtemp_hf54cffc0__0[0U];
        __Vtemp_hd778bfdb__0[1U] = __Vtemp_hf54cffc0__0[1U];
        __Vtemp_h3dc8dfae__0[0U] = __Vtemp_h4fea2519__0[0U];
        __Vtemp_h3dc8dfae__0[1U] = __Vtemp_h4fea2519__0[1U];
        __Vtemp_h178f00c5__0[0U] = __Vtemp_h8a65369f__0[0U];
        __Vtemp_h178f00c5__0[1U] = __Vtemp_h8a65369f__0[1U];
        __Vtemp_h09d415bc__0[0U] = __Vtemp_haec2593c__0[0U];
        __Vtemp_h09d415bc__0[1U] = __Vtemp_haec2593c__0[1U];
        __Vtemp_h78d223ba__0[0U] = __Vtemp_h0e1871d5__0[0U];
        __Vtemp_h78d223ba__0[1U] = __Vtemp_h0e1871d5__0[1U];
        __Vtemp_hc260c69f__0[0U] = __Vtemp_h7a39baa8__0[0U];
        __Vtemp_hc260c69f__0[1U] = __Vtemp_h7a39baa8__0[1U];
    }
    if ((0x2000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp_h3d6b89aa__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))) 
                                                           >> 0x20U)));
        __Vtemp_h507a58fe__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))) 
                                                           >> 0x20U)));
        __Vtemp_hf1b89d41__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))) 
                                                           >> 0x20U)));
        __Vtemp_hf7fe1837__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))) 
                                                           >> 0x20U)));
        __Vtemp_hc68c2812__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))) 
                                                           >> 0x20U)));
        __Vtemp_ha97d6b79__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))) 
                                                           >> 0x20U)));
        __Vtemp_h18b5d710__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU))))))) 
                                                           >> 0x20U)));
    } else if ((0x4000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp_h3d6b89aa__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
        __Vtemp_h507a58fe__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
        __Vtemp_hf1b89d41__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
        __Vtemp_hf7fe1837__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
        __Vtemp_hc68c2812__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
        __Vtemp_ha97d6b79__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
        __Vtemp_h18b5d710__0[1U] = (0x80000000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                                << 0x13U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                                >> 0xdU)))))) 
                                                           >> 0x20U)));
    } else {
        __Vtemp_h3d6b89aa__0[1U] = __Vtemp_hbbfeb4aa__0[1U];
        __Vtemp_h507a58fe__0[1U] = __Vtemp_hd778bfdb__0[1U];
        __Vtemp_hf1b89d41__0[1U] = __Vtemp_h3dc8dfae__0[1U];
        __Vtemp_hf7fe1837__0[1U] = __Vtemp_h178f00c5__0[1U];
        __Vtemp_hc68c2812__0[1U] = __Vtemp_h09d415bc__0[1U];
        __Vtemp_ha97d6b79__0[1U] = __Vtemp_h78d223ba__0[1U];
        __Vtemp_h18b5d710__0[1U] = __Vtemp_hc260c69f__0[1U];
    }
    if ((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp_h0788125c__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                               << 0x1eU)));
        __Vtemp_h75d86e0f__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                               << 0x1eU)));
        __Vtemp_he9d2f94d__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                               << 0x1eU)));
        __Vtemp_h42bb0ef1__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                               << 0x1eU)));
        __Vtemp_hc7119b20__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                               << 0x1eU)));
        __Vtemp_h77bcdcbf__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                               << 0x1eU)));
        __Vtemp_h2284460a__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                               << 0x1eU)));
    } else if ((0x2000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp_h0788125c__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                        >> 0xdU))))))));
        __Vtemp_h75d86e0f__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                        >> 0xdU))))))));
        __Vtemp_he9d2f94d__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                        >> 0xdU))))))));
        __Vtemp_h42bb0ef1__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                        >> 0xdU))))))));
        __Vtemp_hc7119b20__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                        >> 0xdU))))))));
        __Vtemp_h77bcdcbf__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                        >> 0xdU))))))));
        __Vtemp_h2284460a__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                      << 0x13U) 
                                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                        >> 0xdU))))))));
    } else if ((0x4000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])) {
        __Vtemp_h0788125c__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_h75d86e0f__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_he9d2f94d__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_h42bb0ef1__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_hc7119b20__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_h77bcdcbf__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
        __Vtemp_h2284460a__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
                                                                   << 0x13U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
                                                                     >> 0xdU)))))));
    } else {
        __Vtemp_h0788125c__0[0U] = __Vtemp_hbbfeb4aa__0[0U];
        __Vtemp_h75d86e0f__0[0U] = __Vtemp_hd778bfdb__0[0U];
        __Vtemp_he9d2f94d__0[0U] = __Vtemp_h3dc8dfae__0[0U];
        __Vtemp_h42bb0ef1__0[0U] = __Vtemp_h178f00c5__0[0U];
        __Vtemp_hc7119b20__0[0U] = __Vtemp_h09d415bc__0[0U];
        __Vtemp_h77bcdcbf__0[0U] = __Vtemp_h78d223ba__0[0U];
        __Vtemp_h2284460a__0[0U] = __Vtemp_hc260c69f__0[0U];
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_csr_ecode 
        = (0x3fU & ((((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                       ? 0U : ((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                ? 4U : ((0x2000000U 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                         ? 0x1fU : 
                                        ((0x4000000U 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                          ? 1U : ((0x8000000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                                   ? 3U
                                                   : 
                                                  __Vtemp_h81352072__0[2U]))))) 
                     << 1U) | (((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                 ? 0U : ((0x1000000U 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                          ? (IData)(
                                                    ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                                       << 0x3eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                         << 0x1eU)) 
                                                     >> 0x20U))
                                          : __Vtemp_h3d6b89aa__0[1U])) 
                               >> 0x1fU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_va_error 
        = (1U & (((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                   ? 0U : ((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                            ? (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                         << 0x3eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                           << 0x1eU)) 
                                       >> 0x20U)) : 
                           __Vtemp_h507a58fe__0[1U])) 
                 >> 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_bad_va 
        = ((((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
              ? 0U : ((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                       ? (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                    << 0x3eU) | ((QData)((IData)(
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])) 
                                                 << 0x1eU)) 
                                  >> 0x20U)) : __Vtemp_hf1b89d41__0[1U])) 
            << 2U) | (((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                        ? 0U : __Vtemp_he9d2f94d__0[0U]) 
                      >> 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_csr_esubcode 
        = (0x1ffU & (((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                       ? 0U : __Vtemp_h42bb0ef1__0[0U]) 
                     >> 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlb 
        = (1U & (((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                   ? 0U : __Vtemp_hc7119b20__0[0U]) 
                 >> 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlb_vppn 
        = ((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
            ? 0U : (0x7ffffU & __Vtemp_h77bcdcbf__0[0U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush 
        = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
              >> 0x16U) | ((IData)((0U != (0x180U & 
                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U]))) 
                           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                 >> 6U)))) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                              >> 0x12U)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
            >> 0x12U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
            >> 0x19U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            >> 6U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill 
        = (1U & (((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                   ? 0U : __Vtemp_h2284460a__0[0U]) 
                 >> 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            >> 7U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                 >> 6U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | (IData)((IData)((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                       & (0x1000U == 
                                          (0x3000U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                      | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                         & (0x2000U 
                                            == (0x3000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                        & (0U == (0x3000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                       & (0x3000U == 
                                          (0x3000U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | (IData)((IData)((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                     & (IData)((0U 
                                                != 
                                                (0x3000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                    | (IData)((0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3fdfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x20U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   << 4U)) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                      << 5U))) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                   << 4U) 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                                     << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3fbfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x40U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                         & (IData)((0U != (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                        | (IData)((0x18U == (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                       << 6U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x37ffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x800U & ((0xfffff800U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                         << 2U) & ((IData)(
                                                           (0U 
                                                            != 
                                                            (0x180U 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))) 
                                                   << 0xbU))) 
                        | ((IData)((0x180U == (0x180U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))) 
                           << 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((IData)((0x80U == (0x380U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))) 
                      | (IData)((0x100U == (0x380U 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                     | (IData)((0x200U == (0x380U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                    | (IData)((0x380U == (0x380U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((IData)((1U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                     | (IData)((4U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData) 
                        & (8U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))) 
                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData) 
                          & (0x10U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                         & (0U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                        & (0x18U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next 
        = ((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
            | ((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) 
           | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap));
    __Vtableidx2 = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir 
        = Vsimu_top__ConstPool__TABLE_hc3b7fa0f_0[__Vtableidx2];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int 
        = Vsimu_top__ConstPool__TABLE_h1da55f25_0[__Vtableidx2];
    vlSelf->simu_top__DOT__soc__DOT__m0_arready = 0U;
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 1U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 2U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 2U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 3U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 3U));
    }
    if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
            >> 4U))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign 
        = (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush)) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign 
        = (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush)) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
            >> 0x14U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbrd_en 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                  >> 0x13U) & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) 
                               >> 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                  >> 0x10U) & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) 
                               >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                  >> 0x11U) & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) 
                               >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            >> 5U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
            >> 0x16U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3dffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x200U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                          & (IData)((0U != (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                         | (IData)((0x60U == (0x60U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                        << 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3bffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x400U & ((0xfffffc00U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                                         << 7U) & ((IData)(
                                                           (0U 
                                                            != 
                                                            (6U 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)))) 
                                                   << 0xaU))) 
                        | ((IData)((6U == (6U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)))) 
                           << 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)) 
                       & (0x20U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))) 
                      | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)) 
                         & (0x40U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                        & (0U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig) 
                       & (0x60U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & (((((IData)((2U == (0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig)))) 
                       | (IData)((4U == (0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig))))) 
                      | (IData)((8U == (0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig))))) 
                     | (IData)((0xeU == (0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig))))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode 
        = ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
           | (3U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__inst_real_rd_size 
        = ((4U == ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
                    ? 2U : 4U)) ? 2U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
                                         ? 2U : 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag 
                << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index) 
                             << 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset)))
            : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag 
                << 0xcU) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index) 
                            << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__ret_num_add_one 
        = ((2U & (VL_REDXOR_2(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num) 
                  << 1U)) | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop) 
           & ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode)) 
              | (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop) 
           & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_valid_wr_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbrd_en) 
           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbidx 
                 >> 0x1fU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_invalid_wr_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbrd_en) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbidx 
              >> 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index 
        = (0x1fU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en))) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64)) 
                    | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en))) 
                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)));
    vlSelf->debug0_wb_rf_wen = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
        = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we)) 
            << 0x25U) | (0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U])))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
           & (0x4100U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW0_wen 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
           & (0x18000U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW1_wen 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
           & (0x18100U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
           & (0U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x2fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x1000U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                           << 2U)))) 
                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & (((IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                               >> 9U))) 
                      | (((IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig))) 
                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                >> 0xaU))) << 1U)) 
                     | (((IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig))) 
                         & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                               >> 0xaU))) << 1U)) | 
                    (0x7ffffeU & (((IData)((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig))) 
                                   << 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                             >> 9U))))));
    vlSelf->uart_rx = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                          ^ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                             >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            >> 3U) & ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                       ? ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                            == (7U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                          & (2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))))
                       : (0U != (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
            | ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
               & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                      == (7U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))))) 
                  | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))))) 
           & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)) 
              & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en 
        = (((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
            | (1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                 >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U] 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U] 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U] 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U] 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U];
    vlSelf->simu_top__DOT__soc__DOT__cpu_wlast = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast;
    vlSelf->simu_top__DOT__soc__DOT__m0_wready = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready));
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 1U));
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 2U));
    }
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 3U));
    }
    if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                  >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable)));
    vlSelf->simu_top__DOT__soc__DOT__cpu_bready = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu_bready;
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                  >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__replace_way 
        = (1U & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1)) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset)) 
                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer))) 
                 | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop)) 
                    & (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                           >> 7U)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2_hit_wr 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2 
        = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2))
            ? 0U : ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                      == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                           >> 0x20U)))) 
                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                >> 0x25U))) ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus)
                     : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf
                    [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1 
        = ((0U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                            >> 5U))) ? 0U : ((((0x1fU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 5U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                                              >> 0x20U)))) 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                                         >> 0x25U)))
                                              ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus)
                                              : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf
                                             [(0x1fU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 5U))]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW0_wen)
            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U)) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW1_wen)
            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U)) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv 
        = (3U & ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush))) 
                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd) 
                  | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen))) 
                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                         << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                      >> 8U)))) | (
                                                   (- (IData)(
                                                              (1U 
                                                               & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush)) 
                                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush))) 
                                                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen)))))) 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward 
        = (1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill)) 
                  & (~ (IData)(((0x3f0000U == (0x3f0000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush))))) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig 
        = (1U & (((((IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                       >> 0xbU)) | ((IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig))) 
                                    & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                          >> 0xbU)))) 
                  | ((IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                           >> 0xbU)))) | ((IData)((3U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig))) 
                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                             >> 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x1fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x2000U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                           << 2U)))) 
                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029) 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
    vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe = 
        ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next 
        = (0x1ffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                     + (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                 >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((0x19U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | ((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                           >> 0x10U)) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | (((0x1fafU == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                       >> 0x10U))) 
               | (0x1fd0U == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                         >> 0x10U)))) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | (1U & (~ ((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                    >> 0x10U)) | ((0x1fafU 
                                                   == 
                                                   (0x1fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                                       >> 0x10U))) 
                                                  | (0x1fd0U 
                                                     == 
                                                     (0x1fffU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                                         >> 0x10U))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_last 
        = (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_ena 
        = (1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)) 
                  | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena 
        = (1U & (((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req 
        = ((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
           & (~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_dina 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2_hit_wr))
            ? 0U : (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag 
                          << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe 
        = ((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd)) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb)) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle)) 
           & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
             & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                >> 3U) & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv)))) 
           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc 
               >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                             >> 0x1dU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
             & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                >> 3U) & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv)))) 
           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc 
               >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                             >> 0x1dU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
             & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                >> 3U) & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv)))) 
           & ((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                     >> 0x14U)) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                                    >> 0x1dU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
             & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                >> 3U) & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv)))) 
           & ((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                     >> 0x14U)) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                                    >> 0x1dU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill) 
            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen) 
               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                  >> 0xbU))) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward) 
                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                   >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg 
        = (((IData)(((0x3f0000U == (0x3f0000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush))) 
            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen) 
               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                  >> 0xcU))) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward) 
                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                   >> 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig)) 
                                        & (0x1000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig)) 
                                          & (0x2000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                         & (0U == (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                        & (0x3000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))))))) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)))))))) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3fdfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x20U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   << 4U)) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                      << 5U))) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                   << 4U) 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                                     << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3fbfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x40U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                         & (IData)((0U != (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                        | (IData)((0x18U == (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                       << 6U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x37ffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x800U & ((0xfffff800U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                         << 2U) & ((IData)(
                                                           (0U 
                                                            != 
                                                            (0x180U 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))) 
                                                   << 0xbU))) 
                        | ((IData)((0x180U == (0x180U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))) 
                           << 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((IData)((0x80U == (0x380U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))) 
                      | (IData)((0x100U == (0x380U 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                     | (IData)((0x200U == (0x380U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                    | (IData)((0x380U == (0x380U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((IData)((1U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                     | (IData)((4U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData) 
                        & (8U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))) 
                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData) 
                          & (0x10U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                         & (0U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                        & (0x18U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                  ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                 >> 8U));
    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai 
            = (0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai 
            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    }
    __Vtableidx1 = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir 
        = Vsimu_top__ConstPool__TABLE_hc3b7fa0f_0[__Vtableidx1];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int 
        = Vsimu_top__ConstPool__TABLE_h1da55f25_0[__Vtableidx1];
    vlSelf->simu_top__DOT__soc__DOT__m0_awready = 0U;
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 1U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 2U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 2U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 3U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 3U));
    }
    if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
            >> 4U))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp 
        = (1U & ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall)) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break)) 
                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                      >> 4U)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da))) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en 
        = (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg)) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en))) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacop_op_mode_di)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3dffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x200U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                          & (IData)((0U != (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                         | (IData)((0x60U == (0x60U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                        << 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3bffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x400U & ((0xfffffc00U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                                         << 7U) & ((IData)(
                                                           (0U 
                                                            != 
                                                            (6U 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)))) 
                                                   << 0xaU))) 
                        | ((IData)((6U == (6U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)))) 
                           << 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)) 
                       & (0x20U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))) 
                      | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)) 
                         & (0x40U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                        & (0U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig) 
                       & (0x60U == (0x60U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & (((((IData)((2U == (0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig)))) 
                       | (IData)((4U == (0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig))))) 
                      | (IData)((8U == (0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig))))) 
                     | (IData)((0xeU == (0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig))))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
              ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                 >> 8U) : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr) 
            << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai));
    __Vtableidx5 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value 
        = Vsimu_top__ConstPool__TABLE_hb8238e9e_0[__Vtableidx5];
    __Vtableidx8 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value 
        = Vsimu_top__ConstPool__TABLE_hf182b53e_0[__Vtableidx8];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
           & (0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
           & (0U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
           & (0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid)) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                 | (~ ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num)) 
                       & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one 
        = ((2U & (VL_REDXOR_2(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num) 
                  << 1U)) | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                             << 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset)));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type = 4U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                << 0xcU) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                            << 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop) 
           & ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode)) 
              | (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop) 
           & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode)));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_ena) {
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_addra];
        }
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_addra];
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[3U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[4U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[5U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[6U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[7U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[8U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[9U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[9U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[0xaU];
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc 
             >> 0x1fU) & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_uncache_en 
        = (1U & (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da) 
                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg))) 
                     & (0U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd))) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en) 
                       & (0U == (0x30U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0)))) 
                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en) 
                      & (0U == (0x30U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1)))) 
                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en) 
                     & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_mat)))) 
                 | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr 
        = ((~ (IData)((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_v)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv) 
            > (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_plv)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_uncache_en 
        = (1U & (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da) 
                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg))) 
                     & (0U == (0x180U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd))) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en) 
                       & (0U == (0x30U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0)))) 
                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en) 
                      & (0U == (0x30U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1)))) 
                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en) 
                     & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_mat)))) 
                 | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil 
        = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
              >> 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                        >> 0x15U)) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_v))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
             >> 0xaU) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_v))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem) 
             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                >> 0x15U)) & (~ (IData)((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1)))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem) 
             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                >> 0x16U)) & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_v)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv) 
               > (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_plv))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme 
        = (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
               >> 0xaU) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_v)) 
             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv) 
                <= (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_plv))) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_d))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en))
            ? ((0xe0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                               << 4U)) | (0x1fffffffU 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_vaddr_buffer))
            : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en))
                ? ((0xe0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                                   << 4U)) | (0x1fffffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_vaddr_buffer))
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_vaddr_buffer));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_paddr 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacop_op_mode_di)))
            ? ((0xe0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                               << 4U)) | (0x1fffffffU 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_vaddr_buffer))
            : ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en)) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacop_op_mode_di)))
                ? ((0xe0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                                   << 4U)) | (0x1fffffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_vaddr_buffer))
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_vaddr_buffer));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x2fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x1000U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                           << 2U)))) 
                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & (((IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                               >> 9U))) 
                      | (((IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig))) 
                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                >> 0xaU))) << 1U)) 
                     | (((IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig))) 
                         & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                               >> 0xaU))) << 1U)) | 
                    (0x7ffffeU & (((IData)((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig))) 
                                   << 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                             >> 9U))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in 
        = (1U & ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)
                  : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol)
                      ? (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))
                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))));
    vlSelf->uart_tx = (1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe)) 
                              & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                  >> 4U) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)))) 
                             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe))));
    __Vtemp_h17b52804__0[0U] = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab;
    __Vtemp_h17b52804__0[1U] = (IData)((((QData)((IData)(
                                                         (0xfU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw))));
    __Vtemp_h17b52804__0[2U] = (IData)(((((QData)((IData)(
                                                          (0xfU 
                                                           & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw))) 
                                        >> 0x20U));
    __Vtemp_h17b52804__0[3U] = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
    VL_EXTEND_WW(128,104, __Vtemp_ha2e91cf0__0, __Vtemp_h17b52804__0);
    vlSelf->uart_ctr_bus[0U] = __Vtemp_ha2e91cf0__0[0U];
    vlSelf->uart_ctr_bus[1U] = __Vtemp_ha2e91cf0__0[1U];
    vlSelf->uart_ctr_bus[2U] = __Vtemp_ha2e91cf0__0[2U];
    vlSelf->uart_ctr_bus[3U] = __Vtemp_ha2e91cf0__0[3U];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
              & ((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                  >> 0xeU))) ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                  : ((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                      >> 0xeU))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab) 
           & (0x40U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (4U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (8U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0xcU == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x18U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x1cU == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x20U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x24U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x28U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x2cU == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__data_real_rd_size 
        = ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type))
            ? 2U : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer)));
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__excp 
        = (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr)) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp 
        = (1U & (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil)) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis)) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi)) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme)) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem)) 
                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                    >> 0xdU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_excp_cancel_req 
        = ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis)) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
        = (0xfffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en)
                        ? ((0xcU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ps))
                            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ppn
                            : ((0xffc00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ppn) 
                               | (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_paddr 
                                            >> 0xcU))))
                        : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_paddr 
                           >> 0xcU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig 
        = (1U & (((((IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                       >> 0xbU)) | ((IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig))) 
                                    & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                          >> 0xbU)))) 
                  | ((IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                           >> 0xbU)))) | ((IData)((3U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig))) 
                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                             >> 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x1fffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x2000U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                           << 2U)))) 
                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029) 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
            & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
            & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (6U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (5U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
        = ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
            ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command
            : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                ? (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))
                : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2)) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                    ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r
                    : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3)) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)
                        : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x10U == (0x7ffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM)
                            : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                    & (0x14U == (0x7ffU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status) 
                                    << 0x10U) | (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                                            >> 0x20U))))
                                : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                    ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter
                                    : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                        ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num
                                        : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                            ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0
                                            : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9)) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1
                                                : (
                                                   (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                                    ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0
                                                    : 
                                                   ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                                     ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1
                                                     : 
                                                    ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                                      ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD
                                                      : 0U)))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset 
        = (1U & (~ (IData)(vlSelf->aresetn)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_ena 
        = (1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en)) 
                  | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena 
        = (1U & (((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_dina 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr))
            ? 0U : (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                          << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way 
        = (1U & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1)) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset)) 
                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer))) 
                 | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop)) 
                    & (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                           >> 7U)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_size 
        = ((1U & (- (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 0x1fU)))) | (2U & (- (IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                             >> 0x1eU)))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcacop_inst 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 5U) & (1U == (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 6U) & ((0U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
                      | (8U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__icacop_inst 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 5U) & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_op 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
            >> 5U) & (0U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__access_mem 
        = (IData)((0U != (0x420U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    if ((0x2000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
            = (((QData)((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
            = (((QData)((IData)((- (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
            = (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
            = (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable 
        = ((IData)((0U != (0x30000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__x_31_buffer));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__div_signed_buffer));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                     >> 0x1fU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                     >> 0x19U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin 
        = (IData)((0U != (0x7000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
        = ((0x200U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2 
        = ((0x100U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U]
            : ((0x80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
                ? 4U : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_tag 
        = (0xfffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop)
                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag
                        : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en)
                            ? ((0xcU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ps))
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ppn
                                : ((0xffc00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ppn) 
                                   | (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr 
                                                >> 0xcU))))
                            : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr 
                               >> 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_hit 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
              == (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
                              >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_hit 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
              == (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
                              >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig)) 
                                        & (0x1000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig)) 
                                          & (0x2000U 
                                             == (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                         & (0U == (0x3000U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                        & (0x3000U 
                                           == (0x3000U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))))))) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029))))) 
                                     | (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)))))))) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 
        = ((0x3fdfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029)) 
           | (0x20U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   << 4U)) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                      << 5U))) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                   << 4U) 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                                     << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 
        = ((0x3fbfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029)) 
           | (0x40U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                         & (IData)((0U != (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))))) 
                        | (IData)((0x18U == (0x18U 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))))) 
                       << 6U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 
        = ((0x37ffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029)) 
           | (0x800U & ((0xfffff800U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029) 
                                         << 2U) & ((IData)(
                                                           (0U 
                                                            != 
                                                            (0x180U 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)))) 
                                                   << 0xbU))) 
                        | ((IData)((0x180U == (0x180U 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)))) 
                           << 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((IData)((0x80U == (0x380U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)))) 
                      | (IData)((0x100U == (0x380U 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))))) 
                     | (IData)((0x200U == (0x380U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))))) 
                    | (IData)((0x380U == (0x380U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((IData)((1U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))))) 
                     | (IData)((4U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData) 
                        & (8U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)))) 
                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData) 
                          & (0x10U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))))) 
                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                         & (0U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))))) 
                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                        & (0x18U == (0x18U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029))))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao 
        = (0xffU & ((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                     >> 0xeU))) ? (
                                                   (4U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg)
                                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))
                                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr)
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                       ? 
                                                      (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                       >> 0x10U)
                                                       : 
                                                      (0xc0U 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir))))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                       ? 
                                                      (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                       >> 8U)
                                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier))
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                       ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                       >> 3U)))))
                     : ((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                         >> 0xeU)))
                         ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T
                         : 0U)));
    VL_EXTEND_WI(128,32, __Vtemp_hb849b1f5__0, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata);
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[0U] 
            = __Vtemp_hb849b1f5__0[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[1U] 
            = __Vtemp_hb849b1f5__0[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[2U] 
            = __Vtemp_hb849b1f5__0[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[3U] 
            = __Vtemp_hb849b1f5__0[3U];
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type = 4U;
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[0U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[0U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[1U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[1U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[2U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[2U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[3U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[3U];
        } else {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[0U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[0U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[1U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[1U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[2U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[2U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data[3U] 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[3U];
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req 
        = ((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
           & (~ ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0)) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_d 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way)
                  ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[
                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)))
                  : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[
                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x 
        = (IData)((6ULL == (0xeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x 
        = (IData)((0x18ULL == (0x38ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x 
        = (IData)((0x60ULL == (0xe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x 
        = (IData)((0x180ULL == (0x380ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x 
        = (IData)((0x600ULL == (0xe00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x 
        = (IData)((0x1800ULL == (0x3800ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x 
        = (IData)((0x6000ULL == (0xe000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x 
        = (IData)((0x18000ULL == (0x38000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x 
        = (IData)((0x60000ULL == (0xe0000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x 
        = (IData)((0x180000ULL == (0x380000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x 
        = (IData)((0x600000ULL == (0xe00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x 
        = (IData)((0x1800000ULL == (0x3800000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x 
        = (IData)((0x6000000ULL == (0xe000000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x 
        = (IData)((0x18000000ULL == (0x38000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x 
        = (IData)((0x60000000ULL == (0xe0000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x 
        = (IData)((1ULL == (3ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx 
        = (IData)((3ULL == (3ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x 
        = (IData)((2ULL == (3ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((2ULL == (0xeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((4ULL == (0xeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((8ULL == (0x38ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x10ULL == (0x38ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x20ULL == (0xe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x40ULL == (0xe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x80ULL == (0x380ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x100ULL == (0x380ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x200ULL == (0xe00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x400ULL == (0xe00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x800ULL == (0x3800ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x1000ULL == (0x3800ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x2000ULL == (0xe000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x4000ULL == (0xe000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x8000ULL == (0x38000ULL 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x10000ULL == (0x38000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x20000ULL == (0xe0000ULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x40000ULL == (0xe0000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x80000ULL == (0x380000ULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x100000ULL == (0x380000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x200000ULL == (0xe00000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x400000ULL == (0xe00000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x800000ULL == (0x3800000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x1000000ULL == (0x3800000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x2000000ULL == (0xe000000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x4000000ULL == (0xe000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x8000000ULL == (0x38000000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x10000000ULL == (0x38000000ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x 
        = (1U & ((IData)((0x20000000ULL == (0xe0000000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x40000000ULL == (0xe0000000ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xcULL == (0xeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xaULL == (0xeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x 
        = (IData)((8ULL == (0xeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x30ULL == (0x38ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x28ULL == (0x38ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x20ULL == (0x38ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc0ULL == (0xe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa0ULL == (0xe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x80ULL == (0xe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x300ULL == (0x380ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x280ULL == (0x380ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x200ULL == (0x380ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc00ULL == (0xe00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa00ULL == (0xe00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x800ULL == (0xe00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x3000ULL == (0x3800ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x2800ULL == (0x3800ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x2000ULL == (0x3800ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc000ULL == (0xe000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa000ULL == (0xe000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x8000ULL == (0xe000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x30000ULL == (0x38000ULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x28000ULL == (0x38000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x20000ULL == (0x38000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc0000ULL == (0xe0000ULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa0000ULL == (0xe0000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x80000ULL == (0xe0000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x300000ULL == (0x380000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x280000ULL == (0x380000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x200000ULL == (0x380000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc00000ULL == (0xe00000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa00000ULL == (0xe00000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x800000ULL == (0xe00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x3000000ULL == (0x3800000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x2800000ULL == (0x3800000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x2000000ULL == (0x3800000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc000000ULL == (0xe000000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa000000ULL == (0xe000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x8000000ULL == (0xe000000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0x30000000ULL == (0x38000000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0x28000000ULL == (0x38000000ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x20000000ULL == (0x38000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx 
        = (1U & ((IData)((0xc0000000ULL == (0xe0000000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))) 
                 | (IData)((0xa0000000ULL == (0xe0000000ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x 
        = (IData)((0x80000000ULL == (0xe0000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__las__y 
        = ((4U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                           >> 0x20U)) << 2U)) | (3U 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                            >> 0x1fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__result_r 
        = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r)) 
            << 1U) | (QData)((IData)(((0x20U >= (0x3fU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count))) 
                                      & (IData)(((QData)((IData)(
                                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                                                   ? 
                                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                                    >> 0x1fU)
                                                                    ? 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    (~ 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))
                                                                    : 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])
                                                                   : 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))) 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [1U]) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 1U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [2U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 2U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [3U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 3U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [4U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 4U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [5U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 5U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [6U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 6U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [7U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 7U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [8U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 7U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 8U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [9U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 8U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 9U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xaU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xaU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xbU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xbU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xcU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xcU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xdU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xeU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xdU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xfU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0xfU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x10U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0xfU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x10U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x11U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x11U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x12U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x11U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x12U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x13U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x13U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x14U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x13U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x14U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x15U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x14U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x15U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x16U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x16U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x17U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x16U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x17U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x18U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x17U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x18U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x19U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x19U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x19U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1aU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1bU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1cU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1dU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1eU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1fU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x20U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x20U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x21U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x20U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x21U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x22U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x21U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x22U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x23U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x22U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x23U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x24U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x23U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x24U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x25U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x24U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x25U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x26U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x25U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x26U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x27U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x26U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x27U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x28U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x27U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x28U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x29U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x28U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x29U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x29U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2aU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2bU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2cU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2dU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2eU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2fU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x30U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x30U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x31U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x30U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x31U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x32U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x31U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x32U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x33U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x32U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x33U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x34U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x33U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x34U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x35U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x34U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x35U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x36U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x35U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x36U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x37U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x36U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x37U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x38U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x37U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x38U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x39U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x38U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x39U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x39U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3aU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3bU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3cU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3dU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3eU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3fU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x40U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       << 0x20U))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 0x20U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffff80000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1fU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffff80000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffc0000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1eU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffc0000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffe0000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1dU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffe0000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffff0000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1cU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffff0000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffff8000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1bU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffff8000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3fffffffc000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1aU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3fffffffc000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1fffffffe000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x19U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1fffffffe000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffff000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x18U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffff000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffff800000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x17U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffff800000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffc00000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x16U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffc00000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffe00000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x15U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffe00000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xffffffff00000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x14U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xffffffff00000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7fffffff80000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x13U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7fffffff80000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3fffffffc0000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x12U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3fffffffc0000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1fffffffe0000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1fffffffe0000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffff0000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffff0000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffff8000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffff8000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffc000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffc000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffe000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffe000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xffffffff000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xffffffff000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7fffffff800ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7fffffff800ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3fffffffc00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3fffffffc00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1fffffffe00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1fffffffe00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffff00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffff00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffff80ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffff80ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffc0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffc0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffe0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffe0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xffffffff0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xffffffff0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7fffffff8ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7fffffff8ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3fffffffcULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3fffffffcULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1fffffffeULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1fffffffeULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       << 2U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffffffeULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffffffeULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffffffffffULL 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 5U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 6U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 7U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 8U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 9U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0xaU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0xbU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0xcU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x34U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x35U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x36U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x37U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x38U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x39U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x3aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x3aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       << 4U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffffff8ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffffff8ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffffffffcULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffffffffcULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffffffffeULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffffffffeULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffffffffULL 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 5U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 6U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 7U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 8U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 9U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0xaU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x34U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x35U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x36U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x37U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x38U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x38U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x39U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       << 6U))) << 1U)));
}
