#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int a, K = 2;
	char output[100] = { 0 };
	(void)scanf("%d%d", &a, &K);
	int temp = a, i=0;
	while (temp / K != 0)
	{
		int t = temp % K;
		if (t < 9)
			output[i] = temp % K+'0';
		else
			output[i] = temp % K -10+ 'A';
		temp = temp / K;
		i++;
	} 
	if (temp%K < 9)
		output[i] = temp % K + '0';
	else
		output[i] = temp % K - 10 + 'A';
	for (int j = i+1; j  ; j--)
		printf("%c", output[j-1]);
	return 0;
}