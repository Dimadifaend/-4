#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{	
	setlocale(LC_ALL, "RUS");
	double x, y, z, f, stroca1, stroca2;
	printf("������� ����� ����������� ������ - (17,421) (x): ");
	scanf("%lf", &x);
	printf("������� ����� ����������� ������ -  (0,010365) (y): ");
	scanf("%lf", &y);
	printf("������� ����� ����������� ������ - (82800) (z): ");
	scanf("%lf", &z);
	stroca1 = pow((y + (pow((x-1), 1.0 / 3.0))), 1.0 / 4.0);
	stroca2 = (fabs(x - y)) * ((pow(sin(z), 2)) + (tan(z)));
	f = stroca1 / stroca2;
	printf("��������� (������������ ������ 0,33056): %.5lf\n", f);

}