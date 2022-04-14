#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>;

#include <math.h>;

int main()
{
	double a, b, c;
	(void)scanf("%lf,%lf,%lf", &a, &b, &c);
	printf("%.2lf", a * pow((1 + c), b));
	return 0;
}