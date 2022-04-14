#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	(void)scanf("%d%d", &a, &b);
	int c = a * a + b * b;
	if (c>= 100)
	{
		printf("%d", (int)c / 100);
	}
	else
	{
		printf("%d", (int)c);
	}
	return 0;
}