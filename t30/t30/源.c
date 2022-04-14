#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int year, month, day;
	(void)scanf("%d,%d", &year, &month);
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2)
	{
		printf("%d", test(year) ? 29 : 28);
	}
	else
	{
		printf("%d", days[month - 1]);
	}
	return 0;
}
int test(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}