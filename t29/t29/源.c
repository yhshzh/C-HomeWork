#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int i = 2, j = 1, n, cs=1, fenzi;
	double output;
	(void)scanf("%d", &n);
	for (output = (double)i/j ;cs<n; cs++)
	{
		fenzi = i;
		i = i + j;
		j = fenzi;
		output = output + (double)i / j;
	}
	printf("%.4f", output);
	return 0;
}