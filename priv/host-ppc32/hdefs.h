
/*---------------------------------------------------------------*/
/*---                                                         ---*/
/*--- This file (host-ppc32/hdefs.h) is                       ---*/
/*--- Copyright (c) 2005 OpenWorks LLP.  All rights reserved. ---*/
/*---                                                         ---*/
/*---------------------------------------------------------------*/

/*
   This file is part of LibVEX, a library for dynamic binary
   instrumentation and translation.

   Copyright (C) 2004-2005 OpenWorks, LLP.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; Version 2 dated June 1991 of the
   license.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE, or liability
   for damages.  See the GNU General Public License for more details.

   Neither the names of the U.S. Department of Energy nor the
   University of California nor the names of its contributors may be
   used to endorse or promote products derived from this software
   without prior written permission.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
   USA.
*/

#ifndef __LIBVEX_HOST_PPC32_HDEFS_H
#define __LIBVEX_HOST_PPC32_HDEFS_H

/* Num registers used for function calls */
#define PPC32_N_REGPARMS 8


/* --------- Registers. --------- */

/* The usual HReg abstraction.  There are 32 real int regs,
   32 real float regs, and 0 real vector regs. 
*/

extern void ppHRegPPC32 ( HReg );

extern HReg hregPPC32_GPR0  ( void );   // scratch reg / zero reg
extern HReg hregPPC32_GPR1  ( void );   // Stack Frame Pointer
extern HReg hregPPC32_GPR2  ( void );   // TOC pointer - not used
extern HReg hregPPC32_GPR3  ( void );
extern HReg hregPPC32_GPR4  ( void );
extern HReg hregPPC32_GPR5  ( void );
extern HReg hregPPC32_GPR6  ( void );
extern HReg hregPPC32_GPR7  ( void );
extern HReg hregPPC32_GPR8  ( void );
extern HReg hregPPC32_GPR9  ( void );
extern HReg hregPPC32_GPR10 ( void );
extern HReg hregPPC32_GPR11 ( void );
extern HReg hregPPC32_GPR12 ( void );
extern HReg hregPPC32_GPR13 ( void );   // thread specific pointer - not used
extern HReg hregPPC32_GPR14 ( void );
extern HReg hregPPC32_GPR15 ( void );
extern HReg hregPPC32_GPR16 ( void );
extern HReg hregPPC32_GPR17 ( void );
extern HReg hregPPC32_GPR18 ( void );
extern HReg hregPPC32_GPR19 ( void );
extern HReg hregPPC32_GPR20 ( void );
extern HReg hregPPC32_GPR21 ( void );
extern HReg hregPPC32_GPR22 ( void );
extern HReg hregPPC32_GPR23 ( void );
extern HReg hregPPC32_GPR24 ( void );
extern HReg hregPPC32_GPR25 ( void );
extern HReg hregPPC32_GPR26 ( void );
extern HReg hregPPC32_GPR27 ( void );
extern HReg hregPPC32_GPR28 ( void );
extern HReg hregPPC32_GPR29 ( void );
extern HReg hregPPC32_GPR30 ( void );
extern HReg hregPPC32_GPR31 ( void );    // GuestStatePtr

