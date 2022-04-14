#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int count[4] = { 0 };
	int n;
	(void)scanf("%d", &n);
	while (n != -1)
	{
		n >= 1 && n <= 3 ? count[n - 1]++ : count[3]++;
		(void)scanf("%d", &n);
	}
	printf("%d %d %d %d", count[0], count[1], count[2], count[3]);
	return 0;
}