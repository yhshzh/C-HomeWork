#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char str[200] = { 0 };
	(void)scanf("%s", str);
	int n = 1, l = 0;
	char tem = 0;
	char max;
	l = strlen(str);
	for (int count=1; count < l-1; count++)
	{
		max = str[count];
		for (n = count+1; n < l-1; n++)
		{
			if (str[n] > max)
			{
				//printf("1max=%c\nstr=%c\n", max, str[n]);
				tem = str[n];
				str[n] = max;
				max = tem;
				//printf("2max=%c\nstr=%c\n", max, str[n]);
			}
		}
		str[count] = max;
	}
	printf("%s", str);
	return 0;
}