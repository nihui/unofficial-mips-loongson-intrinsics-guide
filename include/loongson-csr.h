/* Intrinsics for Loongson csr operations.

   Copyright (C) 2019 Free Software Foundation, Inc.
   Contributed by xuchenghua@loongson.cn.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _GCC_LOONGSON_CSR_H
#define _GCC_LOONGSON_CSR_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct drdtime{
	unsigned long dvalue;
	unsigned long dtimeid;
} __drdtime_t;

typedef struct rdtime{
	unsigned int value;
	unsigned int timeid;
} __rdtime_t;


#define __lcsr_cpucfg	__builtin_loongson_cpucfg
#define __lcsr_rdcsr	__builtin_loongson_rdcsr
#define __lcsr_wrcsr	__builtin_loongson_wrcsr
#define __lcsr_drdcsr	__builtin_loongson_drdcsr
#define __lcsr_dwrcsr	__builtin_loongson_dwrcsr
#define __lcsr_rdgcsr	__builtin_loongson_rdgcsr
#define __lcsr_wrgcsr	__builtin_loongson_wrgcsr
#define __lcsr_drdgcsr	__builtin_loongson_drdgcsr
#define __lcsr_dwrgcsr	__builtin_loongson_dwrgcsr
#define __lcsr_drdtime	__builtin_loongson_drdtime
#define __lcsr_rdtimel	__builtin_loongson_rdtimel
#define __lcsr_rdtimeh	__builtin_loongson_rdtimeh
#define __lcsr_lddir	__builtin_loongson_lddir
#define __lcsr_lwdir	__builtin_loongson_lwdir
#define __lcsr_ldpte	__builtin_loongson_ldpte
#define __lcsr_lwpte	__builtin_loongson_lwpte


extern __inline __drdtime_t __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__builtin_loongson_drdtime (void)
{
  __drdtime_t drdtime;
  __asm__ volatile (
    "drdtime\t%[val],%[tid]\n\t"
    : [val]"=&r"(drdtime.dvalue),[tid]"=&r"(drdtime.dtimeid)
    :
  );
  return drdtime;
}

extern __inline __rdtime_t __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__builtin_loongson_rdtimeh (void)
{
  __rdtime_t rdtime;
  __asm__ volatile (
    "rdtimeh\t%[val],%[tid]\n\t"
    : [val]"=&r"(rdtime.value),[tid]"=&r"(rdtime.timeid)
    :
  );
  return rdtime;
}

extern __inline __rdtime_t __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__builtin_loongson_rdtimel (void)
{
  __rdtime_t rdtime;
  __asm__ volatile (
    "rdtimel\t%[val],%[tid]\n\t"
    : [val]"=&r"(rdtime.value),[tid]"=&r"(rdtime.timeid)
    :
  );
  return rdtime;
}

#ifdef __cplusplus
}
#endif

#endif
