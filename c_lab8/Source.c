#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

void t0()
{
	int k;
	char c1, c2;
	printf("����� ������ ��� �������� ������ �����? ");
	scanf("%c", &c1);
	fseek(stdin, 0, SEEK_END); //������� ����� �����
	printf("� ����� ������ ��� ��� ��������? ");
	scanf("%c", &c2);
	printf("������� �������� �� ������? ");
	scanf("%d", &k);

	for (int i = 0; i < k / 2; i++)
	{
		printf("%c!", c1);
	}

	for (int i = k / 2; i < k; i++)
	{
		printf("%c!", c2);
	}
}

void t1()
{
	int m, n;
	int s = 0;
	printf("������� ������� ������� ����� ������ ");
	scanf("%d %d", &m, &n);

	int k = 0;
	for (int i = m; i <= n; i++)
	{
		s += i;
		k++;
		printf("��������� %d ���\n", k);
	}

	printf("����� = %d", s);

}

void t2()
{
	double x, y;
	double r;
	printf("y = x^2 - cos^2(x + 1)\n");
	printf("� ����� ����� ������� ����������? ");
	scanf("%lf", &r);

	puts("-------------------");
	printf("|   x   |   f(x)  |\n");
	puts("-------------------");

	for (x = 0.1; x <= 2.25; x += r)
	{
		y = pow(x, 2) - pow(cos(x + 1), 2);
		printf("|  %3.1f  |  %5.1f  |\n", x, y);
	}
	
}

int main()
{
	setlocale(LC_ALL, "RUS");

	//t0();

	//t1();

	t2(); //5 �������

	return 0;
}