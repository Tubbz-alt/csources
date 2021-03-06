/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow;
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyArray_YtcvxHNKV4YiecPE9ap1mcA[20];
typedef NU32 tyArray_xsE8WL1yT5DKfrMdYB89bYA[5];
typedef NU8 tyArray_w5VB8h5K8DB3oWrO5U2wqg[64];
struct tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow {
NI count;
tyArray_xsE8WL1yT5DKfrMdYB89bYA state;
tyArray_w5VB8h5K8DB3oWrO5U2wqg buf;
};
typedef NU32 tyArray_BhDmUZcWSpYFIy5J8Xi8mQ[80];
typedef NIM_CHAR tyArray_1NlJ8ipZDU6GZ9bDFAyQjfQ[8];
N_LIB_PRIVATE N_NIMCALL(tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow, newSha1State_cTC3zLRYstmsfaHT6EKLBQ)(void);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, update_Ak1pheui0y0JZQOTLQGB1g)(tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow* ctx, NIM_CHAR* data, NI dataLen_0);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, transform_vTptXbBZqqjK8k58vCERag)(tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow* ctx);
static N_INLINE(void, bigEndian32_IzdisrH4sYnsItUtxSkomAsha1)(void* outp, void* inp);
N_LIB_PRIVATE N_NIMCALL(void, finalize_HgdH1B8AkZgRKNP3E9cbRFQ)(tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow* ctx, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result);
static N_INLINE(void, bigEndian64_IzdisrH4sYnsItUtxSkomA_2sha1)(void* outp, void* inp);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, secureHash_EXfqX32pW1lnNt34KrEaBg)(NimStringDesc* str, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readFile_cisNPM68uOwBvpMG5Dxmkg)(NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(NI, nsuParseHexInt)(NimStringDesc* s);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq__Ql5vZ51gew5fqwplIYujaw)(tyArray_YtcvxHNKV4YiecPE9ap1mcA x, tyArray_YtcvxHNKV4YiecPE9ap1mcA y);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_SpWH4VocI3fFoiOGE4MzWw_2, "\200", 1);
STRING_LITERAL(TM_SpWH4VocI3fFoiOGE4MzWw_3, "\000", 1);

static N_INLINE(void, nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
	(void)(T1_);
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem(p, ((int) 0), size);
}

N_LIB_PRIVATE N_NIMCALL(tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow, newSha1State_cTC3zLRYstmsfaHT6EKLBQ)(void) {
	tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow));
	result.count = ((NI) 0);
	result.state[(((NI) 0))- 0] = ((NU32) 1732584193);
	result.state[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	result.state[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	result.state[(((NI) 3))- 0] = ((NU32) 271733878);
	result.state[(((NI) 4))- 0] = ((NU32) IL64(3285377520));
	return result;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
	(void)(T1_);
}

static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, bigEndian32_IzdisrH4sYnsItUtxSkomAsha1)(void* outp, void* inp) {
	copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(outp, inp, ((NI) 4));
}

