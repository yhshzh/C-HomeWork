#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	double H = 100.0;
	double s = 0;
	int n = 0, i=0;

	(void)scanf("%d", &n);
	while (i < n)
	{
		H = H / 2;
		s = s + 2*H;
		i++;
	}

	printf("%lf\n%lf\n", s, H);

	return 0;
}