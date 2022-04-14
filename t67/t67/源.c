#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
int main()
{
	char input[81] = { 0 };
	char test[81] = { '0' };
	gets(input);
	for (int i = 0; i < strlen(input); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (input[i] == 'a' + j)
			{
				test[i] = '1';
				continue;
			}
		}
	}
	for (int i = 0; i < strlen(input); i++)
	{
		if (test[i] != '1')
		{
			input[i] = '0';
		}
	}
	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i]=='0')
		{
			for (int j = i; j < strlen(input); j++)
			{
				input[j] = input[j + 1];
			}
			i--;
		}
	}
	printf("%s", input);
	return 0;
}