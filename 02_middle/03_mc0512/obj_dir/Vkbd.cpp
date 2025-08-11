// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vkbd__pch.h"

//============================================================
// Constructors

Vkbd::Vkbd(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vkbd__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , ps_clock{vlSymsp->TOP.ps_clock}
    , ps_data{vlSymsp->TOP.ps_data}
    , done{vlSymsp->TOP.done}
    , data{vlSymsp->TOP.data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vkbd::Vkbd(const char* _vcname__)
    : Vkbd(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vkbd::~Vkbd() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vkbd___024root___eval_debug_assertions(Vkbd___024root* vlSelf);
#endif  // VL_DEBUG
void Vkbd___024root___eval_static(Vkbd___024root* vlSelf);
void Vkbd___024root___eval_initial(Vkbd___024root* vlSelf);
void Vkbd___024root___eval_settle(Vkbd___024root* vlSelf);
void Vkbd___024root___eval(Vkbd___024root* vlSelf);

void Vkbd::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vkbd::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vkbd___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vkbd___024root___eval_static(&(vlSymsp->TOP));
        Vkbd___024root___eval_initial(&(vlSymsp->TOP));
        Vkbd___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vkbd___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vkbd::eventsPending() { return false; }

uint64_t Vkbd::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vkbd::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vkbd___024root___eval_final(Vkbd___024root* vlSelf);

VL_ATTR_COLD void Vkbd::final() {
    Vkbd___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vkbd::hierName() const { return vlSymsp->name(); }
const char* Vkbd::modelName() const { return "Vkbd"; }
unsigned Vkbd::threads() const { return 1; }
void Vkbd::prepareClone() const { contextp()->prepareClone(); }
void Vkbd::atClone() const {
    contextp()->threadPoolpOnClone();
}
