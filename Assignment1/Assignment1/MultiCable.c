#include <stdio.h>

int main() {
	int dan, danNum, rNum, mChoice, reStart;

input:
	printf("원하는 메뉴를 입력하세요.\n1. 구구단 모두 출력 2. 원하는 구구단출력 3. 종료 :");

	scanf("%d", &mChoice);
	while (getchar() != '\n');

	if (mChoice == 1) {
		for (dan = 2; dan < 10; dan++) {
			formula:
			for (danNum = 1; danNum < 10; danNum++) {
				printf("%d X %d = %d ", dan, danNum, rNum = dan * danNum);
				if ((dan == 4 && danNum == 9) || (dan == 7 && danNum == 9)) {
					if (mChoice == 1) printf("\n");
				}
			}
			if (mChoice == 2) break;
		}
	reGameInput:
		printf("\n메뉴로 돌아가기(1) 종료(2):");
		scanf("%d", &reStart);
		while (getchar() != '\n');

		if (reStart == 1) goto input;
		else if (reStart == 2) return 0;
		else {
			printf("알수없는 입력입니다.다시 입력해주세요.");
			goto reGameInput;
		}
	}
	else if (mChoice == 2) {
		printf("원하는 단을 입력하세요:");
		scanf("%d", &dan);
		goto formula;
	}
	else if (mChoice == 3) return 0;
	else {
		printf("일치하는 메뉴가 없습니다.다시 입력해주세요.");
		goto input;
	}
	return 0;
}