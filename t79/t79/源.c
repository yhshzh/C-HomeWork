#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int find(char* input,char* temp, int i, int j);

int main()
{
	char input[80] = { 0 };
	int output[80] = { 0 };
	gets(input);
	int i, k=0 ;
	for (i = 0; i < strlen(input); i++)
	{
		int temp[80] = { 0 };
		int j = 0;
		while (input[i] - '0' >= 0 && input[i] - '0' <= 9!=1)
			i++;
		while (input[i] - '0' >= 0 && input[i] - '0' <= 9)
		{
			temp[j] = input[i] - '0';
			i++;
			j++;
		}
		output[k++] = find(input, temp, i, j);
	}
	int count = 0;
	for (int q = 0; q <= k; q++)
	{
		q == 0 ? printf("%d", output[q]) : printf(" %d", output[q]);
		count = count + output[q];
	}
	printf("\n%d", count);
}

int find(char* input, char* temp, int i, int j)
{
	_strrev(temp);
	int t = 0, m=1;
	int jt = j;
	for (int p = 0; p <= j; p++)
	{
		t = t + temp[jt] * m;
		m = m * 10;
		jt++;
	}
	return t;
}
/*
1 0022 8weh**67&&
*/