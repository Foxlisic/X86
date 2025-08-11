// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vvidac__pch.h"
#include "Vvidac.h"
#include "Vvidac___024root.h"

// FUNCTIONS
Vvidac__Syms::~Vvidac__Syms()
{
}

Vvidac__Syms::Vvidac__Syms(VerilatedContext* contextp, const char* namep, Vvidac* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(187);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
