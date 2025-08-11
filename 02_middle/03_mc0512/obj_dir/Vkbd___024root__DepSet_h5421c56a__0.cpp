// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkbd.h for the primary calling header

#include "Vkbd__pch.h"
#include "Vkbd___024root.h"

void Vkbd___024root___eval_act(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vkbd___024root___nba_sequent__TOP__0(Vkbd___024root* vlSelf);
void Vkbd___024root___nba_sequent__TOP__1(Vkbd___024root* vlSelf);

void Vkbd___024root___eval_nba(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vkbd___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vkbd___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vkbd___024root___nba_sequent__TOP__0(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*19:0*/ __Vdly__kbd__DOT__kout;
    __Vdly__kbd__DOT__kout = 0;
    // Body
    __Vdly__kbd__DOT__kout = vlSelfRef.kbd__DOT__kout;
    vlSelfRef.kbd__DOT__kdone = 0U;
    if (vlSelfRef.kbd__DOT__kbusy) {
        if ((1U == (IData)(vlSelfRef.kbd__DOT__klatch))) {
            if ((0xaU == (IData)(vlSelfRef.kbd__DOT__kcount))) {
                vlSelfRef.kbd__DOT__kbusy = 0U;
                vlSelfRef.kbd__DOT__kb_data = 0U;
                if ((1U & VL_REDXOR_32((0x1ffU & ((IData)(vlSelfRef.kbd__DOT__kin) 
                                                  >> 1U))))) {
                    vlSelfRef.kbd__DOT__kb_data = (0xffU 
                                                   & ((IData)(vlSelfRef.kbd__DOT__kin) 
                                                      >> 1U));
                    vlSelfRef.kbd__DOT__kdone = 1U;
                }
            }
            vlSelfRef.kbd__DOT__kcount = (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.kbd__DOT__kcount)));
            vlSelfRef.kbd__DOT__kin = (((IData)(vlSelfRef.ps_data) 
                                        << 9U) | (0x1ffU 
                                                  & ((IData)(vlSelfRef.kbd__DOT__kin) 
                                                     >> 1U)));
        }
        __Vdly__kbd__DOT__kout = ((IData)(vlSelfRef.ps_clock)
                                   ? (0xfffffU & ((IData)(1U) 
                                                  + vlSelfRef.kbd__DOT__kout))
                                   : 0U);
        if ((0x7a120U < vlSelfRef.kbd__DOT__kout)) {
            vlSelfRef.kbd__DOT__kbusy = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.kbd__DOT__klatch))) {
        vlSelfRef.kbd__DOT__kbusy = 1U;
        vlSelfRef.kbd__DOT__kcount = 0U;
        __Vdly__kbd__DOT__kout = 0U;
    }
    vlSelfRef.kbd__DOT__klatch = ((2U & ((IData)(vlSelfRef.kbd__DOT__klatch) 
                                         << 1U)) | (IData)(vlSelfRef.ps_clock));
    vlSelfRef.kbd__DOT__kout = __Vdly__kbd__DOT__kout;
}

VL_INLINE_OPT void Vkbd___024root___nba_sequent__TOP__1(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data = vlSelfRef.kbd__DOT__kb_data;
    vlSelfRef.done = vlSelfRef.kbd__DOT__kdone;
}

void Vkbd___024root___eval_triggers__act(Vkbd___024root* vlSelf);

bool Vkbd___024root___eval_phase__act(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vkbd___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vkbd___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vkbd___024root___eval_phase__nba(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vkbd___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkbd___024root___dump_triggers__nba(Vkbd___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vkbd___024root___dump_triggers__act(Vkbd___024root* vlSelf);
#endif  // VL_DEBUG

void Vkbd___024root___eval(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vkbd___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("kbd.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vkbd___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("kbd.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vkbd___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vkbd___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vkbd___024root___eval_debug_assertions(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.ps_clock & 0xfeU))) {
        Verilated::overWidthError("ps_clock");}
    if (VL_UNLIKELY((vlSelfRef.ps_data & 0xfeU))) {
        Verilated::overWidthError("ps_data");}
}
#endif  // VL_DEBUG
