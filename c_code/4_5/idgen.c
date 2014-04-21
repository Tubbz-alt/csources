/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj166013 tidobj166013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY128224[1];
typedef N_NIMCALL_PTR(void, TY2289) (void* p, NI op);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2289 marker;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj166013  {
  TNimObject Sup;
NI Id;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(NI, getid_185402)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, backendid_185423)(void);
static N_INLINE(void, setid_185444)(NI id);
N_NIMCALL(void, idsynchronizationpoint_185452)(NI idrange);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, togid_185457)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_137001)(NimStringDesc* f, NIM_BOOL createsubdir);
N_NIMCALL(void, savemaxids_185463)(NimStringDesc* project);
N_NIMCALL(FILE*, open_10217)(NimStringDesc* filename, NU8 mode, NI bufsize);
static N_INLINE(void, writeln_137205)(FILE* f_137209, NimStringDesc** x_137213, NI x_137213Len0);
N_NIMCALL(void, write_10463)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(void, loadmaxids_185501)(NimStringDesc* project);
N_NIMCALL(NIM_BOOL, open_10203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_10487)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
STRING_LITERAL(TMP1965, "nimrod.gid", 10);
STRING_LITERAL(TMP1966, "\012", 1);
NI gfrontendid_185007;
NI gbackendid_185008;
extern TFrame* frameptr_13038;

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NI, getid_185402)(void) {
	NI result;
	nimfr("getID", "idgen.nim")
	result = 0;
	nimln(30, "idgen.nim");
	result = gfrontendid_185007;
	nimln(31, "idgen.nim");
	gfrontendid_185007 = addInt(gfrontendid_185007, 1);
	popFrame();
	return result;
}

static N_INLINE(NI, backendid_185423)(void) {
	NI result;
	nimfr("backendId", "idgen.nim")
	result = 0;
	nimln(34, "idgen.nim");
	result = gbackendid_185008;
	nimln(35, "idgen.nim");
	gbackendid_185008 = addInt(gbackendid_185008, 1);
	popFrame();
	return result;
}

static N_INLINE(void, setid_185444)(NI id) {
	NI TMP1960;
	nimfr("setId", "idgen.nim")
	nimln(38, "idgen.nim");
	nimln(38, "idgen.nim");
	nimln(38, "idgen.nim");
	TMP1960 = addInt(id, 1);
	gfrontendid_185007 = ((gfrontendid_185007 >= (NI32)(TMP1960)) ? gfrontendid_185007 : (NI32)(TMP1960));
	popFrame();
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (-2147483647 -1));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI32)(a / b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, idsynchronizationpoint_185452)(NI idrange) {
	NI TMP1961;
	NI TMP1962;
	NI TMP1963;
	NI TMP1964;
	nimfr("idSynchronizationPoint", "idgen.nim")
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	TMP1961 = divInt(gfrontendid_185007, idrange);
	TMP1962 = addInt((NI32)(TMP1961), 1);
	TMP1963 = mulInt((NI32)(TMP1962), idrange);
	TMP1964 = addInt((NI32)(TMP1963), 1);
	gfrontendid_185007 = (NI32)(TMP1964);
	popFrame();
}

N_NIMCALL(NimStringDesc*, togid_185457)(NimStringDesc* f) {
	NimStringDesc* result;
	nimfr("toGid", "idgen.nim")
	result = 0;
	nimln(47, "idgen.nim");
	result = completegeneratedfilepath_137001(((NimStringDesc*) &TMP1965), NIM_TRUE);
	popFrame();
	return result;
}

