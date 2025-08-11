// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vgpu__pch.h"
#include "Vgpu.h"
#include "Vgpu___024root.h"

// FUNCTIONS
Vgpu__Syms::~Vgpu__Syms()
{
}

Vgpu__Syms::Vgpu__Syms(VerilatedContext* contextp, const char* namep, Vgpu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(47);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
