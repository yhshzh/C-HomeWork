#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int test(int x);

int main()
{
	int m = 0, n = 0, count=0;
	(void)scanf("%d%d", &m, &n);
	for (int i = m; i <= n - 2; i++)
	{
		if (test(i) && test(i + 2))
			count++;
	}
	printf("%d", count);
	return 0;
}

int test(int x)
{
	for (int i = 2; i <= x / i; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}