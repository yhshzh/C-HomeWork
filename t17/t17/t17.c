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
			printf("%d��7�ı���\n", i);
		}
		while (x)
		{
			s = x % 10;
			if (s == 7)
			{
				printf("%d�Ǵ�7����\n", i);
				break;
			}
			x = x / 10;
		}
		i++;
	}
	return 0;
}