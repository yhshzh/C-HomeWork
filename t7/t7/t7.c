#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	(void)scanf("%d", &a);
	int h=a/3600, m=(a%3600)/60, s=a%60;
	printf("%d:%.2d:%.2d\n", h, m, s);
	return 0;
}