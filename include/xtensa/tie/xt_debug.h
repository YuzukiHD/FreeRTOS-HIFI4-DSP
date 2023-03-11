// Customer ID=16669; Build=0x8c05c; Copyright (c) 2017-2019 Cadence Design Systems, Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

/* Definitions for the xt_debug TIE package */

/* Do not modify. This is automatically generated.*/

/* parasoft-begin-suppress ALL "This file not MISRA checked." */

#ifndef _XTENSA_xt_debug_HEADER
#define _XTENSA_xt_debug_HEADER

#ifdef __XTENSA__
#ifdef __XCC__

#ifndef _ASMLANGUAGE
#ifndef _NOCLANGUAGE
#ifndef __ASSEMBLER__

#include <xtensa/tie/xt_core.h>

/*
 * The following prototypes describe intrinsic functions
 * corresponding to TIE instructions.  Some TIE instructions
 * may produce multiple results (designated as "out" operands
 * in the iclass section) or may have operands used as both
 * inputs and outputs (designated as "inout").  However, the C
 * and C++ languages do not provide syntax that can express
 * the in/out/inout constraints of TIE intrinsics.
 * Nevertheless, the compiler understands these constraints
 * and will check that the intrinsic functions are used
 * correctly.  To improve the readability of these prototypes,
 * the "out" and "inout" parameters are marked accordingly
 * with comments.
 */

extern void _TIE_xt_debug_BREAK(immediate imms, immediate immt);
extern void _TIE_xt_debug_BREAK_N(immediate imms);
extern void _TIE_xt_debug_LDDR32_P(const void * ars /*inout*/);
extern unsigned _TIE_xt_debug_RSR_DBREAKA0(void);
extern unsigned _TIE_xt_debug_RSR_DBREAKA1(void);
extern unsigned _TIE_xt_debug_RSR_DBREAKC0(void);
extern unsigned _TIE_xt_debug_RSR_DBREAKC1(void);
extern unsigned _TIE_xt_debug_RSR_DDR(void);
extern unsigned _TIE_xt_debug_RSR_DEBUGCAUSE(void);
extern unsigned _TIE_xt_debug_RSR_IBREAKA0(void);
extern unsigned _TIE_xt_debug_RSR_IBREAKA1(void);
extern unsigned _TIE_xt_debug_RSR_IBREAKENABLE(void);
extern unsigned _TIE_xt_debug_RSR_ICOUNT(void);
extern unsigned _TIE_xt_debug_RSR_ICOUNTLEVEL(void);
extern void _TIE_xt_debug_SDDR32_P(void * ars /*inout*/);
extern void _TIE_xt_debug_WSR_DBREAKA0(unsigned art);
extern void _TIE_xt_debug_WSR_DBREAKA1(unsigned art);
extern void _TIE_xt_debug_WSR_DBREAKC0(unsigned art);
extern void _TIE_xt_debug_WSR_DBREAKC1(unsigned art);
extern void _TIE_xt_debug_WSR_DDR(unsigned art);
extern void _TIE_xt_debug_WSR_DEBUGCAUSE(unsigned art);
extern void _TIE_xt_debug_WSR_IBREAKA0(unsigned art);
extern void _TIE_xt_debug_WSR_IBREAKA1(unsigned art);
extern void _TIE_xt_debug_WSR_IBREAKENABLE(unsigned art);
extern void _TIE_xt_debug_WSR_ICOUNT(unsigned art);
extern void _TIE_xt_debug_WSR_ICOUNTLEVEL(unsigned art);
extern void _TIE_xt_debug_XSR_DBREAKA0(unsigned art /*inout*/);
extern void _TIE_xt_debug_XSR_DBREAKA1(unsigned art /*inout*/);
extern void _TIE_xt_debug_XSR_DBREAKC0(unsigned art /*inout*/);
extern void _TIE_xt_debug_XSR_DBREAKC1(unsigned art /*inout*/);
extern void _TIE_xt_debug_XSR_DDR(unsigned art /*inout*/);
extern void _TIE_xt_debug_XSR_DEBUGCAUSE(unsigned art /*inout*/);
extern void _TIE_xt_debug_XSR_IBREAKA0(unsigned art /*inout*/);
extern void _TIE_xt_debug_XSR_IBREAKA1(unsigned art /*inout*/);
extern void _TIE_xt_debug_XSR_IBREAKENABLE(unsigned art /*inout*/);
extern void _TIE_xt_debug_XSR_ICOUNT(unsigned art /*inout*/);
extern void _TIE_xt_debug_XSR_ICOUNTLEVEL(unsigned art /*inout*/);

