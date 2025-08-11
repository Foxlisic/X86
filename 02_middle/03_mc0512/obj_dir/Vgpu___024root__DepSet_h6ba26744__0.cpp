// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpu.h for the primary calling header

#include "Vgpu__pch.h"
#include "Vgpu___024root.h"

void Vgpu___024root___ico_sequent__TOP__0(Vgpu___024root* vlSelf);

void Vgpu___024root___eval_ico(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vgpu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vgpu___024root___ico_sequent__TOP__0(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ gpu__DOT__kcolor;
    gpu__DOT__kcolor = 0;
    // Body
    gpu__DOT__kcolor = (0xfU & ((1U & (((IData)(vlSelfRef.gpu__DOT__char) 
                                        >> (7U & (~ (IData)(vlSelfRef.gpu__DOT__x)))) 
                                       | ((~ (IData)(vlSelfRef.gpu__DOT__flash)) 
                                          & (((IData)(vlSelfRef.gpu__DOT__id) 
                                              == ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cursor))) 
                                             & (0xeU 
                                                <= 
                                                (0xfU 
                                                 & ((IData)(vlSelfRef.gpu__DOT__y) 
                                                    - (IData)(3U))))))))
                                 ? ((((IData)(vlSelfRef.gpu__DOT__attr) 
                                      >> 7U) & (IData)(vlSelfRef.gpu__DOT__flash))
                                     ? (7U & ((IData)(vlSelfRef.gpu__DOT__attr) 
                                              >> 4U))
                                     : (IData)(vlSelfRef.gpu__DOT__attr))
                                 : (7U & ((IData)(vlSelfRef.gpu__DOT__attr) 
                                          >> 4U))));
    vlSelfRef.gpu__DOT__color = ((0U == (IData)(gpu__DOT__kcolor))
                                  ? 0x111U : ((1U == (IData)(gpu__DOT__kcolor))
                                               ? 8U
                                               : ((2U 
                                                   == (IData)(gpu__DOT__kcolor))
                                                   ? 0x80U
                                                   : 
                                                  ((3U 
                                                    == (IData)(gpu__DOT__kcolor))
                                                    ? 0x88U
                                                    : 
                                                   ((4U 
                                                     == (IData)(gpu__DOT__kcolor))
                                                     ? 0x800U
                                                     : 
                                                    ((5U 
                                                      == (IData)(gpu__DOT__kcolor))
                                                      ? 0x808U
                                                      : 
                                                     ((6U 
                                                       == (IData)(gpu__DOT__kcolor))
                                                       ? 0x880U
                                                       : 
                                                      ((7U 
                                                        == (IData)(gpu__DOT__kcolor))
                                                        ? 0xcccU
                                                        : 
                                                       ((8U 
                                                         == (IData)(gpu__DOT__kcolor))
                                                         ? 0x888U
                                                         : 
                                                        ((9U 
                                                          == (IData)(gpu__DOT__kcolor))
                                                          ? 0xfU
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(gpu__DOT__kcolor))
                                                           ? 0xf0U
                                                           : 
                                                          ((0xbU 
                                                            == (IData)(gpu__DOT__kcolor))
                                                            ? 0xffU
                                                            : 
                                                           ((0xcU 
                                                             == (IData)(gpu__DOT__kcolor))
                                                             ? 0xf00U
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(gpu__DOT__kcolor))
                                                              ? 0xf0fU
                                                              : 
                                                             ((0xeU 
                                                               == (IData)(gpu__DOT__kcolor))
                                                               ? 0xff0U
                                                               : 0xfffU)))))))))))))));
}

void Vgpu___024root___eval_triggers__ico(Vgpu___024root* vlSelf);

