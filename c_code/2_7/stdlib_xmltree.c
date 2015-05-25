/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
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
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, addescaped_332039)(NimStringDesc** result, NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TMP4795, "&lt;", 4);
STRING_LITERAL(TMP4796, "&gt;", 4);
STRING_LITERAL(TMP4797, "&amp;", 5);
STRING_LITERAL(TMP4798, "&quot;", 6);
STRING_LITERAL(TMP4799, "&#x27;", 6);
STRING_LITERAL(TMP4800, "&#x2F;", 6);

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, addescaped_332039)(NimStringDesc** result, NimStringDesc* s) {
	{
		NIM_CHAR c_332044;
		NI i_332048;
		NI L_332050;
		c_332044 = 0;
		i_332048 = ((NI) 0);
		L_332050 = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i_332048 < L_332050)) goto LA3;
				c_332044 = s->data[i_332048];
				switch (((NU8)(c_332044))) {
				case 60:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4795));
				}
				break;
				case 62:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4796));
				}
				break;
				case 38:
				{
					(*result) = resizeString((*result), 5);
appendString((*result), ((NimStringDesc*) &TMP4797));
				}
				break;
				case 34:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4798));
				}
				break;
				case 39:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4799));
				}
				break;
				case 47:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4800));
				}
				break;
				default:
				{
					(*result) = addChar((*result), c_332044);
				}
				break;
				}
				i_332048 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NimStringDesc*, escape_332066)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString(((NI) ((s ? s->Sup.len : 0))));
	addescaped_332039((&result), s);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeDatInit)(void) {
}
