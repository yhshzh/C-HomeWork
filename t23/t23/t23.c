#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, n, i=2, b, s;
	(void)scanf("%d%d", &a, &n);
	b = a;
	s = a;
	printf("%d", a);
	while (i <= n)
	{
		a = 10 * a+b;
		printf("+%d", a);
		s = s + a;
		i++;
	}
	printf("=%d", s);
	return 0;
}