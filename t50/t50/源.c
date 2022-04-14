#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int fz(int a);

int main()
{
	int x, y;
	int a, a0;
	int b, b0;
	int s, t;

	(void)scanf("%d%d", &x, &y);
	a = (x + y) / 2, b = (x - y) / 2;
	a0 = fz(a);
	b0 = fz(b);
	s = a0 + b0;
	t = a0 - b0;
	printf("%d %d", s, t);
	return 0;
}

int fz(int a)
{
	int i=1, j=0;
	int a0 = 0;
	const a1 = a;
	while (a1 / (int) pow(10, i))
	{
		i++;
	}
	while (i)
	{
		i--;
		a0 = a0 + (a1 / (int)pow(10, j)) % 10 * (int)pow(10, i );
		j++;
	}
	return a0;
}