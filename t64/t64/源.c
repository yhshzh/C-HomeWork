#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

typedef struct _List
{
	char name;
	int count;
}List;

void Sort(List* list);

int main()
{
	char input[81] = { 0 };
	(void)scanf("%s", input);
	_strupr(input);
	List list[26];
	for (int i = 0; i < 26; i++)
	{
		list[i].name = 'A' + i;
		list[i].count = 0;
	}
	for (int i = 0; i < strlen(input); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (input[i] == list[j].name)
				list[j].count++;
		}
	}
	Sort(list);
	for (int i = 0; i < 26; i++)
	{
		i == 0 ? printf("%c-%d", list[i].name, list[i].count) : printf(" %c-%d", list[i].name, list[i].count);
	}
	return 0;
}

void Sort(List* list)
{
	for (int i = 0; i < 26; i++)
	{
		for (int j = 25; j > i ; j--)
		{
			if (list[j].count > list[j - 1].count)
			{
				List temp = list[j];
				list[j] = list[j - 1];
				list[j - 1] = temp;
			}
		}
	}
}