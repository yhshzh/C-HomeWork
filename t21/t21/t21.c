#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a0 = 0;
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int a4 = 0;
	int x = 0;
	(void)scanf("%d", &x);
	while (x != -1)
	{
		switch (x)
		{
		case 0:
			a0++;
			break;
		case 1:
			a1++;
			break;
		case 2:
			a2++;
			break
				;
		case 3:
			a3++;
			break;
		case 4:
			a4++;
			break;
		}
		(void)scanf("%d", &x);
	}
	printf("%d %d %d %d %d", a0, a1, a2, a3, a4);
	return 0;
}