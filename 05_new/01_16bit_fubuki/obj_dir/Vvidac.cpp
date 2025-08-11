// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvidac__pch.h"

//============================================================
// Constructors

Vvidac::Vvidac(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vvidac__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset_n{vlSymsp->TOP.reset_n}
    , cmd{vlSymsp->TOP.cmd}
    , page{vlSymsp->TOP.page}
    , i{vlSymsp->TOP.i}
    , o{vlSymsp->TOP.o}
    , w{vlSymsp->TOP.w}
    , bsy{vlSymsp->TOP.bsy}
    , tx{vlSymsp->TOP.tx}
    , ty{vlSymsp->TOP.ty}
    , td{vlSymsp->TOP.td}
    , a{vlSymsp->TOP.a}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vvidac::Vvidac(const char* _vcname__)
    : Vvidac(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vvidac::~Vvidac() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vvidac___024root___eval_debug_assertions(Vvidac___024root* vlSelf);
#endif  // VL_DEBUG
void Vvidac___024root___eval_static(Vvidac___024root* vlSelf);
void Vvidac___024root___eval_initial(Vvidac___024root* vlSelf);
void Vvidac___024root___eval_settle(Vvidac___024root* vlSelf);
void Vvidac___024root___eval(Vvidac___024root* vlSelf);

void Vvidac::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvidac::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvidac___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vvidac___024root___eval_static(&(vlSymsp->TOP));
        Vvidac___024root___eval_initial(&(vlSymsp->TOP));
        Vvidac___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vvidac___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vvidac::eventsPending() { return false; }

uint64_t Vvidac::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vvidac::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vvidac___024root___eval_final(Vvidac___024root* vlSelf);

VL_ATTR_COLD void Vvidac::final() {
    Vvidac___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vvidac::hierName() const { return vlSymsp->name(); }
const char* Vvidac::modelName() const { return "Vvidac"; }
unsigned Vvidac::threads() const { return 1; }
void Vvidac::prepareClone() const { contextp()->prepareClone(); }
void Vvidac::atClone() const {
    contextp()->threadPoolpOnClone();
}
