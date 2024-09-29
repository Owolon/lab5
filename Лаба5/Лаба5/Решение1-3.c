#define CRT_NO_SECURE_DEPRECATE
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//1
double vcslna(double x1, double y1)
{
	const double d = 1.0;

	double numer = pow(cos(y1), 3) + pow(2, x1) * d;
	double domin = exp(y1) + log(pow(sin(x1), 2) + 7.4);

	return numer / domin;
}

void main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("��������� ������� ����� 1\n");

	float gr;
	float result;

	printf("\n�������� ��������: \n");
	scanf_s("%f", &gr);

	result = sin((gr * M_PI) / 180);

	printf("��������� ���������� sin %.1f:\n%.6f", gr, result);

//2

	printf("\n��������� ������� ����� 2\n");
	double  k = 1.2;
	double  x;
	double  a;
	double  b;
	double  y;

	printf("\n������� x: \n");
	scanf_s("%lf", &x);

	a = exp(k * x);
	b = pow(log(x), 2) + pow(k, 5);
	y = pow(sqrt(pow(a, 2) + pow(b, 2)),1./3);

	printf(" %.2lf",y);
//3
	



//��

	printf("\n��������� ������� ���������.\n");
	double vcslna(double x1, double y1);

	const double d = 1.0;
	double x1;
	double y1;
	double resultxy;

	printf("\n������� x:\n");
	scanf_s("%lf", &x1);
	printf("\n������� y:\n");
	scanf_s("%lf", &y1);

	resultxy = vcslna(x1, y1);

	printf("��������� ���������: \n %lf , x %lf y %e", resultxy,x1,y1);

	return 0;
}

