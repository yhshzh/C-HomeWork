#define _CRT_SECURE_NO_WARINGS

#include <stdio.h>

int main()
{
	double a, b, c;
	(void)scanf("%lf%lf%lf", &a, &b, &c);
	double d = a + b + c;
	printf("%g %d", d, (int)(d + 0.5));
	return 0;
}