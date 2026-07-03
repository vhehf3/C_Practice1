#include <stdio.h>
#include "Display.h"

extern int dan;

int Display() {
	int result, value;
	for (int i = 1; i < 10; i++) {
		if (i == 8) result = dan * i;
		value = dan * i;
		printf("%d X %d = %d\n", dan, i, value);
	}
	return result;
}