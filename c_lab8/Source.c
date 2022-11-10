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

void t3()
{
	int n;
	printf("������� ����� n: ");
	scanf("%d", &n);

	float sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += pow(-1, i) * (1. / pow(2, i));
		//printf("%d %f %f %f\n", i, pow(-1, i), 1. / pow(2, i), pow(-1, i) * (1. / pow(2, i)));
	}

	printf("%f", sum);
}

int factorial(int n)
{
	int p = 1;
	for (int i = 2; i <= n; i++)
	{
		p *= i;
	}
	return p;
}

float calc_sum(int x)
{
	int k = 0;
	float sum = 0; 

	for (int i = 1; i <= 13; i += 2)
	{
		sum += pow(-1, k) * (pow(x, i) / factorial(i));
		//printf("%d %f %f %f\n", i, pow(-1, k), factorial(i), pow(-1, k) * (pow(x, i) / factorial(i)));
		k++;
	}
	return sum;
}

int main()
{
	int x, k;
	float sum = 0;

	setlocale(LC_ALL, "RUS");

	//t0();

	//t1();

	//t2(); //5 �������

	//t3(); //16 �������

	//(3 �������, �� 7 �������)
	
	printf("������� x: ");
	scanf("%d", &x);
	sum = calc_sum(x);
	printf("%f", sum);

	return 0;
}