extern HReg hregPPC32_FPR0  ( void );
extern HReg hregPPC32_FPR1  ( void );
extern HReg hregPPC32_FPR2  ( void );
extern HReg hregPPC32_FPR3  ( void );
extern HReg hregPPC32_FPR4  ( void );
extern HReg hregPPC32_FPR5  ( void );
extern HReg hregPPC32_FPR6  ( void );
extern HReg hregPPC32_FPR7  ( void );
extern HReg hregPPC32_FPR8  ( void );
extern HReg hregPPC32_FPR9  ( void );
extern HReg hregPPC32_FPR10 ( void );
extern HReg hregPPC32_FPR11 ( void );
extern HReg hregPPC32_FPR12 ( void );
extern HReg hregPPC32_FPR13 ( void );
extern HReg hregPPC32_FPR14 ( void );
extern HReg hregPPC32_FPR15 ( void );
extern HReg hregPPC32_FPR16 ( void );
extern HReg hregPPC32_FPR17 ( void );
extern HReg hregPPC32_FPR18 ( void );
extern HReg hregPPC32_FPR19 ( void );
extern HReg hregPPC32_FPR20 ( void );
extern HReg hregPPC32_FPR21 ( void );
extern HReg hregPPC32_FPR22 ( void );
extern HReg hregPPC32_FPR23 ( void );
extern HReg hregPPC32_FPR24 ( void );
extern HReg hregPPC32_FPR25 ( void );
extern HReg hregPPC32_FPR26 ( void );
extern HReg hregPPC32_FPR27 ( void );
extern HReg hregPPC32_FPR28 ( void );
extern HReg hregPPC32_FPR29 ( void );
extern HReg hregPPC32_FPR30 ( void );
extern HReg hregPPC32_FPR31 ( void );

extern HReg hregPPC32_VR0  ( void );
extern HReg hregPPC32_VR1  ( void );
extern HReg hregPPC32_VR2  ( void );
extern HReg hregPPC32_VR3  ( void );
extern HReg hregPPC32_VR4  ( void );
extern HReg hregPPC32_VR5  ( void );
extern HReg hregPPC32_VR6  ( void );
extern HReg hregPPC32_VR7  ( void );
extern HReg hregPPC32_VR8  ( void );
extern HReg hregPPC32_VR9  ( void );
extern HReg hregPPC32_VR10 ( void );
extern HReg hregPPC32_VR11 ( void );
extern HReg hregPPC32_VR12 ( void );
extern HReg hregPPC32_VR13 ( void );
extern HReg hregPPC32_VR14 ( void );
extern HReg hregPPC32_VR15 ( void );
extern HReg hregPPC32_VR16 ( void );
extern HReg hregPPC32_VR17 ( void );
extern HReg hregPPC32_VR18 ( void );
extern HReg hregPPC32_VR19 ( void );
extern HReg hregPPC32_VR20 ( void );
extern HReg hregPPC32_VR21 ( void );
extern HReg hregPPC32_VR22 ( void );
extern HReg hregPPC32_VR23 ( void );
extern HReg hregPPC32_VR24 ( void );
extern HReg hregPPC32_VR25 ( void );
extern HReg hregPPC32_VR26 ( void );
extern HReg hregPPC32_VR27 ( void );
extern HReg hregPPC32_VR28 ( void );
extern HReg hregPPC32_VR29 ( void );
extern HReg hregPPC32_VR30 ( void );
extern HReg hregPPC32_VR31 ( void );

#define StackFramePtr hregPPC32_GPR1()
#define GuestStatePtr hregPPC32_GPR31()



/* --------- Condition codes, Intel encoding. --------- */


typedef
   enum {   /* Maps Condition Register (bc bitfield BI) */
      // Note: IBM bit codes read left to right (@%!*?!)
      // field 7 (integer only)
      Pcf_LT  = 0,   /* neg  | lt          */
      Pcf_GT  = 1,   /* pos  | gt          */
      Pcf_EQ  = 2,   /* zero | equal       */
      Pcf_SO  = 3,   /* summary overflow   */

      // field 6 (floating point only)
      Pcf_FX  = 4,   /* neg  | lt          */
      Pcf_FEX = 5,   /* pos  | gt          */
      Pcf_VX  = 6,   /* zero | equal       */
      Pcf_OX  = 7    /* summary overflow   */
   }
   PPC32CondFlag;

typedef
   enum {   /* Maps bc bitfield BO */
      Pct_FALSE  = 0x4,
      Pct_TRUE   = 0xC,
      Pct_ALWAYS = 0x14
   }
   PPC32CondTest;

typedef
   struct {
      PPC32CondFlag flag;
      PPC32CondTest test;
   }
   PPC32CondCode;

extern HChar* showPPC32CondCode ( PPC32CondCode );

