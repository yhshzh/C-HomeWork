#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int shuru;
	(void)scanf("%d", &shuru);
	int a = shuru  / 1000 % 10, b = shuru / 100 % 10, c = shuru / 10 % 10, d = shuru / 1 % 10;
	a = (a + 5) % 10;
	b = (b + 5) % 10;
	c = (c + 5) % 10;
	d = (d + 5) % 10;
	printf("%d", a + d * 1000 + b * 10 + c * 100);
	return 0;
}