/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
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
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg;
typedef struct RootObj RootObj;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ;
typedef struct tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
struct tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg {
  RootObj Sup;
NI bufpos;
NimStringDesc* buf;
tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* input;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
tySet_tyChar_nmiMWKVIe46vacnhAFrQvw refillChars;
};
typedef N_NIMCALL_PTR(void, tyProc_JQrsH08b4uPTH9cyFPlVOZg) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_9bmhFrLahRsL2hltfRDVtlQ) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(void, tyProc_3svSoGIUJIsHkaBL7q4DAQ) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc_xflqkf2D1uVClg70czEDHA) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NI, tyProc_c9c0f59ak4YGQ6neEym8LPKw) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc** buffer, tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA slice);
typedef N_NIMCALL_PTR(NI, tyProc_2VVzVL9bOnKhj1eZKkf9cEuA) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc_ki6p1QyfOkJLQJ9aw5NI0AQ) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ {
  RootObj Sup;
tyProc_JQrsH08b4uPTH9cyFPlVOZg closeImpl;
tyProc_9bmhFrLahRsL2hltfRDVtlQ atEndImpl;
tyProc_3svSoGIUJIsHkaBL7q4DAQ setPositionImpl;
tyProc_xflqkf2D1uVClg70czEDHA getPositionImpl;
tyProc_c9c0f59ak4YGQ6neEym8LPKw readDataStrImpl;
tyProc_2VVzVL9bOnKhj1eZKkf9cEuA readDataImpl;
tyProc_2VVzVL9bOnKhj1eZKkf9cEuA peekDataImpl;
tyProc_ki6p1QyfOkJLQJ9aw5NI0AQ writeDataImpl;
tyProc_JQrsH08b4uPTH9cyFPlVOZg flushImpl;
};
struct tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer_m9bpQUVeRkyuyv4zAGVgY9bw)(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg* L);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, moveMem_M04YC71iJg1N7gBF3HZTng_2system)(void* dest, void* source, NI size);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(NI, readDataStr_78VQwN48e7jIIL2Q9bINIFw)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc** buffer, tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA slice);
static N_INLINE(tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA, dotdot__BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom_m9bpQUVeRkyuyv4zAGVgY9bw_2)(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg* L);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer_sLQC1Z9cokufE3lZEw9b42Cw_2)(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, close_y1KA3B0U09bKtU09am9a9avRYQ)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
extern TNimType NTI_ytyiCJqK439aF9cIibuRVpAg_;
TNimType NTI_MAw8rJZtJ279bVV3TWMtXSg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_1G0jiQbe7KwD5ADza5AZaw_;
extern TNimType NTI_HDqWPvEAxZK51ZcfaeQEdg_;
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_3, "/Users/andreasrumpf-mac/projects/nim/lib/pure/lexbase.nim(135, "
"9) `bufLen > 0` ", 79);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_4, "/Users/andreasrumpf-mac/projects/nim/lib/pure/lexbase.nim(136, "
"9) `input != nil` ", 81);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_7, "/Users/andreasrumpf-mac/projects/nim/lib/pure/lexbase.nim(51, 9"
") `L.sentinel + 1 <= L.buf.len` ", 95);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_10, "/Users/andreasrumpf-mac/projects/nim/lib/pure/lexbase.nim(53, 9"
") `toCopy >= 0` ", 79);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_18, "/Users/andreasrumpf-mac/projects/nim/lib/pure/lexbase.nim(74, 1"
"3) `s < L.buf.len` ", 82);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_27, "/Users/andreasrumpf-mac/projects/nim/lib/pure/lexbase.nim(106, "
"9) `L.buf[pos] == \'\\c\'` ", 87);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_29, "/Users/andreasrumpf-mac/projects/nim/lib/pure/lexbase.nim(93, 9"
") `pos <= L.sentinel` ", 85);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_32, "/Users/andreasrumpf-mac/projects/nim/lib/pure/lexbase.nim(117, "
"9) `L.buf[pos] == \'\\n\'` ", 87);

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, moveMem_M04YC71iJg1N7gBF3HZTng_2system)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest, source, ((size_t) (size)));
}

static N_INLINE(void, nimSetMem_JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_JE6t4x7Z3v2iVz27Nx0MRAmemory(p, ((int) 0), size);
}

