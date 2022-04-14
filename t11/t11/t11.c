#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>	

#include <math.h>

int main()
{
	int a;
	(void)scanf("%d", &a);
	while (a<=0||a>1000)
	{	
		printf("0\n");
		(void)scanf("%d", &a);
	}
	printf("%d\n", (int)sqrt(a));
	return 0;
}