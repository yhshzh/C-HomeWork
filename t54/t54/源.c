#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char input[100] = { 0 };
	(void)scanf("%s", input);
	for (int i=0; i <= strlen(input); i++)
	{
		for (int j = i+1; j <= strlen(input); j++)
		{
			int k = j;
			if (input[k] == input[i])
			{
				while (k <= strlen(input))
				{
					input[k] = input[k + 1];
					k++;
				}
			}
			if (input[j] == input[i])
			{
				k = j;
				while (k <= strlen(input))
				{
					input[k] = input[k + 1];
					k++;
				}
			}
		}
	}
	int l = strlen(input)-1;
	if (input[l]==input[l-1])
	{
		input[l] = 0;
	}
	printf("%s", input);
	return 0;
}