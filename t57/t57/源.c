#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void Delete(char* str);//删除头部星号的函数

int main()
{
	char str[200] = { 0 };
	(void)scanf("%s", str);
	(void)Delete(str);//删除头部星号
	(void)_strrev(str);//字符串反向
	(void)Delete(str);//删除尾部星号
	(void)_strrev(str);//字符串反向
	printf("%s", str);
	return 0;
}

void Delete(char* str)
{
	int i = 0;
	while (str[i++] == '*');
	for (int j = 0; j < strlen(str); j++)
	{
		str[j] = str[j + i-1];
	}
}