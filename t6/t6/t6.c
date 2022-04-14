#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b =! 0;
	(void)scanf("%d%d", &a, &b);
	printf("%d %d %d %d", (int)(a + b), (int)(a - b), (int)(a * b), (int)(a / b));
	return 0;
}