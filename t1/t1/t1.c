# define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int shuru;
	(void)scanf("%d", &shuru);
	int shuchu = (shuru / 100) % 10000;
	printf("%d %d", shuchu, shuchu + 1024);
	return 0;
}