/* constructor */
extern PPC32CondCode mk_PPCCondCode ( PPC32CondTest, PPC32CondFlag );

/* false->true, true->false */
extern PPC32CondTest invertCondTest ( PPC32CondTest );




/* --------- Memory address expressions (amodes). --------- */

typedef
   enum {
     Pam_IR,        /* Immediate + Reg */
     Pam_RR         /* Reg1 + Reg2     */
   }
   PPC32AModeTag;

typedef
   struct {
      PPC32AModeTag tag;
      union {
         struct {
            HReg base;
            UInt index;
         } IR;
         struct {
            HReg base;
            HReg index;
         } RR;
      } Pam;
   }
   PPC32AMode;

extern PPC32AMode* PPC32AMode_IR ( UInt, HReg );
extern PPC32AMode* PPC32AMode_RR ( HReg, HReg );

extern PPC32AMode* dopyPPC32AMode ( PPC32AMode* );

extern void ppPPC32AMode ( PPC32AMode* );


/* --------- Operand, which can be reg or immediate only. --------- */

typedef 
   enum {
      Pri_Imm,
      Pri_Reg
   }
   PPC32RITag;

typedef
   struct {
      PPC32RITag tag;
      union {
         struct {
            UInt imm32;
         } Imm;
         struct {
            HReg reg;
         } Reg;
      }
      Pri;
   }
   PPC32RI;

extern PPC32RI* PPC32RI_Imm ( UInt );
extern PPC32RI* PPC32RI_Reg ( HReg );

extern void ppPPC32RI ( PPC32RI* );


/* --------- Instructions. --------- */

/* --------- */
typedef
   enum {
      Pun_NEG,
      Pun_NOT,
      Pun_CLZ
   }
   PPC32UnaryOp;

extern HChar* showPPC32UnaryOp ( PPC32UnaryOp );


/* --------- */
typedef 
   enum {
      Palu_INVALID,
      Palu_ADD,
      Palu_AND, Palu_OR, Palu_XOR
   }
   PPC32AluOp;

extern HChar* showPPC32AluOp ( PPC32AluOp );


/* --------- */
typedef
   enum {
      Psh_INVALID,
      Psh_SHL, Psh_SHR, Psh_SAR, 
      Psh_ROL
   }
   PPC32ShiftOp;

extern HChar* showPPC32ShiftOp ( PPC32ShiftOp );


/* --------- */
typedef
   enum {
      Pcmp_U,  // unsigned
      Pcmp_S   // signed
   }
   PPC32CmpOp;

extern HChar* showPPC32CmpOp ( PPC32CmpOp );


/* --------- */
typedef
   enum {
      Pfp_INVALID,
      /* Binary */
      Pfp_ADD, Pfp_SUB, Pfp_MUL, Pfp_DIV, 

      /* Unary */
      Pfp_SQRT, Pfp_ABS, Pfp_NEG, Pfp_MOV
   }
   PPC32FpOp;

extern HChar* showPPC32FpOp ( PPC32FpOp );


