#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	float s = 0.0;
	long long int i = 1;
	(void)scanf("%d", &n);
	while (i <= n)
	{
		s += pow(-1, i + 1) * 1 / (2 * i - 1);
		i++;
	}
	printf("%f", s);
	return 0;
}