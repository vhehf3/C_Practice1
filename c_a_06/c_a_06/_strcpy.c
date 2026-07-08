#include "_strcpy.h"

void _strcpy(char* pDst, const char* pSrc) {
	while ((*pDst++ = *pSrc++));
	return pDst;
}