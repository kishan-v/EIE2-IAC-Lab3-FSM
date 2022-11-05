// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_full__Syms.h"


VL_ATTR_COLD void Vf1_full___024root__trace_init_sub__TOP__0(Vf1_full___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,"trigger", false,-1);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+12,"N", false,-1, 4,0);
    tracep->declBus(c+13,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("f1_full ");
    tracep->declBit(c+9,"trigger", false,-1);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+12,"N", false,-1, 4,0);
    tracep->declBus(c+13,"data_out", false,-1, 7,0);
    tracep->declBit(c+14,"cmd_seq", false,-1);
    tracep->declBit(c+5,"tick", false,-1);
    tracep->declBus(c+15,"K", false,-1, 6,0);
    tracep->declBit(c+1,"cmd_delay", false,-1);
    tracep->declBit(c+16,"mux_out", false,-1);
    tracep->declBit(c+6,"time_out", false,-1);
    tracep->pushNamePrefix("my_clktick ");
    tracep->declBus(c+19,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+14,"en", false,-1);
    tracep->declBus(c+12,"N", false,-1, 4,0);
    tracep->declBit(c+5,"tick", false,-1);
    tracep->declBus(c+7,"count", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_delay ");
    tracep->declBus(c+20,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+1,"trigger", false,-1);
    tracep->declBus(c+15,"n", false,-1, 6,0);
    tracep->declBit(c+6,"time_out", false,-1);
    tracep->declBus(c+17,"count", false,-1, 6,0);
    tracep->declBus(c+8,"current_state", false,-1, 31,0);
    tracep->declBus(c+18,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_f1_fsm ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+16,"en", false,-1);
    tracep->declBit(c+9,"trigger", false,-1);
    tracep->declBus(c+13,"data_out", false,-1, 7,0);
    tracep->declBit(c+14,"cmd_seq", false,-1);
    tracep->declBit(c+1,"cmd_delay", false,-1);
    tracep->declBus(c+2,"out", false,-1, 7,0);
    tracep->declBus(c+3,"current_state", false,-1, 31,0);
    tracep->declBus(c+4,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_lfsr ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+15,"data_out", false,-1, 6,0);
    tracep->declBus(c+15,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_mux ");
    tracep->declBit(c+6,"d0", false,-1);
    tracep->declBit(c+5,"d1", false,-1);
    tracep->declBit(c+14,"s", false,-1);
    tracep->declBit(c+16,"y", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_full___024root__trace_init_top(Vf1_full___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_init_top\n"); );
    // Body
    Vf1_full___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_full___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_full___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_full___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_full___024root__trace_register(Vf1_full___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_full___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_full___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_full___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_full___024root__trace_full_sub_0(Vf1_full___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_full___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_full_top_0\n"); );
    // Init
    Vf1_full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_full___024root*>(voidSelf);
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_full___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_full___024root__trace_full_sub_0(Vf1_full___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->f1_full__DOT__cmd_delay));
    bufp->fullCData(oldp+2,(vlSelf->f1_full__DOT__my_f1_fsm__DOT__out),8);
    bufp->fullIData(oldp+3,(vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state),32);
    bufp->fullIData(oldp+4,(vlSelf->f1_full__DOT__my_f1_fsm__DOT__next_state),32);
    bufp->fullBit(oldp+5,(vlSelf->f1_full__DOT__tick));
    bufp->fullBit(oldp+6,(((0U != vlSelf->f1_full__DOT__my_delay__DOT__current_state) 
                           & ((1U != vlSelf->f1_full__DOT__my_delay__DOT__current_state) 
                              & (2U == vlSelf->f1_full__DOT__my_delay__DOT__current_state)))));
    bufp->fullCData(oldp+7,(vlSelf->f1_full__DOT__my_clktick__DOT__count),5);
    bufp->fullIData(oldp+8,(vlSelf->f1_full__DOT__my_delay__DOT__current_state),32);
    bufp->fullBit(oldp+9,(vlSelf->trigger));
    bufp->fullBit(oldp+10,(vlSelf->clk));
    bufp->fullBit(oldp+11,(vlSelf->rst));
    bufp->fullCData(oldp+12,(vlSelf->N),5);
    bufp->fullCData(oldp+13,(vlSelf->data_out),8);
    bufp->fullBit(oldp+14,(vlSelf->f1_full__DOT__cmd_seq));
    bufp->fullCData(oldp+15,(vlSelf->f1_full__DOT__my_lfsr__DOT__sreg),7);
    bufp->fullBit(oldp+16,(((IData)(vlSelf->f1_full__DOT__cmd_seq)
                             ? (IData)(vlSelf->f1_full__DOT__tick)
                             : ((0U != vlSelf->f1_full__DOT__my_delay__DOT__current_state) 
                                & ((1U != vlSelf->f1_full__DOT__my_delay__DOT__current_state) 
                                   & (2U == vlSelf->f1_full__DOT__my_delay__DOT__current_state))))));
    bufp->fullCData(oldp+17,(vlSelf->f1_full__DOT__my_delay__DOT__count),7);
    bufp->fullIData(oldp+18,(((0U == vlSelf->f1_full__DOT__my_delay__DOT__current_state)
                               ? ((IData)(vlSelf->f1_full__DOT__cmd_delay)
                                   ? 1U : vlSelf->f1_full__DOT__my_delay__DOT__current_state)
                               : ((1U == vlSelf->f1_full__DOT__my_delay__DOT__current_state)
                                   ? ((0U == (IData)(vlSelf->f1_full__DOT__my_delay__DOT__count))
                                       ? 2U : vlSelf->f1_full__DOT__my_delay__DOT__current_state)
                                   : ((2U == vlSelf->f1_full__DOT__my_delay__DOT__current_state)
                                       ? ((IData)(vlSelf->f1_full__DOT__cmd_delay)
                                           ? 3U : 0U)
                                       : ((3U == vlSelf->f1_full__DOT__my_delay__DOT__current_state)
                                           ? ((IData)(vlSelf->f1_full__DOT__cmd_delay)
                                               ? vlSelf->f1_full__DOT__my_delay__DOT__current_state
                                               : 0U)
                                           : 0U))))),32);
    bufp->fullIData(oldp+19,(5U),32);
    bufp->fullIData(oldp+20,(7U),32);
}
