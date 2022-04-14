#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int input, i;
	(void)scanf("%d", &input);
	printf("1");
	for (i = 2; i <= input; i++)
	{
		while (input % i == 0)
		{
			printf("*%d", i);
			input = input / i;
		}
	}
	return 0;
}