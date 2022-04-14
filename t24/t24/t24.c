#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	int n, m, i, j=0;
	(void)scanf("%d%d", &n, &m);
	i = n;
	while (i <= m)
	{
		if (i == pow(i % 10, 3) + pow((i / 10 )% 10, 3) + pow((i / 100) % 10, 3))
		{
			j == 0 ? printf("%d", i) : printf(" %d", i);
			j++;
		}
		i++;
	}
	if (j == 0)
		printf("-1");
	return 0;
}