#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char zfc[100] = { 0 };
	int count[26] = { 0 };
	gets_s(zfc, 100);
	int i = 0;
	_strlwr(zfc);
	while (zfc[i])
	{
		if (zfc[i] >= 'a' && zfc[i] <= 'z')
			count[zfc[i] - 'a']++;
		i++;
	}
	int x = count[0];
	i = 1;
	while (i <= 26)
	{
		if (x < count[i])
			x = count[i];
		i++;
	}

}