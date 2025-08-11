// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpu.h for the primary calling header

#include "Vgpu__pch.h"
#include "Vgpu__Syms.h"
#include "Vgpu___024root.h"

void Vgpu___024root___ctor_var_reset(Vgpu___024root* vlSelf);

Vgpu___024root::Vgpu___024root(Vgpu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vgpu___024root___ctor_var_reset(this);
}

void Vgpu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vgpu___024root::~Vgpu___024root() {
}
