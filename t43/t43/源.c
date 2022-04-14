#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int str[50] = { 0 };
	int i = 0, j = 0, k = 0, test = 0, p = 0;
	do
	{
		(void)scanf("%d", &str[i]);
	} while (str[i++]);
	int n, count=str[0];
	while (j < i-1)
	{
		if (count > str[j])
		{
			count = str[j];
		}
		j++;
	}
	//printf("count=%d\n", count);
	int max=1;
	for (n = 1; n < count; n++)
	{
		test = 0;
		for (k = 0; k <= i; k++)
		{
			if (str[k] % n==0)
			{
				test++;
			}
			//printf("test=%d\n", test);
			if (test == i)
			{
				max = n;
			}
		}
	}
	printf("%d\n", max);
	while (p < i - 1)
	{
		p == 0 ? printf("%d", str[p]) : printf(" %d", str[p]);
		p++;
	}
	return 0;
}