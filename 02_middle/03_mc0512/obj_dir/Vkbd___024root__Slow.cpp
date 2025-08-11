// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkbd.h for the primary calling header

#include "Vkbd__pch.h"
#include "Vkbd__Syms.h"
#include "Vkbd___024root.h"

void Vkbd___024root___ctor_var_reset(Vkbd___024root* vlSelf);

Vkbd___024root::Vkbd___024root(Vkbd__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vkbd___024root___ctor_var_reset(this);
}

void Vkbd___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vkbd___024root::~Vkbd___024root() {
}
