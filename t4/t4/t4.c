#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a;
	int b;
	int c;
	(void)scanf("%d%d%d", &a, &b, &c);
	printf("%g", (float)(a + b + c) / 3);
	return 0;
}