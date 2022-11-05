// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_full.h for the primary calling header

#ifndef VERILATED_VF1_FULL___024ROOT_H_
#define VERILATED_VF1_FULL___024ROOT_H_  // guard

#include "verilated.h"

class Vf1_full__Syms;

class Vf1_full___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(trigger,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(N,4,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ f1_full__DOT__cmd_seq;
    CData/*0:0*/ f1_full__DOT__tick;
    CData/*0:0*/ f1_full__DOT__cmd_delay;
    CData/*4:0*/ f1_full__DOT__my_clktick__DOT__count;
    CData/*6:0*/ f1_full__DOT__my_lfsr__DOT__sreg;
    CData/*6:0*/ f1_full__DOT__my_delay__DOT__count;
    CData/*7:0*/ f1_full__DOT__my_f1_fsm__DOT__out;
    CData/*4:0*/ __Vdly__f1_full__DOT__my_clktick__DOT__count;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__trigger;
    IData/*31:0*/ f1_full__DOT__my_delay__DOT__current_state;
    IData/*31:0*/ f1_full__DOT__my_delay__DOT__next_state;
    IData/*31:0*/ f1_full__DOT__my_f1_fsm__DOT__current_state;
    IData/*31:0*/ f1_full__DOT__my_f1_fsm__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vf1_full__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_full___024root(Vf1_full__Syms* symsp, const char* name);
    ~Vf1_full___024root();
    VL_UNCOPYABLE(Vf1_full___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
