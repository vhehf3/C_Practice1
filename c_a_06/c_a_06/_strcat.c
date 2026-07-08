#include "_strcat.h"

char* _strcat(char* pDst, const char* pSrc) {
	char* adr = pDst;
	while (*pDst != '\0') {
		pDst++;
	}
	while ((*pDst++ = *pSrc++));

	pDst = adr;

	return pDst;
}