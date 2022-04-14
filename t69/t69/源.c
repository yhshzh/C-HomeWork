#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void QuickSort(char* output, int L, int R);
//void Delete(char* output, int n);

int main()
{
	char str[81] = { 0 };
	char output[81] = { 0 };
	(void)scanf("%s", str);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] - 'a' < 26&&str[i]-'a' >=0 )
		{
			int k = strlen(output);
			output[k] = str[i];
		}
	}
	QuickSort(output, 0, strlen(output) - 1);
	printf("%s", output);
	return 0;
}

void QuickSort(char* output, int L, int R)
{
	if (L >= R)
		return;
	int l = L, r = R;
	int p = output[L];
	while (l < r)
	{
		while (l < r && output[r] >= p)
			r--;
		if (l < r)
			output[l] = output[r];
		while (l < r && output[l] <= p)
			l++;
		if (l < r)
			output[r] = output[l];
		if (l >= r)
			output[l] = p;
	}
	QuickSort(output, L, r - 1);
	QuickSort(output, l + 1, R);
}
