#include <stdio.h>
int main_() {



	//1.if��
	// if (����) { } else if  { }  else { }
	int age = 13;
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л�\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л�\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("����л�\n");
	}
	else
	{
		printf("��,��,����л��� �ƴ�\n");
	}



	//2. break, continue ��
	//break�� : �ݺ��� Ż��
	for (int i = 0; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ���� ������\n");
			break;
		}
		printf("%d�� �л��� ��ǥ �غ� �ϼ���\n", i);
	}


	//continue��
	for (int j = 0; j <= 30; j++)
	{
		if (j >= 6 && j <= 10)
		{
			if (j == 7)
			{
				printf("%d���л��� �Ἦ�Դϴ�.", j);
				continue; //���� �ݺ����� �Ѿ
			}
			printf("%d�� �л��� ��ǥ �غ� �ϼ���\n", j);

		}
	}


	return 0;
}