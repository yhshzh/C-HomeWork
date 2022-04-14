#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char input[100] = { 0 };
	int temp[100] = { 0 };
	char output[100] = { 0 };
	(void)scanf("%s", input);
	//判断是否为二进制IP地址
	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] != '0' && input[i] != '1')
		{
			printf("该字符串不是正确的IP地址");
			return 0;
		}
	}
	//倒序
	(void)_strrev(input);
	//补全
	for (int i = strlen(input); i < 32; i++)
	{
		input[i] = '0';
	}
	//转化为十进制
	for (int i = 0; i <= 3; i++)
	{
		int k = 1;
		for (int j = 8 * i; j < 8 * i + 8; j++)
		{
			temp[i] = temp[i] + (input[j]-'0') * k;
			k = 2 * k;
		}
	}
	printf("%d.%d.%d.%d", temp[3], temp[2], temp[1], temp[0]);
	return 0;
}