#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	int input, i=0;
	char num[200] = { 0 };

	(void)scanf("%d", &input);
	while (input )
	{
		num[i] = input % 10;
		input = input / 10;
		i++;
	}
	int j = i;
	while (j)
	{
		if (j % 3==0 && j!=0&&j!=i)
			printf(",%d", num[j-1]);
		else
			printf("%d", num[j-1]);
		j--;
	}
	return 0;
}