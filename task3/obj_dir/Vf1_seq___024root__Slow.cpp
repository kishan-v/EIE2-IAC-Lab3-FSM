// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_seq.h for the primary calling header

#include "verilated.h"

#include "Vf1_seq__Syms.h"
#include "Vf1_seq___024root.h"

void Vf1_seq___024root___ctor_var_reset(Vf1_seq___024root* vlSelf);

Vf1_seq___024root::Vf1_seq___024root(Vf1_seq__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vf1_seq___024root___ctor_var_reset(this);
}

void Vf1_seq___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vf1_seq___024root::~Vf1_seq___024root() {
}
