#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	float a, b, c;
	(void)scanf("%f%f%f", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		printf("YES");
	}
	else
	{
		printf("ERROR DATA");
	}
	return 0;
}