/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode185813 tnode185813;
typedef struct ttype185847 ttype185847;
typedef struct tlineinfo161527 tlineinfo161527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym185843 tsym185843;
typedef struct tident165019 tident165019;
typedef struct tnodeseq185807 tnodeseq185807;
typedef struct tidobj165013 tidobj165013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq185845 ttypeseq185845;
typedef struct tscope185837 tscope185837;
typedef struct TY185943 TY185943;
typedef struct tinstantiation185833 tinstantiation185833;
typedef struct tstrtable185817 tstrtable185817;
typedef struct tsymseq185815 tsymseq185815;
typedef struct tloc185827 tloc185827;
typedef struct trope143007 trope143007;
typedef struct tlib185831 tlib185831;
typedef struct tnodetable185871 tnodetable185871;
typedef struct tnodepairseq185869 tnodepairseq185869;
typedef struct tnodepair185867 tnodepair185867;
typedef struct tcell41290 tcell41290;
typedef struct tcellseq41306 tcellseq41306;
typedef struct tgcheap43216 tgcheap43216;
typedef struct tcellset41302 tcellset41302;
typedef struct tpagedesc41298 tpagedesc41298;
typedef struct tmemregion23610 tmemregion23610;
typedef struct tsmallchunk22838 tsmallchunk22838;
typedef struct tllchunk23604 tllchunk23604;
typedef struct tbigchunk22840 tbigchunk22840;
typedef struct tintset22815 tintset22815;
typedef struct ttrunk22811 ttrunk22811;
typedef struct tavlnode23608 tavlnode23608;
typedef struct tgcstat43214 tgcstat43214;
typedef struct TY185932 TY185932;
typedef struct tlistentry117017 tlistentry117017;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
struct  tlineinfo161527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode185813  {
ttype185847* Typ;
tlineinfo161527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym185843* Sym;
} S4;
struct {tident165019* Ident;
} S5;
struct {tnodeseq185807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY186025[20];
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
struct  tidobj165013  {
  TNimObject Sup;
NI Id;
};
struct  tident165019  {
  tidobj165013 Sup;
NimStringDesc* S;
tident165019* Next;
NI H;
};
struct  tstrtable185817  {
NI Counter;
tsymseq185815* Data;
};
struct  tloc185827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype185847* T;
trope143007* R;
trope143007* Heaproot;
NI A;
};
struct  tsym185843  {
  tidobj165013 Sup;
NU8 Kind;
union {
struct {ttypeseq185845* Typeinstcache;
tscope185837* Typscope;
} S1;
struct {TY185943* Procinstcache;
tscope185837* Scope;
} S2;
struct {TY185943* Usedgenerics;
tstrtable185817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype185847* Typ;
tident165019* Name;
tlineinfo161527 Info;
tsym185843* Owner;
NU32 Flags;
tnode185813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc185827 Loc;
tlib185831* Annex;
tnode185813* Constraint;
};
struct  tnodepair185867  {
NI H;
tnode185813* Key;
NI Val;
};
struct  tnodetable185871  {
NI Counter;
tnodepairseq185869* Data;
};
struct  tcell41290  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41306  {
NI Len;
NI Cap;
tcell41290** D;
};
struct  tcellset41302  {
NI Counter;
NI Max;
tpagedesc41298* Head;
tpagedesc41298** Data;
};
typedef tsmallchunk22838* TY23622[512];
typedef ttrunk22811* ttrunkbuckets22813[256];
struct  tintset22815  {
ttrunkbuckets22813 Data;
};
struct  tmemregion23610  {
NI Minlargeobj;
NI Maxlargeobj;
TY23622 Freesmallchunks;
tllchunk23604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk22840* Freechunkslist;
tintset22815 Chunkstarts;
tavlnode23608* Root;
tavlnode23608* Deleted;
tavlnode23608* Last;
tavlnode23608* Freeavlnodes;
};
struct  tgcstat43214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41306 Zct;
tcellseq41306 Decstack;
tcellset41302 Cycleroots;
tcellseq41306 Tempstack;
NI Recgclock;
tmemregion23610 Region;
tgcstat43214 Stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  ttype185847  {
  tidobj165013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq185845* Sons;
tnode185813* N;
tsym185843* Destructor;
tsym185843* Owner;
tsym185843* Sym;
NI64 Size;
NI Align;
tloc185827 Loc;
};
struct  tscope185837  {
NI Depthlevel;
tstrtable185817 Symbols;
tnodeseq185807* Usingsyms;
tscope185837* Parent;
};
struct  tinstantiation185833  {
tsym185843* Sym;
ttypeseq185845* Concretetypes;
TY185932* Usedby;
};
struct  trope143007  {
  TNimObject Sup;
trope143007* Left;
trope143007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry117017  {
  TNimObject Sup;
tlistentry117017* Prev;
tlistentry117017* Next;
};
struct  tlib185831  {
  tlistentry117017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope143007* Name;
tnode185813* Path;
};
typedef NI TY22818[16];
struct  tpagedesc41298  {
tpagedesc41298* Next;
NI Key;
TY22818 Bits;
};
struct  tbasechunk22836  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk22838  {
  tbasechunk22836 Sup;
tsmallchunk22838* Next;
tsmallchunk22838* Prev;
tfreecell22828* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23604  {
NI Size;
NI Acc;
tllchunk23604* Next;
};
struct  tbigchunk22840  {
  tbasechunk22836 Sup;
tbigchunk22840* Next;
tbigchunk22840* Prev;
NI Align;
NF Data;
};
struct  ttrunk22811  {
ttrunk22811* Next;
NI Key;
TY22818 Bits;
};
typedef tavlnode23608* TY23614[2];
struct  tavlnode23608  {
TY23614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
struct tnodeseq185807 {
  TGenericSeq Sup;
  tnode185813* data[SEQ_DECL_SIZE];
};
struct ttypeseq185845 {
  TGenericSeq Sup;
  ttype185847* data[SEQ_DECL_SIZE];
};
struct TY185943 {
  TGenericSeq Sup;
  tinstantiation185833* data[SEQ_DECL_SIZE];
};
struct tsymseq185815 {
  TGenericSeq Sup;
  tsym185843* data[SEQ_DECL_SIZE];
};
struct tnodepairseq185869 {
  TGenericSeq Sup;
  tnodepair185867 data[SEQ_DECL_SIZE];
};
struct TY185932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_245022)(tnode185813* n);
static N_INLINE(NI, HEX21HEX26_118015)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, hash_118827)(NimStringDesc* x);
static N_INLINE(NI, sonslen_186191)(tnode185813* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, treesequivalent_245223)(tnode185813* a, tnode185813* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_226151)(ttype185847* a, ttype185847* b, NU8 flags);
N_NIMCALL(NI, nodetablerawget_245475)(tnodetable185871 t, NI k, tnode185813* key);
static N_INLINE(NI, nexttry_194192)(NI h, NI maxhash);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, nodetableget_245503)(tnodetable185871 t, tnode185813* key);
N_NIMCALL(void, nodetablerawinsert_245514)(tnodepairseq185869** data, NI k, tnode185813* key, NI val);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
N_NIMCALL(void, nodetableput_245622)(tnodetable185871* t, tnode185813* key, NI val);
N_NIMCALL(NIM_BOOL, mustrehash_194187)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, nodetabletestorset_245928)(tnodetable185871* t, tnode185813* key, NI val);
static NIM_CONST TY186025 TMP3192 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3193, "ident", 5);
static NIM_CONST TY186025 TMP3194 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3195, "sym", 3);
static NIM_CONST TY186025 TMP3196 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3197, "intVal", 6);
static NIM_CONST TY186025 TMP3198 = {
0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3199, "floatVal", 8);
static NIM_CONST TY186025 TMP3200 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3201, "strVal", 6);
static NIM_CONST TY186025 TMP3202 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3203, "sons", 4);
STRING_LITERAL(TMP3208, "data[h].key == nil ", 19);
STRING_LITERAL(TMP3209, "t.data[index].key != nil ", 25);
extern TFrame* frameptr_13038;
extern tgcheap43216 gch_43244;
extern TNimType NTI185869; /* TNodePairSeq */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NI, HEX21HEX26_118015)(NI h, NI val) {
	NI result;
	nimfr("!&", "hashes.nim")
	result = 0;
	nimln(24, "hashes.nim");
	nimln(24, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)(val));
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(10))));
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(6)));
	popFrame();
	return result;
}

