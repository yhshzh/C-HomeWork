#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a;
	(void)scanf("%d", &a);
	for (int i = 1; i <= a / 2; i++)
	{
		int s = 0;
		for (int j = i; s <= 0; j++)
		{
			s = s + j;
			if (s = a)
			{
				printf("%d=%d", a, i);
				for (int k = i + 1; k <= j; k++)
				{
					printf("+%d", k);
				}
				printf("\n");
				break;
			}
		}
	}
	return 0;
}