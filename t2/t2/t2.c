#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long int a;
	(void)scanf("%lld", &a);
	if (a <= 100000)
	{
		printf("%d", (int)(a*0.1));
	}
	else if (a > 100000 && a <= 200000)
	{
		printf("%d", (int)(10000 + (a - 100000) * 0.08));
	}
	else if (a > 200000 && a <= 400000)
	{
		printf("%d", (int)(18000 + (a - 200000) * 0.05));
	}
	else if (a > 400000 && a <= 600000)
	{
		printf("%d", (int)(28000 + (a - 400000) * 0.03));
	}
	else if (a > 600000 && a <= 1000000)
	{
		printf("%d", (int)(34000 + (a - 600000) * 0.02));
	}
	else if (a > 1000000)
	{
		printf("%d", (int)(42000 + (a - 1000000) * 0.01));
	}
	return 0;
}