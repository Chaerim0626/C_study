#include <stdio.h>
int main_d(void)
{


	//1.������ ���� int
	//int age = 12; //���̴� ����
	//printf("%d\n", age);
	//age = 13; //���̰� 13���� �ٲ�
	//printf("%d\n", age); //���� �ٲ�� ���� ����


	//2. �ּ� (2���� ���)
	/* ����~ */
	// ����
	

	//3. �Ǽ��� ���� double, float
	float f = 46.5;
	printf("%.1f\n", f); //�Ҽ��� ù°�ڸ� ���� ǥ��
	double d = 4.428;
	printf("%.2lf\n", d);


	//4. ��� : ���� ������ �ʴ� ��, �ѹ� �����ϸ� ��, ���� �빮�ڷ� ����
	const int YEAR = 2000;
	printf("�¾ �⵵ : %d\n", YEAR);


	//5. printf �Լ� : ���� ���
	int add = 3 + 7; //10
	printf("3+7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7); //���� ���� %d�� ��


	//6. scanf : Ű���� �Է��� �޾Ƽ� ����
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);


	//7. ����(�� ����), ���ڿ�(���� ����)
	char c = 'A';
	printf("%c\n", c);

	char str[256]; //�迭
	scanf_s("%s", str, sizeof(str)); //���ڿ��� &���� ������ ����
	printf("%s\n", str);


	//������Ʈ : ���� �ۼ�
	// �̸�, ����, ������, Ű, ���˸� �����
	char name[256];
	int age;
	float weight;
	double height;
	char what[256];

	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));
	printf("����̿���?");
	scanf_s("%d", &age);
	printf("�����Դ� �� kg�̿���?");
	scanf_s("%f", &weight);
	printf("Ű�� �� cm����?");
	scanf_s("%lf", &height);
	printf("���� ���˸� ���������?");
	scanf_s("%s", what, sizeof(what));

	//���� ���� ���
	printf("\n\n-------������ ���� -------\n\n");
	printf(" �̸�		: %s\n", name);
	printf(" ����		: %d\n", age);
	printf(" ������		: %f\n", weight);
	printf(" Ű			: %lf\n", height);
	printf("���˸�		: %s\n", what);


	return 0;
}