/* --------- */
typedef
   enum {
      Pav_INVALID,

      /* Integer Unary */
      Pav_MOV,                             /* Mov */
      Pav_NOT,                             /* Bitwise */
      Pav_UNPCKH8S,  Pav_UNPCKH16S,        /* Unpack */
      Pav_UNPCKL8S,  Pav_UNPCKL16S,
      Pav_UNPCKHPIX, Pav_UNPCKLPIX,

      /* Integer Binary */
      Pav_AND, Pav_OR, Pav_XOR,   /* Bitwise */

      Pav_ADD8UM,  Pav_ADD16UM,  Pav_ADD32UM,
      Pav_ADD8US,  Pav_ADD16US,  Pav_ADD32US,
      Pav_ADD8SS,  Pav_ADD16SS,  Pav_ADD32SS,

      Pav_SUB8UM,  Pav_SUB16UM,  Pav_SUB32UM,
      Pav_SUB8US,  Pav_SUB16US,  Pav_SUB32US,
      Pav_SUB8SS,  Pav_SUB16SS,  Pav_SUB32SS,

      Pav_OMUL8U,  Pav_OMUL16U,
      Pav_OMUL8S,  Pav_OMUL16S,
      Pav_EMUL8U,  Pav_EMUL16U,
      Pav_EMUL8S,  Pav_EMUL16S,

      Pav_AVG8U,   Pav_AVG16U,   Pav_AVG32U,
      Pav_AVG8S,   Pav_AVG16S,   Pav_AVG32S,
      Pav_MAX8U,   Pav_MAX16U,   Pav_MAX32U,
      Pav_MAX8S,   Pav_MAX16S,   Pav_MAX32S,
      Pav_MIN8U,   Pav_MIN16U,   Pav_MIN32U,
      Pav_MIN8S,   Pav_MIN16S,   Pav_MIN32S,

      /* Compare (always affects CR field 6) */
      Pav_CMPEQ8U, Pav_CMPEQ16U, Pav_CMPEQ32U,
      Pav_CMPGT8U, Pav_CMPGT16U, Pav_CMPGT32U,
      Pav_CMPGT8S, Pav_CMPGT16S, Pav_CMPGT32S,

      /* Shift */
      Pav_SHL8,    Pav_SHL16,    Pav_SHL32,    Pav_SHL128,
      Pav_SHR8,    Pav_SHR16,    Pav_SHR32,    Pav_SHR128,
      Pav_SAR8,    Pav_SAR16,    Pav_SAR32,
      Pav_ROTL8,   Pav_ROTL16,   Pav_ROTL32,

      /* Pack */
      Pav_PACKU16UM, Pav_PACKU32UM,
      Pav_PACKU16US, Pav_PACKU32US,
      Pav_PACKS16US, Pav_PACKS32US,
      Pav_PACKS16SS, Pav_PACKS32SS, Pav_PACKPXL,

      /* Merge */
      Pav_MRG8HI,  Pav_MRG16HI,  Pav_MRG32HI,
      Pav_MRG8LO,  Pav_MRG16LO,  Pav_MRG32LO,

//..       /* Floating point binary */
//..       Xsse_ADDF, Xsse_SUBF, Xsse_MULF, Xsse_DIVF,
//..       Xsse_MAXF, Xsse_MINF,
//..       Xsse_CMPEQF, Xsse_CMPLTF, Xsse_CMPLEF, Xsse_CMPUNF,
//.. 
//..       /* Floating point unary */
//..       Xsse_RCPF, Xsse_RSQRTF, Xsse_SQRTF,
   }
   PPC32AvOp;

extern HChar* showPPC32AvOp ( PPC32AvOp );


