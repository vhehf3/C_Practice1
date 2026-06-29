#include <stdio.h>

int main() {
	float fNum, sNum;
	char oSymbol;

	while (1) {
		printf("계산식을 입력해주세요:\n");
		scanf("%f %c %f", &fNum, &oSymbol, &sNum);

		switch (oSymbol) {

		case '+':
			printf("결과값은 %f입니다.\n", fNum + sNum);
			return 0;
		case '-':
			printf("결과값은 %f입니다.\n", fNum - sNum);
			return 0;
		case '*':
			printf("결과값은 %f입니다.\n", fNum * sNum);
			return 0;
		case '/':
			printf("결과값은 %f입니다.\n", fNum / sNum);
			return 0;
		}
		system("cls");
		printf("올바른 계산식을 입력해주세요.\n");
	}

	return 0;
}