#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void p(int num); //�Լ� ����
void function_without_return(); //��ȯ���� ���� �Լ�
int function_with_return(); //��ȯ���� �ִ� �Լ�
void function_without_parameter(); //���ް�(�Ķ����)�� ���� �Լ�
void function_with_parameter(int n1, int n2);
int apple(int total, int ate); //��ȯ��, �Ķ���Ͱ� �� �ִ� �Լ�

int getRandomNumber(int level);
void showQuestion(int level, int n1, int n2);
void success();
void fail();

int main_f() {


	int num = 2;
	int ret = function_with_return();
	p(ret); //10���


	function_with_parameter(3, 5);


	//������Ʈ : ��й�ȣ ����
	srand(time(NULL));
	int cnt = 0;
	for (int i = 1; i <= 5; i++)
	{
		int n1 = getRandomNumber(i);
		int n2 = getRandomNumber(i);
		showQuestion(i, n1, n2);

		int ANSWER = -1;
		scanf_s("%d", &ANSWER);
		if (ANSWER == -1)
		{
			printf("���α׷�����\n");
			exit(0); //�ٷ� ���α׷� ����
		}
		else if (ANSWER == n1 * n2)
		{
			success();
			cnt++;
		}
		else
			fail();

	}
	printf("\n ����� 5���� ��й�ȣ �߿� %d���� ������ϴ�.", cnt);
	

	return 0;
}


int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}

void showQuestion(int level, int n1, int n2)
{
	printf("\n\n\n#########%d��° ��й�ȣ##########(���� : -1)\n\n\n", level);
	printf("\n\t %d * %d��? \n", n1, n2);
	printf("\n\n\n#################################\n");
	printf("\n��й�ȣ�� �Է��ϼ��� : ");


}

void success()
{
	printf("\n�����Դϴ�\n");
}

void fail()
{
	printf("\nƲ�Ƚ��ϴ�\n");
}



void p(int num) //�Լ� ����, ��ȯ�� �Լ��̸�(���ް�)�� ����
{
	printf("���ڴ� %d�Դϴ�.\n", num);

}

void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return()
{
	return 10;
}

void function_without_parameter()
{
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_parameter(int n1, int n2)
{
	printf("���ް��� �ִ� �Լ��̸� ���ް��� %d, %d �Դϴ�\n", n1, n2);
}

int apple(int total, int ate)
{
	printf("���ް�, ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return total - ate;
}