#endif /*__ASSEMBLER__*/
#endif /*_NOCLANGUAGE*/
#endif /*_ASMLANGUAGE*/

#define XT_BREAK _TIE_xt_debug_BREAK
#define XT_BREAK_N _TIE_xt_debug_BREAK_N
#define XT_LDDR32_P _TIE_xt_debug_LDDR32_P
#define XT_RSR_DBREAKA0 _TIE_xt_debug_RSR_DBREAKA0
#define XT_RSR_DBREAKA1 _TIE_xt_debug_RSR_DBREAKA1
#define XT_RSR_DBREAKC0 _TIE_xt_debug_RSR_DBREAKC0
#define XT_RSR_DBREAKC1 _TIE_xt_debug_RSR_DBREAKC1
#define XT_RSR_DDR _TIE_xt_debug_RSR_DDR
#define XT_RSR_DEBUGCAUSE _TIE_xt_debug_RSR_DEBUGCAUSE
#define XT_RSR_IBREAKA0 _TIE_xt_debug_RSR_IBREAKA0
#define XT_RSR_IBREAKA1 _TIE_xt_debug_RSR_IBREAKA1
#define XT_RSR_IBREAKENABLE _TIE_xt_debug_RSR_IBREAKENABLE
#define XT_RSR_ICOUNT _TIE_xt_debug_RSR_ICOUNT
#define XT_RSR_ICOUNTLEVEL _TIE_xt_debug_RSR_ICOUNTLEVEL
#define XT_SDDR32_P _TIE_xt_debug_SDDR32_P
#define XT_WSR_DBREAKA0 _TIE_xt_debug_WSR_DBREAKA0
#define XT_WSR_DBREAKA1 _TIE_xt_debug_WSR_DBREAKA1
#define XT_WSR_DBREAKC0 _TIE_xt_debug_WSR_DBREAKC0
#define XT_WSR_DBREAKC1 _TIE_xt_debug_WSR_DBREAKC1
#define XT_WSR_DDR _TIE_xt_debug_WSR_DDR
#define XT_WSR_DEBUGCAUSE _TIE_xt_debug_WSR_DEBUGCAUSE
#define XT_WSR_IBREAKA0 _TIE_xt_debug_WSR_IBREAKA0
#define XT_WSR_IBREAKA1 _TIE_xt_debug_WSR_IBREAKA1
#define XT_WSR_IBREAKENABLE _TIE_xt_debug_WSR_IBREAKENABLE
#define XT_WSR_ICOUNT _TIE_xt_debug_WSR_ICOUNT
#define XT_WSR_ICOUNTLEVEL _TIE_xt_debug_WSR_ICOUNTLEVEL
#define XT_XSR_DBREAKA0 _TIE_xt_debug_XSR_DBREAKA0
#define XT_XSR_DBREAKA1 _TIE_xt_debug_XSR_DBREAKA1
#define XT_XSR_DBREAKC0 _TIE_xt_debug_XSR_DBREAKC0
#define XT_XSR_DBREAKC1 _TIE_xt_debug_XSR_DBREAKC1
#define XT_XSR_DDR _TIE_xt_debug_XSR_DDR
#define XT_XSR_DEBUGCAUSE _TIE_xt_debug_XSR_DEBUGCAUSE
#define XT_XSR_IBREAKA0 _TIE_xt_debug_XSR_IBREAKA0
#define XT_XSR_IBREAKA1 _TIE_xt_debug_XSR_IBREAKA1
#define XT_XSR_IBREAKENABLE _TIE_xt_debug_XSR_IBREAKENABLE
#define XT_XSR_ICOUNT _TIE_xt_debug_XSR_ICOUNT
#define XT_XSR_ICOUNTLEVEL _TIE_xt_debug_XSR_ICOUNTLEVEL

#endif /* __XCC__ */

#endif /* __XTENSA__ */

#endif /* !_XTENSA_xt_debug_HEADER */

/* parasoft-end-suppress ALL "This file not MISRA checked." */
