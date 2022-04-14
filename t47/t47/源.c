#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//定义数字
	int N;//输入个数
	int input[50] = { 0 };//输入数组
	int i = 0;
	int start = 0, length = 1, mlen = 1, count=0;

	//输入结构
	(void)scanf("%d", &N);
	while (i <N)
	{
		(void)scanf("%d", &input[i]);
		i++;
	}

	//执行内容
	while (start < N)
	{
		length = 1;
		if (input[start] == input[start + 1])
		{
			while (input[start] == input[start + length])
			{
				length++;
			}
		}
		if (length > mlen)
		{
			mlen = length;
			count = start+1;
		}
		start++;
	}

	//输出结构
	printf("%d,%d", count, count + mlen-1);
	return 0;
}