#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a, b, c;
	int x = 1, y=1, z=1;
	(void)scanf("%d%d%d", &a, &b, &c);
	while (x <= a)
	{
		printf("*");
		x++;
	}
	printf("\n");
	while (y <= b)
	{
		printf("*");
		y++;
	}
	printf("\n");
	while (z <= c)
	{
		printf("*");
		z++;
	}
	printf("\n");
	return 0;
}