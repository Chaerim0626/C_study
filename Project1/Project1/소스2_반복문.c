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
	int j = 1;
	do {
		printf("Hello World %d\n", j++);
	} while (j <= 10);


	//4. 2�� �ݺ���
	for (int k = 1; k <= 3; k++)
	{
		printf("ù ��° �ݺ��� : %d\n", k);

		for (int l = 1; l <= 5; l++)
		{
			printf("	�� ��° �ݺ��� : %d\n", l);

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

	return 0;
}