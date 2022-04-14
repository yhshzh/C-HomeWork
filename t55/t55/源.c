#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int delete(char* input, char c);

int main()
{
	char input[200] = { 0 };
	char c;
	int i = 0;
	gets(input);
	//c = getchar();
	(void)scanf("%c", &c);
	int k = delete(input, c);
	if (k == 0)
	{
		printf("%s", input);
	}
	else
		printf("NotFound");
	return 0;
}

int delete(char* input, char c)
{
	int i = 0, test = 0;
	while (input[i])
	{
		if (input[i] == c)
		{
			for (int j = i; input[j]; j++)
			{
				input[j] = input[j + 1];
			}
			test = 1;
		}
		else
			i++;
	}
	if (test == 0)
		return -1;
	else
		return 0;
}