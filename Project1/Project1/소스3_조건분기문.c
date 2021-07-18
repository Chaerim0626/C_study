#include <stdio.h>
int main_() {



	//1.if문
	// if (조건) { } else if  { }  else { }
	int age = 13;
	if (age >= 8 && age <= 13)
	{
		printf("초등학생\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생\n");
	}
	else
	{
		printf("초,중,고등학생이 아님\n");
	}



	//2. break, continue 문
	//break문 : 반복문 탈출
	for (int i = 0; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요\n");
			break;
		}
		printf("%d번 학생은 발표 준비를 하세요\n", i);
	}


	//continue문
	for (int j = 0; j <= 30; j++)
	{
		if (j >= 6 && j <= 10)
		{
			if (j == 7)
			{
				printf("%d번학생은 결석입니다.", j);
				continue; //다음 반복으로 넘어감
			}
			printf("%d번 학생은 발표 준비를 하세요\n", j);

		}
	}


	return 0;
}