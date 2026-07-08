#include "_strlen.h"

int _strlen(char* pStr) {
	int len = 0;

	while (*pStr++) {
		len++;
	}
	return len;
}