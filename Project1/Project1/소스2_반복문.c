#include <stdio.h>
int main_loop(void)
{
	//반복문 : for, while, do while

	//1. for(선언; 조건; 증감) {실행 내용}
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}


	//2. while(조건) {실행 내용}
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
	}


	//3. do {} while (조건)
	int j = 1;
	do {
		printf("Hello World %d\n", j++);
	} while (j <= 10);


	//4. 2중 반복문
	for (int k = 1; k <= 3; k++)
	{
		printf("첫 번째 반복문 : %d\n", k);

		for (int l = 1; l <= 5; l++)
		{
			printf("	두 번째 반복문 : %d\n", l);

		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 4; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}



	//피라미드 쌓기 프로젝트
	int floor;
	printf("몇 층?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2*i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}



	return 0;
}