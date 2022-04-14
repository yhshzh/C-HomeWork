#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100] = { 0 };
	int k = 0, i = 0;
	(void)scanf("%s%d", str, &k);
	while (str[i])
	{
		if (str[i]>='A' && str[i] <= 'Z')
		{
			str[i] = (str[i] - 'A' + k) % 26 + 'A'; 
		}
		else
		{
			str[i] = (str[i] - 'a' + k) % 26 + 'a';
		}
		i++;
	}
	printf("%s", str);
	return 0;
}