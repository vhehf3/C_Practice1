#include <stdio.h>

int main() {
	float fNum, sNum;
	char oSymbol;

	while (1) {
		printf("계산식을 입력해주세요:\n");
		scanf("%f %c %f", &fNum, &oSymbol, &sNum);

		if (oSymbol == '+') {
			printf("결과값은 %f입니다.\n", fNum + sNum);
			break;
		}
		else if (oSymbol == '-') {
			printf("결과값은 %f입니다.\n", fNum - sNum);
			break;
		}
		else if (oSymbol == '*') {
			printf("결과값은 %f입니다.\n", fNum * sNum);
			break;
		}
		else if (oSymbol == '/') {
			printf("결과값은 %f입니다.\n", fNum / sNum);
			break;
		}
		else {
			system("cls");
			printf("올바른 계산식을 입력해주세요.\n");
		}
	}

	return 0;
}