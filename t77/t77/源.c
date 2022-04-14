#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int input(int* in, int* n);
int find(char* output, int in1[100], int in2[100], int n1, int n2, int count);
void Quick(char* output, int L, int R);

int main()
{
	int n1 = 0, n2 = 0;
	int a[100], b[100];
	n1=input(a, n1);
	n2=input(b, n2);
	char output[100] = { 0 };
	int count = 0;
	count=find(output, a, b, n1, n2, count);
	count=find(output, b, a, n2, n1, count);
	Quick(output, 0, count-1);
	for (int i = 0; i < count; i++)
		i == 0 ? printf("%d", output[i]) : printf(" %d", output[i]);
	return 0;
}

int input(int* in, int* n)
{
	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++)
		(void)scanf("%d", &in[i]);
	return n;
}

int find(char* output, int in1[100], int in2[100], int n1, int n2, int count)
{
	int temp[100] = { 0 };
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			if (in1[i] == in2[j])
			{
				temp[i]=1;
			}
		}
	}
	for (int i = 0; i < n1; i++)
	{
		if (temp[i] != 1)
		{
			output[count] = in1[i];
			count++;
		}
	}
	return count;
}

void Quick(char* output, int L, int R)
{
	if (L >= R)
		return;
	int l = L, r = R, p = output[L];
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
	Quick(output, L, r - 1);
	Quick(output, l + 1, R);
}
/*
7 1 2 3 3 5 6 7
6 5 6 7 8 9 0
*/