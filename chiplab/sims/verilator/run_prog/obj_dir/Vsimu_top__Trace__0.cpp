// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__trace_chg_sub_0(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_sub_1(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_sub_2(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_sub_3(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_sub_4(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_sub_5(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_sub_6(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_sub_7(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_sub_8(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vsimu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_top_0\n"); );
    // Init
    Vsimu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimu_top___024root*>(voidSelf);
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsimu_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
    Vsimu_top___024root__trace_chg_sub_1((&vlSymsp->TOP), bufp);
    Vsimu_top___024root__trace_chg_sub_2((&vlSymsp->TOP), bufp);
    Vsimu_top___024root__trace_chg_sub_3((&vlSymsp->TOP), bufp);
    Vsimu_top___024root__trace_chg_sub_4((&vlSymsp->TOP), bufp);
    Vsimu_top___024root__trace_chg_sub_5((&vlSymsp->TOP), bufp);
    Vsimu_top___024root__trace_chg_sub_6((&vlSymsp->TOP), bufp);
    Vsimu_top___024root__trace_chg_sub_7((&vlSymsp->TOP), bufp);
    Vsimu_top___024root__trace_chg_sub_8((&vlSymsp->TOP), bufp);
}

void Vsimu_top___024root__trace_chg_sub_0(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_h1299317e__0;
    VlWide<4>/*127:0*/ __Vtemp_h4e2f141e__0;
    VlWide<4>/*127:0*/ __Vtemp_h07a051bc__0;
    VlWide<4>/*127:0*/ __Vtemp_h3677a3f3__0;
    VlWide<4>/*127:0*/ __Vtemp_h678ca1a5__0;
    VlWide<4>/*127:0*/ __Vtemp_ha986c18e__0;
    VlWide<4>/*127:0*/ __Vtemp_hda7f0c9f__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[2]),2);
        bufp->chgCData(oldp+3,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[3]),2);
        bufp->chgCData(oldp+4,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[4]),2);
        bufp->chgCData(oldp+5,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[0]),2);
        bufp->chgCData(oldp+6,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[1]),2);
        bufp->chgCData(oldp+7,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[2]),2);
        bufp->chgCData(oldp+8,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[3]),2);
        bufp->chgCData(oldp+9,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[4]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+10,(vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr),32);
        bufp->chgCData(oldp+11,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen))),4);
        bufp->chgCData(oldp+12,(vlSelf->simu_top__DOT__soc__DOT__cpu_awsize),3);
        bufp->chgBit(oldp+13,(vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid));
        bufp->chgIData(oldp+14,(vlSelf->simu_top__DOT__soc__DOT__cpu_wdata),32);
        bufp->chgCData(oldp+15,(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb),4);
        bufp->chgBit(oldp+16,(vlSelf->simu_top__DOT__soc__DOT__cpu_wlast));
        bufp->chgBit(oldp+17,(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid));
        bufp->chgCData(oldp+18,(vlSelf->simu_top__DOT__soc__DOT__m0_bid),4);
        bufp->chgCData(oldp+19,(vlSelf->simu_top__DOT__soc__DOT__m0_bresp),2);
        bufp->chgBit(oldp+20,(vlSelf->simu_top__DOT__soc__DOT__cpu_bready));
        bufp->chgCData(oldp+21,(vlSelf->simu_top__DOT__soc__DOT__cpu_arid),4);
        bufp->chgIData(oldp+22,(vlSelf->simu_top__DOT__soc__DOT__cpu_araddr),32);
        bufp->chgCData(oldp+23,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen))),4);
        bufp->chgCData(oldp+24,(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize),3);
        bufp->chgBit(oldp+25,(vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid));
        bufp->chgCData(oldp+26,(vlSelf->simu_top__DOT__soc__DOT__m0_rid),4);
        bufp->chgCData(oldp+27,(vlSelf->simu_top__DOT__soc__DOT__m0_rresp),2);
        bufp->chgBit(oldp+28,(vlSelf->simu_top__DOT__soc__DOT__m0_rlast));
        bufp->chgBit(oldp+29,(vlSelf->simu_top__DOT__soc__DOT__cpu_rready));
        bufp->chgBit(oldp+30,(vlSelf->simu_top__DOT__soc__DOT__m0_awready));
        bufp->chgBit(oldp+31,(vlSelf->simu_top__DOT__soc__DOT__m0_wready));
        bufp->chgBit(oldp+32,(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid));
        bufp->chgBit(oldp+33,(vlSelf->simu_top__DOT__soc__DOT__m0_arready));
        bufp->chgBit(oldp+34,(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid));
        bufp->chgBit(oldp+35,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
        bufp->chgBit(oldp+36,(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
        bufp->chgCData(oldp+37,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data),4);
        bufp->chgBit(oldp+38,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
        bufp->chgBit(oldp+39,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
        bufp->chgCData(oldp+40,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid),4);
        bufp->chgBit(oldp+41,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
        bufp->chgBit(oldp+42,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
        bufp->chgBit(oldp+43,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
        bufp->chgBit(oldp+44,(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
        bufp->chgCData(oldp+45,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data),4);
        bufp->chgBit(oldp+46,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
        bufp->chgBit(oldp+47,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
        bufp->chgCData(oldp+48,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid),4);
        bufp->chgIData(oldp+49,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg),32);
        bufp->chgBit(oldp+50,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast));
        bufp->chgBit(oldp+51,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid));
        bufp->chgBit(oldp+52,(vlSelf->simu_top__DOT__soc__DOT__apb_s_awready));
        bufp->chgBit(oldp+53,(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready));
        bufp->chgCData(oldp+54,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id),4);
        bufp->chgBit(oldp+55,(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid));
        bufp->chgBit(oldp+56,(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready));
        bufp->chgCData(oldp+57,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id),4);
        bufp->chgIData(oldp+58,(((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                  ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
                                  : ((1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                      ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                         << 8U) : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                    << 0x10U)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                     ? 
                                                    (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                     << 0x18U)
                                                     : 0U))))),32);
        bufp->chgBit(oldp+59,(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast));
        bufp->chgBit(oldp+60,(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid));
        bufp->chgIData(oldp+61,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr),32);
        bufp->chgIData(oldp+62,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr),32);
        bufp->chgIData(oldp+63,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata),32);
        bufp->chgCData(oldp+64,(((IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_int) 
                                 << 1U)),8);
        bufp->chgBit(oldp+65,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                     >> 1U))));
        bufp->chgBit(oldp+66,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))));
        bufp->chgBit(oldp+67,(vlSelf->simu_top__DOT__soc__DOT__uart0_int));
        bufp->chgBit(oldp+68,((IData)(((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                         >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)))));
        bufp->chgBit(oldp+69,(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe));
        bufp->chgBit(oldp+70,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                                     ^ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                        >> 3U)))));
        bufp->chgBit(oldp+71,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)))));
        bufp->chgBit(oldp+72,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) 
                               & ((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                   >> 0xeU)))
                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                   : ((0U != (0x3fU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                 >> 0xeU))) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))))));
        bufp->chgIData(oldp+73,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                  ? ((((0U != (0x3fU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU)))
                                        ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                           >> 8U) : 0U) 
                                      << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao))
                                  : 0U)),32);
        bufp->chgBit(oldp+74,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant));
        bufp->chgBit(oldp+75,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ));
        bufp->chgBit(oldp+76,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                               & ((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                   >> 0xeU)))
                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                   : ((0U != (0x3fU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                 >> 0xeU))) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))))));
        bufp->chgBit(oldp+77,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr));
        bufp->chgBit(oldp+78,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu));
        bufp->chgBit(oldp+79,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu));
        bufp->chgIData(oldp+80,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr),20);
        bufp->chgCData(oldp+81,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu),8);
        bufp->chgCData(oldp+82,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu),8);
        bufp->chgBit(oldp+83,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu));
        bufp->chgIData(oldp+84,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                  ? 0U : ((0U != (0x3fU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                     >> 0xeU)))
                                           ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                              >> 8U)
                                           : 0U))),24);
        bufp->chgIData(oldp+85,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr),24);
        bufp->chgBit(oldp+86,((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+87,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab));
        bufp->chgBit(oldp+88,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw));
        bufp->chgBit(oldp+89,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel));
        bufp->chgIData(oldp+90,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr),20);
        bufp->chgCData(oldp+91,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai),8);
        bufp->chgCData(oldp+92,((0xffU & ((4U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                           ? ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                               ? ((1U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg)
                                                    : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))
                                                   : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr))
                                               : ((1U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr)
                                                   : 0U))
                                           : ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                               ? ((1U 
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
                                               : ((1U 
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
                                                    >> 3U))))))),8);
        bufp->chgBit(oldp+93,((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+94,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab));
        bufp->chgBit(oldp+95,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel));
        bufp->chgIData(oldp+96,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai),32);
        bufp->chgIData(oldp+97,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T),32);
        bufp->chgBit(oldp+98,(((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                >> 0xeU)))
                                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                : ((0U != (0x3fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                            >> 0xeU))) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab)))));
        bufp->chgBit(oldp+99,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel));
        bufp->chgBit(oldp+100,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab));
        bufp->chgIData(oldp+101,((0xffffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                                   >> 8U)
                                                : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr))),24);
        bufp->chgIData(oldp+102,(((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                   >> 0xeU)))
                                   ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                      >> 8U) : 0U)),24);
        bufp->chgCData(oldp+103,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao),8);
        bufp->chgBit(oldp+104,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))));
        bufp->chgBit(oldp+105,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready));
        bufp->chgBit(oldp+106,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd));
        bufp->chgCData(oldp+107,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm),4);
        bufp->chgCData(oldp+108,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb),4);
        bufp->chgCData(oldp+109,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb),4);
        bufp->chgIData(oldp+110,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32),32);
        bufp->chgIData(oldp+111,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32),32);
        bufp->chgCData(oldp+112,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count),3);
        bufp->chgCData(oldp+113,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size),3);
        bufp->chgCData(oldp+114,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size),3);
        bufp->chgBit(oldp+115,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int));
        bufp->chgSData(oldp+116,((0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),11);
        bufp->chgCData(oldp+117,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0),4);
        bufp->chgCData(oldp+118,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1),4);
        bufp->chgCData(oldp+119,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1),2);
        bufp->chgCData(oldp+120,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2),2);
        bufp->chgSData(oldp+121,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c),14);
        bufp->chgIData(oldp+122,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r),25);
        bufp->chgIData(oldp+123,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num),32);
        bufp->chgIData(oldp+124,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter),32);
        bufp->chgIData(oldp+125,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0),32);
        bufp->chgIData(oldp+126,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1),32);
        bufp->chgIData(oldp+127,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0),32);
        bufp->chgIData(oldp+128,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1),32);
        bufp->chgIData(oldp+129,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command),32);
        bufp->chgSData(oldp+130,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing),16);
        bufp->chgQData(oldp+131,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die),38);
        bufp->chgCData(oldp+133,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE),5);
        bufp->chgIData(oldp+134,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM),32);
        bufp->chgSData(oldp+135,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT),14);
        bufp->chgSData(oldp+136,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT),14);
        bufp->chgBit(oldp+137,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack));
        bufp->chgBit(oldp+138,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE));
        bufp->chgBit(oldp+139,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
        bufp->chgSData(oldp+140,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                             >> 0x10U))),14);
        bufp->chgCData(oldp+141,((7U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+142,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                          >> 8U))),4);
        bufp->chgBit(oldp+143,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                      >> 8U))));
        bufp->chgBit(oldp+144,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                      >> 9U))));
        bufp->chgBit(oldp+145,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                      >> 0xdU))));
        bufp->chgBit(oldp+146,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x40U == (0x7ffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
        bufp->chgBit(oldp+147,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY));
        bufp->chgBit(oldp+148,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0));
        bufp->chgBit(oldp+149,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1));
        bufp->chgBit(oldp+150,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2));
        bufp->chgBit(oldp+151,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3));
        bufp->chgBit(oldp+152,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x10U == (0x7ffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
        bufp->chgBit(oldp+153,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x14U == (0x7ffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
        bufp->chgBit(oldp+154,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6));
        bufp->chgBit(oldp+155,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7));
        bufp->chgBit(oldp+156,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8));
        bufp->chgBit(oldp+157,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9));
        bufp->chgBit(oldp+158,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10));
        bufp->chgBit(oldp+159,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11));
        bufp->chgBit(oldp+160,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT));
        bufp->chgBit(oldp+161,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
        bufp->chgCData(oldp+162,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status),8);
        bufp->chgCData(oldp+163,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number),2);
        bufp->chgQData(oldp+164,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM),48);
        bufp->chgIData(oldp+166,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD),32);
        bufp->chgCData(oldp+167,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o),4);
        bufp->chgCData(oldp+168,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i),4);
        bufp->chgCData(oldp+169,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer),2);
        bufp->chgCData(oldp+170,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT),3);
        bufp->chgCData(oldp+171,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM),8);
        bufp->chgCData(oldp+172,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM),8);
        bufp->chgCData(oldp+173,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND),8);
        bufp->chgCData(oldp+174,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE),5);
        bufp->chgCData(oldp+175,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM),3);
        bufp->chgSData(oldp+176,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count),14);
        bufp->chgQData(oldp+177,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR),38);
        bufp->chgIData(oldp+179,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR),32);
        bufp->chgBit(oldp+180,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO));
        bufp->chgBit(oldp+181,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK));
        bufp->chgBit(oldp+182,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE));
        bufp->chgBit(oldp+183,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL));
        bufp->chgBit(oldp+184,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half));
        bufp->chgBit(oldp+185,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob));
        bufp->chgCData(oldp+186,((0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),8);
        bufp->chgBit(oldp+187,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we));
        bufp->chgBit(oldp+188,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re));
        bufp->chgBit(oldp+189,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
        bufp->chgBit(oldp+190,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en));
        bufp->chgBit(oldp+191,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode));
        bufp->chgCData(oldp+192,((7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),3);
        bufp->chgBit(oldp+193,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable));
        bufp->chgBit(oldp+194,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad));
        bufp->chgCData(oldp+195,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier),4);
        bufp->chgCData(oldp+196,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir),4);
        bufp->chgCData(oldp+197,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr),2);
        bufp->chgCData(oldp+198,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr),5);
        bufp->chgBit(oldp+199,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared));
        bufp->chgBit(oldp+200,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol));
        bufp->chgCData(oldp+201,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr),8);
        bufp->chgCData(oldp+202,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr),8);
        bufp->chgIData(oldp+203,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl),24);
        bufp->chgBit(oldp+204,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc));
        bufp->chgBit(oldp+205,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+206,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset));
        bufp->chgSData(oldp+207,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc),16);
        bufp->chgCData(oldp+208,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level),4);
        bufp->chgBit(oldp+209,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset));
        bufp->chgBit(oldp+210,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset));
        bufp->chgBit(oldp+211,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+212,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                      >> 2U))));
        bufp->chgBit(oldp+213,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                         >> 2U)))));
        bufp->chgBit(oldp+214,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg));
        bufp->chgBit(oldp+215,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg));
        bufp->chgCData(oldp+216,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg),8);
        bufp->chgCData(oldp+217,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg),8);
        bufp->chgCData(oldp+218,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count),8);
        bufp->chgCData(oldp+219,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg),3);
        bufp->chgBit(oldp+220,((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+221,((1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+222,((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+223,((3U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+224,((((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                 | (1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                   & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                         >> 2U))))));
        bufp->chgBit(oldp+225,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                      >> 3U))));
        bufp->chgBit(oldp+226,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                      >> 4U))));
        bufp->chgBit(oldp+227,((1U & (((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                        ? ((0xcU & 
                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                             << 2U)) 
                                           | ((2U & 
                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                >> 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                    >> 3U))))
                                        : ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                           << 1U)) 
                                      >> 3U))));
        bufp->chgBit(oldp+228,((1U & (((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                        ? ((0xcU & 
                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                             << 2U)) 
                                           | ((2U & 
                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                >> 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                    >> 3U))))
                                        : ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                           << 1U)) 
                                      >> 2U))));
        bufp->chgBit(oldp+229,((1U & (((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                        ? ((0xcU & 
                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                             << 2U)) 
                                           | ((2U & 
                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                >> 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                    >> 3U))))
                                        : ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                           << 1U)) 
                                      >> 1U))));
        bufp->chgBit(oldp+230,((1U & ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                       ? ((0xcU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                   << 2U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                               >> 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                   >> 3U))))
                                       : ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                          << 1U)))));
        bufp->chgCData(oldp+231,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr),8);
        bufp->chgBit(oldp+232,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
        bufp->chgBit(oldp+233,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
        bufp->chgBit(oldp+234,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                      >> 1U))));
        bufp->chgBit(oldp+235,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out))));
        bufp->chgBit(oldp+236,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                      >> 2U))));
        bufp->chgBit(oldp+237,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5));
        bufp->chgBit(oldp+238,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6));
        bufp->chgBit(oldp+239,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
        bufp->chgBit(oldp+240,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r));
        bufp->chgBit(oldp+241,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r));
        bufp->chgBit(oldp+242,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r));
        bufp->chgBit(oldp+243,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r));
        bufp->chgBit(oldp+244,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r));
        bufp->chgBit(oldp+245,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r));
        bufp->chgBit(oldp+246,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r));
        bufp->chgBit(oldp+247,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r));
        bufp->chgBit(oldp+248,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask));
        bufp->chgBit(oldp+249,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
        bufp->chgBit(oldp+250,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
        bufp->chgBit(oldp+251,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int));
        bufp->chgBit(oldp+252,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
        bufp->chgBit(oldp+253,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int));
        bufp->chgBit(oldp+254,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push));
        bufp->chgBit(oldp+255,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop));
        bufp->chgSData(oldp+256,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out),11);
        bufp->chgBit(oldp+257,((0U != (((((((((((((
                                                   ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [0U] 
                                                     | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [1U]) 
                                                    | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [2U]) 
                                                   | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [3U]) 
                                                  | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [4U]) 
                                                 | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [5U]) 
                                                | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [6U]) 
                                               | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [7U]) 
                                              | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [8U]) 
                                             | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [9U]) 
                                            | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [0xaU]) 
                                           | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [0xbU]) 
                                          | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                          [0xcU]) | 
                                         vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                         [0xdU]) | 
                                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0xeU]) | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xfU]))));
        bufp->chgCData(oldp+258,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count),5);
        bufp->chgCData(oldp+259,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count),5);
        bufp->chgCData(oldp+260,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate),3);
        bufp->chgCData(oldp+261,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate),4);
        bufp->chgSData(oldp+262,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t),10);
        bufp->chgBit(oldp+263,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+264,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt),8);
        bufp->chgCData(oldp+265,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value),8);
        bufp->chgBit(oldp+266,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                      | ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
                                         & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                                == 
                                                (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))))) 
                                            | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))))))));
        bufp->chgBit(oldp+267,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                  == (7U & ((IData)(1U) 
                                            + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                & (2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))))));
        bufp->chgBit(oldp+268,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out));
        bufp->chgBit(oldp+269,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in));
        bufp->chgBit(oldp+270,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
        bufp->chgBit(oldp+271,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+272,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read));
        bufp->chgBit(oldp+273,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read));
        bufp->chgBit(oldp+274,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read));
        bufp->chgBit(oldp+275,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write));
        bufp->chgCData(oldp+276,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+277,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d));
        bufp->chgBit(oldp+278,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d));
        bufp->chgBit(oldp+279,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d));
        bufp->chgBit(oldp+280,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d));
        bufp->chgBit(oldp+281,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d));
        bufp->chgBit(oldp+282,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d));
        bufp->chgBit(oldp+283,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d));
        bufp->chgBit(oldp+284,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d));
        bufp->chgSData(oldp+285,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt),9);
        bufp->chgSData(oldp+286,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next),9);
        bufp->chgBit(oldp+287,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                                       ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                                      >> 8U))));
        bufp->chgBit(oldp+288,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d));
        bufp->chgBit(oldp+289,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d));
        bufp->chgBit(oldp+290,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d));
        bufp->chgBit(oldp+291,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d));
        bufp->chgBit(oldp+292,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d));
        bufp->chgBit(oldp+293,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)))));
        bufp->chgBit(oldp+294,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)))));
        bufp->chgBit(oldp+295,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)))));
        bufp->chgBit(oldp+296,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)))));
        bufp->chgBit(oldp+297,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)))));
        bufp->chgBit(oldp+298,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+299,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+300,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+301,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+302,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+303,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read));
        bufp->chgBit(oldp+304,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgBit(oldp+305,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable));
        bufp->chgCData(oldp+306,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+307,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+308,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+309,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+310,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+311,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+312,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+313,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+314,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+315,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+316,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+317,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+318,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+319,((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+320,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+321,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+322,((0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                          - (IData)(1U)))),4);
        bufp->chgSData(oldp+323,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+324,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                                           >> 2U))),8);
        bufp->chgCData(oldp+325,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
        bufp->chgCData(oldp+326,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+327,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+328,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+329,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+330,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+331,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+332,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+333,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+334,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+335,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+336,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+337,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+338,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+339,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+340,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+341,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+342,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+343,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+344,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+345,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U]),3);
        bufp->chgCData(oldp+346,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]),3);
        bufp->chgCData(oldp+347,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [2U]),3);
        bufp->chgCData(oldp+348,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [3U]),3);
        bufp->chgCData(oldp+349,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [4U]),3);
        bufp->chgCData(oldp+350,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [5U]),3);
        bufp->chgCData(oldp+351,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [6U]),3);
        bufp->chgCData(oldp+352,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [7U]),3);
        bufp->chgCData(oldp+353,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [8U]),3);
        bufp->chgCData(oldp+354,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [9U]),3);
        bufp->chgCData(oldp+355,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xaU]),3);
        bufp->chgCData(oldp+356,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xbU]),3);
        bufp->chgCData(oldp+357,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xcU]),3);
        bufp->chgCData(oldp+358,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xdU]),3);
        bufp->chgCData(oldp+359,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xeU]),3);
        bufp->chgCData(oldp+360,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xfU]),3);
        bufp->chgCData(oldp+361,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                           >> 3U))),8);
        bufp->chgCData(oldp+362,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+363,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+364,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+365,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+366,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+367,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+368,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+369,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+370,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+371,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+372,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+373,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+374,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+375,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+376,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+377,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgBit(oldp+378,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                                & (((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                    | (1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                      & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                            >> 2U)))))));
        bufp->chgCData(oldp+379,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+380,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+381,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+382,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+383,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+384,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+385,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+386,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error));
        bufp->chgCData(oldp+387,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time),3);
        bufp->chgCData(oldp+388,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
        bufp->chgBit(oldp+389,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+390,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak),8);
        bufp->chgCData(oldp+391,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+392,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+393,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgCData(oldp+394,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+395,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+396,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+397,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+398,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+399,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+400,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+401,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+402,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+403,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+404,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+405,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+406,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+407,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+408,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+409,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+410,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit),5);
        bufp->chgCData(oldp+411,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit),5);
        bufp->chgCData(oldp+412,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit),5);
        bufp->chgCData(oldp+413,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit),5);
        bufp->chgCData(oldp+414,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready),5);
        bufp->chgCData(oldp+415,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready),5);
        bufp->chgCData(oldp+416,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid),5);
        bufp->chgCData(oldp+417,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready),5);
        bufp->chgCData(oldp+418,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast),5);
        bufp->chgCData(oldp+419,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid),5);
        bufp->chgCData(oldp+420,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0]),4);
        bufp->chgCData(oldp+421,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1]),4);
        bufp->chgCData(oldp+422,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2]),4);
        bufp->chgCData(oldp+423,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3]),4);
        bufp->chgCData(oldp+424,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4]),4);
        bufp->chgCData(oldp+425,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0]),4);
        bufp->chgCData(oldp+426,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1]),4);
        bufp->chgCData(oldp+427,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2]),4);
        bufp->chgCData(oldp+428,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3]),4);
        bufp->chgCData(oldp+429,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4]),4);
        bufp->chgCData(oldp+430,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0),3);
        bufp->chgCData(oldp+431,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1),3);
        bufp->chgCData(oldp+432,((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid))),3);
        bufp->chgCData(oldp+433,((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+434,((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid))),3);
        bufp->chgCData(oldp+435,((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+436,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty));
        bufp->chgBit(oldp+437,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full));
        bufp->chgBit(oldp+438,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty));
        bufp->chgBit(oldp+439,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full));
        bufp->chgCData(oldp+440,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir),3);
        bufp->chgCData(oldp+441,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir),3);
        bufp->chgCData(oldp+442,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel),3);
        bufp->chgBit(oldp+443,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog));
        bufp->chgCData(oldp+444,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg),3);
        bufp->chgCData(oldp+445,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel),3);
        bufp->chgIData(oldp+446,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int),32);
        bufp->chgBit(oldp+447,((1U & (~ ((0x1fe0U == 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                           >> 0x10U)) 
                                         | ((0x1fafU 
                                             == (0x1fffU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                                    >> 0x10U))) 
                                            | (0x1fd0U 
                                               == (0x1fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                                      >> 0x10U)))))))));
        bufp->chgCData(oldp+448,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir),3);
        bufp->chgCData(oldp+449,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir),3);
        bufp->chgCData(oldp+450,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel),3);
        bufp->chgBit(oldp+451,((1U & (~ (((0x1fafU 
                                           == (0x1fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                  >> 0x10U))) 
                                          | (0x1fd0U 
                                             == (0x1fffU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                    >> 0x10U)))) 
                                         | (0x1fe0U 
                                            == (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                >> 0x10U)))))));
        bufp->chgIData(oldp+452,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int),32);
        bufp->chgCData(oldp+453,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[0]),3);
        bufp->chgCData(oldp+454,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[1]),3);
        bufp->chgCData(oldp+455,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+456,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr),2);
        bufp->chgBit(oldp+457,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr))));
        bufp->chgBit(oldp+458,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
        bufp->chgIData(oldp+459,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i),32);
        bufp->chgCData(oldp+460,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[0]),3);
        bufp->chgCData(oldp+461,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[1]),3);
        bufp->chgCData(oldp+462,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+463,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr),2);
        bufp->chgBit(oldp+464,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr))));
        bufp->chgBit(oldp+465,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
        bufp->chgIData(oldp+466,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i),32);
        bufp->chgQData(oldp+467,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)) 
                                   << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                       << 4U) 
                                                      | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        bufp->chgIData(oldp+469,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                                   >> 2U)) 
                                   << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))),32);
        bufp->chgIData(oldp+470,(((((- (IData)((0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
                                   | ((- (IData)((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                      & ((((IData)(1U) 
                                           + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                              >> 2U)) 
                                          << 2U) | 
                                         (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)))) 
                                  | ((- (IData)((2U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
        bufp->chgIData(oldp+471,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
        bufp->chgCData(oldp+472,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst),2);
        bufp->chgBit(oldp+473,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+474,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+475,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgCData(oldp+476,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid),4);
        bufp->chgCData(oldp+477,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen),4);
        bufp->chgBit(oldp+478,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
        bufp->chgCData(oldp+479,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize),3);
        bufp->chgBit(oldp+480,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
        bufp->chgQData(oldp+481,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_araddr)) 
                                   << 0xdU) | (QData)((IData)(
                                                              (0x800U 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize) 
                                                                   << 8U) 
                                                                  | ((0xf0U 
                                                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen) 
                                                                         << 4U)) 
                                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arid)))))))),45);
        bufp->chgQData(oldp+483,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas),45);
        bufp->chgIData(oldp+485,((IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                          >> 0xdU))),32);
        bufp->chgCData(oldp+486,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 0xbU)))),2);
        bufp->chgCData(oldp+487,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas))),4);
        bufp->chgCData(oldp+488,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+489,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 8U)))),3);
        bufp->chgBit(oldp+490,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid));
        bufp->chgCData(oldp+491,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur),4);
        bufp->chgQData(oldp+492,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                   << 0xdU) | (QData)((IData)(
                                                              (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                      << 4U) 
                                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        bufp->chgIData(oldp+494,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                                   >> 2U)) 
                                   << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr))),32);
        bufp->chgIData(oldp+495,(((((- (IData)((0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
                                   | ((- (IData)((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                      & ((((IData)(1U) 
                                           + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                              >> 2U)) 
                                          << 2U) | 
                                         (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) 
                                  | ((- (IData)((2U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
        bufp->chgIData(oldp+496,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
        bufp->chgCData(oldp+497,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst),2);
        bufp->chgBit(oldp+498,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+499,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+500,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgCData(oldp+501,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid),4);
        bufp->chgCData(oldp+502,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen),4);
        bufp->chgCData(oldp+503,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize),3);
        bufp->chgBit(oldp+504,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
        bufp->chgQData(oldp+505,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr)) 
                                   << 0xdU) | (QData)((IData)(
                                                              (0x801U 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awsize) 
                                                                   << 8U) 
                                                                  | (0xf0U 
                                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen) 
                                                                        << 4U)))))))),45);
        bufp->chgQData(oldp+507,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas),45);
        bufp->chgIData(oldp+509,((IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                          >> 0xdU))),32);
        bufp->chgCData(oldp+510,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 0xbU)))),2);
        bufp->chgCData(oldp+511,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas))),4);
        bufp->chgCData(oldp+512,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+513,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 8U)))),3);
        bufp->chgBit(oldp+514,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid));
        bufp->chgBit(oldp+515,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out));
        bufp->chgBit(oldp+516,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
        bufp->chgCData(oldp+517,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas),4);
        bufp->chgBit(oldp+518,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
        bufp->chgCData(oldp+519,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb),4);
        bufp->chgBit(oldp+520,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
        bufp->chgBit(oldp+521,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid));
        bufp->chgIData(oldp+522,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0),32);
        bufp->chgIData(oldp+523,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1),32);
        bufp->chgIData(oldp+524,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2),32);
        bufp->chgIData(oldp+525,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3),32);
        bufp->chgIData(oldp+526,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4),32);
        bufp->chgIData(oldp+527,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5),32);
        bufp->chgIData(oldp+528,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6),32);
        bufp->chgIData(oldp+529,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7),32);
        bufp->chgIData(oldp+530,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data),32);
        bufp->chgIData(oldp+531,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data),32);
        bufp->chgIData(oldp+532,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data),32);
        bufp->chgIData(oldp+533,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data),32);
        bufp->chgIData(oldp+534,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),32);
        bufp->chgIData(oldp+535,(((2U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                         << 1U)) | 
                                  (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))))),32);
        bufp->chgCData(oldp+536,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data),8);
        bufp->chgBit(oldp+537,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid));
        bufp->chgIData(oldp+538,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2),32);
        bufp->chgIData(oldp+539,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag),32);
        bufp->chgIData(oldp+540,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu),32);
        bufp->chgCData(oldp+541,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data),8);
        bufp->chgBit(oldp+542,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace));
        bufp->chgBit(oldp+543,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor));
        bufp->chgBit(oldp+544,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin));
        bufp->chgBit(oldp+545,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1));
        bufp->chgBit(oldp+546,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2));
        bufp->chgBit(oldp+547,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3));
        bufp->chgBit(oldp+548,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1));
        bufp->chgBit(oldp+549,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2));
        bufp->chgIData(oldp+550,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r),32);
        bufp->chgIData(oldp+551,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1),32);
        bufp->chgIData(oldp+552,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2),32);
        bufp->chgIData(oldp+553,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1),32);
        bufp->chgIData(oldp+554,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer),32);
        bufp->chgCData(oldp+555,((0xffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata)),8);
        bufp->chgSData(oldp+556,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),16);
        bufp->chgCData(oldp+557,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state),3);
        bufp->chgBit(oldp+558,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag));
        bufp->chgIData(oldp+559,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count),20);
        bufp->chgCData(oldp+560,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count),4);
        bufp->chgBit(oldp+561,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                      >> 0x13U))));
        bufp->chgBit(oldp+562,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r));
        bufp->chgBit(oldp+563,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r));
        bufp->chgBit(oldp+564,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag));
        bufp->chgIData(oldp+565,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count),20);
        bufp->chgBit(oldp+566,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
                                      >> 0x13U))));
        bufp->chgBit(oldp+567,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag));
        bufp->chgIData(oldp+568,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count),20);
        bufp->chgBit(oldp+569,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
                                      >> 0x13U))));
        bufp->chgIData(oldp+570,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count),20);
        bufp->chgCData(oldp+571,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data),4);
        bufp->chgCData(oldp+572,(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen),8);
        bufp->chgCData(oldp+573,(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen),8);
        bufp->chgCData(oldp+574,((0xfU & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we))))),4);
        bufp->chgIData(oldp+575,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[7U] 
                                   << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                             >> 0x1aU))),32);
        bufp->chgBit(oldp+576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset));
        bufp->chgIData(oldp+577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry),32);
        bufp->chgIData(oldp+578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era),32);
        bufp->chgIData(oldp+579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U]),32);
        bufp->chgSData(oldp+580,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_csr_esubcode),9);
        bufp->chgCData(oldp+581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_csr_ecode),6);
        bufp->chgQData(oldp+582,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64),64);
        bufp->chgIData(oldp+584,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid),32);
        bufp->chgSData(oldp+585,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0xaU))),14);
        bufp->chgIData(oldp+586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data),32);
        bufp->chgSData(oldp+587,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                             >> 8U))),14);
        bufp->chgIData(oldp+588,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                   << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+589,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_bad_va),32);
        bufp->chgBit(oldp+590,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_va_error));
        bufp->chgBit(oldp+591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit));
        bufp->chgBit(oldp+592,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                      >> 7U))));
        bufp->chgBit(oldp+593,((((IData)((0U != (0x180U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U]))) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                      >> 6U)))));
        bufp->chgBit(oldp+594,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int));
        bufp->chgBit(oldp+595,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en));
        bufp->chgBit(oldp+596,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush));
        bufp->chgBit(oldp+597,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush));
        bufp->chgBit(oldp+598,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush));
        bufp->chgBit(oldp+599,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush));
        bufp->chgBit(oldp+600,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable));
        bufp->chgBit(oldp+601,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+602,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]),32);
        bufp->chgIData(oldp+603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]),32);
        bufp->chgBit(oldp+604,((0xffU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count))));
        bufp->chgIData(oldp+605,((IData)((0x1ffffffffULL 
                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                              ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31) 
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
                                              : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS)))),32);
        bufp->chgIData(oldp+606,((IData)((0x1ffffffffULL 
                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                              ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31)
                                                  ? 
                                                 (~ 
                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR 
                                                   - 1ULL))
                                                  : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR)
                                              : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR)))),32);
        bufp->chgQData(oldp+607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mul_result),64);
        bufp->chgSData(oldp+609,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid)),10);
        bufp->chgCData(oldp+610,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64))),5);
        bufp->chgIData(oldp+611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi),32);
        bufp->chgIData(oldp+612,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0),32);
        bufp->chgIData(oldp+613,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1),32);
        bufp->chgIData(oldp+614,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx),32);
        bufp->chgCData(oldp+615,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                           >> 0x10U))),6);
        bufp->chgBit(oldp+616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbrd_en));
        bufp->chgIData(oldp+617,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                  [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                  << 0xdU)),32);
        bufp->chgIData(oldp+618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo0),32);
        bufp->chgIData(oldp+619,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo1),32);
        bufp->chgIData(oldp+620,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbidx),32);
        bufp->chgSData(oldp+621,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                                 [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),10);
        bufp->chgBit(oldp+622,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en));
        bufp->chgSData(oldp+623,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U))),10);
        bufp->chgIData(oldp+624,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU)))),19);
        bufp->chgCData(oldp+625,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U])),5);
        bufp->chgIData(oldp+626,((0x7ffffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                               & (0x1100U 
                                                  == 
                                                  (0x3fff00U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))
                                               ? ((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                   << 0xbU) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                                     >> 0x15U))
                                               : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                                                  >> 0xdU)))),19);
        bufp->chgBit(oldp+627,((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0)));
        bufp->chgBit(oldp+628,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_v));
        bufp->chgBit(oldp+629,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_d));
        bufp->chgCData(oldp+630,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_mat),2);
        bufp->chgCData(oldp+631,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_plv),2);
        bufp->chgBit(oldp+632,((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1)));
        bufp->chgCData(oldp+633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_index),5);
        bufp->chgBit(oldp+634,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_v));
        bufp->chgBit(oldp+635,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_d));
        bufp->chgCData(oldp+636,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_mat),2);
        bufp->chgCData(oldp+637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_plv),2);
        bufp->chgBit(oldp+638,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                       >> 9U) & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) 
                                                 >> 4U)))));
        bufp->chgBit(oldp+639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en));
        bufp->chgBit(oldp+640,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en));
        bufp->chgBit(oldp+641,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush));
        bufp->chgBit(oldp+642,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0xaU))));
        bufp->chgCData(oldp+643,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0xbU))),5);
        bufp->chgBit(oldp+644,(((IData)((0x20088000U 
                                         == (0x3fff8000U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U]))) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))));
        bufp->chgBit(oldp+645,(((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp) 
                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                       >> 0xeU)) | 
                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                     >> 0x1dU) | ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U]))) 
                                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp))))) 
                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                     >> 0xeU)) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                  >> 0x16U)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))));
        bufp->chgBit(oldp+646,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill));
        bufp->chgIData(oldp+647,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry),32);
        bufp->chgBit(oldp+648,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg));
        bufp->chgBit(oldp+649,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da));
        bufp->chgIData(oldp+650,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0),32);
        bufp->chgIData(oldp+651,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1),32);
        bufp->chgCData(oldp+652,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv),2);
        bufp->chgCData(oldp+653,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                        >> 5U))),2);
        bufp->chgCData(oldp+654,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                        >> 7U))),2);
        bufp->chgBit(oldp+655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en));
        bufp->chgBit(oldp+656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
        bufp->chgBit(oldp+657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacop_op_mode_di));
        bufp->chgBit(oldp+658,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlb));
        bufp->chgIData(oldp+659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlb_vppn),19);
        bufp->chgCData(oldp+660,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                        >> 3U))),2);
        bufp->chgBit(oldp+661,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
        bufp->chgIData(oldp+662,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc),32);
        bufp->chgBit(oldp+663,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_counter) 
                                      >> 2U))));
        bufp->chgBit(oldp+664,((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd)));
        bufp->chgCData(oldp+665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_index),5);
        bufp->chgBit(oldp+666,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+667,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry));
        bufp->chgIData(oldp+669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U]),32);
        bufp->chgCData(oldp+670,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                           >> 8U))),5);
        bufp->chgBit(oldp+671,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                  >> 0x1eU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                               >> 2U)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid))));
        bufp->chgBit(oldp+672,(((IData)((0U != (0x8800U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U]))) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))));
        bufp->chgBit(oldp+673,(((IData)((0U != (0x80200U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U]))) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid))));
        bufp->chgQData(oldp+674,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus),38);
        bufp->chgQData(oldp+676,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus),39);
        bufp->chgIData(oldp+678,((0xfffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en)
                                               ? ((0xcU 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ps))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ppn
                                                   : 
                                                  ((0xffc00U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ppn) 
                                                   | (0x3ffU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr 
                                                         >> 0xcU))))
                                               : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr 
                                                  >> 0xcU)))),20);
        bufp->chgBit(oldp+679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req));
        bufp->chgCData(oldp+680,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
                                   ? 2U : 4U)),3);
        bufp->chgIData(oldp+681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr),32);
        bufp->chgBit(oldp+682,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last));
        bufp->chgBit(oldp+683,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_req));
        bufp->chgBit(oldp+684,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_uncache_en));
        bufp->chgBit(oldp+685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req));
        bufp->chgBit(oldp+686,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en));
        bufp->chgBit(oldp+687,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en));
        bufp->chgIData(oldp+688,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr),32);
        bufp->chgBit(oldp+689,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_op));
        bufp->chgCData(oldp+690,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_size),3);
        bufp->chgCData(oldp+691,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                           >> 4U))),8);
        bufp->chgIData(oldp+692,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag),20);
        bufp->chgCData(oldp+693,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr)),4);
        bufp->chgCData(oldp+694,((0xfU & ((0x1fffffffU 
                                           & ((((- (IData)(
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
                                          | (0xfU & 
                                             ((- (IData)(
                                                         (1U 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                         >> 0x1eU))))))) 
                                              >> 3U))))),4);
        bufp->chgIData(oldp+695,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wdata),32);
        bufp->chgBit(oldp+696,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_ok));
        bufp->chgBit(oldp+697,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req));
        bufp->chgCData(oldp+698,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type),3);
        bufp->chgIData(oldp+699,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr),32);
        bufp->chgBit(oldp+700,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last));
        bufp->chgBit(oldp+701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req));
        bufp->chgCData(oldp+702,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type),3);
        bufp->chgIData(oldp+703,((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr)
                                           ? (QData)((IData)(
                                                             ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                                                               << 0xcU) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                                  << 4U) 
                                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset)))))
                                           : (((QData)((IData)(
                                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)
                                                                 ? 
                                                                (0xfffffU 
                                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
                                                                    >> 1U))
                                                                 : 
                                                                (0xfffffU 
                                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
                                                                    >> 1U))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                                 << 4U))))))),32);
        bufp->chgCData(oldp+704,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr)
                                   ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb)
                                   : 0xfU)),4);
        bufp->chgWData(oldp+705,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data),128);
        bufp->chgBit(oldp+709,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))));
        bufp->chgBit(oldp+710,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_uncache_en));
        bufp->chgBit(oldp+711,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en));
        bufp->chgBit(oldp+712,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en));
        bufp->chgBit(oldp+713,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_excp_cancel_req));
        bufp->chgBit(oldp+714,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid));
        bufp->chgBit(oldp+715,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid));
        bufp->chgBit(oldp+716,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
        bufp->chgBit(oldp+717,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num)) 
                                & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state)))));
        bufp->chgCData(oldp+718,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])),5);
        bufp->chgBit(oldp+719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst));
        bufp->chgBit(oldp+720,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                 >> 0x13U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))));
        bufp->chgBit(oldp+721,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                 >> 0x14U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))));
        bufp->chgBit(oldp+722,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                 >> 0x16U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))));
        bufp->chgBit(oldp+723,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                 >> 0x15U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))));
        bufp->chgBit(oldp+724,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                 >> 0x17U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))));
        bufp->chgBit(oldp+725,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                 >> 0x18U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))));
        bufp->chgBit(oldp+726,((((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last)) 
                                & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop))))));
        bufp->chgBit(oldp+727,((((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                                & (~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld))))));
        bufp->chgBit(oldp+728,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache)));
        bufp->chgSData(oldp+729,(((IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_int) 
                                  << 1U)),9);
        bufp->chgBit(oldp+730,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[9U] 
                                      >> 0x1aU))));
        bufp->chgQData(oldp+731,((((QData)((IData)(
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[9U])) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[8U])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[7U])) 
                                                   >> 0x1aU)))),64);
        bufp->chgCData(oldp+733,((0xffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU] 
                                            << 5U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[9U] 
                                              >> 0x1bU)))),8);
        bufp->chgIData(oldp+734,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xbU] 
                                   << 0x1dU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU] 
                                                >> 3U))),32);
        bufp->chgIData(oldp+735,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
                                   << 0x1dU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xbU] 
                                                >> 3U))),32);
        bufp->chgCData(oldp+736,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
                                           >> 3U))),8);
        bufp->chgIData(oldp+737,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                   << 0x15U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
                                                >> 0xbU))),32);
        bufp->chgBit(oldp+738,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+739,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
                                   << 0x14U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                                >> 0xcU))),32);
        bufp->chgBit(oldp+740,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid));
        bufp->chgBit(oldp+741,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_cnt_inst));
        bufp->chgQData(oldp+742,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_timer_64),64);
        bufp->chgCData(oldp+744,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_ld_en),8);
        bufp->chgIData(oldp+745,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr),32);
        bufp->chgIData(oldp+746,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr),32);
        bufp->chgCData(oldp+747,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_st_en),8);
        bufp->chgIData(oldp+748,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr),32);
        bufp->chgIData(oldp+749,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr),32);
        bufp->chgIData(oldp+750,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data),32);
        bufp->chgBit(oldp+751,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_rstat_en));
        bufp->chgIData(oldp+752,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_data),32);
        bufp->chgBit(oldp+753,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wen));
        bufp->chgCData(oldp+754,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdest),8);
        bufp->chgIData(oldp+755,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata),32);
        bufp->chgIData(oldp+756,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc),32);
        bufp->chgIData(oldp+757,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst),32);
        bufp->chgBit(oldp+758,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_excp_flush));
        bufp->chgBit(oldp+759,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ertn));
        bufp->chgCData(oldp+760,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode),6);
        bufp->chgBit(oldp+761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_tlbfill_en));
        bufp->chgCData(oldp+762,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_rand_index),5);
        bufp->chgBit(oldp+763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap));
        bufp->chgCData(oldp+764,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap_code),8);
        bufp->chgQData(oldp+765,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt),64);
        bufp->chgQData(oldp+767,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__instrCnt),64);
        bufp->chgIData(oldp+769,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[0]),32);
        bufp->chgIData(oldp+770,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[1]),32);
        bufp->chgIData(oldp+771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[2]),32);
        bufp->chgIData(oldp+772,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[3]),32);
        bufp->chgIData(oldp+773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[4]),32);
        bufp->chgIData(oldp+774,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[5]),32);
        bufp->chgIData(oldp+775,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[6]),32);
        bufp->chgIData(oldp+776,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[7]),32);
        bufp->chgIData(oldp+777,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[8]),32);
        bufp->chgIData(oldp+778,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[9]),32);
        bufp->chgIData(oldp+779,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[10]),32);
        bufp->chgIData(oldp+780,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[11]),32);
        bufp->chgIData(oldp+781,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[12]),32);
        bufp->chgIData(oldp+782,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[13]),32);
        bufp->chgIData(oldp+783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[14]),32);
        bufp->chgIData(oldp+784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[15]),32);
        bufp->chgIData(oldp+785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[16]),32);
        bufp->chgIData(oldp+786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[17]),32);
        bufp->chgIData(oldp+787,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[18]),32);
        bufp->chgIData(oldp+788,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[19]),32);
        bufp->chgIData(oldp+789,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[20]),32);
        bufp->chgIData(oldp+790,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[21]),32);
        bufp->chgIData(oldp+791,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[22]),32);
        bufp->chgIData(oldp+792,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[23]),32);
        bufp->chgIData(oldp+793,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[24]),32);
        bufp->chgIData(oldp+794,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[25]),32);
        bufp->chgIData(oldp+795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[26]),32);
        bufp->chgIData(oldp+796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[27]),32);
        bufp->chgIData(oldp+797,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[28]),32);
        bufp->chgIData(oldp+798,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[29]),32);
        bufp->chgIData(oldp+799,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[30]),32);
        bufp->chgIData(oldp+800,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[31]),32);
        bufp->chgIData(oldp+801,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd),32);
        bufp->chgIData(oldp+802,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd),32);
        bufp->chgIData(oldp+803,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl),32);
        bufp->chgIData(oldp+804,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat),32);
        bufp->chgIData(oldp+805,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv),32);
        bufp->chgIData(oldp+806,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid),32);
        bufp->chgIData(oldp+807,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0),32);
        bufp->chgIData(oldp+808,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1),32);
        bufp->chgIData(oldp+809,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2),32);
        bufp->chgIData(oldp+810,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3),32);
        bufp->chgIData(oldp+811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg),32);
        bufp->chgIData(oldp+812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval),32);
        bufp->chgIData(oldp+813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ticlr),32);
        bufp->chgIData(oldp+814,(((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit))),32);
        bufp->chgIData(oldp+815,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0),32);
        bufp->chgIData(oldp+816,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1),32);
        bufp->chgIData(oldp+817,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl),32);
        bufp->chgIData(oldp+818,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh),32);
        bufp->chgQData(oldp+819,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd))),64);
        bufp->chgQData(oldp+821,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd))),64);
        bufp->chgQData(oldp+823,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl))),64);
        bufp->chgQData(oldp+825,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat))),64);
        bufp->chgQData(oldp+827,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era))),64);
        bufp->chgQData(oldp+829,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv))),64);
        bufp->chgQData(oldp+831,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry))),64);
        bufp->chgQData(oldp+833,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx))),64);
        bufp->chgQData(oldp+835,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi))),64);
        bufp->chgQData(oldp+837,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0))),64);
        bufp->chgQData(oldp+839,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1))),64);
        bufp->chgQData(oldp+841,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid))),64);
        bufp->chgQData(oldp+843,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl))),64);
        bufp->chgQData(oldp+845,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh))),64);
        bufp->chgQData(oldp+847,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0))),64);
        bufp->chgQData(oldp+849,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1))),64);
        bufp->chgQData(oldp+851,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2))),64);
        bufp->chgQData(oldp+853,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3))),64);
        bufp->chgQData(oldp+855,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))),64);
        bufp->chgQData(oldp+857,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg))),64);
        bufp->chgQData(oldp+859,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval))),64);
        bufp->chgQData(oldp+861,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ticlr))),64);
        bufp->chgQData(oldp+863,((QData)((IData)(((0xfffffffeU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit))))),64);
        bufp->chgQData(oldp+865,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry))),64);
        bufp->chgQData(oldp+867,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0))),64);
        bufp->chgQData(oldp+869,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1))),64);
        bufp->chgIData(oldp+871,((0x7ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                            >> 2U))),32);
        bufp->chgIData(oldp+872,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode),32);
        bufp->chgQData(oldp+873,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc))),64);
        bufp->chgQData(oldp+875,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [1U]))),64);
        bufp->chgQData(oldp+877,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [2U]))),64);
        bufp->chgQData(oldp+879,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [3U]))),64);
        bufp->chgQData(oldp+881,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [4U]))),64);
        bufp->chgQData(oldp+883,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [5U]))),64);
        bufp->chgQData(oldp+885,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [6U]))),64);
        bufp->chgQData(oldp+887,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [7U]))),64);
        bufp->chgQData(oldp+889,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [8U]))),64);
        bufp->chgQData(oldp+891,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [9U]))),64);
        bufp->chgQData(oldp+893,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0xaU]))),64);
        bufp->chgQData(oldp+895,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0xbU]))),64);
        bufp->chgQData(oldp+897,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0xcU]))),64);
        bufp->chgQData(oldp+899,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0xdU]))),64);
        bufp->chgQData(oldp+901,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0xeU]))),64);
        bufp->chgQData(oldp+903,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0xfU]))),64);
        bufp->chgQData(oldp+905,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x10U]))),64);
        bufp->chgQData(oldp+907,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x11U]))),64);
        bufp->chgQData(oldp+909,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x12U]))),64);
        bufp->chgQData(oldp+911,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x13U]))),64);
        bufp->chgQData(oldp+913,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x14U]))),64);
        bufp->chgQData(oldp+915,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x15U]))),64);
        bufp->chgQData(oldp+917,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x16U]))),64);
        bufp->chgQData(oldp+919,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x17U]))),64);
        bufp->chgQData(oldp+921,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x18U]))),64);
        bufp->chgQData(oldp+923,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x19U]))),64);
        bufp->chgQData(oldp+925,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x1aU]))),64);
        bufp->chgQData(oldp+927,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x1bU]))),64);
        bufp->chgQData(oldp+929,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x1cU]))),64);
        bufp->chgQData(oldp+931,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x1dU]))),64);
        bufp->chgQData(oldp+933,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x1eU]))),64);
        bufp->chgQData(oldp+935,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                 [0x1fU]))),64);
        bufp->chgQData(oldp+937,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata))),64);
        bufp->chgQData(oldp+939,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr))),64);
        bufp->chgQData(oldp+941,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr))),64);
        bufp->chgQData(oldp+943,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr))),64);
        bufp->chgQData(oldp+945,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr))),64);
        bufp->chgQData(oldp+947,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data))),64);
        bufp->chgCData(oldp+949,((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap_code))),3);
        bufp->chgCData(oldp+950,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ps),6);
        bufp->chgIData(oldp+951,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ppn),20);
        bufp->chgIData(oldp+952,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                  >> 0xdU)),19);
        bufp->chgBit(oldp+953,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0xcU))));
        bufp->chgCData(oldp+954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ps),6);
        bufp->chgIData(oldp+955,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ppn),20);
        bufp->chgBit(oldp+956,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we));
        bufp->chgCData(oldp+957,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index),5);
        bufp->chgIData(oldp+958,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                                  >> 0xdU)),19);
        bufp->chgBit(oldp+959,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1) 
                                      >> 6U))));
        bufp->chgCData(oldp+960,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                                           >> 0x18U))),6);
        bufp->chgBit(oldp+961,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e));
        bufp->chgBit(oldp+962,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0)));
        bufp->chgBit(oldp+963,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                      >> 1U))));
        bufp->chgCData(oldp+964,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                        >> 4U))),2);
        bufp->chgCData(oldp+965,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                        >> 2U))),2);
        bufp->chgIData(oldp+966,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                              >> 8U))),20);
        bufp->chgBit(oldp+967,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1)));
        bufp->chgBit(oldp+968,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                                      >> 1U))));
        bufp->chgCData(oldp+969,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                                        >> 4U))),2);
        bufp->chgCData(oldp+970,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                                        >> 2U))),2);
        bufp->chgIData(oldp+971,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                                              >> 8U))),20);
        bufp->chgCData(oldp+972,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)),5);
        bufp->chgIData(oldp+973,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),19);
        bufp->chgBit(oldp+974,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__r_g));
        bufp->chgCData(oldp+975,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),6);
        bufp->chgBit(oldp+976,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                               [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]));
        bufp->chgBit(oldp+977,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0
                               [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]));
        bufp->chgBit(oldp+978,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0
                               [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]));
        bufp->chgCData(oldp+979,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
                                 [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),2);
        bufp->chgCData(oldp+980,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                 [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),2);
        bufp->chgIData(oldp+981,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0
                                 [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),20);
        bufp->chgBit(oldp+982,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1
                               [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]));
        bufp->chgBit(oldp+983,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1
                               [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]));
        bufp->chgCData(oldp+984,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
                                 [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),2);
        bufp->chgCData(oldp+985,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                 [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),2);
        bufp->chgIData(oldp+986,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1
                                 [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),20);
        bufp->chgIData(oldp+987,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_vaddr_buffer),32);
        bufp->chgIData(oldp+988,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_vaddr_buffer),32);
        bufp->chgIData(oldp+989,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr),32);
        bufp->chgIData(oldp+990,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_paddr),32);
        bufp->chgBit(oldp+991,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode));
        bufp->chgBit(oldp+992,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg)))));
        bufp->chgCData(oldp+993,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_index),5);
        bufp->chgIData(oldp+994,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[0]),19);
        bufp->chgIData(oldp+995,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[1]),19);
        bufp->chgIData(oldp+996,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[2]),19);
        bufp->chgIData(oldp+997,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[3]),19);
        bufp->chgIData(oldp+998,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[4]),19);
        bufp->chgIData(oldp+999,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[5]),19);
        bufp->chgIData(oldp+1000,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[6]),19);
        bufp->chgIData(oldp+1001,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[7]),19);
        bufp->chgIData(oldp+1002,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[8]),19);
        bufp->chgIData(oldp+1003,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[9]),19);
        bufp->chgIData(oldp+1004,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[10]),19);
        bufp->chgIData(oldp+1005,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[11]),19);
        bufp->chgIData(oldp+1006,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[12]),19);
        bufp->chgIData(oldp+1007,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[13]),19);
        bufp->chgIData(oldp+1008,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[14]),19);
        bufp->chgIData(oldp+1009,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[15]),19);
        bufp->chgIData(oldp+1010,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[16]),19);
        bufp->chgIData(oldp+1011,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[17]),19);
        bufp->chgIData(oldp+1012,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[18]),19);
        bufp->chgIData(oldp+1013,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[19]),19);
        bufp->chgIData(oldp+1014,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[20]),19);
        bufp->chgIData(oldp+1015,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[21]),19);
        bufp->chgIData(oldp+1016,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[22]),19);
        bufp->chgIData(oldp+1017,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[23]),19);
        bufp->chgIData(oldp+1018,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[24]),19);
        bufp->chgIData(oldp+1019,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[25]),19);
        bufp->chgIData(oldp+1020,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[26]),19);
        bufp->chgIData(oldp+1021,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[27]),19);
        bufp->chgIData(oldp+1022,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[28]),19);
        bufp->chgIData(oldp+1023,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[29]),19);
        bufp->chgIData(oldp+1024,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[30]),19);
        bufp->chgIData(oldp+1025,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[31]),19);
        bufp->chgBit(oldp+1026,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[0]));
        bufp->chgBit(oldp+1027,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[1]));
        bufp->chgBit(oldp+1028,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[2]));
        bufp->chgBit(oldp+1029,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[3]));
        bufp->chgBit(oldp+1030,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[4]));
        bufp->chgBit(oldp+1031,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[5]));
        bufp->chgBit(oldp+1032,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[6]));
        bufp->chgBit(oldp+1033,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[7]));
        bufp->chgBit(oldp+1034,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[8]));
        bufp->chgBit(oldp+1035,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[9]));
        bufp->chgBit(oldp+1036,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[10]));
        bufp->chgBit(oldp+1037,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[11]));
        bufp->chgBit(oldp+1038,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[12]));
        bufp->chgBit(oldp+1039,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[13]));
        bufp->chgBit(oldp+1040,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[14]));
        bufp->chgBit(oldp+1041,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[15]));
        bufp->chgBit(oldp+1042,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[16]));
        bufp->chgBit(oldp+1043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[17]));
        bufp->chgBit(oldp+1044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[18]));
        bufp->chgBit(oldp+1045,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[19]));
        bufp->chgBit(oldp+1046,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[20]));
        bufp->chgBit(oldp+1047,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[21]));
        bufp->chgBit(oldp+1048,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[22]));
        bufp->chgBit(oldp+1049,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[23]));
        bufp->chgBit(oldp+1050,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[24]));
        bufp->chgBit(oldp+1051,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[25]));
        bufp->chgBit(oldp+1052,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[26]));
        bufp->chgBit(oldp+1053,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[27]));
        bufp->chgBit(oldp+1054,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[28]));
        bufp->chgBit(oldp+1055,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[29]));
        bufp->chgBit(oldp+1056,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[30]));
        bufp->chgBit(oldp+1057,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[31]));
        bufp->chgSData(oldp+1058,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[0]),10);
        bufp->chgSData(oldp+1059,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[1]),10);
        bufp->chgSData(oldp+1060,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[2]),10);
        bufp->chgSData(oldp+1061,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[3]),10);
        bufp->chgSData(oldp+1062,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[4]),10);
        bufp->chgSData(oldp+1063,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[5]),10);
        bufp->chgSData(oldp+1064,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[6]),10);
        bufp->chgSData(oldp+1065,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[7]),10);
        bufp->chgSData(oldp+1066,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[8]),10);
        bufp->chgSData(oldp+1067,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[9]),10);
        bufp->chgSData(oldp+1068,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[10]),10);
        bufp->chgSData(oldp+1069,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[11]),10);
        bufp->chgSData(oldp+1070,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[12]),10);
        bufp->chgSData(oldp+1071,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[13]),10);
        bufp->chgSData(oldp+1072,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[14]),10);
        bufp->chgSData(oldp+1073,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[15]),10);
        bufp->chgSData(oldp+1074,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[16]),10);
        bufp->chgSData(oldp+1075,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[17]),10);
        bufp->chgSData(oldp+1076,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[18]),10);
        bufp->chgSData(oldp+1077,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[19]),10);
        bufp->chgSData(oldp+1078,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[20]),10);
        bufp->chgSData(oldp+1079,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[21]),10);
        bufp->chgSData(oldp+1080,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[22]),10);
        bufp->chgSData(oldp+1081,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[23]),10);
        bufp->chgSData(oldp+1082,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[24]),10);
        bufp->chgSData(oldp+1083,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[25]),10);
        bufp->chgSData(oldp+1084,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[26]),10);
        bufp->chgSData(oldp+1085,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[27]),10);
        bufp->chgSData(oldp+1086,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[28]),10);
        bufp->chgSData(oldp+1087,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[29]),10);
        bufp->chgSData(oldp+1088,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[30]),10);
        bufp->chgSData(oldp+1089,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[31]),10);
        bufp->chgBit(oldp+1090,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[0]));
        bufp->chgBit(oldp+1091,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[1]));
        bufp->chgBit(oldp+1092,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[2]));
        bufp->chgBit(oldp+1093,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[3]));
        bufp->chgBit(oldp+1094,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[4]));
        bufp->chgBit(oldp+1095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[5]));
        bufp->chgBit(oldp+1096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[6]));
        bufp->chgBit(oldp+1097,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[7]));
        bufp->chgBit(oldp+1098,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[8]));
        bufp->chgBit(oldp+1099,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[9]));
        bufp->chgBit(oldp+1100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[10]));
        bufp->chgBit(oldp+1101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[11]));
        bufp->chgBit(oldp+1102,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[12]));
        bufp->chgBit(oldp+1103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[13]));
        bufp->chgBit(oldp+1104,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[14]));
        bufp->chgBit(oldp+1105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[15]));
        bufp->chgBit(oldp+1106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[16]));
        bufp->chgBit(oldp+1107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[17]));
        bufp->chgBit(oldp+1108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[18]));
        bufp->chgBit(oldp+1109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[19]));
        bufp->chgBit(oldp+1110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[20]));
        bufp->chgBit(oldp+1111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[21]));
        bufp->chgBit(oldp+1112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[22]));
        bufp->chgBit(oldp+1113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[23]));
        bufp->chgBit(oldp+1114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[24]));
        bufp->chgBit(oldp+1115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[25]));
        bufp->chgBit(oldp+1116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[26]));
        bufp->chgBit(oldp+1117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[27]));
        bufp->chgBit(oldp+1118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[28]));
        bufp->chgBit(oldp+1119,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[29]));
        bufp->chgBit(oldp+1120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[30]));
        bufp->chgBit(oldp+1121,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[31]));
        bufp->chgCData(oldp+1122,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[0]),6);
        bufp->chgCData(oldp+1123,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[1]),6);
        bufp->chgCData(oldp+1124,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[2]),6);
        bufp->chgCData(oldp+1125,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[3]),6);
        bufp->chgCData(oldp+1126,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[4]),6);
        bufp->chgCData(oldp+1127,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[5]),6);
        bufp->chgCData(oldp+1128,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[6]),6);
        bufp->chgCData(oldp+1129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[7]),6);
        bufp->chgCData(oldp+1130,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[8]),6);
        bufp->chgCData(oldp+1131,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[9]),6);
        bufp->chgCData(oldp+1132,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[10]),6);
        bufp->chgCData(oldp+1133,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[11]),6);
        bufp->chgCData(oldp+1134,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[12]),6);
        bufp->chgCData(oldp+1135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[13]),6);
        bufp->chgCData(oldp+1136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[14]),6);
        bufp->chgCData(oldp+1137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[15]),6);
        bufp->chgCData(oldp+1138,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[16]),6);
        bufp->chgCData(oldp+1139,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[17]),6);
        bufp->chgCData(oldp+1140,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[18]),6);
        bufp->chgCData(oldp+1141,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[19]),6);
        bufp->chgCData(oldp+1142,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[20]),6);
        bufp->chgCData(oldp+1143,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[21]),6);
        bufp->chgCData(oldp+1144,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[22]),6);
        bufp->chgCData(oldp+1145,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[23]),6);
        bufp->chgCData(oldp+1146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[24]),6);
        bufp->chgCData(oldp+1147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[25]),6);
        bufp->chgCData(oldp+1148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[26]),6);
        bufp->chgCData(oldp+1149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[27]),6);
        bufp->chgCData(oldp+1150,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[28]),6);
        bufp->chgCData(oldp+1151,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[29]),6);
        bufp->chgCData(oldp+1152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[30]),6);
        bufp->chgCData(oldp+1153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[31]),6);
        bufp->chgIData(oldp+1154,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[0]),20);
        bufp->chgIData(oldp+1155,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[1]),20);
        bufp->chgIData(oldp+1156,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[2]),20);
        bufp->chgIData(oldp+1157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[3]),20);
        bufp->chgIData(oldp+1158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[4]),20);
        bufp->chgIData(oldp+1159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[5]),20);
        bufp->chgIData(oldp+1160,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[6]),20);
        bufp->chgIData(oldp+1161,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[7]),20);
        bufp->chgIData(oldp+1162,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[8]),20);
        bufp->chgIData(oldp+1163,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[9]),20);
        bufp->chgIData(oldp+1164,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[10]),20);
        bufp->chgIData(oldp+1165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[11]),20);
        bufp->chgIData(oldp+1166,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[12]),20);
        bufp->chgIData(oldp+1167,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[13]),20);
        bufp->chgIData(oldp+1168,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[14]),20);
        bufp->chgIData(oldp+1169,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[15]),20);
        bufp->chgIData(oldp+1170,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[16]),20);
        bufp->chgIData(oldp+1171,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[17]),20);
        bufp->chgIData(oldp+1172,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[18]),20);
        bufp->chgIData(oldp+1173,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[19]),20);
        bufp->chgIData(oldp+1174,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[20]),20);
        bufp->chgIData(oldp+1175,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[21]),20);
        bufp->chgIData(oldp+1176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[22]),20);
        bufp->chgIData(oldp+1177,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[23]),20);
        bufp->chgIData(oldp+1178,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[24]),20);
        bufp->chgIData(oldp+1179,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[25]),20);
        bufp->chgIData(oldp+1180,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[26]),20);
        bufp->chgIData(oldp+1181,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[27]),20);
        bufp->chgIData(oldp+1182,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[28]),20);
        bufp->chgIData(oldp+1183,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[29]),20);
        bufp->chgIData(oldp+1184,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[30]),20);
        bufp->chgIData(oldp+1185,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[31]),20);
        bufp->chgCData(oldp+1186,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[0]),2);
        bufp->chgCData(oldp+1187,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[1]),2);
        bufp->chgCData(oldp+1188,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[2]),2);
        bufp->chgCData(oldp+1189,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[3]),2);
        bufp->chgCData(oldp+1190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[4]),2);
        bufp->chgCData(oldp+1191,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[5]),2);
        bufp->chgCData(oldp+1192,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[6]),2);
        bufp->chgCData(oldp+1193,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[7]),2);
        bufp->chgCData(oldp+1194,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[8]),2);
        bufp->chgCData(oldp+1195,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[9]),2);
        bufp->chgCData(oldp+1196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[10]),2);
        bufp->chgCData(oldp+1197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[11]),2);
        bufp->chgCData(oldp+1198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[12]),2);
        bufp->chgCData(oldp+1199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[13]),2);
        bufp->chgCData(oldp+1200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[14]),2);
        bufp->chgCData(oldp+1201,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[15]),2);
        bufp->chgCData(oldp+1202,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[16]),2);
        bufp->chgCData(oldp+1203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[17]),2);
        bufp->chgCData(oldp+1204,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[18]),2);
        bufp->chgCData(oldp+1205,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[19]),2);
        bufp->chgCData(oldp+1206,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[20]),2);
        bufp->chgCData(oldp+1207,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[21]),2);
        bufp->chgCData(oldp+1208,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[22]),2);
        bufp->chgCData(oldp+1209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[23]),2);
        bufp->chgCData(oldp+1210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[24]),2);
        bufp->chgCData(oldp+1211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[25]),2);
        bufp->chgCData(oldp+1212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[26]),2);
        bufp->chgCData(oldp+1213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[27]),2);
        bufp->chgCData(oldp+1214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[28]),2);
        bufp->chgCData(oldp+1215,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[29]),2);
        bufp->chgCData(oldp+1216,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[30]),2);
        bufp->chgCData(oldp+1217,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[31]),2);
        bufp->chgCData(oldp+1218,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[0]),2);
        bufp->chgCData(oldp+1219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[1]),2);
        bufp->chgCData(oldp+1220,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[2]),2);
        bufp->chgCData(oldp+1221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[3]),2);
        bufp->chgCData(oldp+1222,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[4]),2);
        bufp->chgCData(oldp+1223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[5]),2);
        bufp->chgCData(oldp+1224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[6]),2);
        bufp->chgCData(oldp+1225,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[7]),2);
        bufp->chgCData(oldp+1226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[8]),2);
        bufp->chgCData(oldp+1227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[9]),2);
        bufp->chgCData(oldp+1228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[10]),2);
        bufp->chgCData(oldp+1229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[11]),2);
        bufp->chgCData(oldp+1230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[12]),2);
        bufp->chgCData(oldp+1231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[13]),2);
        bufp->chgCData(oldp+1232,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[14]),2);
        bufp->chgCData(oldp+1233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[15]),2);
        bufp->chgCData(oldp+1234,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[16]),2);
        bufp->chgCData(oldp+1235,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[17]),2);
        bufp->chgCData(oldp+1236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[18]),2);
        bufp->chgCData(oldp+1237,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[19]),2);
        bufp->chgCData(oldp+1238,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[20]),2);
        bufp->chgCData(oldp+1239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[21]),2);
        bufp->chgCData(oldp+1240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[22]),2);
        bufp->chgCData(oldp+1241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[23]),2);
        bufp->chgCData(oldp+1242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[24]),2);
        bufp->chgCData(oldp+1243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[25]),2);
        bufp->chgCData(oldp+1244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[26]),2);
        bufp->chgCData(oldp+1245,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[27]),2);
        bufp->chgCData(oldp+1246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[28]),2);
        bufp->chgCData(oldp+1247,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[29]),2);
        bufp->chgCData(oldp+1248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[30]),2);
        bufp->chgCData(oldp+1249,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[31]),2);
        bufp->chgBit(oldp+1250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[0]));
        bufp->chgBit(oldp+1251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[1]));
        bufp->chgBit(oldp+1252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[2]));
        bufp->chgBit(oldp+1253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[3]));
        bufp->chgBit(oldp+1254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[4]));
        bufp->chgBit(oldp+1255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[5]));
        bufp->chgBit(oldp+1256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[6]));
        bufp->chgBit(oldp+1257,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[7]));
        bufp->chgBit(oldp+1258,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[8]));
        bufp->chgBit(oldp+1259,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[9]));
        bufp->chgBit(oldp+1260,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[10]));
        bufp->chgBit(oldp+1261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[11]));
        bufp->chgBit(oldp+1262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[12]));
        bufp->chgBit(oldp+1263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[13]));
        bufp->chgBit(oldp+1264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[14]));
        bufp->chgBit(oldp+1265,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[15]));
        bufp->chgBit(oldp+1266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[16]));
        bufp->chgBit(oldp+1267,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[17]));
        bufp->chgBit(oldp+1268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[18]));
        bufp->chgBit(oldp+1269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[19]));
        bufp->chgBit(oldp+1270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[20]));
        bufp->chgBit(oldp+1271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[21]));
        bufp->chgBit(oldp+1272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[22]));
        bufp->chgBit(oldp+1273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[23]));
        bufp->chgBit(oldp+1274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[24]));
        bufp->chgBit(oldp+1275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[25]));
        bufp->chgBit(oldp+1276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[26]));
        bufp->chgBit(oldp+1277,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[27]));
        bufp->chgBit(oldp+1278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[28]));
        bufp->chgBit(oldp+1279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[29]));
        bufp->chgBit(oldp+1280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[30]));
        bufp->chgBit(oldp+1281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[31]));
        bufp->chgBit(oldp+1282,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[0]));
        bufp->chgBit(oldp+1283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[1]));
        bufp->chgBit(oldp+1284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[2]));
        bufp->chgBit(oldp+1285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[3]));
        bufp->chgBit(oldp+1286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[4]));
        bufp->chgBit(oldp+1287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[5]));
        bufp->chgBit(oldp+1288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[6]));
        bufp->chgBit(oldp+1289,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[7]));
        bufp->chgBit(oldp+1290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[8]));
        bufp->chgBit(oldp+1291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[9]));
        bufp->chgBit(oldp+1292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[10]));
        bufp->chgBit(oldp+1293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[11]));
        bufp->chgBit(oldp+1294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[12]));
        bufp->chgBit(oldp+1295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[13]));
        bufp->chgBit(oldp+1296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[14]));
        bufp->chgBit(oldp+1297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[15]));
        bufp->chgBit(oldp+1298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[16]));
        bufp->chgBit(oldp+1299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[17]));
        bufp->chgBit(oldp+1300,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[18]));
        bufp->chgBit(oldp+1301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[19]));
        bufp->chgBit(oldp+1302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[20]));
        bufp->chgBit(oldp+1303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[21]));
        bufp->chgBit(oldp+1304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[22]));
        bufp->chgBit(oldp+1305,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[23]));
        bufp->chgBit(oldp+1306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[24]));
        bufp->chgBit(oldp+1307,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[25]));
        bufp->chgBit(oldp+1308,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[26]));
        bufp->chgBit(oldp+1309,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[27]));
        bufp->chgBit(oldp+1310,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[28]));
        bufp->chgBit(oldp+1311,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[29]));
        bufp->chgBit(oldp+1312,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[30]));
        bufp->chgBit(oldp+1313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[31]));
        bufp->chgIData(oldp+1314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[0]),20);
        bufp->chgIData(oldp+1315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[1]),20);
        bufp->chgIData(oldp+1316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[2]),20);
        bufp->chgIData(oldp+1317,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[3]),20);
        bufp->chgIData(oldp+1318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[4]),20);
        bufp->chgIData(oldp+1319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[5]),20);
        bufp->chgIData(oldp+1320,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[6]),20);
        bufp->chgIData(oldp+1321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[7]),20);
        bufp->chgIData(oldp+1322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[8]),20);
        bufp->chgIData(oldp+1323,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[9]),20);
        bufp->chgIData(oldp+1324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[10]),20);
        bufp->chgIData(oldp+1325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[11]),20);
        bufp->chgIData(oldp+1326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[12]),20);
        bufp->chgIData(oldp+1327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[13]),20);
        bufp->chgIData(oldp+1328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[14]),20);
        bufp->chgIData(oldp+1329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[15]),20);
        bufp->chgIData(oldp+1330,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[16]),20);
        bufp->chgIData(oldp+1331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[17]),20);
        bufp->chgIData(oldp+1332,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[18]),20);
        bufp->chgIData(oldp+1333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[19]),20);
        bufp->chgIData(oldp+1334,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[20]),20);
        bufp->chgIData(oldp+1335,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[21]),20);
        bufp->chgIData(oldp+1336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[22]),20);
        bufp->chgIData(oldp+1337,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[23]),20);
        bufp->chgIData(oldp+1338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[24]),20);
        bufp->chgIData(oldp+1339,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[25]),20);
        bufp->chgIData(oldp+1340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[26]),20);
        bufp->chgIData(oldp+1341,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[27]),20);
        bufp->chgIData(oldp+1342,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[28]),20);
        bufp->chgIData(oldp+1343,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[29]),20);
        bufp->chgIData(oldp+1344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[30]),20);
        bufp->chgIData(oldp+1345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[31]),20);
        bufp->chgCData(oldp+1346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[0]),2);
        bufp->chgCData(oldp+1347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[1]),2);
        bufp->chgCData(oldp+1348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[2]),2);
        bufp->chgCData(oldp+1349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[3]),2);
        bufp->chgCData(oldp+1350,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[4]),2);
        bufp->chgCData(oldp+1351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[5]),2);
        bufp->chgCData(oldp+1352,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[6]),2);
        bufp->chgCData(oldp+1353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[7]),2);
        bufp->chgCData(oldp+1354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[8]),2);
        bufp->chgCData(oldp+1355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[9]),2);
        bufp->chgCData(oldp+1356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[10]),2);
        bufp->chgCData(oldp+1357,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[11]),2);
        bufp->chgCData(oldp+1358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[12]),2);
        bufp->chgCData(oldp+1359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[13]),2);
        bufp->chgCData(oldp+1360,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[14]),2);
        bufp->chgCData(oldp+1361,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[15]),2);
        bufp->chgCData(oldp+1362,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[16]),2);
        bufp->chgCData(oldp+1363,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[17]),2);
        bufp->chgCData(oldp+1364,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[18]),2);
        bufp->chgCData(oldp+1365,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[19]),2);
        bufp->chgCData(oldp+1366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[20]),2);
        bufp->chgCData(oldp+1367,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[21]),2);
        bufp->chgCData(oldp+1368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[22]),2);
        bufp->chgCData(oldp+1369,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[23]),2);
        bufp->chgCData(oldp+1370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[24]),2);
        bufp->chgCData(oldp+1371,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[25]),2);
        bufp->chgCData(oldp+1372,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[26]),2);
        bufp->chgCData(oldp+1373,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[27]),2);
        bufp->chgCData(oldp+1374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[28]),2);
        bufp->chgCData(oldp+1375,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[29]),2);
        bufp->chgCData(oldp+1376,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[30]),2);
        bufp->chgCData(oldp+1377,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[31]),2);
        bufp->chgCData(oldp+1378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[0]),2);
        bufp->chgCData(oldp+1379,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[1]),2);
        bufp->chgCData(oldp+1380,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[2]),2);
        bufp->chgCData(oldp+1381,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[3]),2);
        bufp->chgCData(oldp+1382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[4]),2);
        bufp->chgCData(oldp+1383,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[5]),2);
        bufp->chgCData(oldp+1384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[6]),2);
        bufp->chgCData(oldp+1385,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[7]),2);
        bufp->chgCData(oldp+1386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[8]),2);
        bufp->chgCData(oldp+1387,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[9]),2);
        bufp->chgCData(oldp+1388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[10]),2);
        bufp->chgCData(oldp+1389,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[11]),2);
        bufp->chgCData(oldp+1390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[12]),2);
        bufp->chgCData(oldp+1391,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[13]),2);
        bufp->chgCData(oldp+1392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[14]),2);
        bufp->chgCData(oldp+1393,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[15]),2);
        bufp->chgCData(oldp+1394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[16]),2);
        bufp->chgCData(oldp+1395,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[17]),2);
        bufp->chgCData(oldp+1396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[18]),2);
        bufp->chgCData(oldp+1397,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[19]),2);
        bufp->chgCData(oldp+1398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[20]),2);
        bufp->chgCData(oldp+1399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[21]),2);
        bufp->chgCData(oldp+1400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[22]),2);
        bufp->chgCData(oldp+1401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[23]),2);
        bufp->chgCData(oldp+1402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[24]),2);
        bufp->chgCData(oldp+1403,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[25]),2);
        bufp->chgCData(oldp+1404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[26]),2);
        bufp->chgCData(oldp+1405,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[27]),2);
        bufp->chgCData(oldp+1406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[28]),2);
        bufp->chgCData(oldp+1407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[29]),2);
        bufp->chgCData(oldp+1408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[30]),2);
        bufp->chgCData(oldp+1409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[31]),2);
        bufp->chgBit(oldp+1410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[0]));
        bufp->chgBit(oldp+1411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[1]));
        bufp->chgBit(oldp+1412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[2]));
        bufp->chgBit(oldp+1413,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[3]));
        bufp->chgBit(oldp+1414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[4]));
        bufp->chgBit(oldp+1415,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[5]));
        bufp->chgBit(oldp+1416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[6]));
        bufp->chgBit(oldp+1417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[7]));
        bufp->chgBit(oldp+1418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[8]));
        bufp->chgBit(oldp+1419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[9]));
        bufp->chgBit(oldp+1420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[10]));
        bufp->chgBit(oldp+1421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[11]));
        bufp->chgBit(oldp+1422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[12]));
        bufp->chgBit(oldp+1423,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[13]));
        bufp->chgBit(oldp+1424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[14]));
        bufp->chgBit(oldp+1425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[15]));
        bufp->chgBit(oldp+1426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[16]));
        bufp->chgBit(oldp+1427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[17]));
        bufp->chgBit(oldp+1428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[18]));
        bufp->chgBit(oldp+1429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[19]));
        bufp->chgBit(oldp+1430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[20]));
        bufp->chgBit(oldp+1431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[21]));
        bufp->chgBit(oldp+1432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[22]));
        bufp->chgBit(oldp+1433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[23]));
        bufp->chgBit(oldp+1434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[24]));
        bufp->chgBit(oldp+1435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[25]));
        bufp->chgBit(oldp+1436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[26]));
        bufp->chgBit(oldp+1437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[27]));
        bufp->chgBit(oldp+1438,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[28]));
        bufp->chgBit(oldp+1439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[29]));
        bufp->chgBit(oldp+1440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[30]));
        bufp->chgBit(oldp+1441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[31]));
        bufp->chgBit(oldp+1442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[0]));
        bufp->chgBit(oldp+1443,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[1]));
        bufp->chgBit(oldp+1444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[2]));
        bufp->chgBit(oldp+1445,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[3]));
        bufp->chgBit(oldp+1446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[4]));
        bufp->chgBit(oldp+1447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[5]));
        bufp->chgBit(oldp+1448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[6]));
        bufp->chgBit(oldp+1449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[7]));
        bufp->chgBit(oldp+1450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[8]));
        bufp->chgBit(oldp+1451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[9]));
        bufp->chgBit(oldp+1452,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[10]));
        bufp->chgBit(oldp+1453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[11]));
        bufp->chgBit(oldp+1454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[12]));
        bufp->chgBit(oldp+1455,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[13]));
        bufp->chgBit(oldp+1456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[14]));
        bufp->chgBit(oldp+1457,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[15]));
        bufp->chgBit(oldp+1458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[16]));
        bufp->chgBit(oldp+1459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[17]));
        bufp->chgBit(oldp+1460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[18]));
        bufp->chgBit(oldp+1461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[19]));
        bufp->chgBit(oldp+1462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[20]));
        bufp->chgBit(oldp+1463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[21]));
        bufp->chgBit(oldp+1464,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[22]));
        bufp->chgBit(oldp+1465,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[23]));
        bufp->chgBit(oldp+1466,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[24]));
        bufp->chgBit(oldp+1467,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[25]));
        bufp->chgBit(oldp+1468,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[26]));
        bufp->chgBit(oldp+1469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[27]));
        bufp->chgBit(oldp+1470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[28]));
        bufp->chgBit(oldp+1471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[29]));
        bufp->chgBit(oldp+1472,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[30]));
        bufp->chgBit(oldp+1473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[31]));
        bufp->chgIData(oldp+1474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0),32);
        bufp->chgIData(oldp+1475,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1),32);
        bufp->chgIData(oldp+1476,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer),32);
        bufp->chgIData(oldp+1477,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer),32);
        bufp->chgBit(oldp+1478,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state));
        bufp->chgBit(oldp+1479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state));
        bufp->chgCData(oldp+1480,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state),3);
        bufp->chgBit(oldp+1481,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))));
        bufp->chgBit(oldp+1482,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state)))));
        bufp->chgBit(oldp+1483,((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type))));
        bufp->chgBit(oldp+1484,((4U == ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
                                         ? 2U : 4U))));
        bufp->chgCData(oldp+1485,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__data_real_rd_size),3);
        bufp->chgCData(oldp+1486,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type))
                                    ? 3U : 0U)),8);
        bufp->chgCData(oldp+1487,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__inst_real_rd_size),3);
        bufp->chgCData(oldp+1488,(((4U == ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
                                            ? 2U : 4U))
                                    ? 3U : 0U)),8);
        bufp->chgBit(oldp+1489,((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))));
        bufp->chgCData(oldp+1490,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))
                                    ? 2U : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))),3);
        bufp->chgCData(oldp+1491,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))
                                    ? 3U : 0U)),8);
        bufp->chgWData(oldp+1492,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data),128);
        bufp->chgCData(oldp+1496,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num),3);
        bufp->chgBit(oldp+1497,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num))));
        bufp->chgIData(oldp+1498,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[0]),30);
        bufp->chgIData(oldp+1499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[1]),30);
        bufp->chgIData(oldp+1500,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[2]),30);
        bufp->chgIData(oldp+1501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[3]),30);
        bufp->chgIData(oldp+1502,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[4]),30);
        bufp->chgIData(oldp+1503,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[5]),30);
        bufp->chgIData(oldp+1504,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[6]),30);
        bufp->chgIData(oldp+1505,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[7]),30);
        bufp->chgIData(oldp+1506,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[8]),30);
        bufp->chgIData(oldp+1507,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[9]),30);
        bufp->chgIData(oldp+1508,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[10]),30);
        bufp->chgIData(oldp+1509,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[11]),30);
        bufp->chgIData(oldp+1510,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[12]),30);
        bufp->chgIData(oldp+1511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[13]),30);
        bufp->chgIData(oldp+1512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[14]),30);
        bufp->chgIData(oldp+1513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[15]),30);
        bufp->chgIData(oldp+1514,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[16]),30);
        bufp->chgIData(oldp+1515,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[17]),30);
        bufp->chgIData(oldp+1516,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[18]),30);
        bufp->chgIData(oldp+1517,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[19]),30);
        bufp->chgIData(oldp+1518,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[20]),30);
        bufp->chgIData(oldp+1519,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[21]),30);
        bufp->chgIData(oldp+1520,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[22]),30);
        bufp->chgIData(oldp+1521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[23]),30);
        bufp->chgIData(oldp+1522,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[24]),30);
        bufp->chgIData(oldp+1523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[25]),30);
        bufp->chgIData(oldp+1524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[26]),30);
        bufp->chgIData(oldp+1525,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[27]),30);
        bufp->chgIData(oldp+1526,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[28]),30);
        bufp->chgIData(oldp+1527,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[29]),30);
        bufp->chgIData(oldp+1528,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[30]),30);
        bufp->chgIData(oldp+1529,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[31]),30);
        bufp->chgIData(oldp+1530,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[0]),30);
        bufp->chgIData(oldp+1531,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[1]),30);
        bufp->chgIData(oldp+1532,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[2]),30);
        bufp->chgIData(oldp+1533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[3]),30);
        bufp->chgIData(oldp+1534,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[4]),30);
        bufp->chgIData(oldp+1535,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[5]),30);
        bufp->chgIData(oldp+1536,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[6]),30);
        bufp->chgIData(oldp+1537,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[7]),30);
        bufp->chgIData(oldp+1538,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[8]),30);
        bufp->chgIData(oldp+1539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[9]),30);
        bufp->chgIData(oldp+1540,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[10]),30);
        bufp->chgIData(oldp+1541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[11]),30);
        bufp->chgIData(oldp+1542,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[12]),30);
        bufp->chgIData(oldp+1543,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[13]),30);
        bufp->chgIData(oldp+1544,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[14]),30);
        bufp->chgIData(oldp+1545,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[15]),30);
        bufp->chgIData(oldp+1546,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[16]),30);
        bufp->chgIData(oldp+1547,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[17]),30);
        bufp->chgIData(oldp+1548,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[18]),30);
        bufp->chgIData(oldp+1549,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[19]),30);
        bufp->chgIData(oldp+1550,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[20]),30);
        bufp->chgIData(oldp+1551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[21]),30);
        bufp->chgIData(oldp+1552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[22]),30);
        bufp->chgIData(oldp+1553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[23]),30);
        bufp->chgIData(oldp+1554,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[24]),30);
        bufp->chgIData(oldp+1555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[25]),30);
        bufp->chgIData(oldp+1556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[26]),30);
        bufp->chgIData(oldp+1557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[27]),30);
        bufp->chgIData(oldp+1558,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[28]),30);
        bufp->chgIData(oldp+1559,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[29]),30);
        bufp->chgIData(oldp+1560,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[30]),30);
        bufp->chgIData(oldp+1561,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[31]),30);
        bufp->chgCData(oldp+1562,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[0]),3);
        bufp->chgCData(oldp+1563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[1]),3);
        bufp->chgCData(oldp+1564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[2]),3);
        bufp->chgCData(oldp+1565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[3]),3);
        bufp->chgCData(oldp+1566,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[4]),3);
        bufp->chgCData(oldp+1567,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[5]),3);
        bufp->chgCData(oldp+1568,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[6]),3);
        bufp->chgCData(oldp+1569,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[7]),3);
        bufp->chgCData(oldp+1570,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[8]),3);
        bufp->chgCData(oldp+1571,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[9]),3);
        bufp->chgCData(oldp+1572,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[10]),3);
        bufp->chgCData(oldp+1573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[11]),3);
        bufp->chgCData(oldp+1574,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[12]),3);
        bufp->chgCData(oldp+1575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[13]),3);
        bufp->chgCData(oldp+1576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[14]),3);
        bufp->chgCData(oldp+1577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[15]),3);
        bufp->chgCData(oldp+1578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[16]),3);
        bufp->chgCData(oldp+1579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[17]),3);
        bufp->chgCData(oldp+1580,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[18]),3);
        bufp->chgCData(oldp+1581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[19]),3);
        bufp->chgCData(oldp+1582,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[20]),3);
        bufp->chgCData(oldp+1583,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[21]),3);
        bufp->chgCData(oldp+1584,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[22]),3);
        bufp->chgCData(oldp+1585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[23]),3);
        bufp->chgCData(oldp+1586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[24]),3);
        bufp->chgCData(oldp+1587,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[25]),3);
        bufp->chgCData(oldp+1588,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[26]),3);
        bufp->chgCData(oldp+1589,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[27]),3);
        bufp->chgCData(oldp+1590,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[28]),3);
        bufp->chgCData(oldp+1591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[29]),3);
        bufp->chgCData(oldp+1592,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[30]),3);
        bufp->chgCData(oldp+1593,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[31]),3);
        bufp->chgIData(oldp+1594,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag),32);
        bufp->chgIData(oldp+1595,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid),32);
        bufp->chgIData(oldp+1596,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[0]),30);
        bufp->chgIData(oldp+1597,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[1]),30);
        bufp->chgIData(oldp+1598,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[2]),30);
        bufp->chgIData(oldp+1599,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[3]),30);
        bufp->chgIData(oldp+1600,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[4]),30);
        bufp->chgIData(oldp+1601,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[5]),30);
        bufp->chgIData(oldp+1602,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[6]),30);
        bufp->chgIData(oldp+1603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[7]),30);
        bufp->chgCData(oldp+1604,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr),3);
        bufp->chgIData(oldp+1605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_buffer),30);
        bufp->chgBit(oldp+1606,((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr))));
        bufp->chgBit(oldp+1607,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr))));
        bufp->chgIData(oldp+1608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd),32);
        bufp->chgIData(oldp+1609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_target),30);
        bufp->chgCData(oldp+1610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_counter),3);
        bufp->chgBit(oldp+1611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_jirl_flag));
        bufp->chgBit(oldp+1612,((0xffffffffU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid)));
        bufp->chgCData(oldp+1613,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__select_one_invalid_entry),5);
        bufp->chgCData(oldp+1614,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index),5);
        bufp->chgCData(oldp+1615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr),6);
        bufp->chgWData(oldp+1616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg),256);
        bufp->chgWData(oldp+1624,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg),256);
        bufp->chgBit(oldp+1632,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op));
        bufp->chgBit(oldp+1633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld));
        bufp->chgCData(oldp+1634,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size),3);
        bufp->chgCData(oldp+1635,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index),8);
        bufp->chgIData(oldp+1636,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag),20);
        bufp->chgCData(oldp+1637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset),4);
        bufp->chgCData(oldp+1638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb),4);
        bufp->chgIData(oldp+1639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata),32);
        bufp->chgBit(oldp+1640,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en));
        bufp->chgBit(oldp+1641,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop));
        bufp->chgCData(oldp+1642,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode),2);
        bufp->chgBit(oldp+1643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way));
        bufp->chgCData(oldp+1644,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num),2);
        bufp->chgCData(oldp+1645,(((2U & (VL_REDXOR_2(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num) 
                                          << 1U)) | 
                                   (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))),2);
        bufp->chgCData(oldp+1646,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index),8);
        bufp->chgCData(oldp+1647,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb),4);
        bufp->chgIData(oldp+1648,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wdata),32);
        bufp->chgBit(oldp+1649,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_way));
        bufp->chgCData(oldp+1650,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_offset),4);
        bufp->chgCData(oldp+1651,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra),8);
        bufp->chgIData(oldp+1652,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__output_buffer),32);
        bufp->chgBit(oldp+1653,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena));
        bufp->chgCData(oldp+1654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra),8);
        bufp->chgIData(oldp+1655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__output_buffer),32);
        bufp->chgCData(oldp+1656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra),8);
        bufp->chgIData(oldp+1657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__output_buffer),32);
        bufp->chgCData(oldp+1658,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra),8);
        bufp->chgIData(oldp+1659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__output_buffer),32);
        bufp->chgCData(oldp+1660,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra),8);
        bufp->chgIData(oldp+1661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__output_buffer),32);
        bufp->chgCData(oldp+1662,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra),8);
        bufp->chgIData(oldp+1663,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__output_buffer),32);
        bufp->chgCData(oldp+1664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra),8);
        bufp->chgIData(oldp+1665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__output_buffer),32);
        bufp->chgCData(oldp+1666,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra),8);
        bufp->chgIData(oldp+1667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__output_buffer),32);
        bufp->chgCData(oldp+1668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_addra),8);
        bufp->chgIData(oldp+1669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_dina),21);
        bufp->chgIData(oldp+1670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer),21);
        bufp->chgBit(oldp+1671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_ena));
        bufp->chgIData(oldp+1672,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer),21);
        bufp->chgBit(oldp+1673,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank0));
        bufp->chgBit(oldp+1674,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank1));
        bufp->chgBit(oldp+1675,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank2));
        bufp->chgBit(oldp+1676,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank3));
        bufp->chgBit(oldp+1677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank0));
        bufp->chgBit(oldp+1678,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank1));
        bufp->chgBit(oldp+1679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank2));
        bufp->chgBit(oldp+1680,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank3));
        bufp->chgCData(oldp+1681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index),8);
        bufp->chgBit(oldp+1682,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[
                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                        >> 5U)] >> 
                                       (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index))))));
        bufp->chgBit(oldp+1683,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[
                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                        >> 5U)] >> 
                                       (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index))))));
        bufp->chgBit(oldp+1684,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_hit));
        bufp->chgBit(oldp+1685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_hit));
        bufp->chgBit(oldp+1686,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cache_hit));
        bufp->chgIData(oldp+1687,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[
                                  (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                         >> 2U))]),32);
        bufp->chgIData(oldp+1688,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[
                                  (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                         >> 2U))]),32);
        bufp->chgIData(oldp+1689,((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_hit))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[
                                    (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                           >> 2U))]) 
                                   | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_hit))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[
                                      (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                             >> 2U))]))),32);
        bufp->chgWData(oldp+1690,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data),128);
        bufp->chgWData(oldp+1694,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data),128);
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way) {
            __Vtemp_h1299317e__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[0U];
            __Vtemp_h1299317e__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[1U];
            __Vtemp_h1299317e__0[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[2U];
            __Vtemp_h1299317e__0[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[3U];
        } else {
            __Vtemp_h1299317e__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[0U];
            __Vtemp_h1299317e__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[1U];
            __Vtemp_h1299317e__0[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[2U];
            __Vtemp_h1299317e__0[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[3U];
        }
        bufp->chgWData(oldp+1698,(__Vtemp_h1299317e__0),128);
        bufp->chgBit(oldp+1702,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way)
                                        ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[
                                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)))
                                        : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[
                                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)))))));
        bufp->chgBit(oldp+1703,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way)
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer))));
        bufp->chgIData(oldp+1704,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)
                                    ? (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
                                                   >> 1U))
                                    : (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
                                                   >> 1U)))),21);
        bufp->chgBit(oldp+1705,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                       >> 7U))));
        bufp->chgBit(oldp+1706,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way));
        bufp->chgBit(oldp+1707,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_idle2lookup));
        bufp->chgBit(oldp+1708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_lookup2lookup));
        bufp->chgBit(oldp+1709,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
        bufp->chgBit(oldp+1710,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
        bufp->chgBit(oldp+1711,((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
        bufp->chgBit(oldp+1712,((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
        bufp->chgBit(oldp+1713,((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
        bufp->chgBit(oldp+1714,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state)))));
        bufp->chgBit(oldp+1715,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state));
        bufp->chgBit(oldp+1716,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr));
        bufp->chgBit(oldp+1717,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0));
        bufp->chgBit(oldp+1718,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1));
        bufp->chgBit(oldp+1719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2));
        bufp->chgBit(oldp+1720,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr));
        bufp->chgBit(oldp+1721,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer)))));
        bufp->chgBit(oldp+1722,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer));
        bufp->chgBit(oldp+1723,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer));
        bufp->chgCData(oldp+1724,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state),5);
        bufp->chgBit(oldp+1725,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer));
        bufp->chgBit(oldp+1726,((1U & (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                           >> 7U)) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer))));
        bufp->chgCData(oldp+1727,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr),8);
        bufp->chgIData(oldp+1728,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_result),32);
        bufp->chgWData(oldp+1729,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r),350);
        bufp->chgSData(oldp+1740,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                              >> 0xbU))),14);
        bufp->chgBit(oldp+1741,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 9U))));
        bufp->chgBit(oldp+1742,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1743,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1744,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1745,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 5U))));
        bufp->chgIData(oldp+1746,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U]),32);
        bufp->chgIData(oldp+1747,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]),32);
        bufp->chgCData(oldp+1748,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                           >> 0x1aU))),4);
        bufp->chgCData(oldp+1749,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0x1eU)),2);
        bufp->chgIData(oldp+1750,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                    << 0x1eU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                 >> 2U))),32);
        bufp->chgSData(oldp+1751,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                              >> 3U))),14);
        bufp->chgIData(oldp+1752,(((0x40000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U])
                                    ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                       | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                              << 0x1eU) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                >> 2U))))
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])),32);
        bufp->chgIData(oldp+1753,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                   | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]) 
                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                          << 0x1eU) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                            >> 2U))))),32);
        bufp->chgBit(oldp+1754,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1755,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1756,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1757,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U])));
        bufp->chgBit(oldp+1758,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp));
        bufp->chgSData(oldp+1759,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                             >> 0x13U))),9);
        bufp->chgSData(oldp+1760,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp_ale) 
                                    << 9U) | (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                 >> 0x13U)))),10);
        bufp->chgBit(oldp+1761,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1762,((IData)((0U != (0xc000000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])))));
        bufp->chgBit(oldp+1763,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable) 
                                 & (0xffU != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count)))));
        bufp->chgBit(oldp+1764,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1765,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1766,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1767,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1768,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U])));
        bufp->chgBit(oldp+1769,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1770,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1771,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 3U))));
        bufp->chgSData(oldp+1772,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])),10);
        bufp->chgIData(oldp+1773,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                   >> 0xdU)),19);
        bufp->chgBit(oldp+1774,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1775,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1776,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1777,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1778,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1779,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1780,((1U & (IData)(((0U 
                                                != 
                                                (0xc000400U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable))))));
        bufp->chgBit(oldp+1781,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 6U) & (0U != 
                                             (0x1fU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid))));
        bufp->chgBit(oldp+1782,((0U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))));
        bufp->chgBit(oldp+1783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp_ale));
        bufp->chgBit(oldp+1784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign));
        bufp->chgBit(oldp+1785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__access_mem));
        bufp->chgBit(oldp+1786,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1787,((3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_result)),2);
        bufp->chgBit(oldp+1788,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                  >> 0x1eU) & ((IData)(
                                                       (0x20088000U 
                                                        == 
                                                        (0x3fff8000U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U]))) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid)))));
        bufp->chgBit(oldp+1789,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__icacop_inst));
        bufp->chgBit(oldp+1790,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcacop_inst));
        bufp->chgBit(oldp+1791,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst));
        bufp->chgBit(oldp+1792,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1793,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 9U))));
        bufp->chgIData(oldp+1794,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1),32);
        bufp->chgIData(oldp+1795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2),32);
        bufp->chgIData(oldp+1796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__exe_result),32);
        bufp->chgCData(oldp+1797,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen),4);
        bufp->chgCData(oldp+1798,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen),4);
        bufp->chgIData(oldp+1799,(((((- (IData)((1U 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen) 
                                                    >> 3U)))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                    << 0x18U) | ((0xff0000U 
                                                  & (((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen) 
                                                                     >> 2U)))) 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & (((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen) 
                                                                        >> 1U)))) 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen)))) 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))))),32);
        bufp->chgIData(oldp+1800,(((((- (IData)((1U 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen) 
                                                    >> 3U)))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                    << 0x10U) | (0xffffU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen)))) 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))),32);
        bufp->chgIData(oldp+1801,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
                                    << 0x14U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                 >> 0xcU))),32);
        bufp->chgQData(oldp+1802,((((QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU])) 
                                    << 0x34U) | (((QData)((IData)(
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[9U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[8U])) 
                                                    >> 0xcU)))),64);
        bufp->chgBit(oldp+1804,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                       >> 0xcU))));
        bufp->chgCData(oldp+1805,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                            >> 0xdU))),8);
        bufp->chgCData(oldp+1806,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                            >> 0x15U))),8);
        bufp->chgBit(oldp+1807,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1808,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1809,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1810,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1811,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1812,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1813,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1814,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1815,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1816,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1817,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1818,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1819,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1820,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1821,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0x18U))));
        bufp->chgIData(oldp+1822,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_result),32);
        bufp->chgIData(oldp+1823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__slt_result),32);
        bufp->chgIData(oldp+1824,((1U & (~ (IData)(
                                                   (1ULL 
                                                    & ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1)) 
                                                         + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b))) 
                                                        + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin))) 
                                                       >> 0x20U)))))),32);
        bufp->chgIData(oldp+1825,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)),32);
        bufp->chgIData(oldp+1826,((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result)),32);
        bufp->chgIData(oldp+1827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result),32);
        bufp->chgIData(oldp+1828,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                   ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)),32);
        bufp->chgIData(oldp+1829,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                   << (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))),32);
        bufp->chgQData(oldp+1830,(((((QData)((IData)(
                                                     (- (IData)(
                                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                  >> 0x15U) 
                                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                    >> 0x1fU)))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1))) 
                                   >> (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))),64);
        bufp->chgIData(oldp+1832,((IData)(((((QData)((IData)(
                                                             (- (IData)(
                                                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                          >> 0x15U) 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                            >> 0x1fU)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1))) 
                                           >> (0x1fU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)))),32);
        bufp->chgIData(oldp+1833,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                   & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))),32);
        bufp->chgIData(oldp+1834,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                   | (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))),32);
        bufp->chgIData(oldp+1835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b),32);
        bufp->chgBit(oldp+1836,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin));
        bufp->chgBit(oldp+1837,((1U & (IData)((1ULL 
                                               & ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1)) 
                                                    + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b))) 
                                                   + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin))) 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1838,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_op));
        bufp->chgCData(oldp+1839,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index),8);
        bufp->chgIData(oldp+1840,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag),20);
        bufp->chgCData(oldp+1841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset),4);
        bufp->chgCData(oldp+1842,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wstrb),4);
        bufp->chgIData(oldp+1843,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wdata),32);
        bufp->chgBit(oldp+1844,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en));
        bufp->chgBit(oldp+1845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop));
        bufp->chgCData(oldp+1846,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode),2);
        bufp->chgBit(oldp+1847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way));
        bufp->chgCData(oldp+1848,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num),2);
        bufp->chgCData(oldp+1849,(((2U & (VL_REDXOR_2(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num) 
                                          << 1U)) | 
                                   (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num))))),2);
        bufp->chgIData(oldp+1850,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer),32);
        bufp->chgBit(oldp+1851,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena));
        bufp->chgIData(oldp+1852,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer),32);
        bufp->chgIData(oldp+1853,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer),32);
        bufp->chgIData(oldp+1854,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer),32);
        bufp->chgIData(oldp+1855,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer),32);
        bufp->chgIData(oldp+1856,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer),32);
        bufp->chgIData(oldp+1857,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer),32);
        bufp->chgIData(oldp+1858,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer),32);
        bufp->chgIData(oldp+1859,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_dina),21);
        bufp->chgIData(oldp+1860,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer),21);
        bufp->chgBit(oldp+1861,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_ena));
        bufp->chgIData(oldp+1862,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer),21);
        bufp->chgBit(oldp+1863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_hit));
        bufp->chgBit(oldp+1864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_hit));
        bufp->chgBit(oldp+1865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cache_hit));
        __Vtemp_h4e2f141e__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer;
        __Vtemp_h4e2f141e__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer;
        __Vtemp_h4e2f141e__0[2U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))));
        __Vtemp_h4e2f141e__0[3U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))) 
                                            >> 0x20U));
        bufp->chgIData(oldp+1866,(__Vtemp_h4e2f141e__0[
                                  (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                         >> 2U))]),32);
        __Vtemp_h07a051bc__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer;
        __Vtemp_h07a051bc__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer;
        __Vtemp_h07a051bc__0[2U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))));
        __Vtemp_h07a051bc__0[3U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))) 
                                            >> 0x20U));
        bufp->chgIData(oldp+1867,(__Vtemp_h07a051bc__0[
                                  (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                         >> 2U))]),32);
        __Vtemp_h3677a3f3__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer;
        __Vtemp_h3677a3f3__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer;
        __Vtemp_h3677a3f3__0[2U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))));
        __Vtemp_h3677a3f3__0[3U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))) 
                                            >> 0x20U));
        __Vtemp_h678ca1a5__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer;
        __Vtemp_h678ca1a5__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer;
        __Vtemp_h678ca1a5__0[2U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))));
        __Vtemp_h678ca1a5__0[3U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))) 
                                            >> 0x20U));
        bufp->chgIData(oldp+1868,((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_hit))) 
                                    & __Vtemp_h3677a3f3__0[
                                    (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                           >> 2U))]) 
                                   | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_hit))) 
                                      & __Vtemp_h678ca1a5__0[
                                      (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                             >> 2U))]))),32);
        __Vtemp_ha986c18e__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer;
        __Vtemp_ha986c18e__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer;
        __Vtemp_ha986c18e__0[2U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))));
        __Vtemp_ha986c18e__0[3U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))) 
                                            >> 0x20U));
        bufp->chgWData(oldp+1869,(__Vtemp_ha986c18e__0),128);
        __Vtemp_hda7f0c9f__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer;
        __Vtemp_hda7f0c9f__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer;
        __Vtemp_hda7f0c9f__0[2U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))));
        __Vtemp_hda7f0c9f__0[3U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))) 
                                            >> 0x20U));
        bufp->chgWData(oldp+1873,(__Vtemp_hda7f0c9f__0),128);
        bufp->chgBit(oldp+1877,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
        bufp->chgBit(oldp+1878,((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
        bufp->chgBit(oldp+1879,((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
        bufp->chgBit(oldp+1880,((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
        bufp->chgBit(oldp+1881,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0));
        bufp->chgBit(oldp+1882,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1));
        bufp->chgBit(oldp+1883,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2));
        bufp->chgBit(oldp+1884,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                       >> 7U))));
        bufp->chgBit(oldp+1885,((1U & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset)) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop)) 
                                          & (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                                 >> 7U)) 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer))))));
        bufp->chgBit(oldp+1886,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2_hit_wr));
        bufp->chgBit(oldp+1887,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer)))));
        bufp->chgBit(oldp+1888,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer));
        bufp->chgBit(oldp+1889,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer));
        bufp->chgIData(oldp+1890,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_tag),20);
        bufp->chgCData(oldp+1891,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state),5);
        bufp->chgBit(oldp+1892,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__rd_req_buffer));
        bufp->chgBit(oldp+1893,((1U & (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                           >> 7U)) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer))));
        bufp->chgCData(oldp+1894,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr),8);
        bufp->chgIData(oldp+1895,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0]),32);
        bufp->chgIData(oldp+1896,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[1]),32);
        bufp->chgIData(oldp+1897,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[2]),32);
        bufp->chgIData(oldp+1898,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[3]),32);
        bufp->chgIData(oldp+1899,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[4]),32);
        bufp->chgIData(oldp+1900,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[5]),32);
        bufp->chgIData(oldp+1901,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[6]),32);
        bufp->chgIData(oldp+1902,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[7]),32);
        bufp->chgIData(oldp+1903,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[8]),32);
        bufp->chgIData(oldp+1904,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[9]),32);
        bufp->chgIData(oldp+1905,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[10]),32);
        bufp->chgIData(oldp+1906,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[11]),32);
        bufp->chgIData(oldp+1907,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[12]),32);
        bufp->chgIData(oldp+1908,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[13]),32);
        bufp->chgIData(oldp+1909,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[14]),32);
        bufp->chgIData(oldp+1910,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[15]),32);
        bufp->chgIData(oldp+1911,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[16]),32);
        bufp->chgIData(oldp+1912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[17]),32);
        bufp->chgIData(oldp+1913,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[18]),32);
        bufp->chgIData(oldp+1914,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[19]),32);
        bufp->chgIData(oldp+1915,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[20]),32);
        bufp->chgIData(oldp+1916,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[21]),32);
        bufp->chgIData(oldp+1917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[22]),32);
        bufp->chgIData(oldp+1918,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[23]),32);
        bufp->chgIData(oldp+1919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[24]),32);
        bufp->chgIData(oldp+1920,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[25]),32);
        bufp->chgIData(oldp+1921,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[26]),32);
        bufp->chgIData(oldp+1922,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[27]),32);
        bufp->chgIData(oldp+1923,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[28]),32);
        bufp->chgIData(oldp+1924,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[29]),32);
        bufp->chgIData(oldp+1925,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[30]),32);
        bufp->chgIData(oldp+1926,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[31]),32);
        bufp->chgBit(oldp+1927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid));
        bufp->chgWData(oldp+1928,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r),109);
        bufp->chgIData(oldp+1932,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]),32);
        bufp->chgCData(oldp+1933,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U])),4);
        bufp->chgBit(oldp+1934,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1935,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1936,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1937,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                       >> 6U))));
        bufp->chgIData(oldp+1938,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                                    << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                 >> 0xdU))),32);
        bufp->chgBit(oldp+1939,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                               >> 0x25U)))));
        bufp->chgCData(oldp+1940,((0x1fU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                                    >> 0x20U)))),5);
        bufp->chgIData(oldp+1941,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus)),32);
        bufp->chgSData(oldp+1942,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op),14);
        bufp->chgCData(oldp+1943,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op),4);
        bufp->chgBit(oldp+1944,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w))));
        bufp->chgBit(oldp+1945,((IData)((((0ULL != 
                                           (0x280000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i)))));
        bufp->chgBit(oldp+1946,((((((((((((((((((((
                                                   (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
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
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld))));
        bufp->chgBit(oldp+1947,((IData)((0ULL != (0x280000ULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d)))));
        bufp->chgBit(oldp+1948,(((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w))));
        bufp->chgBit(oldp+1949,((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w))));
        bufp->chgBit(oldp+1950,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg));
        bufp->chgBit(oldp+1951,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b))));
        bufp->chgBit(oldp+1952,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h))));
        bufp->chgBit(oldp+1953,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h))));
        bufp->chgBit(oldp+1954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w));
        bufp->chgBit(oldp+1955,(((((((((((((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
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
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar)))));
        bufp->chgBit(oldp+1956,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)))));
        bufp->chgBit(oldp+1957,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg))));
        bufp->chgBit(oldp+1958,((IData)((((((((0ULL 
                                               != (0xfc00000ULL 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)))));
        bufp->chgCData(oldp+1959,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                    << 1U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)))),2);
        bufp->chgCData(oldp+1960,(((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                  >> 0x15U)))
                                    ? 1U : (0x1fU & 
                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)
                                              ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  << 0x1bU) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 5U))
                                              : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])))),5);
        bufp->chgIData(oldp+1961,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm),32);
        bufp->chgCData(oldp+1962,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0x1aU)),6);
        bufp->chgCData(oldp+1963,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x16U))),4);
        bufp->chgCData(oldp+1964,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x14U))),2);
        bufp->chgCData(oldp+1965,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1966,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])),5);
        bufp->chgCData(oldp+1967,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 5U))),5);
        bufp->chgCData(oldp+1968,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0xaU))),5);
        bufp->chgSData(oldp+1969,((0xfffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0xaU))),12);
        bufp->chgIData(oldp+1970,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 5U))),20);
        bufp->chgSData(oldp+1971,((0xffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                              >> 0xaU))),16);
        bufp->chgIData(oldp+1972,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__i26),26);
        bufp->chgQData(oldp+1973,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d),64);
        bufp->chgSData(oldp+1975,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d),16);
        bufp->chgCData(oldp+1976,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d),4);
        bufp->chgIData(oldp+1977,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d),32);
        bufp->chgIData(oldp+1978,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d),32);
        bufp->chgIData(oldp+1979,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d),32);
        bufp->chgIData(oldp+1980,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d),32);
        bufp->chgBit(oldp+1981,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w));
        bufp->chgBit(oldp+1982,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w));
        bufp->chgBit(oldp+1983,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt));
        bufp->chgBit(oldp+1984,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu));
        bufp->chgBit(oldp+1985,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor));
        bufp->chgBit(oldp+1986,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and));
        bufp->chgBit(oldp+1987,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or));
        bufp->chgBit(oldp+1988,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor));
        bufp->chgBit(oldp+1989,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w));
        bufp->chgBit(oldp+1990,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w));
        bufp->chgBit(oldp+1991,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti));
        bufp->chgBit(oldp+1992,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui));
        bufp->chgBit(oldp+1993,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi));
        bufp->chgBit(oldp+1994,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i));
        bufp->chgBit(oldp+1995,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                                           >> 1U)) 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+1996,((1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                                           >> 1U)) 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+1997,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi));
        bufp->chgBit(oldp+1998,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori));
        bufp->chgBit(oldp+1999,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori));
        bufp->chgBit(oldp+2000,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w));
        bufp->chgBit(oldp+2001,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w));
        bufp->chgBit(oldp+2002,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu));
        bufp->chgBit(oldp+2003,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w));
        bufp->chgBit(oldp+2004,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w));
        bufp->chgBit(oldp+2005,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu));
        bufp->chgBit(oldp+2006,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu));
        bufp->chgBit(oldp+2007,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w));
        bufp->chgBit(oldp+2008,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w));
        bufp->chgBit(oldp+2009,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w));
        bufp->chgBit(oldp+2010,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w));
        bufp->chgBit(oldp+2011,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w));
        bufp->chgBit(oldp+2012,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w));
        bufp->chgBit(oldp+2013,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2014,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+2015,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+2016,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+2017,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2018,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+2019,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+2020,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w));
        bufp->chgBit(oldp+2021,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w));
        bufp->chgBit(oldp+2022,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b));
        bufp->chgBit(oldp+2023,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu));
        bufp->chgBit(oldp+2024,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h));
        bufp->chgBit(oldp+2025,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu));
        bufp->chgBit(oldp+2026,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w));
        bufp->chgBit(oldp+2027,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b));
        bufp->chgBit(oldp+2028,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h));
        bufp->chgBit(oldp+2029,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w));
        bufp->chgBit(oldp+2030,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall));
        bufp->chgBit(oldp+2031,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break));
        bufp->chgBit(oldp+2032,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd));
        bufp->chgBit(oldp+2033,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr));
        bufp->chgBit(oldp+2034,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn));
        bufp->chgBit(oldp+2035,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w));
        bufp->chgBit(oldp+2036,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w));
        bufp->chgBit(oldp+2037,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle));
        bufp->chgBit(oldp+2038,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch));
        bufp->chgBit(oldp+2039,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd));
        bufp->chgBit(oldp+2040,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr));
        bufp->chgBit(oldp+2041,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill));
        bufp->chgBit(oldp+2042,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb));
        bufp->chgBit(oldp+2043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop));
        bufp->chgBit(oldp+2044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld));
        bufp->chgBit(oldp+2045,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar));
        bufp->chgBit(oldp+2046,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar));
        bufp->chgBit(oldp+2047,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w))));
        bufp->chgBit(oldp+2048,((((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
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
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld))));
        bufp->chgBit(oldp+2049,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori))));
        bufp->chgBit(oldp+2050,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w))));
        bufp->chgBit(oldp+2051,((IData)((0ULL != (0xfc80000ULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d)))));
        bufp->chgBit(oldp+2052,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i))));
        bufp->chgBit(oldp+2053,((IData)((0ULL != (0x300000ULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d)))));
        bufp->chgIData(oldp+2054,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1),32);
        bufp->chgCData(oldp+2055,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2),5);
        bufp->chgIData(oldp+2056,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2),32);
        bufp->chgBit(oldp+2057,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty));
        bufp->chgBit(oldp+2058,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty))));
        bufp->chgBit(oldp+2059,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty))));
        bufp->chgBit(oldp+2060,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2061,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                               >> 0x25U)))));
        bufp->chgCData(oldp+2062,((0x1fU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                    >> 0x20U)))),5);
        bufp->chgIData(oldp+2063,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)),32);
        bufp->chgBit(oldp+2064,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp));
        bufp->chgSData(oldp+2065,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe) 
                                    << 8U) | ((0x80U 
                                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid)) 
                                                  << 7U)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall) 
                                                     << 5U) 
                                                    | ((0x1eU 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int))))))),9);
        bufp->chgBit(oldp+2066,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid));
        bufp->chgBit(oldp+2067,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid)))));
        bufp->chgBit(oldp+2068,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe));
        bufp->chgIData(oldp+2069,(((1U & (IData)(((
                                                   (((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))) 
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
                                    ? ((((IData)((0x1ffffffffULL 
                                                  & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))))) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                        | ((IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))))) 
                                           & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                      >> 0x20U)))) 
                                       | ((IData)((0x1ffffffffULL 
                                                   & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w))))) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))
                                    : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data))),32);
        bufp->chgBit(oldp+2070,((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid))));
        bufp->chgBit(oldp+2071,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__excp));
        bufp->chgBit(oldp+2072,((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle))));
        bufp->chgIData(oldp+2073,(((((IData)((0x1ffffffffULL 
                                              & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))))) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                    | ((IData)((0x1ffffffffULL 
                                                & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))))) 
                                       & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                  >> 0x20U)))) 
                                   | ((IData)((0x1ffffffffULL 
                                               & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w))))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))),32);
        bufp->chgBit(oldp+2074,((1U & (IData)((((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))) 
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
                                                        >> 0x20U))))))));
        bufp->chgBit(oldp+2075,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel));
        bufp->chgBit(oldp+2076,((((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                     >> 0x1eU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                  >> 2U)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid)) 
                                  | ((IData)((0U != 
                                              (0x8800U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U]))) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))) 
                                 | ((IData)((0U != 
                                             (0x80200U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U]))) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)))));
        bufp->chgBit(oldp+2077,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data) 
                                 | (0ULL != (0x300000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d)))));
        bufp->chgBit(oldp+2078,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data));
        bufp->chgBit(oldp+2079,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb));
        bufp->chgBit(oldp+2080,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj));
        bufp->chgBit(oldp+2081,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd));
        bufp->chgCData(oldp+2082,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w) 
                                    << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w) 
                                               << 4U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b))))))),8);
        bufp->chgCData(oldp+2083,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b))))),8);
        bufp->chgBit(oldp+2084,((IData)(((0x1400U == 
                                          (0xfffc00U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])) 
                                         & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg))))));
        bufp->chgIData(oldp+2085,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[0]),32);
        bufp->chgIData(oldp+2086,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[1]),32);
        bufp->chgIData(oldp+2087,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[2]),32);
        bufp->chgIData(oldp+2088,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[3]),32);
        bufp->chgIData(oldp+2089,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[4]),32);
        bufp->chgIData(oldp+2090,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[5]),32);
        bufp->chgIData(oldp+2091,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[6]),32);
        bufp->chgIData(oldp+2092,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[7]),32);
        bufp->chgIData(oldp+2093,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[8]),32);
        bufp->chgIData(oldp+2094,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[9]),32);
        bufp->chgIData(oldp+2095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[10]),32);
        bufp->chgIData(oldp+2096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[11]),32);
        bufp->chgIData(oldp+2097,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[12]),32);
        bufp->chgIData(oldp+2098,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[13]),32);
        bufp->chgIData(oldp+2099,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[14]),32);
        bufp->chgIData(oldp+2100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[15]),32);
        bufp->chgIData(oldp+2101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[16]),32);
        bufp->chgIData(oldp+2102,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[17]),32);
        bufp->chgIData(oldp+2103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[18]),32);
        bufp->chgIData(oldp+2104,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[19]),32);
        bufp->chgIData(oldp+2105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[20]),32);
        bufp->chgIData(oldp+2106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[21]),32);
        bufp->chgIData(oldp+2107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[22]),32);
        bufp->chgIData(oldp+2108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[23]),32);
        bufp->chgIData(oldp+2109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[24]),32);
        bufp->chgIData(oldp+2110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[25]),32);
        bufp->chgIData(oldp+2111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[26]),32);
        bufp->chgIData(oldp+2112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[27]),32);
        bufp->chgIData(oldp+2113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[28]),32);
        bufp->chgIData(oldp+2114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[29]),32);
        bufp->chgIData(oldp+2115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[30]),32);
        bufp->chgIData(oldp+2116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[31]),32);
        bufp->chgIData(oldp+2117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+2118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+2119,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+2120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+2121,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+2122,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+2123,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+2124,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+2125,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+2126,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+2127,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+2128,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+2129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+2130,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+2131,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+2132,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+2133,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+2134,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+2135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+2136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+2137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+2138,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+2139,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+2140,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+2141,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+2142,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+2143,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+2144,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+2145,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+2146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+2147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+2148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[31]),32);
        bufp->chgBit(oldp+2149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid));
        bufp->chgIData(oldp+2150,(((IData)(4U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc)),32);
        bufp->chgBit(oldp+2151,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr));
        bufp->chgBit(oldp+2152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif));
        bufp->chgBit(oldp+2153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi));
        bufp->chgBit(oldp+2154,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp));
        bufp->chgBit(oldp+2155,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_num));
        bufp->chgCData(oldp+2156,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr) 
                                                  << 1U) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_num) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef)))))),4);
        bufp->chgBit(oldp+2157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign));
        bufp->chgIData(oldp+2158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff),32);
        bufp->chgBit(oldp+2159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable));
        bufp->chgBit(oldp+2160,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_counter) 
                                  >> 2U) & (0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd))));
        bufp->chgBit(oldp+2161,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock));
        bufp->chgBit(oldp+2162,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req) 
                                  & (4U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state)))));
        bufp->chgBit(oldp+2163,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef));
        bufp->chgIData(oldp+2164,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc),32);
        bufp->chgIData(oldp+2165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_buffer),32);
        bufp->chgBit(oldp+2166,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state));
        bufp->chgIData(oldp+2167,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_buffer),32);
        bufp->chgCData(oldp+2168,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state),3);
        bufp->chgWData(oldp+2169,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r),425);
        bufp->chgCData(oldp+2183,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                           >> 7U))),4);
        bufp->chgCData(oldp+2184,((3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])),2);
        bufp->chgCData(oldp+2185,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                         >> 0xbU))),2);
        bufp->chgBit(oldp+2186,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                       >> 6U))));
        bufp->chgBit(oldp+2187,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                       >> 5U))));
        bufp->chgCData(oldp+2188,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])),5);
        bufp->chgIData(oldp+2189,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U]),32);
        bufp->chgIData(oldp+2190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]),32);
        bufp->chgBit(oldp+2191,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                       >> 0xdU))));
        bufp->chgSData(oldp+2192,((0x3ffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                >> 0x1eU)))),10);
        bufp->chgBit(oldp+2193,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                       >> 0xeU))));
        bufp->chgIData(oldp+2194,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                    << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                 >> 0xfU))),32);
        bufp->chgSData(oldp+2195,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                              >> 0xfU))),14);
        bufp->chgBit(oldp+2196,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+2197,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                       >> 8U))));
        bufp->chgBit(oldp+2198,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                       >> 9U))));
        bufp->chgBit(oldp+2199,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2200,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+2201,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+2202,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                       >> 0xcU))));
        bufp->chgBit(oldp+2203,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+2204,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                       >> 0xeU))));
        bufp->chgBit(oldp+2205,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                       >> 0x10U))));
        bufp->chgSData(oldp+2206,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                             >> 0x11U))),10);
        bufp->chgIData(oldp+2207,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                << 5U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                  >> 0x1bU)))),19);
        bufp->chgBit(oldp+2208,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                       >> 0xeU))));
        bufp->chgBit(oldp+2209,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+2210,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                       >> 0x10U))));
        bufp->chgBit(oldp+2211,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+2212,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+2213,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+2214,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                       >> 0x14U))));
        bufp->chgBit(oldp+2215,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                       >> 0x15U))));
        bufp->chgBit(oldp+2216,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+2217,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                    << 9U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                              >> 0x17U))),32);
        bufp->chgIData(oldp+2218,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_rd_buff),32);
        bufp->chgBit(oldp+2219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_buff_enable));
        bufp->chgBit(oldp+2220,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem));
        bufp->chgCData(oldp+2221,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                         >> 3U))),2);
        bufp->chgBit(oldp+2222,((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                   >> 5U) & (0U != 
                                             (0x1fU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))));
        bufp->chgBit(oldp+2223,((0U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))));
        bufp->chgSData(oldp+2224,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil) 
                                    << 0xfU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem) 
                                                             << 0xaU) 
                                                            | (0x3ffU 
                                                               & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                   << 2U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                     >> 0x1eU)))))))))),16);
        bufp->chgBit(oldp+2225,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp));
        bufp->chgBit(oldp+2226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem));
        bufp->chgBit(oldp+2227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr));
        bufp->chgBit(oldp+2228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil));
        bufp->chgBit(oldp+2229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis));
        bufp->chgBit(oldp+2230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme));
        bufp->chgBit(oldp+2231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi));
        bufp->chgBit(oldp+2232,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg))));
        bufp->chgBit(oldp+2233,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                       >> 0x17U))));
        bufp->chgQData(oldp+2234,((((QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U])) 
                                    << 0x29U) | (((QData)((IData)(
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[8U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U])) 
                                                    >> 0x17U)))),64);
        bufp->chgIData(oldp+2236,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                    << 9U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                              >> 0x17U))),32);
        bufp->chgCData(oldp+2237,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                   >> 0x18U)),8);
        bufp->chgIData(oldp+2238,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                    << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                 << 4U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset)))),32);
        bufp->chgIData(oldp+2239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU]),32);
        bufp->chgCData(oldp+2240,((0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU])),8);
        bufp->chgIData(oldp+2241,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                    << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU] 
                                                 >> 8U))),32);
        bufp->chgBit(oldp+2242,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                       >> 8U))));
        bufp->chgIData(oldp+2243,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xdU] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                                 >> 9U))),32);
        bufp->chgCData(oldp+2244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index),8);
        bufp->chgCData(oldp+2245,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset),4);
        bufp->chgIData(oldp+2246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter),32);
        bufp->chgIData(oldp+2247,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter),32);
        bufp->chgIData(oldp+2248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter),32);
        bufp->chgIData(oldp+2249,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter),32);
        bufp->chgIData(oldp+2250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter),32);
        bufp->chgIData(oldp+2251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter),32);
        bufp->chgIData(oldp+2252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter),32);
        bufp->chgBit(oldp+2253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen));
        bufp->chgBit(oldp+2254,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x100U == (0x3fff00U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2255,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x400U == (0x3fff00U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2256,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x500U == (0x3fff00U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2257,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x600U == (0x3fff00U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2258,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x700U == (0x3fff00U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2259,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0xc00U == (0x3fff00U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2260,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x1000U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2261,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x1100U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2262,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x1200U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2263,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x1300U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2264,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x1800U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2265,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x1900U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2266,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x1a00U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2267,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x1b00U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2268,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x2000U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2269,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x3000U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2270,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x3100U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2271,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x3200U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2272,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x3300U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2273,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x4000U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen));
        bufp->chgBit(oldp+2275,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x4200U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2276,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x4300U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2277,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x4400U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2278,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x6000U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2279,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x8800U == (0x3fff00U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW0_wen));
        bufp->chgBit(oldp+2281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW1_wen));
        bufp->chgBit(oldp+2282,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x10000U == (0x3fff00U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+2283,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                 & (0x10100U == (0x3fff00U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgIData(oldp+2284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid),32);
        bufp->chgIData(oldp+2285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc),32);
        bufp->chgIData(oldp+2286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl),32);
        bufp->chgIData(oldp+2287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_brk),32);
        bufp->chgIData(oldp+2288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache),32);
        bufp->chgIData(oldp+2289,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv 
                                    >> 0x1fU) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl)),32);
        bufp->chgBit(oldp+2290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en));
        bufp->chgQData(oldp+2291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64),64);
        bufp->chgBit(oldp+2293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_valid_wr_en));
        bufp->chgBit(oldp+2294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_invalid_wr_en));
        bufp->chgBit(oldp+2295,((0x3fU == (0x3fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                            >> 0x10U)))));
        bufp->chgBit(oldp+2296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward));
        bufp->chgQData(oldp+2297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS),33);
        bufp->chgQData(oldp+2299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR),33);
        bufp->chgQData(oldp+2301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r),33);
        bufp->chgCData(oldp+2303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count),8);
        bufp->chgQData(oldp+2304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_d),33);
        bufp->chgQData(oldp+2306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__result_r),33);
        bufp->chgQData(oldp+2308,((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
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
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])))),33);
        bufp->chgQData(oldp+2310,((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                                    ? 
                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                     >> 0x1fU)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     (~ 
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]))
                                                     : 
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])
                                                    : 
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))),33);
        bufp->chgBit(oldp+2312,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__div_signed_buffer));
        bufp->chgBit(oldp+2313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__x_31_buffer));
        bufp->chgBit(oldp+2314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer));
        bufp->chgBit(oldp+2315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed));
        bufp->chgBit(oldp+2316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31));
        bufp->chgBit(oldp+2317,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete)
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer)
                                        : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                           >> 0x1fU)))));
        bufp->chgBit(oldp+2318,((0xf0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count))));
        bufp->chgBit(oldp+2319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete));
        bufp->chgQData(oldp+2320,((0x1ffffffffULL & 
                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                     ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31) 
                                         == (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete)
                                                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer)
                                                    : 
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                    >> 0x1fU))))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS
                                         : (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS 
                                               - 1ULL)))
                                     : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS))),33);
        bufp->chgQData(oldp+2322,((0x1ffffffffULL & 
                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31)
                                         ? (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR 
                                               - 1ULL))
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR)
                                     : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR))),33);
        bufp->chgQData(oldp+2324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX),64);
        bufp->chgQData(oldp+2326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY),33);
        bufp->chgIData(oldp+2328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__Carry),17);
        bufp->chgQData(oldp+2329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[0]),64);
        bufp->chgQData(oldp+2331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[1]),64);
        bufp->chgQData(oldp+2333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[2]),64);
        bufp->chgQData(oldp+2335,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[3]),64);
        bufp->chgQData(oldp+2337,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[4]),64);
        bufp->chgQData(oldp+2339,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[5]),64);
        bufp->chgQData(oldp+2341,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[6]),64);
        bufp->chgQData(oldp+2343,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[7]),64);
        bufp->chgQData(oldp+2345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[8]),64);
        bufp->chgQData(oldp+2347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[9]),64);
        bufp->chgQData(oldp+2349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[10]),64);
        bufp->chgQData(oldp+2351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[11]),64);
        bufp->chgQData(oldp+2353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[12]),64);
        bufp->chgQData(oldp+2355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[13]),64);
        bufp->chgQData(oldp+2357,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[14]),64);
        bufp->chgQData(oldp+2359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[15]),64);
        bufp->chgQData(oldp+2361,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[16]),64);
        bufp->chgIData(oldp+2363,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry),17);
        bufp->chgQData(oldp+2364,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[0]),64);
        bufp->chgQData(oldp+2366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[1]),64);
        bufp->chgQData(oldp+2368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[2]),64);
        bufp->chgQData(oldp+2370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[3]),64);
        bufp->chgQData(oldp+2372,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[4]),64);
        bufp->chgQData(oldp+2374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[5]),64);
        bufp->chgQData(oldp+2376,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[6]),64);
        bufp->chgQData(oldp+2378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[7]),64);
        bufp->chgQData(oldp+2380,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[8]),64);
        bufp->chgQData(oldp+2382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[9]),64);
        bufp->chgQData(oldp+2384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[10]),64);
        bufp->chgQData(oldp+2386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[11]),64);
        bufp->chgQData(oldp+2388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[12]),64);
        bufp->chgQData(oldp+2390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[13]),64);
        bufp->chgQData(oldp+2392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[14]),64);
        bufp->chgQData(oldp+2394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[15]),64);
        bufp->chgQData(oldp+2396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[16]),64);
        bufp->chgIData(oldp+2398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__p),32);
        bufp->chgSData(oldp+2399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029),14);
        bufp->chgSData(oldp+2400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029),14);
        bufp->chgSData(oldp+2401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029),14);
        bufp->chgSData(oldp+2402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029),14);
        bufp->chgSData(oldp+2403,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029),14);
        bufp->chgSData(oldp+2404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029),14);
        bufp->chgSData(oldp+2405,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029),14);
        bufp->chgSData(oldp+2406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029),14);
        bufp->chgSData(oldp+2407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029),14);
        bufp->chgSData(oldp+2408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029),14);
        bufp->chgSData(oldp+2409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029),14);
        bufp->chgSData(oldp+2410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029),14);
        bufp->chgSData(oldp+2411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029),14);
        bufp->chgSData(oldp+2412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029),14);
        bufp->chgSData(oldp+2413,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029),14);
        bufp->chgSData(oldp+2414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029),14);
        bufp->chgSData(oldp+2415,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029),14);
        bufp->chgSData(oldp+2416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029),14);
        bufp->chgSData(oldp+2417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029),14);
        bufp->chgSData(oldp+2418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029),14);
        bufp->chgSData(oldp+2419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029),14);
        bufp->chgSData(oldp+2420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029),14);
        bufp->chgSData(oldp+2421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029),14);
        bufp->chgSData(oldp+2422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029),14);
        bufp->chgSData(oldp+2423,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029),14);
        bufp->chgSData(oldp+2424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029),14);
        bufp->chgSData(oldp+2425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029),14);
        bufp->chgSData(oldp+2426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029),14);
        bufp->chgSData(oldp+2427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029),14);
        bufp->chgSData(oldp+2428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029),14);
        bufp->chgSData(oldp+2429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029),14);
        bufp->chgSData(oldp+2430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029),14);
        bufp->chgSData(oldp+2431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029),14);
        bufp->chgSData(oldp+2432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029),14);
        bufp->chgSData(oldp+2433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029),14);
        bufp->chgSData(oldp+2434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029),14);
        bufp->chgSData(oldp+2435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029),14);
        bufp->chgSData(oldp+2436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029),14);
        bufp->chgSData(oldp+2437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029),14);
        bufp->chgSData(oldp+2438,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029),14);
        bufp->chgSData(oldp+2439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029),14);
        bufp->chgSData(oldp+2440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029),14);
        bufp->chgSData(oldp+2441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029),14);
        bufp->chgSData(oldp+2442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029),14);
        bufp->chgSData(oldp+2443,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029),14);
        bufp->chgSData(oldp+2444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029),14);
        bufp->chgSData(oldp+2445,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029),14);
        bufp->chgSData(oldp+2446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029),14);
        bufp->chgSData(oldp+2447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029),14);
        bufp->chgSData(oldp+2448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029),14);
        bufp->chgSData(oldp+2449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029),14);
        bufp->chgSData(oldp+2450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029),14);
        bufp->chgSData(oldp+2451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029),14);
        bufp->chgSData(oldp+2452,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029),14);
        bufp->chgSData(oldp+2453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029),14);
        bufp->chgSData(oldp+2454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029),14);
        bufp->chgSData(oldp+2455,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029),14);
        bufp->chgSData(oldp+2456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029),14);
        bufp->chgSData(oldp+2457,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029),14);
        bufp->chgSData(oldp+2458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029),14);
        bufp->chgSData(oldp+2459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029),14);
        bufp->chgSData(oldp+2460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029),14);
        bufp->chgSData(oldp+2461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029),14);
        bufp->chgSData(oldp+2462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029),14);
        bufp->chgQData(oldp+2463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut),64);
        bufp->chgQData(oldp+2465,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut),64);
        bufp->chgCData(oldp+2467,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 9U)))),3);
        bufp->chgQData(oldp+2468,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 0xaU)),64);
        bufp->chgQData(oldp+2470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__10__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+2472,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+2473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+2474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+2475,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+2476,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0xaU)))));
        bufp->chgBit(oldp+2477,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))));
        bufp->chgBit(oldp+2478,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xaU)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                << 0xaU)))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+2479,((1U & (IData)((0x3fffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+2480,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+2481,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+2482,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+2483,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0xaU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0xaU]))));
        bufp->chgBit(oldp+2484,((1U & (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+2485,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+2486,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+2487,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+2488,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0xbU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0xbU]))));
        bufp->chgBit(oldp+2489,((1U & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+2490,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+2491,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+2492,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+2493,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0xcU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0xcU]))));
        bufp->chgBit(oldp+2494,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+2495,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+2496,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+2497,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+2498,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0xdU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0xdU]))));
        bufp->chgBit(oldp+2499,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2500,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+2501,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+2502,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+2503,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0xeU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0xeU]))));
        bufp->chgBit(oldp+2504,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2505,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+2506,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+2507,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+2508,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0xfU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0xfU]))));
        bufp->chgBit(oldp+2509,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2510,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+2511,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+2512,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+2513,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x10U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x10U]))));
        bufp->chgBit(oldp+2514,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2515,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+2516,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+2517,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+2518,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x11U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x11U]))));
        bufp->chgBit(oldp+2519,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2520,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+2521,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+2522,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+2523,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x12U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x12U]))));
        bufp->chgBit(oldp+2524,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2525,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+2526,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+2527,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+2528,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x13U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x13U]))));
        bufp->chgBit(oldp+2529,((1U & (IData)((0x7ffffffffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 9U))))));
        bufp->chgBit(oldp+2530,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+2531,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+2532,((1U & (~ (IData)((0x7ffffffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U)))))));
        bufp->chgBit(oldp+2533,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffffe00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [1U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [1U]))));
        bufp->chgBit(oldp+2534,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+2535,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+2536,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+2537,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+2538,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x14U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x14U]))));
        bufp->chgBit(oldp+2539,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+2540,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+2541,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+2542,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+2543,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x15U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x15U]))));
        bufp->chgBit(oldp+2544,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+2545,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+2546,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+2547,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+2548,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x16U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x16U]))));
        bufp->chgBit(oldp+2549,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+2550,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+2551,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+2552,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+2553,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x17U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x17U]))));
        bufp->chgBit(oldp+2554,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+2555,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+2556,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+2557,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+2558,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x18U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x18U]))));
        bufp->chgBit(oldp+2559,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+2560,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+2561,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+2562,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+2563,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x19U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x19U]))));
        bufp->chgBit(oldp+2564,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+2565,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+2566,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+2567,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+2568,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x1aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU]))));
        bufp->chgBit(oldp+2569,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+2570,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+2571,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+2572,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+2573,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x1bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU]))));
        bufp->chgBit(oldp+2574,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+2575,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+2576,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+2577,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+2578,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x1cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU]))));
        bufp->chgBit(oldp+2579,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+2580,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+2581,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+2582,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+2583,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x1dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU]))));
        bufp->chgBit(oldp+2584,((1U & (IData)((0x3fffffffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 8U))))));
        bufp->chgBit(oldp+2585,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+2586,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+2587,((1U & (~ (IData)((0x3fffffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U)))))));
        bufp->chgBit(oldp+2588,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffff00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [2U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [2U]))));
        bufp->chgBit(oldp+2589,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+2590,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+2591,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+2592,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+2593,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x1eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU]))));
        bufp->chgBit(oldp+2594,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+2595,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+2596,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+2597,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+2598,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x1fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU]))));
        bufp->chgBit(oldp+2599,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+2600,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+2601,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+2602,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+2603,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x20U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x20U]))));
        bufp->chgBit(oldp+2604,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+2605,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+2606,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+2607,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+2608,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x21U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x21U]))));
        bufp->chgBit(oldp+2609,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+2610,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+2611,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+2612,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+2613,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x22U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x22U]))));
        bufp->chgBit(oldp+2614,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+2615,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+2616,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+2617,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+2618,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x23U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x23U]))));
        bufp->chgBit(oldp+2619,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+2620,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+2621,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+2622,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+2623,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x24U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x24U]))));
        bufp->chgBit(oldp+2624,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+2625,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+2626,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+2627,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+2628,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x25U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x25U]))));
        bufp->chgBit(oldp+2629,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+2630,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+2631,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+2632,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+2633,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x26U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x26U]))));
        bufp->chgBit(oldp+2634,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+2635,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+2636,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+2637,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+2638,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x27U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x27U]))));
        bufp->chgBit(oldp+2639,((1U & (IData)((0x1fffffffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 7U))))));
        bufp->chgBit(oldp+2640,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+2641,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+2642,((1U & (~ (IData)((0x1fffffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U)))))));
        bufp->chgBit(oldp+2643,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffff80ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [3U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [3U]))));
        bufp->chgBit(oldp+2644,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+2645,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+2646,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+2647,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+2648,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x28U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x28U]))));
        bufp->chgBit(oldp+2649,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+2650,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+2651,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+2652,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+2653,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x29U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x29U]))));
        bufp->chgBit(oldp+2654,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+2655,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+2656,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+2657,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+2658,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x2aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU]))));
        bufp->chgBit(oldp+2659,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+2660,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+2661,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+2662,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+2663,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x2bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU]))));
        bufp->chgBit(oldp+2664,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+2665,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+2666,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+2667,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+2668,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x2cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU]))));
        bufp->chgBit(oldp+2669,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+2670,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+2671,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+2672,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+2673,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x2dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU]))));
        bufp->chgBit(oldp+2674,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+2675,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+2676,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+2677,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+2678,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x2eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU]))));
        bufp->chgBit(oldp+2679,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+2680,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+2681,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+2682,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+2683,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x2fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU]))));
        bufp->chgBit(oldp+2684,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+2685,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+2686,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+2687,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+2688,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x30U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x30U]))));
        bufp->chgBit(oldp+2689,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+2690,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+2691,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+2692,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+2693,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x31U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x31U]))));
        bufp->chgBit(oldp+2694,((1U & (IData)((0xfffffffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+2695,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+2696,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+2697,((1U & (~ (IData)((0xfffffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U)))))));
        bufp->chgBit(oldp+2698,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [4U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [4U]))));
        bufp->chgBit(oldp+2699,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+2700,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+2701,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+2702,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+2703,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x28U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x32U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x32U]))));
        bufp->chgBit(oldp+2704,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+2705,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+2706,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+2707,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+2708,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x29U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x33U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x33U]))));
        bufp->chgBit(oldp+2709,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+2710,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+2711,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+2712,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+2713,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x34U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x34U]))));
        bufp->chgBit(oldp+2714,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+2715,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+2716,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+2717,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+2718,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x35U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x35U]))));
        bufp->chgBit(oldp+2719,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+2720,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+2721,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+2722,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+2723,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x36U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x36U]))));
        bufp->chgBit(oldp+2724,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+2725,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+2726,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+2727,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+2728,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x37U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x37U]))));
        bufp->chgBit(oldp+2729,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+2730,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+2731,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+2732,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+2733,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x38U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x38U]))));
        bufp->chgBit(oldp+2734,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+2735,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+2736,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+2737,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+2738,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x39U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x39U]))));
        bufp->chgBit(oldp+2739,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+2740,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+2741,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+2742,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+2743,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x30U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x3aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU]))));
        bufp->chgBit(oldp+2744,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+2745,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+2746,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+2747,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+2748,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x31U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x3bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU]))));
        bufp->chgBit(oldp+2749,((1U & (IData)((0x7ffffffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+2750,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+2751,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+2752,((1U & (~ (IData)((0x7ffffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+2753,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [5U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [5U]))));
        bufp->chgBit(oldp+2754,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+2755,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+2756,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+2757,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+2758,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x32U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x3cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU]))));
        bufp->chgBit(oldp+2759,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+2760,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+2761,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+2762,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+2763,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x33U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x3dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU]))));
        bufp->chgBit(oldp+2764,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+2765,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+2766,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+2767,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+2768,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x34U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x3eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU]))));
        bufp->chgBit(oldp+2769,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+2770,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+2771,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+2772,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+2773,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x35U))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [0x3fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU]))));
        bufp->chgBit(oldp+2774,((1U & (IData)((0x3fffffffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+2775,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+2776,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+2777,((1U & (~ (IData)((0x3fffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+2778,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [6U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [6U]))));
        bufp->chgBit(oldp+2779,((1U & (IData)((0x1fffffffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+2780,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+2781,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+2782,((1U & (~ (IData)((0x1fffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+2783,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [7U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [7U]))));
        bufp->chgBit(oldp+2784,((1U & (IData)((0xfffffffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+2785,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+2786,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+2787,((1U & (~ (IData)((0xfffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+2788,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [8U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [8U]))));
        bufp->chgBit(oldp+2789,((1U & (IData)((0x7ffffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+2790,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+2791,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+2792,((1U & (~ (IData)((0x7ffffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+2793,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                        [9U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
                                    [9U]))));
        bufp->chgBit(oldp+2794,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+2795,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+2796,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 9U)))));
        bufp->chgCData(oldp+2797,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 0xbU)))),3);
        bufp->chgQData(oldp+2798,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 0xcU)),64);
        bufp->chgQData(oldp+2800,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__12__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+2802,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+2803,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+2804,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+2805,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+2806,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0xcU)))));
        bufp->chgBit(oldp+2807,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xcU))))));
        bufp->chgBit(oldp+2808,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xcU)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                << 0xcU)))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+2809,((1U & (IData)((0x3ffffffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+2810,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+2811,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+2812,((1U & (~ (IData)((0x3ffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+2813,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0xaU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0xaU]))));
        bufp->chgBit(oldp+2814,((1U & (IData)((0x1ffffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+2815,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+2816,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+2817,((1U & (~ (IData)((0x1ffffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+2818,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0xbU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0xbU]))));
        bufp->chgBit(oldp+2819,((1U & (IData)((0xfffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+2820,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+2821,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+2822,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+2823,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0xcU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0xcU]))));
        bufp->chgBit(oldp+2824,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+2825,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+2826,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+2827,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+2828,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0xdU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0xdU]))));
        bufp->chgBit(oldp+2829,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+2830,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+2831,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+2832,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+2833,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0xeU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0xeU]))));
        bufp->chgBit(oldp+2834,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+2835,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+2836,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+2837,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+2838,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0xfU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0xfU]))));
        bufp->chgBit(oldp+2839,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2840,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+2841,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+2842,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+2843,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x10U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x10U]))));
        bufp->chgBit(oldp+2844,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2845,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+2846,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+2847,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+2848,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x11U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x11U]))));
        bufp->chgBit(oldp+2849,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2850,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+2851,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+2852,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+2853,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x12U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x12U]))));
        bufp->chgBit(oldp+2854,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2855,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+2856,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+2857,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+2858,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x13U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x13U]))));
        bufp->chgBit(oldp+2859,((1U & (IData)((0x7ffffffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xbU))))));
        bufp->chgBit(oldp+2860,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+2861,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+2862,((1U & (~ (IData)((0x7ffffffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU)))))));
        bufp->chgBit(oldp+2863,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffff800ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [1U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [1U]))));
        bufp->chgBit(oldp+2864,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2865,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+2866,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+2867,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+2868,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x14U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x14U]))));
        bufp->chgBit(oldp+2869,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2870,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+2871,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+2872,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+2873,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x15U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x15U]))));
        bufp->chgBit(oldp+2874,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+2875,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+2876,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+2877,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+2878,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x16U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x16U]))));
        bufp->chgBit(oldp+2879,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+2880,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+2881,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+2882,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+2883,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x17U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x17U]))));
        bufp->chgBit(oldp+2884,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+2885,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+2886,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+2887,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+2888,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x18U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x18U]))));
        bufp->chgBit(oldp+2889,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+2890,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+2891,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+2892,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+2893,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x19U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x19U]))));
        bufp->chgBit(oldp+2894,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+2895,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+2896,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+2897,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+2898,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x1aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU]))));
        bufp->chgBit(oldp+2899,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+2900,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+2901,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+2902,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+2903,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x1bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU]))));
        bufp->chgBit(oldp+2904,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+2905,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+2906,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+2907,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+2908,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x1cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU]))));
        bufp->chgBit(oldp+2909,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+2910,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+2911,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+2912,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+2913,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x1dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU]))));
        bufp->chgBit(oldp+2914,((1U & (IData)((0x3ffffffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))));
        bufp->chgBit(oldp+2915,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+2916,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+2917,((1U & (~ (IData)((0x3ffffffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU)))))));
        bufp->chgBit(oldp+2918,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffffc00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [2U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [2U]))));
        bufp->chgBit(oldp+2919,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+2920,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+2921,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+2922,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+2923,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x1eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU]))));
        bufp->chgBit(oldp+2924,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+2925,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+2926,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+2927,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+2928,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x1fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU]))));
        bufp->chgBit(oldp+2929,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+2930,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+2931,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+2932,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+2933,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x20U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x20U]))));
        bufp->chgBit(oldp+2934,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+2935,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+2936,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+2937,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+2938,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x21U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x21U]))));
        bufp->chgBit(oldp+2939,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+2940,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+2941,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+2942,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+2943,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x22U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x22U]))));
        bufp->chgBit(oldp+2944,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+2945,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+2946,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+2947,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+2948,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x23U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x23U]))));
        bufp->chgBit(oldp+2949,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+2950,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+2951,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+2952,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+2953,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x24U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x24U]))));
        bufp->chgBit(oldp+2954,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+2955,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+2956,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+2957,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+2958,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x25U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x25U]))));
        bufp->chgBit(oldp+2959,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+2960,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+2961,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+2962,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+2963,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x26U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x26U]))));
        bufp->chgBit(oldp+2964,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+2965,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+2966,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+2967,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+2968,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x27U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x27U]))));
        bufp->chgBit(oldp+2969,((1U & (IData)((0x1ffffffffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 9U))))));
        bufp->chgBit(oldp+2970,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+2971,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+2972,((1U & (~ (IData)((0x1ffffffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U)))))));
        bufp->chgBit(oldp+2973,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffffe00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [3U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [3U]))));
        bufp->chgBit(oldp+2974,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+2975,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+2976,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+2977,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+2978,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x28U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x28U]))));
        bufp->chgBit(oldp+2979,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+2980,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+2981,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+2982,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+2983,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x29U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x29U]))));
        bufp->chgBit(oldp+2984,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+2985,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+2986,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+2987,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+2988,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x2aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU]))));
        bufp->chgBit(oldp+2989,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+2990,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+2991,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+2992,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+2993,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x2bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU]))));
        bufp->chgBit(oldp+2994,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+2995,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+2996,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+2997,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+2998,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x2cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU]))));
        bufp->chgBit(oldp+2999,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+3000,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+3001,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+3002,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+3003,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x2dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU]))));
        bufp->chgBit(oldp+3004,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+3005,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+3006,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+3007,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+3008,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x2eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU]))));
        bufp->chgBit(oldp+3009,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+3010,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+3011,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+3012,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+3013,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x2fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU]))));
        bufp->chgBit(oldp+3014,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+3015,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+3016,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+3017,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+3018,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x30U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x30U]))));
        bufp->chgBit(oldp+3019,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+3020,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+3021,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+3022,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+3023,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x31U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x31U]))));
        bufp->chgBit(oldp+3024,((1U & (IData)((0xfffffffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 8U))))));
        bufp->chgBit(oldp+3025,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+3026,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+3027,((1U & (~ (IData)((0xfffffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U)))))));
        bufp->chgBit(oldp+3028,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffff00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [4U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [4U]))));
        bufp->chgBit(oldp+3029,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+3030,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+3031,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+3032,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+3033,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x32U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x32U]))));
        bufp->chgBit(oldp+3034,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+3035,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+3036,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+3037,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+3038,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x33U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x33U]))));
        bufp->chgBit(oldp+3039,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+3040,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+3041,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+3042,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+3043,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x28U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x34U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x34U]))));
        bufp->chgBit(oldp+3044,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+3045,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+3046,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+3047,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+3048,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x29U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x35U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x35U]))));
        bufp->chgBit(oldp+3049,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+3050,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+3051,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+3052,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+3053,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x36U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x36U]))));
        bufp->chgBit(oldp+3054,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+3055,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+3056,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+3057,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+3058,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x37U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x37U]))));
        bufp->chgBit(oldp+3059,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+3060,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+3061,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+3062,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+3063,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x38U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x38U]))));
        bufp->chgBit(oldp+3064,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+3065,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+3066,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+3067,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+3068,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x39U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x39U]))));
        bufp->chgBit(oldp+3069,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+3070,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+3071,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+3072,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+3073,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x3aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU]))));
        bufp->chgBit(oldp+3074,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+3075,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+3076,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+3077,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+3078,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x3bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU]))));
        bufp->chgBit(oldp+3079,((1U & (IData)((0x7ffffffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 7U))))));
        bufp->chgBit(oldp+3080,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+3081,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+3082,((1U & (~ (IData)((0x7ffffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U)))))));
        bufp->chgBit(oldp+3083,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffff80ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [5U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [5U]))));
        bufp->chgBit(oldp+3084,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+3085,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+3086,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+3087,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+3088,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x30U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x3cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU]))));
        bufp->chgBit(oldp+3089,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+3090,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+3091,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+3092,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+3093,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x31U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x3dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU]))));
        bufp->chgBit(oldp+3094,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+3095,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+3096,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+3097,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+3098,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x32U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x3eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU]))));
        bufp->chgBit(oldp+3099,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+3100,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+3101,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+3102,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+3103,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x33U))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [0x3fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU]))));
        bufp->chgBit(oldp+3104,((1U & (IData)((0x3ffffffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+3105,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+3106,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+3107,((1U & (~ (IData)((0x3ffffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U)))))));
        bufp->chgBit(oldp+3108,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [6U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [6U]))));
        bufp->chgBit(oldp+3109,((1U & (IData)((0x1ffffffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+3110,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+3111,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+3112,((1U & (~ (IData)((0x1ffffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+3113,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [7U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [7U]))));
        bufp->chgBit(oldp+3114,((1U & (IData)((0xfffffffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+3115,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+3116,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+3117,((1U & (~ (IData)((0xfffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+3118,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [8U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [8U]))));
        bufp->chgBit(oldp+3119,((1U & (IData)((0x7ffffffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+3120,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+3121,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+3122,((1U & (~ (IData)((0x7ffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+3123,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                        [9U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
                                    [9U]))));
        bufp->chgBit(oldp+3124,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+3125,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 0xcU)))));
        bufp->chgCData(oldp+3126,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 0xdU)))),3);
        bufp->chgQData(oldp+3127,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 0xeU)),64);
        bufp->chgQData(oldp+3129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__14__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+3131,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+3132,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+3133,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+3134,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+3135,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0xeU)))));
        bufp->chgBit(oldp+3136,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xeU))))));
        bufp->chgBit(oldp+3137,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0xeU)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                << 0xeU)))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+3138,((1U & (IData)((0x3ffffffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+3139,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+3140,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+3141,((1U & (~ (IData)((0x3ffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+3142,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0xaU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0xaU]))));
        bufp->chgBit(oldp+3143,((1U & (IData)((0x1ffffffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+3144,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+3145,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+3146,((1U & (~ (IData)((0x1ffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+3147,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0xbU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0xbU]))));
        bufp->chgBit(oldp+3148,((1U & (IData)((0xffffffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+3149,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+3150,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+3151,((1U & (~ (IData)((0xffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+3152,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0xcU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0xcU]))));
        bufp->chgBit(oldp+3153,((1U & (IData)((0x7fffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+3154,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+3155,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+3156,((1U & (~ (IData)((0x7fffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+3157,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0xdU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0xdU]))));
        bufp->chgBit(oldp+3158,((1U & (IData)((0x3ffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+3159,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+3160,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+3161,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+3162,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0xeU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0xeU]))));
        bufp->chgBit(oldp+3163,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+3164,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+3165,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+3166,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+3167,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0xfU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0xfU]))));
        bufp->chgBit(oldp+3168,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+3169,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+3170,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+3171,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+3172,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x10U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x10U]))));
        bufp->chgBit(oldp+3173,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+3174,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+3175,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+3176,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+3177,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x11U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x11U]))));
        bufp->chgBit(oldp+3178,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+3179,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+3180,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+3181,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+3182,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x12U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x12U]))));
        bufp->chgBit(oldp+3183,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+3184,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+3185,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+3186,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+3187,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x13U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x13U]))));
        bufp->chgBit(oldp+3188,((1U & (IData)((0x7fffffffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xdU))))));
        bufp->chgBit(oldp+3189,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+3190,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+3191,((1U & (~ (IData)((0x7fffffffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU)))))));
        bufp->chgBit(oldp+3192,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffe000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xdU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [1U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [1U]))));
        bufp->chgBit(oldp+3193,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+3194,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+3195,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+3196,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+3197,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x14U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x14U]))));
        bufp->chgBit(oldp+3198,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+3199,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+3200,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+3201,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+3202,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x15U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x15U]))));
        bufp->chgBit(oldp+3203,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+3204,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+3205,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+3206,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+3207,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x16U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x16U]))));
        bufp->chgBit(oldp+3208,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+3209,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+3210,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+3211,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+3212,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x17U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x17U]))));
        bufp->chgBit(oldp+3213,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+3214,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+3215,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+3216,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+3217,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x18U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x18U]))));
        bufp->chgBit(oldp+3218,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+3219,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+3220,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+3221,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+3222,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x19U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x19U]))));
        bufp->chgBit(oldp+3223,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+3224,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+3225,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+3226,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+3227,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x1aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU]))));
        bufp->chgBit(oldp+3228,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+3229,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+3230,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+3231,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+3232,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x1bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU]))));
        bufp->chgBit(oldp+3233,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+3234,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+3235,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+3236,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+3237,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x1cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU]))));
        bufp->chgBit(oldp+3238,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+3239,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+3240,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+3241,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+3242,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x1dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU]))));
        bufp->chgBit(oldp+3243,((1U & (IData)((0x3ffffffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xcU))))));
        bufp->chgBit(oldp+3244,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+3245,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+3246,((1U & (~ (IData)((0x3ffffffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU)))))));
        bufp->chgBit(oldp+3247,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffff000ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xcU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [2U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [2U]))));
        bufp->chgBit(oldp+3248,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+3249,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+3250,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+3251,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+3252,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x1eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU]))));
        bufp->chgBit(oldp+3253,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+3254,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+3255,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+3256,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+3257,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x1fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU]))));
        bufp->chgBit(oldp+3258,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+3259,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+3260,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+3261,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+3262,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x20U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x20U]))));
        bufp->chgBit(oldp+3263,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+3264,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+3265,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+3266,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+3267,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x21U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x21U]))));
        bufp->chgBit(oldp+3268,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+3269,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+3270,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+3271,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+3272,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x22U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x22U]))));
        bufp->chgBit(oldp+3273,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+3274,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+3275,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+3276,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+3277,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x23U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x23U]))));
        bufp->chgBit(oldp+3278,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+3279,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+3280,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+3281,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+3282,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x24U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x24U]))));
        bufp->chgBit(oldp+3283,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+3284,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+3285,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+3286,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+3287,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x25U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x25U]))));
        bufp->chgBit(oldp+3288,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+3289,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+3290,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+3291,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+3292,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x26U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x26U]))));
        bufp->chgBit(oldp+3293,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+3294,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+3295,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+3296,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+3297,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x27U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x27U]))));
        bufp->chgBit(oldp+3298,((1U & (IData)((0x1ffffffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xbU))))));
        bufp->chgBit(oldp+3299,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+3300,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+3301,((1U & (~ (IData)((0x1ffffffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU)))))));
        bufp->chgBit(oldp+3302,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffff800ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xbU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [3U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [3U]))));
        bufp->chgBit(oldp+3303,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+3304,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+3305,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+3306,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+3307,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x28U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x28U]))));
        bufp->chgBit(oldp+3308,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+3309,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+3310,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+3311,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+3312,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x29U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x29U]))));
        bufp->chgBit(oldp+3313,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+3314,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+3315,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+3316,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+3317,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x2aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU]))));
        bufp->chgBit(oldp+3318,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+3319,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+3320,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+3321,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+3322,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x2bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU]))));
        bufp->chgBit(oldp+3323,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+3324,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+3325,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+3326,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+3327,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x2cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU]))));
        bufp->chgBit(oldp+3328,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+3329,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+3330,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+3331,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+3332,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x2dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU]))));
        bufp->chgBit(oldp+3333,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+3334,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+3335,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+3336,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+3337,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x2eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU]))));
        bufp->chgBit(oldp+3338,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+3339,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+3340,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+3341,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+3342,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x2fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU]))));
        bufp->chgBit(oldp+3343,((1U & (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+3344,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+3345,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+3346,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+3347,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x30U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x30U]))));
        bufp->chgBit(oldp+3348,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+3349,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+3350,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+3351,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+3352,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x31U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x31U]))));
        bufp->chgBit(oldp+3353,((1U & (IData)((0xffffffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))));
        bufp->chgBit(oldp+3354,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+3355,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+3356,((1U & (~ (IData)((0xffffffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU)))))));
        bufp->chgBit(oldp+3357,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffffc00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 0xaU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [4U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [4U]))));
        bufp->chgBit(oldp+3358,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+3359,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+3360,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+3361,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+3362,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x32U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x32U]))));
        bufp->chgBit(oldp+3363,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+3364,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+3365,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+3366,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+3367,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x33U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x33U]))));
        bufp->chgBit(oldp+3368,((1U & (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+3369,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+3370,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+3371,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+3372,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x34U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x34U]))));
        bufp->chgBit(oldp+3373,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+3374,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+3375,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+3376,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+3377,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x35U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x35U]))));
        bufp->chgBit(oldp+3378,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+3379,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+3380,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+3381,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+3382,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x28U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x36U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x36U]))));
        bufp->chgBit(oldp+3383,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+3384,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+3385,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+3386,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+3387,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x29U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x37U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x37U]))));
        bufp->chgBit(oldp+3388,((1U & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+3389,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+3390,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+3391,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+3392,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2aU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x38U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x38U]))));
        bufp->chgBit(oldp+3393,((1U & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+3394,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+3395,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+3396,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+3397,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2bU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x39U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x39U]))));
        bufp->chgBit(oldp+3398,((1U & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+3399,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+3400,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+3401,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+3402,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2cU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x3aU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU]))));
        bufp->chgBit(oldp+3403,((1U & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+3404,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+3405,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+3406,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+3407,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2dU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x3bU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU]))));
        bufp->chgBit(oldp+3408,((1U & (IData)((0x7fffffffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 9U))))));
        bufp->chgBit(oldp+3409,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+3410,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+3411,((1U & (~ (IData)((0x7fffffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U)))))));
        bufp->chgBit(oldp+3412,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 9U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffe00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 9U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [5U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [5U]))));
        bufp->chgBit(oldp+3413,((1U & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+3414,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+3415,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+3416,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+3417,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2eU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x3cU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU]))));
        bufp->chgBit(oldp+3418,((1U & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+3419,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+3420,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+3421,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+3422,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x2fU))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x3dU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU]))));
        bufp->chgBit(oldp+3423,((1U & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+3424,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+3425,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+3426,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+3427,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x30U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x3eU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU]))));
        bufp->chgBit(oldp+3428,((1U & (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+3429,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+3430,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+3431,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+3432,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x31U))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [0x3fU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU]))));
        bufp->chgBit(oldp+3433,((1U & (IData)((0x3ffffffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 8U))))));
        bufp->chgBit(oldp+3434,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+3435,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+3436,((1U & (~ (IData)((0x3ffffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U)))))));
        bufp->chgBit(oldp+3437,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3ffffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 8U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3ffffffffffff00ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 8U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [6U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [6U]))));
        bufp->chgBit(oldp+3438,((1U & (IData)((0x1ffffffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 7U))))));
        bufp->chgBit(oldp+3439,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+3440,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+3441,((1U & (~ (IData)((0x1ffffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U)))))));
        bufp->chgBit(oldp+3442,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1ffffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 7U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1ffffffffffff80ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 7U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [7U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [7U]))));
        bufp->chgBit(oldp+3443,((1U & (IData)((0xffffffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+3444,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+3445,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+3446,((1U & (~ (IData)((0xffffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U)))))));
        bufp->chgBit(oldp+3447,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [8U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [8U]))));
        bufp->chgBit(oldp+3448,((1U & (IData)((0x7fffffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+3449,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+3450,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+3451,((1U & (~ (IData)((0x7fffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+3452,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                        [9U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
                                    [9U]))));
        bufp->chgBit(oldp+3453,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+3454,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                               >> 0xeU)))));
        bufp->chgCData(oldp+3455,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                 >> 0xfU)))),3);
        bufp->chgQData(oldp+3456,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   << 0x10U)),64);
        bufp->chgQData(oldp+3458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__16__KET____DOT__ai__OutX),64);
        bufp->chgBit(oldp+3460,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+3461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx));
        bufp->chgBit(oldp+3462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x));
        bufp->chgBit(oldp+3463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x));
        bufp->chgBit(oldp+3464,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                               << 0x10U)))));
        bufp->chgBit(oldp+3465,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 0x10U))))));
        bufp->chgBit(oldp+3466,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                   & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 << 0x10U)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                     & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                << 0x10U)))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x))));
        bufp->chgBit(oldp+3467,((1U & (IData)((0x3fffffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+3468,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+3469,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+3470,((1U & (~ (IData)((0x3fffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U)))))));
        bufp->chgBit(oldp+3471,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 6U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffc0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 6U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                        [0xaU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xaU]))));
        bufp->chgBit(oldp+3472,((1U & (IData)((0x1fffffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+3473,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+3474,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+3475,((1U & (~ (IData)((0x1fffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+3476,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 5U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffe0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 5U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                        [0xbU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xbU]))));
        bufp->chgBit(oldp+3477,((1U & (IData)((0xffffffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+3478,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+3479,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+3480,((1U & (~ (IData)((0xffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+3481,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffff0ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 4U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                        [0xcU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xcU]))));
        bufp->chgBit(oldp+3482,((1U & (IData)((0x7fffffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+3483,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+3484,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+3485,((1U & (~ (IData)((0x7fffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+3486,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 3U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffff8ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 3U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                        [0xdU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xdU]))));
        bufp->chgBit(oldp+3487,((1U & (IData)((0x3fffffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+3488,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+3489,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+3490,((1U & (~ (IData)((0x3fffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+3491,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffcULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                        [0xeU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xeU]))));
        bufp->chgBit(oldp+3492,((1U & (IData)((0x1fffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+3493,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+3494,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+3495,((1U & (~ (IData)((0x1fffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+3496,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x1fffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x1fffffffffffeULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    << 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                        [0xfU] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xfU]))));
        bufp->chgBit(oldp+3497,((1U & (IData)((0xffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+3498,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+3499,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+3500,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+3501,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0xffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                      & (IData)((0xffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                        [0x10U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x10U]))));
        bufp->chgBit(oldp+3502,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+3503,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+3504,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+3505,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+3506,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                        [0x11U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x11U]))));
        bufp->chgBit(oldp+3507,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+3508,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+3509,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+3510,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+3511,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                    & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                      & (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                        [0x12U] >> 1U))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x12U]))));
        bufp->chgBit(oldp+3512,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
    }
}
