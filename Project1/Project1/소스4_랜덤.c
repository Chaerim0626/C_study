#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {

	

	//1.������ = ����
	
	int num = rand() % 3 + 1; //1~3������ ���� �� 

	printf("���� �ʱ�ȭ ���� ..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand() % 10);
	}

	srand(time(NULL)); //���� �ʱ�ȭ
	printf("���� �ʱ�ȭ ���� ..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand() % 10);
	}


	int i = rand() % 3;
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("��\n");
	}


	//2.switch�� (���� �ڵ带 switch������ �ٲٱ�)
	int j = rand() % 3;
	switch (j)
	{
	case 0: printf("����"); break; //break������ switch�� Ż��
	case 1: printf("����"); break;
	case 2: printf("��"); break;
	default: printf("�����"); break;
	}


	return 0;
}