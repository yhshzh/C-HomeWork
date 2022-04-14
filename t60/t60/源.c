#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	float d = 0, v = 0;
	(void)scanf("%f%f", &d, &v);
	int count = 0, time = 0;
	int t = v/d;
	if (v / d == t);
	else
		t++;
	int n;
	for ( n = 1; count < t; n++)
		count = count + n;
	printf("%d", t + n-2);
	return 0;
}