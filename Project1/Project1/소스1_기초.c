#include <stdio.h>
int main_d(void)
{


	//1.정수형 변수 int
	//int age = 12; //나이는 변수
	//printf("%d\n", age);
	//age = 13; //나이가 13으로 바뀜
	//printf("%d\n", age); //값이 바뀌는 것이 변수


	//2. 주석 (2가지 방법)
	/* 내용~ */
	// 내용
	

	//3. 실수형 변수 double, float
	float f = 46.5;
	printf("%.1f\n", f); //소수점 첫째자리 까지 표시
	double d = 4.428;
	printf("%.2lf\n", d);


	//4. 상수 : 값이 변하지 않는 수, 한번 정의하면 끝, 보통 대문자로 정의
	const int YEAR = 2000;
	printf("태어난 년도 : %d\n", YEAR);


	//5. printf 함수 : 내용 출력
	int add = 3 + 7; //10
	printf("3+7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7); //각자 값이 %d에 들어감


	//6. scanf : 키보드 입력을 받아서 저장
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);


	//7. 문자(한 글자), 문자열(여러 글자)
	char c = 'A';
	printf("%c\n", c);

	char str[256]; //배열
	scanf_s("%s", str, sizeof(str)); //문자열은 &없이 변수명만 기재
	printf("%s\n", str);


	//프로젝트 : 조서 작성
	// 이름, 나이, 몸무게, 키, 범죄명 물어보기
	char name[256];
	int age;
	float weight;
	double height;
	char what[256];

	printf("이름이 뭐에요?");
	scanf_s("%s", name, sizeof(name));
	printf("몇살이에요?");
	scanf_s("%d", &age);
	printf("몸무게는 몇 kg이에요?");
	scanf_s("%f", &weight);
	printf("키는 몇 cm에요?");
	scanf_s("%lf", &height);
	printf("무슨 범죄를 저질렀어요?");
	scanf_s("%s", what, sizeof(what));

	//조서 내용 출력
	printf("\n\n-------범죄자 정보 -------\n\n");
	printf(" 이름		: %s\n", name);
	printf(" 나이		: %d\n", age);
	printf(" 몸무게		: %f\n", weight);
	printf(" 키			: %lf\n", height);
	printf("범죄명		: %s\n", what);


	return 0;
}