static N_INLINE(tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA, dotdot__BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b) {
	tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA));
	chckNil((void*)(&result));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, fillBuffer_m9bpQUVeRkyuyv4zAGVgY9bw)(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg* L) {
	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_8;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_9;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_12;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_13;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_14;
	tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA T13_;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_15;
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	{
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_6;
		TM_k6p5NxDJat9aTyZxfZjCDJQ_6 = addInt((*L).sentinel, ((NI) 1));
		if (!!(((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_6) <= ((*L).buf ? (*L).buf->Sup.len : 0)))) goto LA3_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_7));
	}
	LA3_: ;
	TM_k6p5NxDJat9aTyZxfZjCDJQ_8 = addInt((*L).sentinel, ((NI) 1));
	TM_k6p5NxDJat9aTyZxfZjCDJQ_9 = subInt(((*L).buf ? (*L).buf->Sup.len : 0), (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_8));
	toCopy = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_9);
	{
		if (!!((((NI) 0) <= toCopy))) goto LA7_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_10));
	}
	LA7_: ;
	{
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_11;
		if (!(((NI) 0) < toCopy)) goto LA11_;
		if ((NU)(((NI) 0)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(((NI) 0),((*L).buf ? (*L).buf->Sup.len : 0)-1);
		TM_k6p5NxDJat9aTyZxfZjCDJQ_11 = addInt((*L).sentinel, ((NI) 1));
		if ((NU)((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_11)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_11),((*L).buf ? (*L).buf->Sup.len : 0)-1);
		moveMem_M04YC71iJg1N7gBF3HZTng_2system(((void*) ((&(*L).buf->data[((NI) 0)]))), ((void*) ((&(*L).buf->data[(NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_11)]))), ((NI)chckRange(toCopy, ((NI) 0), ((NI) 2147483647))));
	}
	LA11_: ;
	TM_k6p5NxDJat9aTyZxfZjCDJQ_12 = addInt(toCopy, (*L).sentinel);
	TM_k6p5NxDJat9aTyZxfZjCDJQ_13 = addInt((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_12), ((NI) 1));
	TM_k6p5NxDJat9aTyZxfZjCDJQ_14 = subInt((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_13), ((NI) 1));
	T13_ = dotdot__BokNSDrKN1xmV1nA01G9brAsystem(toCopy, (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_14));
	charsRead = readDataStr_78VQwN48e7jIIL2Q9bINIFw((*L).input, (&(*L).buf), T13_);
	TM_k6p5NxDJat9aTyZxfZjCDJQ_15 = addInt(toCopy, charsRead);
	s = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_15);
	{
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_16;
		TM_k6p5NxDJat9aTyZxfZjCDJQ_16 = addInt((*L).sentinel, ((NI) 1));
		if (!(charsRead < (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_16))) goto LA16_;
		if ((NU)(s) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(s,((*L).buf ? (*L).buf->Sup.len : 0)-1);
		(*L).buf->data[s] = 0;
		(*L).sentinel = s;
	}
	goto LA14_;
	LA16_: ;
	{
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_17;
		TM_k6p5NxDJat9aTyZxfZjCDJQ_17 = subInt(s, ((NI) 1));
		s = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_17);
		{
			while (1) {
				{
					if (!!((s < ((*L).buf ? (*L).buf->Sup.len : 0)))) goto LA23_;
					failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_18));
				}
				LA23_: ;
				{
					while (1) {
						NIM_BOOL T27_;
						NI TM_k6p5NxDJat9aTyZxfZjCDJQ_19;
						T27_ = (NIM_BOOL)0;
						T27_ = (((NI) 0) <= s);
						if (!(T27_)) goto LA28_;
						if ((NU)(s) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(s,((*L).buf ? (*L).buf->Sup.len : 0)-1);
						T27_ = !((((*L).refillChars[(NU)(((NU8)((*L).buf->data[s])))>>3] &(1U<<((NU)(((NU8)((*L).buf->data[s])))&7U)))!=0));
						LA28_: ;
						if (!T27_) goto LA26;
						TM_k6p5NxDJat9aTyZxfZjCDJQ_19 = subInt(s, ((NI) 1));
						s = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_19);
					} LA26: ;
				}
				{
					if (!(((NI) 0) <= s)) goto LA31_;
					(*L).sentinel = s;
					goto LA19;
				}
				goto LA29_;
				LA31_: ;
				{
					NI TM_k6p5NxDJat9aTyZxfZjCDJQ_20;
					NI TM_k6p5NxDJat9aTyZxfZjCDJQ_21;
					tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA T34_;
					NI TM_k6p5NxDJat9aTyZxfZjCDJQ_24;
					oldBufLen = ((*L).buf ? (*L).buf->Sup.len : 0);
					TM_k6p5NxDJat9aTyZxfZjCDJQ_20 = mulInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 2));
					unsureAsgnRef((void**) (&(*L).buf), setLengthStr((*L).buf, ((NI)chckRange((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_20), ((NI) 0), ((NI) 2147483647)))));
					TM_k6p5NxDJat9aTyZxfZjCDJQ_21 = subInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 1));
					T34_ = dotdot__BokNSDrKN1xmV1nA01G9brAsystem(oldBufLen, (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_21));
					charsRead = readDataStr_78VQwN48e7jIIL2Q9bINIFw((*L).input, (&(*L).buf), T34_);
					{
						NI TM_k6p5NxDJat9aTyZxfZjCDJQ_22;
						NI TM_k6p5NxDJat9aTyZxfZjCDJQ_23;
						if (!(charsRead < oldBufLen)) goto LA37_;
						TM_k6p5NxDJat9aTyZxfZjCDJQ_22 = addInt(oldBufLen, charsRead);
						if ((NU)((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_22)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_22),((*L).buf ? (*L).buf->Sup.len : 0)-1);
						(*L).buf->data[(NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_22)] = 0;
						TM_k6p5NxDJat9aTyZxfZjCDJQ_23 = addInt(oldBufLen, charsRead);
						(*L).sentinel = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_23);
						goto LA19;
					}
					LA37_: ;
					TM_k6p5NxDJat9aTyZxfZjCDJQ_24 = subInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 1));
					s = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_24);
				}
				LA29_: ;
			}
		} LA19: ;
	}
	LA14_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom_m9bpQUVeRkyuyv4zAGVgY9bw_2)(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg* L) {
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_25;
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_26;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		if ((NU)(((NI) 0)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(((NI) 0),((*L).buf ? (*L).buf->Sup.len : 0)-1);
		T4_ = ((NU8)((*L).buf->data[((NI) 0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		if ((NU)(((NI) 1)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(((NI) 1),((*L).buf ? (*L).buf->Sup.len : 0)-1);
		T4_ = ((NU8)((*L).buf->data[((NI) 1)]) == (NU8)(187));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		if ((NU)(((NI) 2)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(((NI) 2),((*L).buf ? (*L).buf->Sup.len : 0)-1);
		T3_ = ((NU8)((*L).buf->data[((NI) 2)]) == (NU8)(191));
		LA6_: ;
		if (!T3_) goto LA7_;
		TM_k6p5NxDJat9aTyZxfZjCDJQ_25 = addInt((*L).bufpos, ((NI) 3));
		(*L).bufpos = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_25);
		TM_k6p5NxDJat9aTyZxfZjCDJQ_26 = addInt((*L).lineStart, ((NI) 3));
		(*L).lineStart = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_26);
	}
	LA7_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, open_P89aGatd6bDNJ0Ak5E9cQgWw)(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg* L, tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* input, NI bufLen, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw refillChars) {
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_5;
	{
		if (!!((((NI) 0) < bufLen))) goto LA3_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_3));
	}
	LA3_: ;
	{
		if (!!(!((input == NIM_NIL)))) goto LA7_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_4));
	}
	LA7_: ;
	unsureAsgnRef((void**) (&(*L).input), input);
	(*L).bufpos = ((NI) 0);
	(*L).offsetBase = ((NI) 0);
	nimCopyMem((void*)(*L).refillChars, (NIM_CONST void*)refillChars, 32);
	unsureAsgnRef((void**) (&(*L).buf), mnewString(((NI)chckRange(bufLen, ((NI) 0), ((NI) 2147483647)))));
	TM_k6p5NxDJat9aTyZxfZjCDJQ_5 = subInt(bufLen, ((NI) 1));
	(*L).sentinel = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_5);
	(*L).lineStart = ((NI) 0);
	(*L).lineNumber = ((NI) 1);
	fillBuffer_m9bpQUVeRkyuyv4zAGVgY9bw(L);
	skipUtf8Bom_m9bpQUVeRkyuyv4zAGVgY9bw_2(L);
}

N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer_sLQC1Z9cokufE3lZEw9b42Cw_2)(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	result = (NI)0;
	{
		if (!!((pos <= (*L).sentinel))) goto LA3_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_29));
	}
	LA3_: ;
	{
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_30;
		if (!(pos < (*L).sentinel)) goto LA7_;
		TM_k6p5NxDJat9aTyZxfZjCDJQ_30 = addInt(pos, ((NI) 1));
		result = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_30);
	}
	goto LA5_;
	LA7_: ;
	{
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_31;
		fillBuffer_m9bpQUVeRkyuyv4zAGVgY9bw(L);
		TM_k6p5NxDJat9aTyZxfZjCDJQ_31 = addInt((*L).offsetBase, pos);
		(*L).offsetBase = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_31);
		(*L).bufpos = ((NI) 0);
		result = ((NI) 0);
	}
	LA5_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, handleCR_sLQC1Z9cokufE3lZEw9b42Cw)(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_28;
	result = (NI)0;
	{
		if ((NU)(pos) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(pos,((*L).buf ? (*L).buf->Sup.len : 0)-1);
		if (!!(((NU8)((*L).buf->data[pos]) == (NU8)(13)))) goto LA3_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_27));
	}
	LA3_: ;
	TM_k6p5NxDJat9aTyZxfZjCDJQ_28 = addInt((*L).lineNumber, ((NI) 1));
	(*L).lineNumber = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_28);
	result = fillBaseLexer_sLQC1Z9cokufE3lZEw9b42Cw_2(L, pos);
	{
		if ((NU)(result) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(result,((*L).buf ? (*L).buf->Sup.len : 0)-1);
		if (!((NU8)((*L).buf->data[result]) == (NU8)(10))) goto LA7_;
		result = fillBaseLexer_sLQC1Z9cokufE3lZEw9b42Cw_2(L, result);
	}
	LA7_: ;
	(*L).lineStart = result;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, handleLF_sLQC1Z9cokufE3lZEw9b42Cw_3)(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_33;
	result = (NI)0;
	{
		if ((NU)(pos) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)) raiseIndexError2(pos,((*L).buf ? (*L).buf->Sup.len : 0)-1);
		if (!!(((NU8)((*L).buf->data[pos]) == (NU8)(10)))) goto LA3_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_32));
	}
	LA3_: ;
	TM_k6p5NxDJat9aTyZxfZjCDJQ_33 = addInt((*L).lineNumber, ((NI) 1));
	(*L).lineNumber = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_33);
	result = fillBaseLexer_sLQC1Z9cokufE3lZEw9b42Cw_2(L, pos);
	(*L).lineStart = result;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, getColNumber_KUMaHICF9bUPO7tt6hrBs3g)(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_34;
	result = (NI)0;
	TM_k6p5NxDJat9aTyZxfZjCDJQ_34 = subInt(pos, (*L).lineStart);
	if ((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_34) == (-2147483647 -1)) raiseOverflow();
	result = ((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_34) > 0? ((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_34)) : -((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_34)));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, close_m9bpQUVeRkyuyv4zAGVgY9bw_3)(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg* L) {
	close_y1KA3B0U09bKtU09am9a9avRYQ((*L).input);
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_lexbaseDatInit000)(void) {
static TNimNode* TM_k6p5NxDJat9aTyZxfZjCDJQ_2_8[8];
static TNimNode TM_k6p5NxDJat9aTyZxfZjCDJQ_0[9];
NTI_MAw8rJZtJ279bVV3TWMtXSg_.size = sizeof(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg);
NTI_MAw8rJZtJ279bVV3TWMtXSg_.kind = 17;
NTI_MAw8rJZtJ279bVV3TWMtXSg_.base = (&NTI_ytyiCJqK439aF9cIibuRVpAg_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_2_8[0] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1].offset = offsetof(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg, bufpos);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1].name = "bufpos";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2_8[1] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2].offset = offsetof(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg, buf);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2].name = "buf";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2_8[2] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3].offset = offsetof(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg, input);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3].typ = (&NTI_1G0jiQbe7KwD5ADza5AZaw_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3].name = "input";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2_8[3] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4].offset = offsetof(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg, lineNumber);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4].name = "lineNumber";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2_8[4] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5].offset = offsetof(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg, sentinel);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5].name = "sentinel";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2_8[5] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6].offset = offsetof(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg, lineStart);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6].name = "lineStart";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2_8[6] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7].offset = offsetof(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg, offsetBase);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7].name = "offsetBase";
TM_k6p5NxDJat9aTyZxfZjCDJQ_2_8[7] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8].offset = offsetof(tyObject_BaseLexer_MAw8rJZtJ279bVV3TWMtXSg, refillChars);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8].typ = (&NTI_HDqWPvEAxZK51ZcfaeQEdg_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8].name = "refillChars";
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[0].len = 8; TM_k6p5NxDJat9aTyZxfZjCDJQ_0[0].kind = 2; TM_k6p5NxDJat9aTyZxfZjCDJQ_0[0].sons = &TM_k6p5NxDJat9aTyZxfZjCDJQ_2_8[0];
NTI_MAw8rJZtJ279bVV3TWMtXSg_.node = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[0];
}
