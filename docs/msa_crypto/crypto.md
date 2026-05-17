# Cryptography

Generated from `include/msa-cryptointrin.h`. This page contains 29 intrinsics.

<span id="intrinsic-__crypto_aes128_dec"></span>

## __m128i __crypto_aes128_dec (__m128i a, __m128i b)

### Synopsis

```c
__m128i __crypto_aes128_dec (__m128i a, __m128i b)
#include <msa-cryptointrin.h>
Instruction: aes128.dec
Builtin: __builtin_crypto_aes128_dec
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:43
```

### Description

Perform the `aes128.dec` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes128.dec(a, b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 14 | 0.07(1/14) |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes128_dec ((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__crypto_aes128_enc"></span>

## __m128i __crypto_aes128_enc (__m128i a, __m128i b)

### Synopsis

```c
__m128i __crypto_aes128_enc (__m128i a, __m128i b)
#include <msa-cryptointrin.h>
Instruction: aes128.enc
Builtin: __builtin_crypto_aes128_enc
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:37
```

### Description

Perform the `aes128.enc` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes128.enc(a, b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 14 | 0.07(1/14) |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes128_enc ((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__crypto_aes192_dec"></span>

## __m128i __crypto_aes192_dec (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_aes192_dec (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: aes192.dec
Builtin: __builtin_crypto_aes192_dec
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:55
```

### Description

Perform the `aes192.dec` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes192.dec(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 16 | 0.06(1/16) |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes192_dec ((v2i64)a, (v2i64)b, (v2i64)c);
```

<span id="intrinsic-__crypto_aes192_enc"></span>

## __m128i __crypto_aes192_enc (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_aes192_enc (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: aes192.enc
Builtin: __builtin_crypto_aes192_enc
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:49
```

### Description

Perform the `aes192.enc` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes192.enc(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 16 | 0.06(1/16) |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes192_enc ((v2i64)a, (v2i64)b, (v2i64)c);
```

<span id="intrinsic-__crypto_aes256_dec"></span>

## __m128i __crypto_aes256_dec (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_aes256_dec (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: aes256.dec
Builtin: __builtin_crypto_aes256_dec
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:67
```

### Description

Perform the `aes256.dec` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes256.dec(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 18 | 0.06(1/18) |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes256_dec ((v2i64)a, (v2i64)b, (v2i64)c);
```

<span id="intrinsic-__crypto_aes256_enc"></span>

## __m128i __crypto_aes256_enc (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_aes256_enc (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: aes256.enc
Builtin: __builtin_crypto_aes256_enc
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:61
```

### Description

Perform the `aes256.enc` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes256.enc(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 18 | 0.06(1/18) |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes256_enc ((v2i64)a, (v2i64)b, (v2i64)c);
```

<span id="intrinsic-__crypto_aes_fr_dec"></span>

## __m128i __crypto_aes_fr_dec (__m128i a, __m128i b)

### Synopsis

```c
__m128i __crypto_aes_fr_dec (__m128i a, __m128i b)
#include <msa-cryptointrin.h>
Instruction: aes.fr.dec
Builtin: __builtin_crypto_aes_fr_dec
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:85
```

### Description

Perform the `aes.fr.dec` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes.fr.dec(a, b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes_fr_dec ((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__crypto_aes_fr_enc"></span>

## __m128i __crypto_aes_fr_enc (__m128i a, __m128i b)

### Synopsis

```c
__m128i __crypto_aes_fr_enc (__m128i a, __m128i b)
#include <msa-cryptointrin.h>
Instruction: aes.fr.enc
Builtin: __builtin_crypto_aes_fr_enc
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:79
```

### Description

Perform the `aes.fr.enc` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes.fr.enc(a, b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes_fr_enc ((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__crypto_aes_kg"></span>

## __m128i __crypto_aes_kg (__m128i a, __m128i b)

### Synopsis

```c
__m128i __crypto_aes_kg (__m128i a, __m128i b)
#include <msa-cryptointrin.h>
Instruction: aes.kg
Builtin: __builtin_crypto_aes_kg
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:73
```

### Description

Perform the `aes.kg` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes.kg(a, b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes_kg ((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__crypto_aes_lr_dec"></span>

## __m128i __crypto_aes_lr_dec (__m128i a, __m128i b)

### Synopsis

```c
__m128i __crypto_aes_lr_dec (__m128i a, __m128i b)
#include <msa-cryptointrin.h>
Instruction: aes.lr.dec
Builtin: __builtin_crypto_aes_lr_dec
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:97
```

### Description

Perform the `aes.lr.dec` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes.lr.dec(a, b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes_lr_dec ((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__crypto_aes_lr_enc"></span>

## __m128i __crypto_aes_lr_enc (__m128i a, __m128i b)

### Synopsis

```c
__m128i __crypto_aes_lr_enc (__m128i a, __m128i b)
#include <msa-cryptointrin.h>
Instruction: aes.lr.enc
Builtin: __builtin_crypto_aes_lr_enc
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:91
```

### Description

Perform the `aes.lr.enc` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes.lr.enc(a, b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes_lr_enc ((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__crypto_aes_mc_dec"></span>

## __m128i __crypto_aes_mc_dec (__m128i a)

### Synopsis

```c
__m128i __crypto_aes_mc_dec (__m128i a)
#include <msa-cryptointrin.h>
Instruction: aes.mc.dec
Builtin: __builtin_crypto_aes_mc_dec
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:109
```

### Description

Perform the `aes.mc.dec` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes.mc.dec(a);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes_mc_dec ((v2i64)a);
```

<span id="intrinsic-__crypto_aes_mc_enc"></span>

## __m128i __crypto_aes_mc_enc (__m128i a)

### Synopsis

```c
__m128i __crypto_aes_mc_enc (__m128i a)
#include <msa-cryptointrin.h>
Instruction: aes.mc.enc
Builtin: __builtin_crypto_aes_mc_enc
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:103
```

### Description

Perform the `aes.mc.enc` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes.mc.enc(a);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes_mc_enc ((v2i64)a);
```

<span id="intrinsic-__crypto_aes_sb_dec"></span>

## __m128i __crypto_aes_sb_dec (__m128i a)

### Synopsis

```c
__m128i __crypto_aes_sb_dec (__m128i a)
#include <msa-cryptointrin.h>
Instruction: aes.sb.dec
Builtin: __builtin_crypto_aes_sb_dec
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:121
```

### Description

Perform the `aes.sb.dec` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes.sb.dec(a);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes_sb_dec ((v2i64)a);
```

<span id="intrinsic-__crypto_aes_sb_enc"></span>

## __m128i __crypto_aes_sb_enc (__m128i a)

### Synopsis

```c
__m128i __crypto_aes_sb_enc (__m128i a)
#include <msa-cryptointrin.h>
Instruction: aes.sb.enc
Builtin: __builtin_crypto_aes_sb_enc
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:115
```

### Description

Perform the `aes.sb.enc` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes.sb.enc(a);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes_sb_enc ((v2i64)a);
```

<span id="intrinsic-__crypto_aes_sr_dec"></span>

## __m128i __crypto_aes_sr_dec (__m128i a)

### Synopsis

```c
__m128i __crypto_aes_sr_dec (__m128i a)
#include <msa-cryptointrin.h>
Instruction: aes.sr.dec
Builtin: __builtin_crypto_aes_sr_dec
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:133
```

### Description

Perform the `aes.sr.dec` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes.sr.dec(a);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes_sr_dec ((v2i64)a);
```

<span id="intrinsic-__crypto_aes_sr_enc"></span>

## __m128i __crypto_aes_sr_enc (__m128i a)

### Synopsis

```c
__m128i __crypto_aes_sr_enc (__m128i a)
#include <msa-cryptointrin.h>
Instruction: aes.sr.enc
Builtin: __builtin_crypto_aes_sr_enc
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:127
```

### Description

Perform the `aes.sr.enc` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = aes.sr.enc(a);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_aes_sr_enc ((v2i64)a);
```

<span id="intrinsic-__crypto_md5_4r"></span>

## __m128i __crypto_md5_4r (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_md5_4r (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: md5.4r
Builtin: __builtin_crypto_md5_4r
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:145
```

### Description

Perform the `md5.4r` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = md5.4r(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 7 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_md5_4r ((v2i64)a, (v2i64)b, (v2i64)c);
```

<span id="intrinsic-__crypto_md5_ms"></span>

## __m128i __crypto_md5_ms (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_md5_ms (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: md5.ms
Builtin: __builtin_crypto_md5_ms
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:139
```

### Description

Perform the `md5.ms` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = md5.ms(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_md5_ms ((v2i64)a, (v2i64)b, (v2i64)c);
```

<span id="intrinsic-__crypto_sha1_hash_4r"></span>

## __m128i __crypto_sha1_hash_4r (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_sha1_hash_4r (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: sha1.hash.4r
Builtin: __builtin_crypto_sha1_hash_4r
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:163
```

### Description

Perform the `sha1.hash.4r` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = sha1.hash.4r(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 7 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_sha1_hash_4r ((v2i64)a, (v2i64)b, (v2i64)c);
```

<span id="intrinsic-__crypto_sha1_ms_1"></span>

## __m128i __crypto_sha1_ms_1 (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_sha1_ms_1 (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: sha1.ms.1
Builtin: __builtin_crypto_sha1_ms_1
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:151
```

### Description

Perform the `sha1.ms.1` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = sha1.ms.1(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_sha1_ms_1 ((v2i64)a, (v2i64)b, (v2i64)c);
```

<span id="intrinsic-__crypto_sha1_ms_2"></span>

## __m128i __crypto_sha1_ms_2 (__m128i a, __m128i b)

### Synopsis

```c
__m128i __crypto_sha1_ms_2 (__m128i a, __m128i b)
#include <msa-cryptointrin.h>
Instruction: sha1.ms.2
Builtin: __builtin_crypto_sha1_ms_2
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:157
```

### Description

Perform the `sha1.ms.2` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = sha1.ms.2(a, b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_sha1_ms_2 ((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__crypto_sha256_hash_2r"></span>

## __m128i __crypto_sha256_hash_2r (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_sha256_hash_2r (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: sha256.hash.2r
Builtin: __builtin_crypto_sha256_hash_2r
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:181
```

### Description

Perform the `sha256.hash.2r` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = sha256.hash.2r(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_sha256_hash_2r ((v2i64)a, (v2i64)b, (v2i64)c);
```

<span id="intrinsic-__crypto_sha256_ms_1"></span>

## __m128i __crypto_sha256_ms_1 (__m128i a, __m128i b)

### Synopsis

```c
__m128i __crypto_sha256_ms_1 (__m128i a, __m128i b)
#include <msa-cryptointrin.h>
Instruction: sha256.ms.1
Builtin: __builtin_crypto_sha256_ms_1
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:169
```

### Description

Perform the `sha256.ms.1` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = sha256.ms.1(a, b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_sha256_ms_1 ((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__crypto_sha256_ms_2"></span>

## __m128i __crypto_sha256_ms_2 (__m128i a, __m128i b)

### Synopsis

```c
__m128i __crypto_sha256_ms_2 (__m128i a, __m128i b)
#include <msa-cryptointrin.h>
Instruction: sha256.ms.2
Builtin: __builtin_crypto_sha256_ms_2
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:175
```

### Description

Perform the `sha256.ms.2` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = sha256.ms.2(a, b);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_sha256_ms_2 ((v2i64)a, (v2i64)b);
```

<span id="intrinsic-__crypto_sha512_hash_r_1"></span>

## __m128i __crypto_sha512_hash_r_1 (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_sha512_hash_r_1 (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: sha512.hash.r.1
Builtin: __builtin_crypto_sha512_hash_r_1
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:199
```

### Description

Perform the `sha512.hash.r.1` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = sha512.hash.r.1(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_sha512_hash_r_1 ((v2i64)a, (v2i64)b, (v2i64)c);
```

<span id="intrinsic-__crypto_sha512_hash_r_2"></span>

## __m128i __crypto_sha512_hash_r_2 (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_sha512_hash_r_2 (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: sha512.hash.r.2
Builtin: __builtin_crypto_sha512_hash_r_2
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:205
```

### Description

Perform the `sha512.hash.r.2` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = sha512.hash.r.2(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_sha512_hash_r_2 ((v2i64)a, (v2i64)b, (v2i64)c);
```

<span id="intrinsic-__crypto_sha512_ms_1"></span>

## __m128i __crypto_sha512_ms_1 (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_sha512_ms_1 (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: sha512.ms.1
Builtin: __builtin_crypto_sha512_ms_1
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:187
```

### Description

Perform the `sha512.ms.1` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = sha512.ms.1(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_sha512_ms_1 ((v2i64)a, (v2i64)b, (v2i64)c);
```

<span id="intrinsic-__crypto_sha512_ms_2"></span>

## __m128i __crypto_sha512_ms_2 (__m128i a, __m128i b, __m128i c)

### Synopsis

```c
__m128i __crypto_sha512_ms_2 (__m128i a, __m128i b, __m128i c)
#include <msa-cryptointrin.h>
Instruction: sha512.ms.2
Builtin: __builtin_crypto_sha512_ms_2
CPU Flags: __mips_msa_crypto
Kind: function
Source: include/msa-cryptointrin.h:193
```

### Description

Perform the `sha512.ms.2` cryptographic round, message-schedule, or helper primitive on 128-bit vector state.

### Operation

```c
dst = sha512.ms.2(a, b, c);
```

### Latency and Throughput

| CPU | µarch | Latency | Throughput (IPC) |
|-----|-------|---------|------------------|
| 3A4000 | GS464V | 5 | 1 |

### Header Mapping

```c
return (__m128i) __builtin_crypto_sha512_ms_2 ((v2i64)a, (v2i64)b, (v2i64)c);
```