/* --------- */
typedef
   enum {
      Pin_Alu32,      /* 32-bit mov/arith/logical */
      Pin_Sub32,      /* 32-bit mov/arith/logical */
      Pin_Sh32,       /* 32-bit shift/rotate */
      Pin_Cmp32,      /* 32-bit compare */
      Pin_Unary32,    /* 32-bit not, neg, clz */
      Pin_MulL,       /* widening multiply */
      Pin_Div,        /* div */
      Pin_Call,       /* call to address in register */
      Pin_Goto,       /* conditional/unconditional jmp to dst */
      Pin_CMov32,     /* conditional move */
      Pin_Load,       /* load a 8|16|32 bit value from mem */
      Pin_Store,      /* store a 8|16|32 bit value to mem */
      Pin_Set32,      /* convert condition code to 32-bit value */
      Pin_MFence,     /* mem fence (not just sse2, but sse0 and 1 too) */

      Pin_FpUnary,    /* FP unary op */
      Pin_FpBinary,   /* FP binary op */
      Pin_FpLdSt,     /* FP load/store */
      Pin_FpF64toF32, /* FP round IEEE754 double to IEEE754 single */
      Pin_FpF64toI32, /* FP round IEEE754 double to 32-bit integer */
      Pin_FpCMov,     /* FP floating point conditional move */
      Pin_FpLdFPSCR,  /* mtfsf */
      Pin_FpCmp,      /* FP compare, generating value into int reg */
      Pin_RdWrLR,     /* Read/Write Link Register */

//    Pin_AvConst,    /* Generate restricted AV literal */
      Pin_AvLdSt,     /* AV load/store (kludging for AMode_IR) */
      Pin_AvUnary,    /* AV unary general reg=>reg */
      Pin_AvBinary,   /* AV binary general reg,reg=>reg */

      Pin_AvPerm,     /* AV permute (shuffle) */
      Pin_AvSel,      /* AV select */
      Pin_AvShlDbl,   /* AV shift-left double by imm */
      Pin_AvSplat,    /* One elem repeated throughout dst */
      Pin_AvLdVSCR    /* mtvscr */

//..       Xin_SseLdzLO,  /* SSE load low 32/64 bits, zero remainder of reg */
//..       Xin_Sse32Fx4,  /* SSE binary, 32Fx4 */
//..       Xin_Sse32FLo,  /* SSE binary, 32F in lowest lane only */
//..       Xin_Sse64Fx2,  /* SSE binary, 64Fx2 */
//..       Xin_Sse64FLo,  /* SSE binary, 64F in lowest lane only */
//..       Xin_SseCMov,   /* SSE conditional move */
   }
   PPC32InstrTag;

/* Destinations are on the LEFT (first operand) */

