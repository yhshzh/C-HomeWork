#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100] = { 0 };
	char str1[100] = { 0 };
	(void)scanf("%s", str);
	int i = 0, test = 0;
	do
	{
		i++;
	} while (str[i] != 0);
	i--;
	while (i >= 0)
	{
		int n = 0;
		strcpy(str1, str);
		if (test == 0)
		{
			while (n<=100)
			{
				str1[n] = str1[n + i];
				n++;
			}
			printf("%s", str1);
			test = 1;
		}
		else
		{
			while (n <=100)
			{
				str1[n] = str1[n + i];
				n++;
			}
			printf(" %s", str1);
		}
		i--;
	}
	return 0;
}