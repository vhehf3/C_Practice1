#include <stdio.h>
#include <time.h>
#include <windows.h>

int main() {
	int linput, score = 50, slot1, slot2, slot3, stop1 = 30, stop2 = 15;

	srand(time(NULL));
	
	while (score > 0) {
		printf("레버를 당길 시간을 입력해주세요:\n");
		scanf("%d", &linput);

		if (linput < 40) linput = 40;

		system("cls");

		if (linput == 0) {
			printf("%d %d %d\n", slot1, slot2, slot3);
			printf("레버를 당기지 않고 그대로 점수가 부여됬습니다.\n");
			if (slot1 == 7 && slot2 == 7 && slot3 == 7) {
				score += 1000;
				printf("1000점 획득\n현재 점수:%d\n", score);
			}
			else if (slot1 == slot2 && slot2 == slot3) {
				score += 100;
				printf("100점 획득\n현재 점수:%d\n", score);
			}
			else if (slot1 == slot2 || slot1 == slot3 || slot2 == slot3) {
				score += 10;
				printf("10점 획득\n현재 점수:%d\n", score);
			}
			else if (slot1 != slot2 && slot2 != slot3 && slot1 != slot3) {
				score -= 1;
				printf("1점 감소\n현재 점수:%d\n", score);
			}
		}
		else {
			while (linput > 0) {
				if (linput > stop1) slot1 = rand() % 10;
				if (linput > stop2) slot2 = rand() % 10;
				slot3 = rand() % 10;
				printf("\r%d %d %d", slot1, slot2, slot3);
				Sleep(50);
				linput--;
			}
			if (slot1 == 7 && slot2 == 7 && slot3 == 7) {
				score += 1000;
				printf("\n777잿팟! 점수1000점\n현재 점수:%d\n", score);
			}
			else if (slot1 == slot2 && slot2 == slot3) {
				score += 100;
				printf("\n트리플 점수100점\n현재 점수:%d\n", score);
			}
			else if (slot1 == slot2 || slot1 == slot3 || slot2 == slot3) {
				score += 10;
				printf("\n더블 점수10점\n현재 점수:%d\n", score);
			}
			else if (slot1 != slot2 && slot2 != slot3 && slot1 != slot3) {
				score -= 1;
				printf("\n꽝 점수-1\n현재 점수: %d\n", score);
			}
		}
	}
	printf("\nGAMEOVER\n");
	return 0;
}