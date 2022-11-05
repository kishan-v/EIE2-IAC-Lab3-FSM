// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_full.h for the primary calling header

#include "verilated.h"

#include "Vf1_full___024root.h"

VL_INLINE_OPT void Vf1_full___024root___sequent__TOP__0(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdly__f1_full__DOT__my_lfsr__DOT__sreg;
    // Body
    __Vdly__f1_full__DOT__my_lfsr__DOT__sreg = vlSelf->f1_full__DOT__my_lfsr__DOT__sreg;
    vlSelf->__Vdly__f1_full__DOT__my_clktick__DOT__count 
        = vlSelf->f1_full__DOT__my_clktick__DOT__count;
    __Vdly__f1_full__DOT__my_lfsr__DOT__sreg = ((IData)(vlSelf->rst)
                                                 ? 1U
                                                 : 
                                                ((0x7eU 
                                                  & ((IData)(vlSelf->f1_full__DOT__my_lfsr__DOT__sreg) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x44U 
                                                                   & (IData)(vlSelf->f1_full__DOT__my_lfsr__DOT__sreg))))));
    vlSelf->f1_full__DOT__my_delay__DOT__count = (0x7fU 
                                                  & ((((IData)(vlSelf->rst) 
                                                       | (IData)(vlSelf->f1_full__DOT__cmd_delay)) 
                                                      | (0U 
                                                         == (IData)(vlSelf->f1_full__DOT__my_delay__DOT__count)))
                                                      ? 
                                                     ((IData)(vlSelf->f1_full__DOT__my_lfsr__DOT__sreg) 
                                                      - (IData)(1U))
                                                      : 
                                                     ((IData)(vlSelf->f1_full__DOT__my_delay__DOT__count) 
                                                      - (IData)(1U))));
    vlSelf->f1_full__DOT__my_lfsr__DOT__sreg = __Vdly__f1_full__DOT__my_lfsr__DOT__sreg;
}

VL_INLINE_OPT void Vf1_full___024root___sequent__TOP__1(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state = 1U;
    }
    if (((IData)(vlSelf->f1_full__DOT__cmd_seq) ? (IData)(vlSelf->f1_full__DOT__tick)
          : ((0U != vlSelf->f1_full__DOT__my_delay__DOT__current_state) 
             & ((1U != vlSelf->f1_full__DOT__my_delay__DOT__current_state) 
                & (2U == vlSelf->f1_full__DOT__my_delay__DOT__current_state))))) {
        vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state 
            = vlSelf->f1_full__DOT__my_f1_fsm__DOT__next_state;
    }
    if (vlSelf->trigger) {
        vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state = 2U;
    }
    if (((((((((1U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state) 
               | (2U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) 
              | (3U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) 
             | (4U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) 
            | (5U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) 
           | (6U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) 
          | (7U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) 
         | (8U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state))) {
        if ((1U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) {
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__next_state = 2U;
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__out = 0U;
            vlSelf->f1_full__DOT__cmd_delay = 0U;
        } else if ((2U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) {
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__next_state = 3U;
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__out = 1U;
        } else if ((3U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) {
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__next_state = 4U;
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__out = 3U;
        } else if ((4U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) {
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__next_state = 5U;
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__out = 7U;
        } else if ((5U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) {
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__next_state = 6U;
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__out = 0xfU;
        } else if ((6U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) {
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__next_state = 7U;
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__out = 0x1fU;
        } else if ((7U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) {
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__next_state = 8U;
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__out = 0x3fU;
        } else {
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__next_state = 9U;
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__out = 0x7fU;
        }
    } else {
        vlSelf->f1_full__DOT__my_f1_fsm__DOT__next_state = 1U;
        if ((9U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) {
            vlSelf->f1_full__DOT__my_f1_fsm__DOT__out = 0xffU;
            vlSelf->f1_full__DOT__cmd_delay = 1U;
        }
    }
    vlSelf->data_out = vlSelf->f1_full__DOT__my_f1_fsm__DOT__out;
}

VL_INLINE_OPT void Vf1_full___024root___sequent__TOP__2(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->f1_full__DOT__tick = 0U;
        vlSelf->__Vdly__f1_full__DOT__my_clktick__DOT__count 
            = vlSelf->N;
        vlSelf->f1_full__DOT__my_delay__DOT__current_state = 0U;
    } else {
        if (vlSelf->f1_full__DOT__cmd_seq) {
            if ((0U == (IData)(vlSelf->f1_full__DOT__my_clktick__DOT__count))) {
                vlSelf->f1_full__DOT__tick = 1U;
                vlSelf->__Vdly__f1_full__DOT__my_clktick__DOT__count 
                    = vlSelf->N;
            } else {
                vlSelf->__Vdly__f1_full__DOT__my_clktick__DOT__count 
                    = (0x1fU & ((IData)(vlSelf->f1_full__DOT__my_clktick__DOT__count) 
                                - (IData)(1U)));
                vlSelf->f1_full__DOT__tick = 0U;
            }
        }
        vlSelf->f1_full__DOT__my_delay__DOT__current_state 
            = vlSelf->f1_full__DOT__my_delay__DOT__next_state;
    }
    vlSelf->f1_full__DOT__my_clktick__DOT__count = vlSelf->__Vdly__f1_full__DOT__my_clktick__DOT__count;
}

VL_INLINE_OPT void Vf1_full___024root___sequent__TOP__3(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___sequent__TOP__3\n"); );
    // Body
    if (((((((((1U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state) 
               | (2U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) 
              | (3U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) 
             | (4U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) 
            | (5U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) 
           | (6U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) 
          | (7U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) 
         | (8U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state))) {
        if ((1U != vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) {
            if ((2U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) {
                vlSelf->f1_full__DOT__cmd_seq = 1U;
            }
        }
    } else if ((9U == vlSelf->f1_full__DOT__my_f1_fsm__DOT__current_state)) {
        vlSelf->f1_full__DOT__cmd_seq = 0U;
    }
    vlSelf->f1_full__DOT__my_delay__DOT__next_state 
        = ((0U == vlSelf->f1_full__DOT__my_delay__DOT__current_state)
            ? ((IData)(vlSelf->f1_full__DOT__cmd_delay)
                ? 1U : vlSelf->f1_full__DOT__my_delay__DOT__current_state)
            : ((1U == vlSelf->f1_full__DOT__my_delay__DOT__current_state)
                ? ((0U == (IData)(vlSelf->f1_full__DOT__my_delay__DOT__count))
                    ? 2U : vlSelf->f1_full__DOT__my_delay__DOT__current_state)
                : ((2U == vlSelf->f1_full__DOT__my_delay__DOT__current_state)
                    ? ((IData)(vlSelf->f1_full__DOT__cmd_delay)
                        ? 3U : 0U) : ((3U == vlSelf->f1_full__DOT__my_delay__DOT__current_state)
                                       ? ((IData)(vlSelf->f1_full__DOT__cmd_delay)
                                           ? vlSelf->f1_full__DOT__my_delay__DOT__current_state
                                           : 0U) : 0U))));
}

void Vf1_full___024root___eval(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1_full___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->trigger) & (~ (IData)(vlSelf->__Vclklast__TOP__trigger))))) {
        Vf1_full___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1_full___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->trigger) & (~ (IData)(vlSelf->__Vclklast__TOP__trigger))))) {
        Vf1_full___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__trigger = vlSelf->trigger;
}

#ifdef VL_DEBUG
void Vf1_full___024root___eval_debug_assertions(Vf1_full___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_full___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->N & 0xe0U))) {
        Verilated::overWidthError("N");}
}
#endif  // VL_DEBUG
