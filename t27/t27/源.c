#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char input[200];
	int i=0, j=1;
	(void)scanf("%s", input);
	if (input[0] != '*')
	{
		printf("%s", input);
		return 0;
	}
	while (input[i] == '*')
		i++;
	strcpy(input, input + i);
	printf("%s", input);
	while (j <= i)
	{
		printf("*");
		j++;
	}
	return 0;
}