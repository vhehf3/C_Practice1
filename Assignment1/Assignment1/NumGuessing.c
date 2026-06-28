#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int num, gNum, score = 0, reGame = 0;

	num = rand() % 10 + 1;

	for (int count = 2; count >= 0; count--) {
		printf("0~10사이의 숫자 입력:");
		scanf("%d", &gNum);

		if (num == gNum) {
			score += 10;
			printf("난수는 %d\n입력한 수는 %d\n맞췄습니다.\n점수:%d\n남은 시도가 초기화 되었습니다.\n계속 하시겠습니까?\n(1)예 (2)아니오\n", num, gNum, score);
			scanf("%d", &reGame);
			if (reGame == 1) {
				count = 3;
				num = rand() % 10 + 1;
			}
			else if (reGame == 2) {
				return 0;
			}
		}
		else if (num > gNum) {
			if (count != 0) {
				printf("입력한 수는 %d\n맞추지 못했습니다.\n%d보다 큰수입니다.\n점수:%d\n남은 시도는 %d입니다.\n계속 하시겠습니까?\n(1)예 (2)아니오\n", gNum, gNum, score, count);
				scanf("%d", &reGame);
				if (reGame == 2) {
					return 0;
				}
			}
			else if (count == 0) goto quitGame;
		}
		else if (num < gNum) {
			if (count != 0) {
				printf("입력한 수는 %d\n맞추지 못했습니다.\n%d보다 작은수입니다.\n점수:%d\n남은 시도는 %d입니다.\n계속 하시겠습니까?\n(1)예 (2)아니오\n", gNum, gNum, score, count);
				scanf("%d", &reGame);
				if (reGame == 2) {
					return 0;
				}
			}
			else if (count == 0) goto quitGame;
		}
	}
	quitGame:
	printf("난수는 %d\n입력한 수는 %d\n맞추지 못했습니다.\n시도 횟수가 모두 소진되었습니다.\n총점수:%d\n게임이 종료되었습니다.\n", num, gNum, score);
	return 0;
}