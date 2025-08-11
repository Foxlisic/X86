// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vgpu__pch.h"

//============================================================
// Constructors

Vgpu::Vgpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vgpu__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , r{vlSymsp->TOP.r}
    , g{vlSymsp->TOP.g}
    , b{vlSymsp->TOP.b}
    , hs{vlSymsp->TOP.hs}
    , vs{vlSymsp->TOP.vs}
    , char_data{vlSymsp->TOP.char_data}
    , font_data{vlSymsp->TOP.font_data}
    , char_address{vlSymsp->TOP.char_address}
    , font_address{vlSymsp->TOP.font_address}
    , cursor{vlSymsp->TOP.cursor}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vgpu::Vgpu(const char* _vcname__)
    : Vgpu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vgpu::~Vgpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vgpu___024root___eval_debug_assertions(Vgpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vgpu___024root___eval_static(Vgpu___024root* vlSelf);
void Vgpu___024root___eval_initial(Vgpu___024root* vlSelf);
void Vgpu___024root___eval_settle(Vgpu___024root* vlSelf);
void Vgpu___024root___eval(Vgpu___024root* vlSelf);

void Vgpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vgpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vgpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vgpu___024root___eval_static(&(vlSymsp->TOP));
        Vgpu___024root___eval_initial(&(vlSymsp->TOP));
        Vgpu___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vgpu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vgpu::eventsPending() { return false; }

uint64_t Vgpu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vgpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vgpu___024root___eval_final(Vgpu___024root* vlSelf);

VL_ATTR_COLD void Vgpu::final() {
    Vgpu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vgpu::hierName() const { return vlSymsp->name(); }
const char* Vgpu::modelName() const { return "Vgpu"; }
unsigned Vgpu::threads() const { return 1; }
void Vgpu::prepareClone() const { contextp()->prepareClone(); }
void Vgpu::atClone() const {
    contextp()->threadPoolpOnClone();
}
