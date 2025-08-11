// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcore__pch.h"

//============================================================
// Constructors

Vcore::Vcore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcore__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset_n{vlSymsp->TOP.reset_n}
    , ce{vlSymsp->TOP.ce}
    , i{vlSymsp->TOP.i}
    , o{vlSymsp->TOP.o}
    , w{vlSymsp->TOP.w}
    , intr{vlSymsp->TOP.intr}
    , intn{vlSymsp->TOP.intn}
    , port_w{vlSymsp->TOP.port_w}
    , port_r{vlSymsp->TOP.port_r}
    , port_i{vlSymsp->TOP.port_i}
    , port_o{vlSymsp->TOP.port_o}
    , halt{vlSymsp->TOP.halt}
    , m0{vlSymsp->TOP.m0}
    , ud{vlSymsp->TOP.ud}
    , port_a{vlSymsp->TOP.port_a}
    , flags{vlSymsp->TOP.flags}
    , a{vlSymsp->TOP.a}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcore::Vcore(const char* _vcname__)
    : Vcore(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcore::~Vcore() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
void Vcore___024root___eval_static(Vcore___024root* vlSelf);
void Vcore___024root___eval_initial(Vcore___024root* vlSelf);
void Vcore___024root___eval_settle(Vcore___024root* vlSelf);
void Vcore___024root___eval(Vcore___024root* vlSelf);

void Vcore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcore___024root___eval_static(&(vlSymsp->TOP));
        Vcore___024root___eval_initial(&(vlSymsp->TOP));
        Vcore___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcore___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcore::eventsPending() { return false; }

uint64_t Vcore::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcore::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcore___024root___eval_final(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore::final() {
    Vcore___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcore::hierName() const { return vlSymsp->name(); }
const char* Vcore::modelName() const { return "Vcore"; }
unsigned Vcore::threads() const { return 1; }
void Vcore::prepareClone() const { contextp()->prepareClone(); }
void Vcore::atClone() const {
    contextp()->threadPoolpOnClone();
}
