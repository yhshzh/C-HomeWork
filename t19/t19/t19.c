#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, x=0;
	(void)scanf("%d", &a);
	while (a)
	{
		int y = a % 10;
		x += y*y;
		a = a / 10;
	}
	printf("%d", x);
	return 0;
}