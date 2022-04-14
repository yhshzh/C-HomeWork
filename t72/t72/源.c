#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void QuickSort(int* repack, int L, int R);

int main()
{
	int input;
	int output, repack[30];
	(void)scanf("%d", &input);
	output = input * 3;
	int temp = output;
	int i;
	for (i = 0; temp; i++)
	{
		repack[i] = temp % 10;
		temp /= 10;
	}
	QuickSort(repack, 0, i);
	printf("%d ", output);
	for (int j = 0; j < i; j++)
		printf("%d", repack[j]);
	return 0;
}

void QuickSort(int* repack, int L, int R)
{
	if (L >= R)
		return;
	int l = L, r = R;
	int p = repack[L];
	while (l < r)
	{
		while (l < r && repack[r] <= p)
			r--;
		if (l < r)
			repack[l] = repack[r];
		while (l < r && repack[l] >= p)
			l++;
		if (l < r)
			repack[r] = repack[l];
		if (l >= r)
			repack[l] = p;
	}
	QuickSort(repack, L, r - 1);
	QuickSort(repack, l + 1, R);
}