bool Vgpu___024root___eval_phase__ico(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vgpu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vgpu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vgpu___024root___eval_act(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vgpu___024root___nba_sequent__TOP__0(Vgpu___024root* vlSelf);

void Vgpu___024root___eval_nba(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgpu___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vgpu___024root___nba_sequent__TOP__0(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ gpu__DOT__kcolor;
    gpu__DOT__kcolor = 0;
    SData/*10:0*/ __Vdly__gpu__DOT__y;
    __Vdly__gpu__DOT__y = 0;
    SData/*10:0*/ __Vdly__gpu__DOT__x;
    __Vdly__gpu__DOT__x = 0;
    IData/*23:0*/ __Vdly__gpu__DOT__timer;
    __Vdly__gpu__DOT__timer = 0;
    // Body
    __Vdly__gpu__DOT__timer = vlSelfRef.gpu__DOT__timer;
    __Vdly__gpu__DOT__x = vlSelfRef.gpu__DOT__x;
    __Vdly__gpu__DOT__y = vlSelfRef.gpu__DOT__y;
    if ((0xbebc1fU == vlSelfRef.gpu__DOT__timer)) {
        vlSelfRef.gpu__DOT__flash = (1U & (~ (IData)(vlSelfRef.gpu__DOT__flash)));
        __Vdly__gpu__DOT__timer = 0U;
    } else {
        __Vdly__gpu__DOT__timer = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.gpu__DOT__timer));
    }
    __Vdly__gpu__DOT__x = ((IData)(vlSelfRef.gpu__DOT__xmax)
                            ? 0U : (0x7ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.gpu__DOT__x))));
    __Vdly__gpu__DOT__y = (0x7ffU & ((0x31fU == (IData)(vlSelfRef.gpu__DOT__x))
                                      ? ((IData)(vlSelfRef.gpu__DOT__ymax)
                                          ? 0U : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.gpu__DOT__y)))
                                      : (IData)(vlSelfRef.gpu__DOT__y)));
    vlSelfRef.g = (0xfU & (((IData)(vlSelfRef.gpu__DOT__cwin)
                             ? (IData)(vlSelfRef.gpu__DOT__color)
                             : 0U) >> 4U));
    vlSelfRef.b = ((IData)(vlSelfRef.gpu__DOT__cwin)
                    ? (0xfU & (IData)(vlSelfRef.gpu__DOT__color))
                    : 0U);
    vlSelfRef.r = (0xfU & (((IData)(vlSelfRef.gpu__DOT__cwin)
                             ? (IData)(vlSelfRef.gpu__DOT__color)
                             : 0U) >> 8U));
    if ((0U == (7U & (IData)(vlSelfRef.gpu__DOT__x)))) {
        vlSelfRef.char_address = ((IData)(vlSelfRef.gpu__DOT__id) 
                                  << 1U);
    } else if ((2U != (7U & (IData)(vlSelfRef.gpu__DOT__x)))) {
        if ((4U == (7U & (IData)(vlSelfRef.gpu__DOT__x)))) {
            vlSelfRef.char_address = (1U | ((IData)(vlSelfRef.gpu__DOT__id) 
                                            << 1U));
        }
    }
    if ((0U != (7U & (IData)(vlSelfRef.gpu__DOT__x)))) {
        if ((2U != (7U & (IData)(vlSelfRef.gpu__DOT__x)))) {
            if ((4U != (7U & (IData)(vlSelfRef.gpu__DOT__x)))) {
                if ((7U == (7U & (IData)(vlSelfRef.gpu__DOT__x)))) {
                    vlSelfRef.gpu__DOT__char = vlSelfRef.font_data;
                    vlSelfRef.gpu__DOT__attr = vlSelfRef.char_data;
                }
            }
        }
        if ((2U == (7U & (IData)(vlSelfRef.gpu__DOT__x)))) {
            vlSelfRef.font_address = (((IData)(vlSelfRef.char_data) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelfRef.gpu__DOT__y) 
                                                    - (IData)(3U))));
        }
    }
    vlSelfRef.gpu__DOT__timer = __Vdly__gpu__DOT__timer;
    vlSelfRef.gpu__DOT__y = __Vdly__gpu__DOT__y;
    vlSelfRef.gpu__DOT__x = __Vdly__gpu__DOT__x;
    vlSelfRef.vs = (0x1bfU <= (IData)(vlSelfRef.gpu__DOT__y));
    vlSelfRef.gpu__DOT__ymax = (0x1c0U == (IData)(vlSelfRef.gpu__DOT__y));
    vlSelfRef.hs = (0x2c0U > (IData)(vlSelfRef.gpu__DOT__x));
    vlSelfRef.gpu__DOT__xmax = (0x31fU == (IData)(vlSelfRef.gpu__DOT__x));
    vlSelfRef.gpu__DOT__cwin = ((0x30U <= (IData)(vlSelfRef.gpu__DOT__x)) 
                                & ((0x2b0U > (IData)(vlSelfRef.gpu__DOT__x)) 
                                   & ((0x23U <= (IData)(vlSelfRef.gpu__DOT__y)) 
                                      & (0x1b3U > (IData)(vlSelfRef.gpu__DOT__y)))));
    vlSelfRef.gpu__DOT__id = (0x7ffU & ((0x7fU & (((IData)(8U) 
                                                   + 
                                                   ((IData)(vlSelfRef.gpu__DOT__x) 
                                                    - (IData)(0x30U))) 
                                                  >> 3U)) 
                                        + ((IData)(0x50U) 
                                           * (0x1fU 
                                              & (((IData)(vlSelfRef.gpu__DOT__y) 
                                                  - (IData)(0x23U)) 
                                                 >> 4U)))));
    gpu__DOT__kcolor = (0xfU & ((1U & (((IData)(vlSelfRef.gpu__DOT__char) 
                                        >> (7U & (~ (IData)(vlSelfRef.gpu__DOT__x)))) 
                                       | ((~ (IData)(vlSelfRef.gpu__DOT__flash)) 
                                          & (((IData)(vlSelfRef.gpu__DOT__id) 
                                              == ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cursor))) 
                                             & (0xeU 
                                                <= 
                                                (0xfU 
                                                 & ((IData)(vlSelfRef.gpu__DOT__y) 
                                                    - (IData)(3U))))))))
                                 ? ((((IData)(vlSelfRef.gpu__DOT__attr) 
                                      >> 7U) & (IData)(vlSelfRef.gpu__DOT__flash))
                                     ? (7U & ((IData)(vlSelfRef.gpu__DOT__attr) 
                                              >> 4U))
                                     : (IData)(vlSelfRef.gpu__DOT__attr))
                                 : (7U & ((IData)(vlSelfRef.gpu__DOT__attr) 
                                          >> 4U))));
    vlSelfRef.gpu__DOT__color = ((0U == (IData)(gpu__DOT__kcolor))
                                  ? 0x111U : ((1U == (IData)(gpu__DOT__kcolor))
                                               ? 8U
                                               : ((2U 
                                                   == (IData)(gpu__DOT__kcolor))
                                                   ? 0x80U
                                                   : 
                                                  ((3U 
                                                    == (IData)(gpu__DOT__kcolor))
                                                    ? 0x88U
                                                    : 
                                                   ((4U 
                                                     == (IData)(gpu__DOT__kcolor))
                                                     ? 0x800U
                                                     : 
                                                    ((5U 
                                                      == (IData)(gpu__DOT__kcolor))
                                                      ? 0x808U
                                                      : 
                                                     ((6U 
                                                       == (IData)(gpu__DOT__kcolor))
                                                       ? 0x880U
                                                       : 
                                                      ((7U 
                                                        == (IData)(gpu__DOT__kcolor))
                                                        ? 0xcccU
                                                        : 
                                                       ((8U 
                                                         == (IData)(gpu__DOT__kcolor))
                                                         ? 0x888U
                                                         : 
                                                        ((9U 
                                                          == (IData)(gpu__DOT__kcolor))
                                                          ? 0xfU
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(gpu__DOT__kcolor))
                                                           ? 0xf0U
                                                           : 
                                                          ((0xbU 
                                                            == (IData)(gpu__DOT__kcolor))
                                                            ? 0xffU
                                                            : 
                                                           ((0xcU 
                                                             == (IData)(gpu__DOT__kcolor))
                                                             ? 0xf00U
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(gpu__DOT__kcolor))
                                                              ? 0xf0fU
                                                              : 
                                                             ((0xeU 
                                                               == (IData)(gpu__DOT__kcolor))
                                                               ? 0xff0U
                                                               : 0xfffU)))))))))))))));
}

void Vgpu___024root___eval_triggers__act(Vgpu___024root* vlSelf);

bool Vgpu___024root___eval_phase__act(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vgpu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vgpu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vgpu___024root___eval_phase__nba(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vgpu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu___024root___dump_triggers__ico(Vgpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu___024root___dump_triggers__nba(Vgpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu___024root___dump_triggers__act(Vgpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vgpu___024root___eval(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vgpu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("gpu.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vgpu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vgpu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("gpu.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vgpu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("gpu.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vgpu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vgpu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vgpu___024root___eval_debug_assertions(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.cursor & 0xf800U))) {
        Verilated::overWidthError("cursor");}
}
#endif  // VL_DEBUG
