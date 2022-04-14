#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100] = { 0 };
	gets_s(str,100);
	int i = 0;
	while (str[i++] != '*');
	int n = 0, j = 0;
	while (str[j] != str[i])
	{
		j++;
	}
	if (j == i)
	{
		printf("-1");
	}
	else
	{
		printf("%d", j);
	}
	return 0;
}