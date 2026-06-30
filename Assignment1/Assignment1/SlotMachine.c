#include <stdio.h>
#include <time.h>
#include <windows.h>

int main() {
	int linput = 1, score = 50, slot1 = 0, slot2 = 0, slot3 = 0, stop1 = 30, stop2 = 15;

	srand(time(NULL));
	
	while (score > 0) {
		if (slot1 == 0 && slot2 == 0 && slot3 == 0) {

			system("cls");

			printf("%d %d %d\n", slot1, slot2, slot3);
			if (linput == 0) printf("레버를 당기지 않아서 그대로 점수가 부여됬습니다.\n");
			if (score != 50) printf("트리플 점수100점");
		}
			printf("\n\n\n점수:%d\n\n", score);
			printf("레버를 당길 시간을 입력해주세요:\n");

		scanf("%d", &linput);

		system("cls");

		if (linput != 0 && linput < 40) linput = 40; //당기는 시간 최소값 보정

			while (linput > 1) {
					if (linput > stop1) slot1 = rand() % 10;
					if (linput > stop2) slot2 = rand() % 10;
					slot3 = rand() % 10;
					printf("\r%d %d %d", slot1, slot2, slot3);
					Sleep(50);
					linput--;
			}

			if (linput == 0) {
				printf("%d %d %d\n", slot1, slot2, slot3);
				printf("레버를 당기지 않아서 그대로 점수가 부여됬습니다.");
			}

			if (slot1 == 7 && slot2 == 7 && slot3 == 7) {
				score += 1000;
				printf("\n777잿팟! 점수1000점\n");
			}
			else if (slot1 == slot2 && slot2 == slot3) {
				score += 100;
				printf("\n트리플 점수100점\n");
			}
			else if (slot1 == slot2 || slot1 == slot3 || slot2 == slot3) {
				score += 10;
				printf("\n더블 점수10점\n");
			}
			else {
				score -= 1;
				printf("\n꽝 점수-1\n");
			}
	}
	printf("\nGAMEOVER\n");
	return 0;
}