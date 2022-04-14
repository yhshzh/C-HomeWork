#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void QuickSort(char* temp, int L, int R);

int main()
{
	char input[100] = { 0 };
	char temp[50] = { 0 };
	(void)scanf("%s", input);
	for (int i = 0; i < strlen(input) / 2; i++)
	{
		temp[i] = input[2 * i];
	}
	QuickSort(temp, 0, strlen(temp) - 1);
	for (int i = 0; i < strlen(input) / 2; i++)
	{
		input[2 * i] = temp[i];
	}
	printf("%s", input);
	return 0;
}

void QuickSort(char* temp, int L, int R)
{
	if (L >= R)
		return;
	int l = L, r = R;
	int p = temp[L];
	while (l < r)
	{
		while (l < r && temp[r] >= p)
			r--;
		if (l < r)
			temp[l] = temp[r];
		while (l < r && temp[l] <= p)
			l++;
		if (l < r)
			temp[r] = temp[l];
		if (l >= r)
			temp[l] = p;
	}
	QuickSort(temp, L, r - 1);
	QuickSort(temp, l + 1, R);
}