#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a;
	(void)scanf("%d", &a);
	int b, c = 0;
	if (a >=10)
	{
		if (a / 10 > 0)
		{
			while (a % 10 > 0)
			{
				b = a % 10;
				c += b;
				a = a / 10;
			}
		}
		else
		{
			a = a / 10;
			while (a % 10 > 0)
			{
				b = a % 10;
				c += b;
				a = a / 10;
			}
		}
	}
	else
	{
		c = a;
	}
	c % 2 == 0 ? printf("0") : printf("1");
	return 0;
}