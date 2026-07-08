#include <stdio.h>
#include "_strlen.h"
#include "_strcpy.h"
#include "_strcat.h"
#include "_strrot.h"

int main() {
	int len, rotlen;
	char strlen[] = { "Happy" };
	char strcpy1[20] = { "Bad"};
	char strcpy2[] = { "Good"};
	char strcat1[20] = { "Level" };
	char strcat2[] = { "Up" };
	char strrot[] = { "Love" };

	len = _strlen(strlen);
	_strcpy(strcpy1, strcpy2);
	_strcat(strcat1, strcat2);

	printf("%d\n%s\n%s\n", len, strcpy1, strcat1);

	rotlen = _strlen(strrot);

	for (int i = 0; i < rotlen - 1; i++) {
		_strrot(strrot);
		printf("%s\n", strrot);
	}

	return 0;
}