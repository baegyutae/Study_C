#include <stdio.h>
int main(void)
{
	// ������ ������ ���� ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// �Ǽ��� ������ ���� ����
	//printf("1\n");
	//printf("2\n"); // 2�� �������� ����Ƿ� �ּ� ó����
	//printf("3\n");

	// �Ǽ��� ������ ���� ����
	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	//const int YEAR = 2000; // ���
	//printf("�¾ �⵵ : %d\n", YEAR);
	//YEAR = 2001;

	// printf
	// ����
	//int add = 3 + 7; // 10
	//printf("%d x %d = %d\n", 30, 79, 30 * 79);

	// scanf
	// Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);

	return 0;
}