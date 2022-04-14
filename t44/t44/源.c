#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

double poly(int n, double x);

int main()
{
	int n;
	double x;
	(void)scanf("%d%lf", &n, &x);
	printf("%lf\n", poly(n, x));
	return 0;
}

double poly(int n, double x)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return x;
	if (n > 1)
		return ((2 * n - 1) * x * poly(n - 1, x) - (n - 1) * poly(n - 2, x)) / n;
}