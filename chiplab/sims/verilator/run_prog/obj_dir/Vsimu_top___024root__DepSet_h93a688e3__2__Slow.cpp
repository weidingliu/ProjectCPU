// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top___024root.h"

extern const VlUnpacked<CData/*7:0*/, 256> Vsimu_top__ConstPool__TABLE_hb8238e9e_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vsimu_top__ConstPool__TABLE_hf182b53e_0;

VL_ATTR_COLD void Vsimu_top___024root___settle__TOP__2(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___settle__TOP__2\n"); );
    // Init
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0;
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
    // Body
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__i26 
        = ((0x3ff0000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                          << 0x10U)) | (0xffffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 0xaU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d 
        = ((0xfffffff8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d) 
           | (((2U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
               << 2U) | (((1U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                          << 1U) | (0U == (0x1fU & 
                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d 
        = ((0xffffffc7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d) 
           | (((5U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
               << 5U) | (((4U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                          << 4U) | ((3U == (0x1fU & 
                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                                    << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d 
        = ((0xfffffe3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d) 
           | (((8U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
               << 8U) | (((7U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                          << 7U) | ((6U == (0x1fU & 
                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                                    << 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d 
        = ((0xfffff1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d) 
           | (((0xbU == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
               << 0xbU) | (((0xaU == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                            << 0xaU) | ((9U == (0x1fU 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                                        << 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d 
        = ((0xffff8fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d) 
           | (((0xeU == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
               << 0xeU) | (((0xdU == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                            << 0xdU) | ((0xcU == (0x1fU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                                        << 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d 
        = ((0xfffc7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d) 
           | (((0x11U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
               << 0x11U) | (((0x10U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                             << 0x10U) | ((0xfU == 
                                           (0x1fU & 
                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                                          << 0xfU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d 
        = ((0xffe3ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d) 
           | (((0x14U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
               << 0x14U) | (((0x13U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                             << 0x13U) | ((0x12U == 
                                           (0x1fU & 
                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                                          << 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d 
        = ((0xff1fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d) 
           | (((0x17U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
               << 0x17U) | (((0x16U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                             << 0x16U) | ((0x15U == 
                                           (0x1fU & 
                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                                          << 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d 
        = ((0xf8ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d) 
           | (((0x1aU == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
               << 0x1aU) | (((0x19U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                             << 0x19U) | ((0x18U == 
                                           (0x1fU & 
                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                                          << 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d 
        = ((0xc7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d) 
           | (((0x1dU == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
               << 0x1dU) | (((0x1cU == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                             << 0x1cU) | ((0x1bU == 
                                           (0x1fU & 
                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                                          << 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d 
        = ((0x3fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d) 
           | (((0x1fU == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
               << 0x1fU) | ((0x1eU == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                            << 0x1eU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
        = ((0xfffffff8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d) 
           | (((2U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 0xaU))) << 2U) | 
              (((1U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                 >> 0xaU))) << 1U) 
               | (0U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                  >> 0xaU))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
        = ((0xffffffc7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d) 
           | (((5U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 0xaU))) << 5U) | 
              (((4U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                 >> 0xaU))) << 4U) 
               | ((3U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xaU))) << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
        = ((0xfffffe3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d) 
           | (((8U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 0xaU))) << 8U) | 
              (((7U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                 >> 0xaU))) << 7U) 
               | ((6U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xaU))) << 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
        = ((0xfffff1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d) 
           | (((0xbU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                  >> 0xaU))) << 0xbU) 
              | (((0xaU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                     >> 0xaU))) << 0xaU) 
                 | ((9U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                     >> 0xaU))) << 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
        = ((0xffff8fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d) 
           | (((0xeU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                  >> 0xaU))) << 0xeU) 
              | (((0xdU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                     >> 0xaU))) << 0xdU) 
                 | ((0xcU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       >> 0xaU))) << 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
        = ((0xfffc7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d) 
           | (((0x11U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xaU))) << 0x11U) 
              | (((0x10U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0xaU))) << 0x10U) 
                 | ((0xfU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       >> 0xaU))) << 0xfU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
        = ((0xffe3ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d) 
           | (((0x14U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xaU))) << 0x14U) 
              | (((0x13U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0xaU))) << 0x13U) 
                 | ((0x12U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0xaU))) 
                    << 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
        = ((0xff1fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d) 
           | (((0x17U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xaU))) << 0x17U) 
              | (((0x16U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0xaU))) << 0x16U) 
                 | ((0x15U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0xaU))) 
                    << 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
        = ((0xf8ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d) 
           | (((0x1aU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xaU))) << 0x1aU) 
              | (((0x19U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0xaU))) << 0x19U) 
                 | ((0x18U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0xaU))) 
                    << 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
        = ((0xc7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d) 
           | (((0x1dU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xaU))) << 0x1dU) 
              | (((0x1cU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0xaU))) << 0x1cU) 
                 | ((0x1bU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0xaU))) 
                    << 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
        = ((0x3fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d) 
           | (((0x1fU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xaU))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                     >> 0xaU))) << 0x1eU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
        = ((0xfffffff8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
           | (((2U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 5U))) << 2U) | (
                                                   ((1U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                         >> 5U))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                          >> 5U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
        = ((0xffffffc7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
           | (((5U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 5U))) << 5U) | (
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                         >> 5U))) 
                                                    << 4U) 
                                                   | ((3U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                           >> 5U))) 
                                                      << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
        = ((0xfffffe3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
           | (((8U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 5U))) << 8U) | (
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                         >> 5U))) 
                                                    << 7U) 
                                                   | ((6U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                           >> 5U))) 
                                                      << 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
        = ((0xfffff1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
           | (((0xbU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                  >> 5U))) << 0xbU) 
              | (((0xaU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                     >> 5U))) << 0xaU) 
                 | ((9U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                     >> 5U))) << 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
        = ((0xffff8fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
           | (((0xeU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                  >> 5U))) << 0xeU) 
              | (((0xdU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                     >> 5U))) << 0xdU) 
                 | ((0xcU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       >> 5U))) << 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
        = ((0xfffc7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
           | (((0x11U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 5U))) << 0x11U) 
              | (((0x10U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 5U))) << 0x10U) 
                 | ((0xfU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       >> 5U))) << 0xfU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
        = ((0xffe3ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
           | (((0x14U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 5U))) << 0x14U) 
              | (((0x13U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 5U))) << 0x13U) 
                 | ((0x12U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) << 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
        = ((0xff1fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
           | (((0x17U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 5U))) << 0x17U) 
              | (((0x16U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 5U))) << 0x16U) 
                 | ((0x15U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) << 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
        = ((0xf8ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
           | (((0x1aU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 5U))) << 0x1aU) 
              | (((0x19U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 5U))) << 0x19U) 
                 | ((0x18U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) << 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
        = ((0xc7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
           | (((0x1dU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 5U))) << 0x1dU) 
              | (((0x1cU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 5U))) << 0x1cU) 
                 | ((0x1bU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) << 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
        = ((0x3fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
           | (((0x1fU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 5U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                     >> 5U))) << 0x1eU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
           | (((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                             >> 0x14U))) << 2U) | (
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                         >> 0x14U))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                          >> 0x14U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d 
        = ((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
           | ((3U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                            >> 0x14U))) << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffffff8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | (((2U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 0xfU))) << 2U) | 
              (((1U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                 >> 0xfU))) << 1U) 
               | (0U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                  >> 0xfU))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffffffc7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | (((5U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 0xfU))) << 5U) | 
              (((4U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                 >> 0xfU))) << 4U) 
               | ((3U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xfU))) << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffffe3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | (((8U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 0xfU))) << 8U) | 
              (((7U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                 >> 0xfU))) << 7U) 
               | ((6U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xfU))) << 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffff1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | (((0xbU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                  >> 0xfU))) << 0xbU) 
              | (((0xaU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                     >> 0xfU))) << 0xaU) 
                 | ((9U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                     >> 0xfU))) << 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffff8fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | (((0xeU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                  >> 0xfU))) << 0xeU) 
              | (((0xdU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                     >> 0xfU))) << 0xdU) 
                 | ((0xcU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       >> 0xfU))) << 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xfffc7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | (((0x11U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xfU))) << 0x11U) 
              | (((0x10U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0xfU))) << 0x10U) 
                 | ((0xfU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       >> 0xfU))) << 0xfU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xffe3ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | (((0x14U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xfU))) << 0x14U) 
              | (((0x13U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0xfU))) << 0x13U) 
                 | ((0x12U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0xfU))) 
                    << 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xff1fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | (((0x17U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xfU))) << 0x17U) 
              | (((0x16U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0xfU))) << 0x16U) 
                 | ((0x15U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0xfU))) 
                    << 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xf8ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | (((0x1aU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xfU))) << 0x1aU) 
              | (((0x19U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0xfU))) << 0x19U) 
                 | ((0x18U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0xfU))) 
                    << 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0xc7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | (((0x1dU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xfU))) << 0x1dU) 
              | (((0x1cU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0xfU))) << 0x1cU) 
                 | ((0x1bU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0xfU))) 
                    << 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = ((0x3fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
           | (((0x1fU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0xfU))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                     >> 0xfU))) << 0x1eU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xfff8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | (((2U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                               >> 0x16U))) << 2U) | 
              (((1U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 0x16U))) << 1U) 
               | (0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                 >> 0x16U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xffc7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | (((5U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                               >> 0x16U))) << 5U) | 
              (((4U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 0x16U))) << 4U) 
               | ((3U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                  >> 0x16U))) << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((0xfe3fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
           | (((8U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                               >> 0x16U))) << 8U) | 
              (((7U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 0x16U))) << 7U) 
               | ((6U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                  >> 0x16U))) << 6U))));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__inst_real_rd_size 
        = ((4U == ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
                    ? 2U : 4U)) ? 2U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
                                         ? 2U : 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__ret_num_add_one 
        = ((2U & (VL_REDXOR_2(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num) 
                  << 1U)) | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag 
                << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index) 
                             << 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset)))
            : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag 
                << 0xcU) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index) 
                            << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode 
        = ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
           | (3U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))));
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
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                  >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable)));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                  >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_last 
        = (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_ena 
        = (1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)) 
                  | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next 
        = (0x1ffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                     + (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                 >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__m0_bready = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bready) 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                      >> 2U) 
                                                     | (~ (IData)(vlSelf->enable_delay))));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one 
        = ((2U & (VL_REDXOR_2(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num) 
                  << 1U)) | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                             << 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                << 0xcU) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                            << 4U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type = 4U;
    }
    __Vtableidx5 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value 
        = Vsimu_top__ConstPool__TABLE_hb8238e9e_0[__Vtableidx5];
    __Vtableidx8 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value 
        = Vsimu_top__ConstPool__TABLE_hf182b53e_0[__Vtableidx8];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid)) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                 | (~ ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num)) 
                       & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))))));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_size 
        = ((1U & (- (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 0x1fU)))) | (2U & (- (IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                             >> 0x1eU)))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_ena 
        = (1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en)) 
                  | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
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
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next 
        = ((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
             & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
            | ((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)))) 
           | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
              & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next 
        = ((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
             & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
            | ((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)))) 
           | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
              & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
              >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int 
        = (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                    >> 2U) & (0U != (0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                  >> 1U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr) 
                            >> 5U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce 
        = ((0xeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce)) 
           | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce 
        = ((0xdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce)) 
           | (2U & (((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o)
                      : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                          ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                             >> 1U) : ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                                        ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                                           >> 2U) : 
                                       ((~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                                            >> 0xbU)) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                                           >> 3U))))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce 
        = ((0xbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce)) 
           | (4U & (((0x10000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o)
                      : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                          ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                             >> 1U) : ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                                        ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                                           >> 2U) : 
                                       ((~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                                            >> 0x13U)) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                                           >> 3U))))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce 
        = ((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce)) 
           | (8U & (((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o)
                      : ((0x2000000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                          ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                             >> 1U) : ((0x4000000U 
                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                                        ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                                           >> 2U) : 
                                       ((~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                                            >> 0x1bU)) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                                           >> 3U))))) 
                    << 3U)));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c94d657__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x1fU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x1fU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x1eU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x1eU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x1dU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x1dU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x1cU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x1cU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x1bU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x1bU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x1aU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x1aU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x19U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x19U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x18U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x18U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x17U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x17U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x16U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x16U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x15U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x15U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x14U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x14U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x13U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x13U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x12U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x12U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x11U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x11U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0x10U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0x10U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0xfU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0xfU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0xeU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0xeU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0xdU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0xdU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0xcU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0xcU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0xbU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0xbU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0xaU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0xaU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[9U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [9U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[8U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [8U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[7U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [7U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[6U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [6U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[5U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [5U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [4U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [3U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [2U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o
        [0U];
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
    vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [0U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 0U;
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 0U;
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [1U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 1U));
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rid = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [0U];
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [1U];
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [2U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 2U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [2U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rvalid = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid));
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 1U));
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 2U));
    }
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 3U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [0U];
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [1U];
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [2U];
    }
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [3U];
    }
    if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 4U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 4U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [4U];
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                       << 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029 
        = ((0x3ffbU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029)) 
           | (4U & ((0xfffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                   >> 8U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                                             << 2U))) 
                    | ((IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                       << 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029 
        = ((0x3ff7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029)) 
           | (8U & ((0x3ffff8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                   >> 0xaU) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1800U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                                               << 3U))) 
                    | ((IData)((0x1800U == (0x1800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                       << 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029 
        = ((0x3fefU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029)) 
           | (0x10U & ((0xffff0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                     >> 0xcU) & ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                                                 << 4U))) 
                       | ((IData)((0xc000U == (0xc000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                          << 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((IData)((4U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                      | (IData)((8U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                     | (IData)((0x10U == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                    | (IData)((0x1cU == (0x1cU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig)) 
           | (2U & (((((IData)((0x20U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                       | (IData)((0x40U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                      | (IData)((0x80U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                     | (IData)((0xe0U == (0xe0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                    << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig)) 
           | (4U & (((((IData)((0x100U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                       | (IData)((0x200U == (0x700U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                      | (IData)((0x400U == (0x700U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                     | (IData)((0x700U == (0x700U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                    << 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig)) 
           | (8U & (((((IData)((0x800U == (0x3800U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                       | (IData)((0x1000U == (0x3800U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                      | (IData)((0x2000U == (0x3800U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                     | (IData)((0x3800U == (0x3800U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                    << 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & (((((IData)((0x4000U == (0x1c000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData))) 
                          | (IData)((0x8000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                         | (IData)((0x10000U == (0x1c000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                        | (IData)((0x1c000U == (0x1c000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData)))) 
                       << 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029 
        = ((0x3ffeU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029)) 
           | (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                      >> 4U) & (IData)((0U != (0xcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData)))) 
                    | (IData)((0xcU == (0xcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029 
        = ((0x3ffdU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029)) 
           | (2U & ((0x3fffffeU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                    >> 6U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x60U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData))) 
                                              << 1U))) 
                    | ((IData)((0x60U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData))) 
                       << 1U))));
}
