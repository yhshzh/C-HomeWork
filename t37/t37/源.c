#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100] = { 0 };
	int n = 0, i = 0, j = 0;
	(void)scanf("%s%d", str, &n);
	_strrev(str);
	while (str[i] == '*')
	{
		i++;
	}
	if (i <= n)
	{
		_strrev(str);
		printf("%s", str);
	}
	else
	{
		while (str[j])
		{
			str[j++] = str[j + i-n];
		}
		_strrev(str);
		printf("%s", str);
	}
	return 0;
}
/*int main()
{
	char str[100] = { 0 };
	(void)scanf("%s", str);
	_strrev(str);
	printf("%s", str);
	return 0;
}*/