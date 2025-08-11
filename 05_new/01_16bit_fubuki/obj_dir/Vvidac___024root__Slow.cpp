// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvidac.h for the primary calling header

#include "Vvidac__pch.h"
#include "Vvidac__Syms.h"
#include "Vvidac___024root.h"

void Vvidac___024root___ctor_var_reset(Vvidac___024root* vlSelf);

Vvidac___024root::Vvidac___024root(Vvidac__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvidac___024root___ctor_var_reset(this);
}

void Vvidac___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vvidac___024root::~Vvidac___024root() {
}
