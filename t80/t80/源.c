#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void* a, const void* b);//用于qsort函数中的比较
void delete(char* input);//用于删去相同字符

int main()
{
	char s[100] = { 0 };
	char t[100] = { 0 };
	(void)scanf("%s%s", s, t);
	strcat(s, t);
	_strupr(s);
	int count = 0;
	count = strlen(s);
	qsort(s, count, sizeof(char), compare);
	delete(s);
	printf("%s", s);
}
int compare(const void* a, const void* b)
{
	char* pa = (char*)a;
	char* pb = (char*)b;
	char na = *pa;
	char nb = *pb;
	if (na - nb > 0)
		return 1;
	else
		return -1;
}

void delete(char* input)
{
	int count = strlen(input);
	for (int l1 = 0; input[l1]; l1++)
	{
		if (input[l1] == input[l1 + 1])
		{
			int num;
			for (num = 0; input[l1] == input[l1 + num]; num++);
			for (int j = 0; j <= count - l1; j++)
			{
				input[l1 + j] = input[l1 + j + num - 1];
			}
		}
	}

}