#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int Clear(int* a, int temp, int k);
void Delete(int* a, int n);

int main()
{
	int n;
	int a[6000] = { 0 };
	(void)scanf("%d", &n);
	if (n <= 3)
		printf("1 2 3");
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
	int test = 0;
	while (n > 3)
	{
		if (test == 0)
		{
			int temp = n;
			temp=Clear(a, temp, 2);
			Delete(a, n);
			n = temp;
			test = 1;
		}
		else
		{
			int temp = n;
			temp=Clear(a, temp, 3);
			Delete(a, n);
			n = temp;
			test = 0;
		}
	}
	n == 3 ? printf("%d %d %d", a[0], a[1], a[2]) : printf("%d %d", a[0], a[1]);
	return 0;
}

int Clear(int* a, int temp, int k)
{
	int n = temp;
	for (int i = 0; i < n; i++)
	{
		if ((i + 1) % k == 0)
		{
			a[i] = 0;
			temp--;
		}
	}
	return temp;
}
void Delete(int* a, int n)
{
	for (int i = 0; i < n ; i++)
	{
		if (a[i] == 0)
		{
			for (int j = 0; j < n - i; j++)
			{
				a[i + j] = a[i + j + 1];
			}
		}
	}
}