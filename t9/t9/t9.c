#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char a;
	(void)scanf("%c", &a);
	printf("%c%c%c", a - 1 < 'A' ? 'Z' : a - 1, a,
		a + 1 > 'Z' ? 'A' : a + 1);
	return 0;
}