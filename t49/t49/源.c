#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int input[100] = { 0 };
	int i = 0, time = 0;
	do
	{
		(void)scanf("%d", &input[i]);
	} while (input[i++]);
	for (i = 0; input[i]; i++)
	{
		if (i == 0)
		{
			time = input[i] * 6;
		}
		else
		{
			if (input[i] >= input[i - 1])
			{
				time = time + (input[i] - input[i - 1]) * 6;
			}
			else
			{
				time = time + (input[i - 1] - input[i]) * 4;
			}
		}
	}
	time = time + 5 * i;
	printf("%d", time);
	return 0;
}