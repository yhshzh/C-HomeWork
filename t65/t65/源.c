#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void Sort(int* input, int L, int R);
void Clear(int* input, int n);

int main()
{
	int n = 0;
	int input[200];
	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		(void)scanf("%d", &input[i]);
	}
	Sort(input, 0, n - 1);
	Clear(input, n);
	for (int i = 0; i < n; i++)
	{
		i == 0 ? printf("%d", input[i]) : printf(" %d", input[i]);
	}
	return 0;
}

void Sort(int* input, int L, int R)
{
	if (L >= R)
		return;
	int l = L, r = R;
	int p = input[L];
	while (l < r)
	{
		while (l < r && input[r] >= p)
			r--;
		if (l < r)
			input[l] = input[r];
		while (l < r && input[l] <= p)
			l++;
		if (l < r)
			input[r] = input[l];
		if (l >= r)
			input[l] = p;
	}
	Sort(input, L, r - 1);
	Sort(input, l + 1, R);
}

void Clear(int* input, int n)
{
	int temp = input[n - 1];
	input[n - 1] = input[(n - 1) / 2];
	input[(n - 1) / 2] = temp;
	for (int i = 1; i < (n - 1) / 2; i++)
		input[i] = 0;
	for (int i = (n + 1) / 2; i < n - 1; i++)
		input[i] = 0;
}