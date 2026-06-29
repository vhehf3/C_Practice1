#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void main()
{
	int  nRandom;
	int ch;

	printf(">> 리턴키를 누르면 난수가 발생합니다 ( 0 ~ 7 ) << ");

	ch = getch();
	if (ch == '\r') {



		printf("\n");

		srand((unsigned)time(NULL));

		nRandom = rand() % 8;

		switch (nRandom)
		{
		case 0:	printf("난수는 0입니다 \n");
			break;
		case 1:
			printf("난수는 1입니다 \n");
			break;
		case 2:
			printf("난수는 2입니다 \n");
			break;
		case 3:
			printf("난수는 3입니다 \n");
			break;
		case 4:
		case 5:
			printf("난수는 4 ~ 5입니다 \n");
			break;
		default:
			printf("난수는 6 ~ 7입니다 \n");
		}
	}
}