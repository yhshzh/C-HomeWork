#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char input[100] = { 0 };
	int output[10] = { "zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	(void)scanf("%s", input);
	for (int i = 0; i < strlen(input); i++)
	{
		i == 0 ? printf("%s", output[input[i] - '0']) : printf(" %s", output[input[i] - '0']);
	}
	return 0;
}