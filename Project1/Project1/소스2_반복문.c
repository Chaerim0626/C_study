#include <stdio.h>
int main(void)
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





	return 0;
}