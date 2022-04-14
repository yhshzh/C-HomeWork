#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

char* detel(char* str, int i, int j);

int main()
{
	char str[80] = { 0 };
	gets(str);
	int i = 0, j = 0;
	j = strlen(str)-1;
	while (str[i] == ' ')
		i++;
	while (str[j] == ' ')
		j--;
	printf("%s", detel(str, i, j));
	return 0;
}

char* detel(char* str, int i, int j)
{
	int count, test=0;
	while (j >= i+test)
	{
		count = i;
		if (str[count] == ' ')
		{
			while (count <=j)
			{
				str[count] = str[count + 1];
				count++;
			}
			test++;
		}
		if (str[i] != ' ')
		{
			i++;
		}
	}

	return str;
}