N_LIB_PRIVATE N_NIMCALL(void, transform_vTptXbBZqqjK8k58vCERag)(tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow* ctx) {
	tyArray_BhDmUZcWSpYFIy5J8Xi8mQ W;
	NU32 A;
	NU32 B;
	NU32 C;
	NU32 D;
	NU32 E;
	NI t;
	nimZeroMem((void*)W, sizeof(tyArray_BhDmUZcWSpYFIy5J8Xi8mQ));
	A = (NU32)0;
	B = (NU32)0;
	C = (NU32)0;
	D = (NU32)0;
	E = (NU32)0;
	t = ((NI) 0);
	A = (*ctx).state[(((NI) 0))- 0];
	B = (*ctx).state[(((NI) 1))- 0];
	C = (*ctx).state[(((NI) 2))- 0];
	D = (*ctx).state[(((NI) 3))- 0];
	E = (*ctx).state[(((NI) 4))- 0];
	{
		while (1) {
			if (!(t < ((NI) 15))) goto LA2;
			bigEndian32_IzdisrH4sYnsItUtxSkomAsha1(((void*) ((&W[((NI)(t + ((NI) 0)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 0)) * ((NI) 4)))- 0]))));
			E += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(A) >> (NU32)(((NI) 27))) | (NU32)((NU32)(A) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)(D ^ (NU32)(B & (NU32)(C ^ D)))))) + (NU32)(((NU32) 1518500249)));
			B = (NU32)((NU32)((NU32)(B) >> (NU32)(((NI) 2))) | (NU32)((NU32)(B) << (NU32)(((NI) 30))));
			bigEndian32_IzdisrH4sYnsItUtxSkomAsha1(((void*) ((&W[((NI)(t + ((NI) 1)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 1)) * ((NI) 4)))- 0]))));
			D += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(E) >> (NU32)(((NI) 27))) | (NU32)((NU32)(E) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)(C ^ (NU32)(A & (NU32)(B ^ C)))))) + (NU32)(((NU32) 1518500249)));
			A = (NU32)((NU32)((NU32)(A) >> (NU32)(((NI) 2))) | (NU32)((NU32)(A) << (NU32)(((NI) 30))));
			bigEndian32_IzdisrH4sYnsItUtxSkomAsha1(((void*) ((&W[((NI)(t + ((NI) 2)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 2)) * ((NI) 4)))- 0]))));
			C += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(D) >> (NU32)(((NI) 27))) | (NU32)((NU32)(D) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)(B ^ (NU32)(E & (NU32)(A ^ B)))))) + (NU32)(((NU32) 1518500249)));
			E = (NU32)((NU32)((NU32)(E) >> (NU32)(((NI) 2))) | (NU32)((NU32)(E) << (NU32)(((NI) 30))));
			bigEndian32_IzdisrH4sYnsItUtxSkomAsha1(((void*) ((&W[((NI)(t + ((NI) 3)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 3)) * ((NI) 4)))- 0]))));
			B += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(C) >> (NU32)(((NI) 27))) | (NU32)((NU32)(C) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)(A ^ (NU32)(D & (NU32)(E ^ A)))))) + (NU32)(((NU32) 1518500249)));
			D = (NU32)((NU32)((NU32)(D) >> (NU32)(((NI) 2))) | (NU32)((NU32)(D) << (NU32)(((NI) 30))));
			bigEndian32_IzdisrH4sYnsItUtxSkomAsha1(((void*) ((&W[((NI)(t + ((NI) 4)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 4)) * ((NI) 4)))- 0]))));
			A += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(B) >> (NU32)(((NI) 27))) | (NU32)((NU32)(B) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)(E ^ (NU32)(C & (NU32)(D ^ E)))))) + (NU32)(((NU32) 1518500249)));
			C = (NU32)((NU32)((NU32)(C) >> (NU32)(((NI) 2))) | (NU32)((NU32)(C) << (NU32)(((NI) 30))));
			t += ((NI) 5);
		} LA2: ;
	}
	bigEndian32_IzdisrH4sYnsItUtxSkomAsha1(((void*) ((&W[((NI)(t + ((NI) 0)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 0)) * ((NI) 4)))- 0]))));
	E += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(A) >> (NU32)(((NI) 27))) | (NU32)((NU32)(A) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)(D ^ (NU32)(B & (NU32)(C ^ D)))))) + (NU32)(((NU32) 1518500249)));
	B = (NU32)((NU32)((NU32)(B) >> (NU32)(((NI) 2))) | (NU32)((NU32)(B) << (NU32)(((NI) 30))));
	W[((NI)(t + ((NI) 1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
	D += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(E) >> (NU32)(((NI) 27))) | (NU32)((NU32)(E) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)(C ^ (NU32)(A & (NU32)(B ^ C)))))) + (NU32)(((NU32) 1518500249)));
	A = (NU32)((NU32)((NU32)(A) >> (NU32)(((NI) 2))) | (NU32)((NU32)(A) << (NU32)(((NI) 30))));
	W[((NI)(t + ((NI) 2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
	C += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(D) >> (NU32)(((NI) 27))) | (NU32)((NU32)(D) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)(B ^ (NU32)(E & (NU32)(A ^ B)))))) + (NU32)(((NU32) 1518500249)));
	E = (NU32)((NU32)((NU32)(E) >> (NU32)(((NI) 2))) | (NU32)((NU32)(E) << (NU32)(((NI) 30))));
	W[((NI)(t + ((NI) 3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
	B += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(C) >> (NU32)(((NI) 27))) | (NU32)((NU32)(C) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)(A ^ (NU32)(D & (NU32)(E ^ A)))))) + (NU32)(((NU32) 1518500249)));
	D = (NU32)((NU32)((NU32)(D) >> (NU32)(((NI) 2))) | (NU32)((NU32)(D) << (NU32)(((NI) 30))));
	W[((NI)(t + ((NI) 4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
	A += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(B) >> (NU32)(((NI) 27))) | (NU32)((NU32)(B) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)(E ^ (NU32)(C & (NU32)(D ^ E)))))) + (NU32)(((NU32) 1518500249)));
	C = (NU32)((NU32)((NU32)(C) >> (NU32)(((NI) 2))) | (NU32)((NU32)(C) << (NU32)(((NI) 30))));
	t = ((NI) 20);
	{
		while (1) {
			if (!(t < ((NI) 40))) goto LA4;
			W[((NI)(t + ((NI) 0)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			E += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(A) >> (NU32)(((NI) 27))) | (NU32)((NU32)(A) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)((NU32)(B ^ C) ^ D)))) + (NU32)(((NU32) 1859775393)));
			B = (NU32)((NU32)((NU32)(B) >> (NU32)(((NI) 2))) | (NU32)((NU32)(B) << (NU32)(((NI) 30))));
			W[((NI)(t + ((NI) 1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			D += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(E) >> (NU32)(((NI) 27))) | (NU32)((NU32)(E) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)((NU32)(A ^ B) ^ C)))) + (NU32)(((NU32) 1859775393)));
			A = (NU32)((NU32)((NU32)(A) >> (NU32)(((NI) 2))) | (NU32)((NU32)(A) << (NU32)(((NI) 30))));
			W[((NI)(t + ((NI) 2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			C += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(D) >> (NU32)(((NI) 27))) | (NU32)((NU32)(D) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)((NU32)(E ^ A) ^ B)))) + (NU32)(((NU32) 1859775393)));
			E = (NU32)((NU32)((NU32)(E) >> (NU32)(((NI) 2))) | (NU32)((NU32)(E) << (NU32)(((NI) 30))));
			W[((NI)(t + ((NI) 3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			B += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(C) >> (NU32)(((NI) 27))) | (NU32)((NU32)(C) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)((NU32)(D ^ E) ^ A)))) + (NU32)(((NU32) 1859775393)));
			D = (NU32)((NU32)((NU32)(D) >> (NU32)(((NI) 2))) | (NU32)((NU32)(D) << (NU32)(((NI) 30))));
			W[((NI)(t + ((NI) 4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			A += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(B) >> (NU32)(((NI) 27))) | (NU32)((NU32)(B) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)((NU32)(C ^ D) ^ E)))) + (NU32)(((NU32) 1859775393)));
			C = (NU32)((NU32)((NU32)(C) >> (NU32)(((NI) 2))) | (NU32)((NU32)(C) << (NU32)(((NI) 30))));
			t += ((NI) 5);
		} LA4: ;
	}
	{
		while (1) {
			if (!(t < ((NI) 60))) goto LA6;
			W[((NI)(t + ((NI) 0)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			E += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(A) >> (NU32)(((NI) 27))) | (NU32)((NU32)(A) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)((NU32)(B & C) | (NU32)(D & (NU32)(B | C)))))) + (NU32)(((NU32) IL64(2400959708))));
			B = (NU32)((NU32)((NU32)(B) >> (NU32)(((NI) 2))) | (NU32)((NU32)(B) << (NU32)(((NI) 30))));
			W[((NI)(t + ((NI) 1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			D += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(E) >> (NU32)(((NI) 27))) | (NU32)((NU32)(E) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)((NU32)(A & B) | (NU32)(C & (NU32)(A | B)))))) + (NU32)(((NU32) IL64(2400959708))));
			A = (NU32)((NU32)((NU32)(A) >> (NU32)(((NI) 2))) | (NU32)((NU32)(A) << (NU32)(((NI) 30))));
			W[((NI)(t + ((NI) 2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			C += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(D) >> (NU32)(((NI) 27))) | (NU32)((NU32)(D) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)((NU32)(E & A) | (NU32)(B & (NU32)(E | A)))))) + (NU32)(((NU32) IL64(2400959708))));
			E = (NU32)((NU32)((NU32)(E) >> (NU32)(((NI) 2))) | (NU32)((NU32)(E) << (NU32)(((NI) 30))));
			W[((NI)(t + ((NI) 3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			B += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(C) >> (NU32)(((NI) 27))) | (NU32)((NU32)(C) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)((NU32)(D & E) | (NU32)(A & (NU32)(D | E)))))) + (NU32)(((NU32) IL64(2400959708))));
			D = (NU32)((NU32)((NU32)(D) >> (NU32)(((NI) 2))) | (NU32)((NU32)(D) << (NU32)(((NI) 30))));
			W[((NI)(t + ((NI) 4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			A += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(B) >> (NU32)(((NI) 27))) | (NU32)((NU32)(B) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)((NU32)(C & D) | (NU32)(E & (NU32)(C | D)))))) + (NU32)(((NU32) IL64(2400959708))));
			C = (NU32)((NU32)((NU32)(C) >> (NU32)(((NI) 2))) | (NU32)((NU32)(C) << (NU32)(((NI) 30))));
			t += ((NI) 5);
		} LA6: ;
	}
	{
		while (1) {
			if (!(t < ((NI) 80))) goto LA8;
			W[((NI)(t + ((NI) 0)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			E += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(A) >> (NU32)(((NI) 27))) | (NU32)((NU32)(A) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)((NU32)(B ^ C) ^ D)))) + (NU32)(((NU32) IL64(3395469782))));
			B = (NU32)((NU32)((NU32)(B) >> (NU32)(((NI) 2))) | (NU32)((NU32)(B) << (NU32)(((NI) 30))));
			W[((NI)(t + ((NI) 1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			D += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(E) >> (NU32)(((NI) 27))) | (NU32)((NU32)(E) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)((NU32)(A ^ B) ^ C)))) + (NU32)(((NU32) IL64(3395469782))));
			A = (NU32)((NU32)((NU32)(A) >> (NU32)(((NI) 2))) | (NU32)((NU32)(A) << (NU32)(((NI) 30))));
			W[((NI)(t + ((NI) 2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			C += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(D) >> (NU32)(((NI) 27))) | (NU32)((NU32)(D) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)((NU32)(E ^ A) ^ B)))) + (NU32)(((NU32) IL64(3395469782))));
			E = (NU32)((NU32)((NU32)(E) >> (NU32)(((NI) 2))) | (NU32)((NU32)(E) << (NU32)(((NI) 30))));
			W[((NI)(t + ((NI) 3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			B += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(C) >> (NU32)(((NI) 27))) | (NU32)((NU32)(C) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)((NU32)(D ^ E) ^ A)))) + (NU32)(((NU32) IL64(3395469782))));
			D = (NU32)((NU32)((NU32)(D) >> (NU32)(((NI) 2))) | (NU32)((NU32)(D) << (NU32)(((NI) 30))));
			W[((NI)(t + ((NI) 4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(W[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ W[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) << (NU32)(((NI) 1))));
			A += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(B) >> (NU32)(((NI) 27))) | (NU32)((NU32)(B) << (NU32)(((NI) 5))))) + (NU32)(W[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)((NU32)(C ^ D) ^ E)))) + (NU32)(((NU32) IL64(3395469782))));
			C = (NU32)((NU32)((NU32)(C) >> (NU32)(((NI) 2))) | (NU32)((NU32)(C) << (NU32)(((NI) 30))));
			t += ((NI) 5);
		} LA8: ;
	}
	(*ctx).state[(((NI) 0))- 0] += A;
	(*ctx).state[(((NI) 1))- 0] += B;
	(*ctx).state[(((NI) 2))- 0] += C;
	(*ctx).state[(((NI) 3))- 0] += D;
	(*ctx).state[(((NI) 4))- 0] += E;
}

