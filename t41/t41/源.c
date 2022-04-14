#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n, m, i=0;
	(void)scanf("%d %d", &n, &m);
	int str[100] = { 0 };
	for (i = 0; i < n; i++)
		(void)scanf("%d", &str[i]);
	i = 0;
	for (int x = 0; i < m; i++)
	{
		x = str[i];
		int j = (i + m) % n;
		str[i] = str[j];
		str[j] = x;
	}		
	for (int i = 0; i < n; i++)
		{
			i==0 ? printf("%d", str[i]) : printf(" %d", str[i]);
		}

	return 0;
}