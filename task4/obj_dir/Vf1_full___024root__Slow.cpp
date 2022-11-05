// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_full.h for the primary calling header

#include "verilated.h"

#include "Vf1_full__Syms.h"
#include "Vf1_full___024root.h"

void Vf1_full___024root___ctor_var_reset(Vf1_full___024root* vlSelf);

Vf1_full___024root::Vf1_full___024root(Vf1_full__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vf1_full___024root___ctor_var_reset(this);
}

void Vf1_full___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vf1_full___024root::~Vf1_full___024root() {
}
