#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void Move(int* input, int i);

int main()
{
	int n, m;
	int input[100] = { 0 };
	(void)scanf("%d %d", &n, &m);
	for (int i = 0; i <= n - 1; i++)
		(void)scanf("%d", &input[i]);
	for (int t = 0; t <= m-1; t++)
	{
		(void)Move(input, n-1);
	}
	for (int i = 0; i <= n - 1; i++)
		i == 0 ? printf("%d", input[i]) : printf(" %d", input[i]);
	return 0;
}

void Move(int* input, int i)
{
	int k = input[i];
	for (int j = i; j >0; j--)
	{
		input[j] = input[j - 1];
	}
	input[0] = k;
}