#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void Delete(char* str);//ɾ��ͷ���Ǻŵĺ���

int main()
{
	char str[200] = { 0 };
	(void)scanf("%s", str);
	(void)Delete(str);//ɾ��ͷ���Ǻ�
	(void)_strrev(str);//�ַ�������
	(void)Delete(str);//ɾ��β���Ǻ�
	(void)_strrev(str);//�ַ�������
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