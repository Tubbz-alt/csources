/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, getenv_123843)(NimStringDesc* key);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
STRING_LITERAL(TMP4338, "NUMBER_OF_PROCESSORS", 20);

N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	NimStringDesc* x;
	result = 0;
	x = getenv_123843(((NimStringDesc*) &TMP4338));
	{
		if (!(((NI) 0) < (x ? x->Sup.len : 0))) goto LA3;
		result = nsuParseInt(x);
	}
	LA3: ;
	{
		if (!(result <= ((NI) 0))) goto LA7;
		result = ((NI) 1);
	}
	LA7: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit)(void) {
}
