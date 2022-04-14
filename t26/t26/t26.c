#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void sub(int s[], int y)
{
	static int t = 3; y = s[t]; t--;

}
main() {
	int a[] = { 1,2, 3, 4 }, i, x = 0;
	for (i = 0; i < 4; i++)
	{
		sub(a, x); printf("%d", x);
	}printf("\n");
}