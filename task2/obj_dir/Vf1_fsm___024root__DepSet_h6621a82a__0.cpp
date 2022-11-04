// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm___024root.h"

VL_INLINE_OPT void Vf1_fsm___024root___sequent__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->lfsr__DOT__current_state = 0U;
    }
    if (vlSelf->en) {
        vlSelf->lfsr__DOT__current_state = vlSelf->lfsr__DOT__next_state;
    }
    if (((((((((0U == vlSelf->lfsr__DOT__current_state) 
               | (1U == vlSelf->lfsr__DOT__current_state)) 
              | (2U == vlSelf->lfsr__DOT__current_state)) 
             | (3U == vlSelf->lfsr__DOT__current_state)) 
            | (4U == vlSelf->lfsr__DOT__current_state)) 
           | (5U == vlSelf->lfsr__DOT__current_state)) 
          | (6U == vlSelf->lfsr__DOT__current_state)) 
         | (7U == vlSelf->lfsr__DOT__current_state))) {
        if ((0U == vlSelf->lfsr__DOT__current_state)) {
            vlSelf->lfsr__DOT__next_state = 1U;
            vlSelf->lfsr__DOT__out = 0U;
        } else if ((1U == vlSelf->lfsr__DOT__current_state)) {
            vlSelf->lfsr__DOT__next_state = 2U;
            vlSelf->lfsr__DOT__out = 1U;
        } else if ((2U == vlSelf->lfsr__DOT__current_state)) {
            vlSelf->lfsr__DOT__next_state = 3U;
            vlSelf->lfsr__DOT__out = 3U;
        } else if ((3U == vlSelf->lfsr__DOT__current_state)) {
            vlSelf->lfsr__DOT__next_state = 4U;
            vlSelf->lfsr__DOT__out = 7U;
        } else if ((4U == vlSelf->lfsr__DOT__current_state)) {
            vlSelf->lfsr__DOT__next_state = 5U;
            vlSelf->lfsr__DOT__out = 0xfU;
        } else if ((5U == vlSelf->lfsr__DOT__current_state)) {
            vlSelf->lfsr__DOT__next_state = 6U;
            vlSelf->lfsr__DOT__out = 0x1fU;
        } else if ((6U == vlSelf->lfsr__DOT__current_state)) {
            vlSelf->lfsr__DOT__next_state = 7U;
            vlSelf->lfsr__DOT__out = 0x3fU;
        } else {
            vlSelf->lfsr__DOT__next_state = 8U;
            vlSelf->lfsr__DOT__out = 0x7fU;
        }
    } else {
        vlSelf->lfsr__DOT__next_state = 0U;
        vlSelf->lfsr__DOT__out = 0xffU;
    }
    vlSelf->data_out = vlSelf->lfsr__DOT__out;
}

void Vf1_fsm___024root___eval(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_fsm___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vf1_fsm___024root___eval_debug_assertions(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
