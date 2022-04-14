#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


int main()
{
	char input[200] = { 0 };
	char c[200] = { 0 };
	(void)scanf("%s%s", input, c);
	int i = 0, count = 0;
	int L = strlen(input), l = strlen(c);
	for (i = 0; i < L; i++)
	{
		if (input[i] == c[0])
		{
			int j = 0;
			while (input[i + j] == c[j])
			{
				j++;
				if (j == l)
				{
					count++;
					continue;
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}

