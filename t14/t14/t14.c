#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
	int m, n;
	(void)scanf("%d %d", &m, &n);
	int x = m, y;
	while (x <= n)
	{
		y = (int)log10(x) + 1;
		if (x == x * x % ((int)pow(10, y)))
		{
			x == m ? printf("%d", x) : printf(" %d", x);
			x++;
		}
		else
		{
			x++;
		}
	}
	return 0;
}