N_LIB_PRIVATE N_NIMCALL(void, update_Ak1pheui0y0JZQOTLQGB1g)(tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow* ctx, NIM_CHAR* data, NI dataLen_0) {
	NI i;
	NI j;
	NI len;
	i = (NI)((*ctx).count % ((NI) 64));
	j = ((NI) 0);
	len = dataLen_0;
	{
		if (!((NI)(((NI) 64) - i) < len)) goto LA3_;
		copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*ctx).buf[(i)- 0]))), ((void*) ((&data[j]))), ((NI) ((NI)(((NI) 64) - i))));
		len -= (NI)(((NI) 64) - i);
		j += (NI)(((NI) 64) - i);
		transform_vTptXbBZqqjK8k58vCERag(ctx);
		i = ((NI) 0);
	}
	LA3_: ;
	{
		while (1) {
			if (!(((NI) 64) <= len)) goto LA6;
			copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*ctx).buf[(((NI) 0))- 0]))), ((void*) ((&data[j]))), ((NI) 64));
			len -= ((NI) 64);
			j += ((NI) 64);
			transform_vTptXbBZqqjK8k58vCERag(ctx);
		} LA6: ;
	}
	{
		while (1) {
			if (!(((NI) 0) < len)) goto LA8;
			len -= ((NI) 1);
			(*ctx).buf[(i)- 0] = ((NU8) (((NU8)(data[j]))));
			i += ((NI) 1);
			j += ((NI) 1);
			{
				if (!(i == ((NI) 64))) goto LA11_;
				transform_vTptXbBZqqjK8k58vCERag(ctx);
				i = ((NI) 0);
			}
			LA11_: ;
		} LA8: ;
	}
	(*ctx).count += dataLen_0;
}

