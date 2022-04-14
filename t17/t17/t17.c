#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int m, n, s;
	(void)scanf("%d%d", &m, &n);
	int i = m;
	while (i <= n)
	{
		int x = i;
		if(i%7==0)
		{
			printf("%d是7的倍数\n", i);
		}
		while (x)
		{
			s = x % 10;
			if (s == 7)
			{
				printf("%d是带7的数\n", i);
				break;
			}
			x = x / 10;
		}
		i++;
	}
	return 0;
}