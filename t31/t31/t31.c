#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int x=1000,n, a, b, c, d, test=0;
	(void)scanf("%d", &n);
	while (x <= n)
	{
		a = x / 1000, b = (x / 100) % 10, c = (x / 10) % 10, d = x % 10;
		if (a == d && b == c)
		{
			if (test == 0)
			{
				printf("%d", x);
				test++;
			}
			else
				printf(" %d", x);
		}
		x++;
	}
	return 0;
}