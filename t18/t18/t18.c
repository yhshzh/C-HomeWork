#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int m, n;
	int a, b, c;
	int i = 0;
	(void)scanf("%d%d", &m, &n);
	for (a=m;a<=n;a++)
		for(b=a+1;b<=n;b++)
			for(c=b+1;c<=n;c++)
			if (a*a + b*b== c*c)
			{
				i++;
			}
	printf("%d", i);
	return 0;
}