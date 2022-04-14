#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char zfc[200] = { 0 };
	int count[26] = { 0 };
	gets_s(zfc, 200);
	int first = 0, i = 0;
	_strlwr(zfc);
	while (zfc[i])
	{
		if (zfc[i] >= 'a' && zfc[i] <= 'z')
			count[zfc[i] - 'a']++;
		i++;
	}
	printf("%d", count[0]);
	for (i = 1; i < 26; i++)
	{
		printf(",%d", count[i]);
	}
	return 0;
}