static N_INLINE(void, bigEndian64_IzdisrH4sYnsItUtxSkomA_2sha1)(void* outp, void* inp) {
	copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(outp, inp, ((NI) 8));
}

N_LIB_PRIVATE N_NIMCALL(void, finalize_HgdH1B8AkZgRKNP3E9cbRFQ)(tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow* ctx, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result) {
	NU64 cnt;
	tyArray_1NlJ8ipZDU6GZ9bDFAyQjfQ tmp;
	nimZeroMem((void*)Result, sizeof(tyArray_YtcvxHNKV4YiecPE9ap1mcA));
	cnt = ((NU64) ((NI)((*ctx).count * ((NI) 8))));
	update_Ak1pheui0y0JZQOTLQGB1g(ctx, ((NimStringDesc*) &TM_SpWH4VocI3fFoiOGE4MzWw_2)->data, (((NimStringDesc*) &TM_SpWH4VocI3fFoiOGE4MzWw_2) ? ((NimStringDesc*) &TM_SpWH4VocI3fFoiOGE4MzWw_2)->Sup.len : 0));
	{
		while (1) {
			if (!!(((NI)((*ctx).count % ((NI) 64)) == ((NI) 56)))) goto LA2;
			update_Ak1pheui0y0JZQOTLQGB1g(ctx, ((NimStringDesc*) &TM_SpWH4VocI3fFoiOGE4MzWw_3)->data, (((NimStringDesc*) &TM_SpWH4VocI3fFoiOGE4MzWw_3) ? ((NimStringDesc*) &TM_SpWH4VocI3fFoiOGE4MzWw_3)->Sup.len : 0));
		} LA2: ;
	}
	nimZeroMem((void*)tmp, sizeof(tyArray_1NlJ8ipZDU6GZ9bDFAyQjfQ));
	bigEndian64_IzdisrH4sYnsItUtxSkomA_2sha1(((void*) ((&tmp[(((NI) 0))- 0]))), ((void*) ((&cnt))));
	update_Ak1pheui0y0JZQOTLQGB1g(ctx, tmp, 8);
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < ((NI) 5))) goto LA5;
				i = i_2;
				bigEndian32_IzdisrH4sYnsItUtxSkomAsha1(((void*) ((&(*ctx).state[(i)- 0]))), ((void*) ((&(*ctx).state[(i)- 0]))));
				i_2 += ((NI) 1);
			} LA5: ;
		}
	}
	copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&Result[(((NI) 0))- 0]))), ((void*) ((&(*ctx).state[(((NI) 0))- 0]))), ((NI) 20));
}