typedef
   struct {
      PPC32InstrTag tag;
      union {
         struct {
            PPC32AluOp op;
            HReg       dst;
            HReg       srcL;
            PPC32RI*   srcR;
         } Alu32;
         struct {
            HReg       dst;    // PPC32 sub args are switched:
            PPC32RI*   srcL;   // argL => RI
            HReg       srcR;   // argR => R
         } Sub32;
         struct {
            PPC32ShiftOp op;
            HReg         dst;
            HReg         src;
            PPC32RI*     shft;
         } Sh32;
         struct {
            PPC32CmpOp op;
            UInt     crfD;
            HReg     srcL;
            PPC32RI* srcR;
         } Cmp32;
         /* Not and Neg */
         struct {
            PPC32UnaryOp op;
            HReg         dst;
            HReg         src;
         } Unary32;
         struct {
            Bool     syned;
            Bool     word;   /* low=0, high=1 */
            HReg     dst;
            HReg     srcL;
            PPC32RI* srcR;
         } MulL;
         /* ppc32 div/divu instruction. */
         struct {
            Bool syned;
            HReg dst;
            HReg srcL;
            HReg srcR;
         } Div;
         /* Pseudo-insn.  Call target (an absolute address), on given
            condition (which could be Pct_ALWAYS). */
         struct {
            PPC32CondCode cond;
            Addr32        target;
            Int           regparms; /* 0 .. 9 */
         } Call;
         /* Pseudo-insn.  Goto dst, on given condition (which could be
            Pct_ALWAYS).  Note importantly that if the jump is 
            conditional (not Pct_ALWAYS) the jump kind *must* be
            Ijk_Boring.  Ie non-Boring conditional jumps are
            not allowed. */
         struct {
            IRJumpKind    jk;
            PPC32CondCode cond;
            PPC32RI*      dst;
         } Goto;
         /* Mov src to dst on the given condition, which may not
            be the bogus Pct_ALWAYS. */
         struct {
            PPC32CondCode cond;
            HReg          dst;
            PPC32RI*      src;
         } CMov32;
         /* Sign/Zero extending loads.  Dst size is always 32 bits. */
         struct {
            UChar       sz; /* 1|2|4 */
            Bool        syned;
            HReg        dst;
            PPC32AMode* src;
         } Load;
         /* 16/8 bit stores */
         struct {
            UChar       sz; /* 1|2|4 */
            PPC32AMode* dst;
            HReg        src;
         } Store;
         /* Convert a ppc32 condition code to a 32-bit value (0 or 1). */
         struct {
            PPC32CondCode cond;
            HReg          dst;
         } Set32;
         /* Mem fence.  In short, an insn which flushes all preceding
            loads and stores as much as possible before continuing.
            On PPC32 we emit a "sync". */
         struct {
         } MFence;

         /* PPC32 Floating point */
         struct {
            PPC32FpOp op;
            HReg      dst;
            HReg      src;
         } FpUnary;
         struct {
            PPC32FpOp op;
            HReg      dst;
            HReg      srcL;
            HReg      srcR;
         } FpBinary;
         struct {
            Bool        isLoad;
            UChar       sz; /* only 4 (IEEE single) or 8 (IEEE double) */
            HReg        reg;
            PPC32AMode* addr;
         } FpLdSt;
         /* By observing the current FPU rounding mode, round src into dst,
            re-interpreting dst to an IEEE754 32-bit (float) type. */
         struct {
            HReg src;
            HReg dst;
         } FpF64toF32;
         /* By observing the current FPU rounding mode, round src into dst,
            re-interpreting dst to an 32-bit integer type. */
         struct {
            HReg src;
            HReg dst;
         } FpF64toI32;
         /* Mov src to dst on the given condition, which may not
            be the bogus Xcc_ALWAYS. */
         struct {
            PPC32CondCode cond;
            HReg          dst;
            HReg          src;
         } FpCMov;
         /* Load FP Status & Control Register */
         struct {
            HReg src;
         } FpLdFPSCR;
         /* Do a compare, generating result into CR field crfD. */
         struct {
            UChar crfD;
            HReg  dst;
            HReg  srcL;
            HReg  srcR;
         } FpCmp;

         /* Read/Write Link Register */
         struct {
            Bool wrLR;
            HReg gpr;
         } RdWrLR;

         /* Simplistic AltiVec */
         struct {
            Bool        isLoad;
            UChar       sz;      /* 8|16|32|128 */
            HReg        reg;
            PPC32AMode* addr;
         } AvLdSt;
         struct {
            PPC32AvOp op;
            HReg      dst;
            HReg      src;
         } AvUnary;
         struct {
            PPC32AvOp op;
            HReg      dst;
            HReg      srcL;
            HReg      srcR;
         } AvBinary;
         /* Perm,Sel,SlDbl,Splat are all weird AV permutations */
         struct {
            HReg ctl;
            HReg dst;
            HReg srcL;
            HReg srcR;
         } AvPerm;
         struct {
            HReg ctl;
            HReg dst;
            HReg srcL;
            HReg srcR;
         } AvSel;
         struct {
            UChar shift;
            HReg  dst;
            HReg  srcL;
            HReg  srcR;
         } AvShlDbl;
         struct {
            UChar    sz;   /* 8,16,32 */
            HReg     dst;
            PPC32RI* src;
         } AvSplat;
         /* Load AlitVec Status & Control Register */
         struct {
            HReg src;
         } AvLdVSCR;
       } Pin;
   }
   PPC32Instr;


extern PPC32Instr* PPC32Instr_Alu32      ( PPC32AluOp, HReg, HReg, PPC32RI* );
extern PPC32Instr* PPC32Instr_Sub32      ( HReg, PPC32RI*, HReg );
extern PPC32Instr* PPC32Instr_Sh32       ( PPC32ShiftOp, HReg, HReg, PPC32RI* );
extern PPC32Instr* PPC32Instr_Cmp32      ( PPC32CmpOp, UInt, HReg, PPC32RI* );
extern PPC32Instr* PPC32Instr_Unary32    ( PPC32UnaryOp op, HReg dst, HReg src );
extern PPC32Instr* PPC32Instr_MulL       ( Bool syned, Bool word, HReg, HReg, PPC32RI* );
extern PPC32Instr* PPC32Instr_Div        ( Bool syned, HReg dst, HReg srcL, HReg srcR );
extern PPC32Instr* PPC32Instr_Call       ( PPC32CondCode, Addr32, Int );
extern PPC32Instr* PPC32Instr_Goto       ( IRJumpKind, PPC32CondCode cond, PPC32RI* dst );
extern PPC32Instr* PPC32Instr_CMov32     ( PPC32CondCode, HReg dst, PPC32RI* src );
extern PPC32Instr* PPC32Instr_Load       ( UChar sz, Bool syned,
                                           HReg dst, PPC32AMode* src );
