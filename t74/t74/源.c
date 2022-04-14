#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void Delete(int* a, int n, int i);

int main()
{
	int n, k;
	int a[1000];
	(void)scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
		a[i] = i+1;
	int i = 1;
	while (n != 1)
	{
		int t;
		t=(i * (k - 1)+1) % n == 0 ? ((i-1) * (k - 1) + 1) % n+n-1 :  (i * (k - 1)+1) % n-1;
		Delete(a, n, t);
		i++;
		n--;
	}
	printf("%d", a[0]);
	return 0;
}

void Delete(int* a, int n, int i)
{
	for (int j = 0; j < n - i; j++)
	{
		a[i + j] = a[i + j + 1];
	}
}