#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void p(int num); //함수 선언
void function_without_return(); //반환값이 없는 함수
int function_with_return(); //반환값이 있는 함수
void function_without_parameter(); //전달값(파라미터)이 없는 함수
void function_with_parameter(int n1, int n2);
int apple(int total, int ate); //반환값, 파라미터가 다 있는 함수

int getRandomNumber(int level);
void showQuestion(int level, int n1, int n2);
void success();
void fail();

int main_f() {


	int num = 2;
	int ret = function_with_return();
	p(ret); //10출력


	function_with_parameter(3, 5);


	//프로젝트 : 비밀번호 게임
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
			printf("프로그램종료\n");
			exit(0); //바로 프로그램 종료
		}
		else if (ANSWER == n1 * n2)
		{
			success();
			cnt++;
		}
		else
			fail();

	}
	printf("\n 당신은 5개의 비밀번호 중에 %d개를 맞췄습니다.", cnt);
	

	return 0;
}


int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}

void showQuestion(int level, int n1, int n2)
{
	printf("\n\n\n#########%d번째 비밀번호##########(종료 : -1)\n\n\n", level);
	printf("\n\t %d * %d는? \n", n1, n2);
	printf("\n\n\n#################################\n");
	printf("\n비밀번호를 입력하세요 : ");


}

void success()
{
	printf("\n정답입니다\n");
}

void fail()
{
	printf("\n틀렸습니다\n");
}



void p(int num) //함수 정의, 반환형 함수이름(전달값)의 형태
{
	printf("숫자는 %d입니다.\n", num);

}

void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return()
{
	return 10;
}

void function_without_parameter()
{
	printf("전달값이 없는 함수입니다.\n");
}

void function_with_parameter(int n1, int n2)
{
	printf("전달값이 있는 함수이며 전달값은 %d, %d 입니다\n", n1, n2);
}

int apple(int total, int ate)
{
	printf("전달값, 반환값이 있는 함수입니다.\n");
	return total - ate;
}