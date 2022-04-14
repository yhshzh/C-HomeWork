#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char num[200] = { 0 };
	(void)scanf("%s", num);
	int i = strlen(num)-1, j = 0;
	while (j<=i)
		{
			if (j % 2 == 0)
			{
				printf("%c", num[j]);
			}
			else
			{
				printf("%c", num[i+1 - j]);
			}
			j++;
		}
	return 0;
}