#include <stdio.h>
#include "Display.h"

int dan;

int main() {
	printf("원하는 단을 입력하세요: \n");
	scanf("%d", &dan);

	int danResult = Display();

	printf("%d단의 마지막 전 계산식의 값은 %d", dan, danResult);

	return 0;
}