#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	char str[28] = { "abcdefghijklmnopqrstuvwxyz" };
	int n;
	(void)scanf("%d", &n);
	n = n / 2;
	printf("%d ", n);
	int i, test, t;
	i = n;//借用n
	test = 0;//记录n的位数
	while (i)
	{
		test++;
		i = i / 10;
	}
	while (test)
	{
		t = pow(10, test - 1);
		printf("%c", str[(n / t) % 10]);
		test--;
	}
	return 0;
}