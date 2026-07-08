#include "_strlen.h"
#include "_strrot.h"

char* _strrot(char* pStr) {
	char fadr = pStr[0];
	int i = 0, len = _strlen(pStr);
	for (int i = 0; i < len - 1; i++) {
		pStr[i] = pStr[i + 1];
	}
	pStr[len - 1] = fadr;

	return pStr;
}