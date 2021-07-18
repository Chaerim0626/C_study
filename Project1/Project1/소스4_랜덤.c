#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {

	

	//1.랜덤수 = 난수
	
	int num = rand() % 3 + 1; //1~3사이의 랜덤 수 

	printf("난수 초기화 이전 ..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand() % 10);
	}

	srand(time(NULL)); //난수 초기화
	printf("난수 초기화 이후 ..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand() % 10);
	}


	int i = rand() % 3;
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("모름\n");
	}


	//2.switch문 (위의 코드를 switch문으로 바꾸기)
	int j = rand() % 3;
	switch (j)
	{
	case 0: printf("가위"); break; //break문으로 switch문 탈출
	case 1: printf("바위"); break;
	case 2: printf("보"); break;
	default: printf("몰라요"); break;
	}


	return 0;
}