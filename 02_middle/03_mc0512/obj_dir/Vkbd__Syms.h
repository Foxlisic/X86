// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKBD__SYMS_H_
#define VERILATED_VKBD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vkbd.h"

// INCLUDE MODULE CLASSES
#include "Vkbd___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vkbd__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vkbd* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vkbd___024root                 TOP;

    // CONSTRUCTORS
    Vkbd__Syms(VerilatedContext* contextp, const char* namep, Vkbd* modelp);
    ~Vkbd__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