extern PPC32Instr* PPC32Instr_Store      ( UChar sz, PPC32AMode* dst, HReg src );
extern PPC32Instr* PPC32Instr_Set32      ( PPC32CondCode cond, HReg dst );
extern PPC32Instr* PPC32Instr_MFence     ( void );

extern PPC32Instr* PPC32Instr_FpUnary    ( PPC32FpOp op, HReg dst, HReg src );
extern PPC32Instr* PPC32Instr_FpBinary   ( PPC32FpOp op, HReg dst, HReg srcL, HReg srcR );
extern PPC32Instr* PPC32Instr_FpLdSt     ( Bool isLoad, UChar sz, HReg, PPC32AMode* );
extern PPC32Instr* PPC32Instr_FpF64toF32 ( HReg dst, HReg src );
extern PPC32Instr* PPC32Instr_FpF64toI32 ( HReg dst, HReg src );
extern PPC32Instr* PPC32Instr_FpCMov     ( PPC32CondCode, HReg dst, HReg src );
extern PPC32Instr* PPC32Instr_FpLdFPSCR  ( HReg src );
extern PPC32Instr* PPC32Instr_FpCmp      ( HReg dst, HReg srcL, HReg srcR );

extern PPC32Instr* PPC32Instr_RdWrLR     ( Bool wrLR, HReg gpr );

extern PPC32Instr* PPC32Instr_AvLdSt     ( Bool isLoad, UChar sz, HReg, PPC32AMode* );
extern PPC32Instr* PPC32Instr_AvUnary    ( PPC32FpOp op, HReg dst, HReg src );
extern PPC32Instr* PPC32Instr_AvBinary   ( PPC32FpOp op, HReg dst, HReg srcL, HReg srcR );
extern PPC32Instr* PPC32Instr_AvPerm     ( HReg ctl, HReg dst, HReg srcL, HReg srcR );
extern PPC32Instr* PPC32Instr_AvSel      ( HReg ctl, HReg dst, HReg srcL, HReg srcR );
extern PPC32Instr* PPC32Instr_AvShlDbl   ( UChar shift, HReg dst, HReg srcL, HReg srcR );
extern PPC32Instr* PPC32Instr_AvSplat    ( UChar sz, HReg dst, PPC32RI* src );
extern PPC32Instr* PPC32Instr_AvLdVSCR   ( HReg src );

extern void ppPPC32Instr ( PPC32Instr* );

/* Some functions that insulate the register allocator from details
   of the underlying instruction set. */
extern void         getRegUsage_PPC32Instr ( HRegUsage*, PPC32Instr* );
extern void         mapRegs_PPC32Instr     ( HRegRemap*, PPC32Instr* );
extern Bool         isMove_PPC32Instr      ( PPC32Instr*, HReg*, HReg* );
extern Int          emit_PPC32Instr        ( UChar* buf, Int nbuf, PPC32Instr* );
extern PPC32Instr*  genSpill_PPC32         ( HReg rreg, UShort offsetB );
extern PPC32Instr*  genReload_PPC32        ( HReg rreg, UShort offsetB );
extern void         getAllocableRegs_PPC32 ( Int*, HReg** );
extern HInstrArray* iselBB_PPC32           ( IRBB*, VexSubArch );

#endif /* ndef __LIBVEX_HOST_PPC32_HDEFS_H */

/*---------------------------------------------------------------*/
/*--- end                                  host-ppc32/hdefs.h ---*/
/*---------------------------------------------------------------*/
