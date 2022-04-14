#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

double fun(int a[], int n, int* max, int* min);

int main()
{
	int n = 0;
	int a[200];
	int* max,* min;
	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++)
		(void)scanf("%d", &a[i]);
	double average=fun(a, n, &max, &min);
	printf("%d %d %.6lf", max, min, average);
	return 0;
}


double fun(int a[], int n, int* max, int* min)
{
	double average;
	double total=0.0;
	*max = *min = a[0];
	for (int i = 0; i < n; i++)
	{
		total = total + a[i];
		if (a[i] > *max)
		{
			*max = a[i];
		}
		if (a[i] < *min)
		{
			*min = a[i];
		}
	}
	average = total / n;
	return average;
}