static N_INLINE(void, writeln_137205)(FILE* f_137209, NimStringDesc** x_137213, NI x_137213Len0) {
	NimStringDesc* i_137226;
	NI i_137232;
	nimfr("writeln", "sysio.nim")
	i_137226 = 0;
	nimln(1530, "system.nim");
	i_137232 = 0;
	nimln(1531, "system.nim");
	while (1) {
		nimln(1531, "system.nim");
		nimln(1531, "system.nim");
		if (!(i_137232 < x_137213Len0)) goto LA1;
		nimln(1532, "system.nim");
		i_137226 = x_137213[i_137232];
		nimln(171, "sysio.nim");
		write_10463(f_137209, i_137226);
		nimln(1533, "system.nim");
		i_137232 += 1;
	} LA1: ;
	nimln(172, "sysio.nim");
	write_10463(f_137209, ((NimStringDesc*) &TMP1966));
	popFrame();
}

N_NIMCALL(void, savemaxids_185463)(NimStringDesc* project) {
	FILE* f;
	NimStringDesc* LOC1;
	TY128224 LOC2;
	TY128224 LOC3;
	nimfr("saveMaxIds", "idgen.nim")
	nimln(50, "idgen.nim");
	nimln(50, "idgen.nim");
	LOC1 = 0;
	LOC1 = togid_185457(project);
	f = open_10217(LOC1, ((NU8) 1), -1);
	nimln(51, "idgen.nim");
	memset((void*)LOC2, 0, sizeof(LOC2));
	nimln(51, "idgen.nim");
	nimln(51, "idgen.nim");
	LOC2[0] = nimIntToStr(gfrontendid_185007);
	writeln_137205(f, LOC2, 1);
	nimln(52, "idgen.nim");
	memset((void*)LOC3, 0, sizeof(LOC3));
	nimln(52, "idgen.nim");
	nimln(52, "idgen.nim");
	LOC3[0] = nimIntToStr(gbackendid_185008);
	writeln_137205(f, LOC3, 1);
	nimln(53, "idgen.nim");
	fclose(f);
	popFrame();
}

N_NIMCALL(void, loadmaxids_185501)(NimStringDesc* project) {
	FILE* f;
	nimfr("loadMaxIds", "idgen.nim")
	f = 0;
	nimln(57, "idgen.nim");
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line;
		nimln(57, "idgen.nim");
		nimln(57, "idgen.nim");
		LOC3 = 0;
		LOC3 = togid_185457(project);
		LOC4 = 0;
		LOC4 = open_10203(&f, LOC3, ((NU8) 0), -1);
		if (!LOC4) goto LA5;
		nimln(58, "idgen.nim");
		nimln(58, "idgen.nim");
		line = rawNewString(20);
		nimln(59, "idgen.nim");
		{
			NIM_BOOL LOC9;
			NI frontendid;
			nimln(59, "idgen.nim");
			LOC9 = 0;
			LOC9 = readline_10487(f, &line);
			if (!LOC9) goto LA10;
			nimln(60, "idgen.nim");
			frontendid = nsuParseInt(line);
			nimln(61, "idgen.nim");
			{
				NIM_BOOL LOC14;
				NI backendid;
				nimln(61, "idgen.nim");
				LOC14 = 0;
				LOC14 = readline_10487(f, &line);
				if (!LOC14) goto LA15;
				nimln(62, "idgen.nim");
				backendid = nsuParseInt(line);
				nimln(63, "idgen.nim");
				nimln(63, "idgen.nim");
				gfrontendid_185007 = ((gfrontendid_185007 >= frontendid) ? gfrontendid_185007 : frontendid);
				nimln(64, "idgen.nim");
				nimln(64, "idgen.nim");
				gbackendid_185008 = ((gbackendid_185008 >= backendid) ? gbackendid_185008 : backendid);
			}
			LA15: ;
		}
		LA10: ;
		nimln(65, "idgen.nim");
		fclose(f);
	}
	LA5: ;
	popFrame();
}

N_NIMCALL(void, registerid_185201)(tidobj166013* id) {
	nimfr("registerID", "idgen.nim")
	popFrame();
}
N_NOINLINE(void, idgenInit)(void) {
	nimfr("idgen", "idgen.nim")
	popFrame();
}

N_NOINLINE(void, idgenDatInit)(void) {
}
