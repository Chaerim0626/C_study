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



	//������Ʈ : UP and DOWN
	srand(time(NULL));
	int n = rand() % 100 + 1;
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1)
	{
		printf("���� ��ȸ : %d��\n", chance--);
		printf("���ڸ� ���纸���� (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN \n\n");
		}

		else if (answer < num)
		{
			printf("UP \n\n");
		}
		else
		{
			printf("�����Դϴ�.\n");
			break;
		}

		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̳׿�. �����߽��ϴ�.\n");
			break;
		}
	}

	return 0;
}