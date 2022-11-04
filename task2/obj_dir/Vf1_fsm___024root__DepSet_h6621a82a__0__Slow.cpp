// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm___024root.h"

VL_ATTR_COLD void Vf1_fsm___024root___settle__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___settle__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void Vf1_fsm___024root___eval_initial(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vf1_fsm___024root___eval_settle(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_settle\n"); );
    // Body
    Vf1_fsm___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_fsm___024root___final(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___final\n"); );
}

VL_ATTR_COLD void Vf1_fsm___024root___ctor_var_reset(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->lfsr__DOT__out = VL_RAND_RESET_I(8);
    vlSelf->lfsr__DOT__current_state = 0;
    vlSelf->lfsr__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