static N_INLINE(NI, sonslen_186191)(tnode185813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP3202[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3203));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP3202[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3203));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

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

N_NIMCALL(NI, hashtree_245022)(tnode185813* n) {
	NI result;
	nimfr("hashTree", "treetab.nim")
	result = 0;
	nimln(16, "treetab.nim");
	{
		nimln(16, "treetab.nim");
		if (!(n == NIM_NIL)) goto LA3;
		nimln(16, "treetab.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(17, "treetab.nim");
	nimln(17, "treetab.nim");
	result = ((NI) ((*n).Kind));
	nimln(18, "treetab.nim");
	switch ((*n).Kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}
	break;
	case ((NU8) 2):
	{
		nimln(22, "treetab.nim");
		if (!(((TMP3192[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3193));
		result = HEX21HEX26_118015(result, (*(*n).kindU.S5.Ident).H);
	}
	break;
	case ((NU8) 3):
	{
		nimln(24, "treetab.nim");
		if (!(((TMP3194[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3195));
		result = HEX21HEX26_118015(result, (*(*(*n).kindU.S4.Sym).Name).H);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		nimln(26, "treetab.nim");
		{
			NIM_BOOL LOC11;
			nimln(26, "treetab.nim");
			LOC11 = 0;
			nimln(26, "treetab.nim");
			if (!(((TMP3196[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3197));
			LOC11 = ((-2147483647 -1) <= (*n).kindU.S1.Intval);
			if (!(LOC11)) goto LA12;
			nimln(26, "treetab.nim");
			if (!(((TMP3196[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3197));
			LOC11 = ((*n).kindU.S1.Intval <= 2147483647);
			LA12: ;
			if (!LOC11) goto LA13;
			nimln(27, "treetab.nim");
			if (!(((TMP3196[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3197));
			result = HEX21HEX26_118015(result, ((NI)chckRange64((*n).kindU.S1.Intval, (-2147483647 -1), 2147483647)));
		}
		LA13: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		nimln(29, "treetab.nim");
		{
			NIM_BOOL LOC18;
			nimln(29, "treetab.nim");
			LOC18 = 0;
			nimln(29, "treetab.nim");
			if (!(((TMP3198[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3199));
			LOC18 = (-1.0000000000000000e+006 <= (*n).kindU.S2.Floatval);
			if (!(LOC18)) goto LA19;
			nimln(29, "treetab.nim");
			if (!(((TMP3198[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3199));
			LOC18 = ((*n).kindU.S2.Floatval <= 1.0000000000000000e+006);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(30, "treetab.nim");
			nimln(30, "treetab.nim");
			if (!(((TMP3198[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3199));
			result = HEX21HEX26_118015(result, float64ToInt32((*n).kindU.S2.Floatval));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		NI LOC23;
		nimln(32, "treetab.nim");
		nimln(32, "treetab.nim");
		if (!(((TMP3200[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3201));
		LOC23 = 0;
		LOC23 = hash_118827((*n).kindU.S3.Strval);
		result = HEX21HEX26_118015(result, LOC23);
	}
	break;
	default:
	{
		NI i_245197;
		NI HEX3Atmp_245216;
		NI LOC25;
		NI TMP3204;
		NI res_245218;
		i_245197 = 0;
		HEX3Atmp_245216 = 0;
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		LOC25 = 0;
		LOC25 = sonslen_186191(n);
		TMP3204 = subInt(LOC25, 1);
		HEX3Atmp_245216 = (NI32)(TMP3204);
		nimln(1450, "system.nim");
		res_245218 = 0;
		nimln(1451, "system.nim");
		while (1) {
			NI LOC27;
			nimln(1451, "system.nim");
			if (!(res_245218 <= HEX3Atmp_245216)) goto LA26;
			nimln(1450, "system.nim");
			i_245197 = res_245218;
			nimln(35, "treetab.nim");
			nimln(35, "treetab.nim");
			if (((TMP3202[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3203));
			if ((NU)(i_245197) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC27 = 0;
			LOC27 = hashtree_245022((*n).kindU.S6.Sons->data[i_245197]);
			result = HEX21HEX26_118015(result, LOC27);
			nimln(1453, "system.nim");
			res_245218 = addInt(res_245218, 1);
		} LA26: ;
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, treesequivalent_245223)(tnode185813* a, tnode185813* b) {
	NIM_BOOL result;
	nimfr("treesEquivalent", "treetab.nim")
	result = 0;
	nimln(38, "treetab.nim");
	{
		nimln(38, "treetab.nim");
		if (!(a == b)) goto LA3;
		nimln(39, "treetab.nim");
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		nimln(40, "treetab.nim");
		LOC6 = 0;
		nimln(40, "treetab.nim");
		LOC7 = 0;
		nimln(40, "treetab.nim");
		nimln(40, "treetab.nim");
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		nimln(40, "treetab.nim");
		nimln(40, "treetab.nim");
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		nimln(40, "treetab.nim");
		LOC6 = ((*a).Kind == (*b).Kind);
		LA9: ;
		if (!LOC6) goto LA10;
		nimln(41, "treetab.nim");
		switch ((*a).Kind) {
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			nimln(42, "treetab.nim");
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 3):
		{
			nimln(43, "treetab.nim");
			nimln(43, "treetab.nim");
			if (!(((TMP3194[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3195));
			if (!(((TMP3194[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3195));
			result = ((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			nimln(44, "treetab.nim");
			nimln(44, "treetab.nim");
			if (!(((TMP3192[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3193));
			if (!(((TMP3192[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3193));
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			nimln(45, "treetab.nim");
			nimln(45, "treetab.nim");
			if (!(((TMP3196[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3197));
			if (!(((TMP3196[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3197));
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			nimln(46, "treetab.nim");
			nimln(46, "treetab.nim");
			if (!(((TMP3198[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3199));
			if (!(((TMP3198[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3199));
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			nimln(47, "treetab.nim");
			nimln(47, "treetab.nim");
			if (!(((TMP3200[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3201));
			if (!(((TMP3200[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3201));
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		break;
		default:
		{
			nimln(49, "treetab.nim");
			{
				NI LOC21;
				NI LOC22;
				NI i_245439;
				NI HEX3Atmp_245468;
				NI LOC25;
				NI TMP3205;
				NI res_245470;
				nimln(49, "treetab.nim");
				nimln(49, "treetab.nim");
				LOC21 = 0;
				LOC21 = sonslen_186191(a);
				nimln(49, "treetab.nim");
				LOC22 = 0;
				LOC22 = sonslen_186191(b);
				if (!(LOC21 == LOC22)) goto LA23;
				i_245439 = 0;
				HEX3Atmp_245468 = 0;
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				LOC25 = 0;
				LOC25 = sonslen_186191(a);
				TMP3205 = subInt(LOC25, 1);
				HEX3Atmp_245468 = (NI32)(TMP3205);
				nimln(1450, "system.nim");
				res_245470 = 0;
				nimln(1451, "system.nim");
				while (1) {
					nimln(1451, "system.nim");
					if (!(res_245470 <= HEX3Atmp_245468)) goto LA26;
					nimln(1450, "system.nim");
					i_245439 = res_245470;
					nimln(51, "treetab.nim");
					{
						NIM_BOOL LOC29;
						nimln(51, "treetab.nim");
						nimln(51, "treetab.nim");
						if (((TMP3202[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3203));
						if ((NU)(i_245439) >= (NU)((*a).kindU.S6.Sons->Sup.len)) raiseIndexError();
						if (((TMP3202[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3203));
						if ((NU)(i_245439) >= (NU)((*b).kindU.S6.Sons->Sup.len)) raiseIndexError();
						LOC29 = 0;
						LOC29 = treesequivalent_245223((*a).kindU.S6.Sons->data[i_245439], (*b).kindU.S6.Sons->data[i_245439]);
						if (!!(LOC29)) goto LA30;
						nimln(51, "treetab.nim");
						goto BeforeRet;
					}
					LA30: ;
					nimln(1453, "system.nim");
					res_245470 = addInt(res_245470, 1);
				} LA26: ;
				nimln(52, "treetab.nim");
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		nimln(53, "treetab.nim");
		{
			if (!result) goto LA34;
			nimln(53, "treetab.nim");
			result = sametypeornil_226151((*a).Typ, (*b).Typ, 0);
		}
		LA34: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, nexttry_194192)(NI h, NI maxhash) {
	NI result;
	NI TMP3206;
	NI TMP3207;
	nimfr("nextTry", "astalgo.nim")
	result = 0;
	nimln(465, "astalgo.nim");
	nimln(465, "astalgo.nim");
	nimln(465, "astalgo.nim");
	nimln(465, "astalgo.nim");
	TMP3206 = mulInt(5, h);
	TMP3207 = addInt((NI32)(TMP3206), 1);
	result = (NI)((NI32)(TMP3207) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetablerawget_245475)(tnodetable185871 t, NI k, tnode185813* key) {
	NI result;
	NI h;
	nimfr("nodeTableRawGet", "treetab.nim")
	result = 0;
	nimln(56, "treetab.nim");
	nimln(56, "treetab.nim");
	nimln(56, "treetab.nim");
	h = (NI)(k & (t.Data->Sup.len-1));
	nimln(57, "treetab.nim");
	while (1) {
		nimln(57, "treetab.nim");
		nimln(57, "treetab.nim");
		if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA1;
		nimln(58, "treetab.nim");
		{
			NIM_BOOL LOC4;
			nimln(58, "treetab.nim");
			LOC4 = 0;
			nimln(58, "treetab.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC4 = (t.Data->data[h].H == k);
			if (!(LOC4)) goto LA5;
			nimln(58, "treetab.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC4 = treesequivalent_245223(t.Data->data[h].Key, key);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(59, "treetab.nim");
			nimln(59, "treetab.nim");
			result = h;
			goto BeforeRet;
		}
		LA6: ;
		nimln(60, "treetab.nim");
		nimln(60, "treetab.nim");
		h = nexttry_194192(h, (t.Data->Sup.len-1));
	} LA1: ;
	nimln(61, "treetab.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, nodetableget_245503)(tnodetable185871 t, tnode185813* key) {
	NI result;
	NI index;
	NI LOC1;
	nimfr("nodeTableGet", "treetab.nim")
	result = 0;
	nimln(64, "treetab.nim");
	nimln(64, "treetab.nim");
	LOC1 = 0;
	LOC1 = hashtree_245022(key);
	index = nodetablerawget_245475(t, LOC1, key);
	nimln(65, "treetab.nim");
	{
		nimln(65, "treetab.nim");
		if (!(0 <= index)) goto LA4;
		nimln(65, "treetab.nim");
		if ((NU)(index) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		result = t.Data->data[index].Val;
	}
	goto LA2;
	LA4: ;
	{
		nimln(66, "treetab.nim");
		result = (-2147483647 -1);
	}
	LA2: ;
	popFrame();
	return result;
}

static N_INLINE(tcell41290*, usrtocell_44643)(void* usr) {
	tcell41290* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41290*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41290))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46202)(tcell41290* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44618(&gch_43244.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41290* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_44643(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41290* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_44643((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46202(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, nodetablerawinsert_245514)(tnodepairseq185869** data, NI k, tnode185813* key, NI val) {
	NI h;
	nimfr("nodeTableRawInsert", "treetab.nim")
	nimln(70, "treetab.nim");
	nimln(70, "treetab.nim");
	nimln(70, "treetab.nim");
	h = (NI)(k & ((*data)->Sup.len-1));
	nimln(71, "treetab.nim");
	while (1) {
		nimln(71, "treetab.nim");
		nimln(71, "treetab.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA1;
		nimln(71, "treetab.nim");
		nimln(71, "treetab.nim");
		h = nexttry_194192(h, ((*data)->Sup.len-1));
	} LA1: ;
	nimln(72, "treetab.nim");
	{
		nimln(72, "treetab.nim");
		nimln(72, "treetab.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA4;
		nimln(72, "treetab.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP3208));
	}
	LA4: ;
	nimln(73, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].H = k;
	nimln(74, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRefNoCycle((void**) &(*data)->data[h].Key, key);
	nimln(75, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Val = val;
	popFrame();
}

N_NIMCALL(void, nodetableput_245622)(tnodetable185871* t, tnode185813* key, NI val) {
	tnodepairseq185869* n;
	NI k;
	NI index;
	nimfr("nodeTablePut", "treetab.nim")
	n = 0;
	nimln(79, "treetab.nim");
	k = hashtree_245022(key);
	nimln(80, "treetab.nim");
	index = nodetablerawget_245475((*t), k, key);
	nimln(81, "treetab.nim");
	{
		nimln(81, "treetab.nim");
		if (!(0 <= index)) goto LA3;
		nimln(82, "treetab.nim");
		{
			nimln(82, "treetab.nim");
			nimln(82, "treetab.nim");
			nimln(82, "treetab.nim");
			if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).Data->data[index].Key == NIM_NIL)))) goto LA7;
			nimln(82, "treetab.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP3209));
		}
		LA7: ;
		nimln(83, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		(*t).Data->data[index].Val = val;
	}
	goto LA1;
	LA3: ;
	{
		nimln(85, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP3210;
			NI i_245868;
			NI HEX3Atmp_245921;
			NI res_245923;
			tnodepairseq185869* LOC20;
			nimln(85, "treetab.nim");
			nimln(85, "treetab.nim");
			LOC12 = 0;
			LOC12 = mustrehash_194187((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			TMP3210 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq185869*) newSeq((&NTI185869), (NI32)(TMP3210));
			i_245868 = 0;
			HEX3Atmp_245921 = 0;
			nimln(87, "treetab.nim");
			nimln(87, "treetab.nim");
			HEX3Atmp_245921 = ((*t).Data->Sup.len-1);
			nimln(1450, "system.nim");
			res_245923 = 0;
			nimln(1451, "system.nim");
			while (1) {
				nimln(1451, "system.nim");
				if (!(res_245923 <= HEX3Atmp_245921)) goto LA15;
				nimln(1450, "system.nim");
				i_245868 = res_245923;
				nimln(88, "treetab.nim");
				{
					nimln(88, "treetab.nim");
					nimln(88, "treetab.nim");
					if ((NU)(i_245868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_245868].Key == NIM_NIL))) goto LA18;
					nimln(89, "treetab.nim");
					if ((NU)(i_245868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_245868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_245868) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_245514(&n, (*t).Data->data[i_245868].H, (*t).Data->data[i_245868].Key, (*t).Data->data[i_245868].Val);
				}
				LA18: ;
				nimln(1453, "system.nim");
				res_245923 = addInt(res_245923, 1);
			} LA15: ;
			nimln(90, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}
		LA13: ;
		nimln(91, "treetab.nim");
		nodetablerawinsert_245514(&(*t).Data, k, key, val);
		nimln(92, "treetab.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(NI, nodetabletestorset_245928)(tnodetable185871* t, tnode185813* key, NI val) {
	NI result;
	tnodepairseq185869* n;
	NI k;
	NI index;
	nimfr("nodeTableTestOrSet", "treetab.nim")
	result = 0;
	n = 0;
	nimln(96, "treetab.nim");
	k = hashtree_245022(key);
	nimln(97, "treetab.nim");
	index = nodetablerawget_245475((*t), k, key);
	nimln(98, "treetab.nim");
	{
		nimln(98, "treetab.nim");
		if (!(0 <= index)) goto LA3;
		nimln(99, "treetab.nim");
		{
			nimln(99, "treetab.nim");
			nimln(99, "treetab.nim");
			nimln(99, "treetab.nim");
			if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).Data->data[index].Key == NIM_NIL)))) goto LA7;
			nimln(99, "treetab.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP3209));
		}
		LA7: ;
		nimln(100, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		result = (*t).Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		nimln(102, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP3211;
			NI i_246068;
			NI HEX3Atmp_246121;
			NI res_246123;
			tnodepairseq185869* LOC20;
			nimln(102, "treetab.nim");
			nimln(102, "treetab.nim");
			LOC12 = 0;
			LOC12 = mustrehash_194187((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			TMP3211 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq185869*) newSeq((&NTI185869), (NI32)(TMP3211));
			i_246068 = 0;
			HEX3Atmp_246121 = 0;
			nimln(104, "treetab.nim");
			nimln(104, "treetab.nim");
			HEX3Atmp_246121 = ((*t).Data->Sup.len-1);
			nimln(1450, "system.nim");
			res_246123 = 0;
			nimln(1451, "system.nim");
			while (1) {
				nimln(1451, "system.nim");
				if (!(res_246123 <= HEX3Atmp_246121)) goto LA15;
				nimln(1450, "system.nim");
				i_246068 = res_246123;
				nimln(105, "treetab.nim");
				{
					nimln(105, "treetab.nim");
					nimln(105, "treetab.nim");
					if ((NU)(i_246068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_246068].Key == NIM_NIL))) goto LA18;
					nimln(106, "treetab.nim");
					if ((NU)(i_246068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_246068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_246068) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_245514(&n, (*t).Data->data[i_246068].H, (*t).Data->data[i_246068].Key, (*t).Data->data[i_246068].Val);
				}
				LA18: ;
				nimln(1453, "system.nim");
				res_246123 = addInt(res_246123, 1);
			} LA15: ;
			nimln(107, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}
		LA13: ;
		nimln(108, "treetab.nim");
		nodetablerawinsert_245514(&(*t).Data, k, key, val);
		nimln(109, "treetab.nim");
		result = val;
		nimln(110, "treetab.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}
	LA1: ;
	popFrame();
	return result;
}
N_NOINLINE(void, treetabInit)(void) {
	nimfr("treetab", "treetab.nim")
	popFrame();
}

N_NOINLINE(void, treetabDatInit)(void) {
}
