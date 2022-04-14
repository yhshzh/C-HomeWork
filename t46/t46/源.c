#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[50] = { 0 };
	int b[50] = { 0 };
	int count_a, count_b;
	int i = 0, j = 0;
	(void)scanf("%d", &count_a);
	while (i < count_a)
	{
		(void)scanf("%d", &a[i]);
		i++;
	}
	(void)scanf("%d", &count_b);
	while (j < count_b)
	{
		(void)scanf("%d", &b[j]);
		j++;
	}
	int output[50] = { 0 };
	int t = 0;
	for (i = 0; i < count_a; i++)
	{
		for (j = 0; j < count_b; j++)
		{
			if (a[i] == b[j])
			{
				output[t] = a[i];
				t++;
			}
		}
	}
	/*
	int test4=0;
	{
		for (int test1 = 0; test1 <= t; test1++)
		{
			int test2 = test1 + 1;
			for (int test3 = test2; test2 <= t; test2++)
			{
				if (output[test1] == output[test2])
				{
					test3 = test2;
					while (test3 <= t)
					{
						output[test3] = output[test3 + 1];
						test3++;
					}
					test4++;
					printf("%d", test4);
				}
			}
		}

	}
	*/
	int p = 0;
	while (p < t)
	{
		p == 0 ? printf("%d", output[p]) : printf(" %d", output[p]);
		p++;
	}
	return 0;
}

/*void detel(int* output[50], int t, int* test4)
{
	for (int test1 = 0; test1 <= t; test1++)
	{
		int test2 = test1 + 1;
		for (int test3 = test2; test2 <= t; test2++)
		{
			if (output[test1] == output[test2])
			{
				test3 = test2;
				while (test3 <= t)
				{
					output[test3] = output[test3 + 1];
					test3++;
				}
				test4++;
			}
		}
	}

}*/
