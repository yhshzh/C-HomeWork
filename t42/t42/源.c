#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int ack(int m, int n);

int main()
{
	int m, n;
	(void)scanf("%d%d", &m, &n);
	int x = ack(m, n);
	printf("ack(%d,%d)=%d", m, n, x);
	return 1;
}

int ack(int m, int n)
{
	if (m == 0)
		return n + 1;
	if(n == 0)
		return ack(m - 1, 1);
	return ack(m - 1, ack(m, n - 1));
}