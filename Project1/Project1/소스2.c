#include <stdio.h>
int main(void)
{
	//�ݺ��� : for, while, do while

	//1. for(����; ����; ����) {���� ����}
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}


	//2. while(����) {���� ����}
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
	}


	//3. do {} while (����)





	return 0;
}