N_LIB_PRIVATE N_NIMCALL(void, secureHash_EXfqX32pW1lnNt34KrEaBg)(NimStringDesc* str, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result) {
	tyObject_Sha1State_cBZm1tX9aK4Wngq1jVLZUow state;
	state = newSha1State_cTC3zLRYstmsfaHT6EKLBQ();
	update_Ak1pheui0y0JZQOTLQGB1g((&state), str->data, (str ? str->Sup.len : 0));
	finalize_HgdH1B8AkZgRKNP3E9cbRFQ((&state), Result);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__9cgKBrLNcxzFztdSZGMv5ZA)(tyArray_YtcvxHNKV4YiecPE9ap1mcA self) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	{
		NU8 v;
		tyArray_YtcvxHNKV4YiecPE9ap1mcA colontmp_;
		NI i;
		v = (NU8)0;
		nimZeroMem((void*)colontmp_, sizeof(tyArray_YtcvxHNKV4YiecPE9ap1mcA));
		nimCopyMem((void*)colontmp_, (NIM_CONST void*)self, sizeof(tyArray_YtcvxHNKV4YiecPE9ap1mcA));
		i = ((NI) 0);
		{
			if (!(((NI) (i)) <= ((NI) 19))) goto LA4_;
			{
				while (1) {
					NimStringDesc* T8_;
					v = colontmp_[(i)- 0];
					T8_ = (NimStringDesc*)0;
					T8_ = nsuToHex(((NI64) (((NI) (v)))), ((NI) 2));
					result = resizeString(result, (T8_ ? T8_->Sup.len : 0) + 0);
appendString(result, T8_);
					{
						if (!(((NI) 19) <= ((NI) (i)))) goto LA11_;
						goto LA6;
					}
					LA11_: ;
					i += ((NI) 1);
				}
			} LA6: ;
		}
		LA4_: ;
	}
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, secureHashFile_4VtK7krOYr71KzoMiYOEjA)(NimStringDesc* filename, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result) {
	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	T1_ = readFile_cisNPM68uOwBvpMG5Dxmkg(filename);
	secureHash_EXfqX32pW1lnNt34KrEaBg(T1_, Result);
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_LIB_PRIVATE N_NIMCALL(void, parseSecureHash_IRCyReeh9aLBu7uN9ck3kgww)(NimStringDesc* hash, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result) {
	nimZeroMem((void*)Result, sizeof(tyArray_YtcvxHNKV4YiecPE9ap1mcA));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* T4_;
				NI T5_;
				if (!(i_2 < ((NI) 20))) goto LA3;
				i = i_2;
				T4_ = (NimStringDesc*)0;
				T4_ = rawNewString(2);
appendChar(T4_, hash->data[(NI)(i * ((NI) 2))]);
appendChar(T4_, hash->data[(NI)((NI)(i * ((NI) 2)) + ((NI) 1))]);
				T5_ = (NI)0;
				T5_ = nsuParseHexInt(T4_);
				Result[(i)- 0] = ((NU8) (T5_));
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq__DLLhcHrMJn0E9b4ztnZ56Zw)(tyArray_YtcvxHNKV4YiecPE9ap1mcA a, tyArray_YtcvxHNKV4YiecPE9ap1mcA b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = eqeq__Ql5vZ51gew5fqwplIYujaw(a, b);
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) (((NI) 2000))))) goto LA9_;
		callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2();
	}
	LA9_: ;
}
