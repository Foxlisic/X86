// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VGPU__SYMS_H_
#define VERILATED_VGPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vgpu.h"

// INCLUDE MODULE CLASSES
#include "Vgpu___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vgpu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vgpu* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vgpu___024root                 TOP;

    // CONSTRUCTORS
    Vgpu__Syms(VerilatedContext* contextp, const char* namep, Vgpu* modelp);
    ~Vgpu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
