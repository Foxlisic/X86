// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkbd.h for the primary calling header

#include "Vkbd__pch.h"
#include "Vkbd___024root.h"

VL_ATTR_COLD void Vkbd___024root___eval_static__TOP(Vkbd___024root* vlSelf);

VL_ATTR_COLD void Vkbd___024root___eval_static(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vkbd___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vkbd___024root___eval_static__TOP(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.kbd__DOT__klatch = 0U;
    vlSelfRef.kbd__DOT__kcount = 0U;
    vlSelfRef.kbd__DOT__kin = 0U;
    vlSelfRef.kbd__DOT__kout = 0U;
}

VL_ATTR_COLD void Vkbd___024root___eval_initial__TOP(Vkbd___024root* vlSelf);

VL_ATTR_COLD void Vkbd___024root___eval_initial(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vkbd___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void Vkbd___024root___eval_initial__TOP(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data = 0U;
    vlSelfRef.kbd__DOT__kbusy = 0U;
    vlSelfRef.kbd__DOT__kdone = 0U;
    vlSelfRef.done = 0U;
}

VL_ATTR_COLD void Vkbd___024root___eval_final(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vkbd___024root___eval_settle(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkbd___024root___dump_triggers__act(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkbd___024root___dump_triggers__nba(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vkbd___024root___ctor_var_reset(Vkbd___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkbd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkbd___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->ps_clock = VL_RAND_RESET_I(1);
    vlSelf->ps_data = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->kbd__DOT__klatch = VL_RAND_RESET_I(2);
    vlSelf->kbd__DOT__kcount = VL_RAND_RESET_I(4);
    vlSelf->kbd__DOT__kin = VL_RAND_RESET_I(10);
    vlSelf->kbd__DOT__kout = VL_RAND_RESET_I(20);
    vlSelf->kbd__DOT__kb_data = VL_RAND_RESET_I(8);
    vlSelf->kbd__DOT__kbusy = VL_RAND_RESET_I(1);
    vlSelf->kbd__DOT__kdone = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
