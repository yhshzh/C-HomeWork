#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

typedef struct _List
{
	char word[30];
	int count;
}List;

int main()
{
	List list[100];
	char input[20] = { 0 };
	int count = 0;
	(void)scanf("%s", input);
	strcpy(list[0].word, input);
	while (strcmp(input, "###"))
	{
		int test = 0;
		for (int i = 0; i < count; i++)
		{
			if (strcmp(list[i].word, input)==0)
			{
				list[i].count++;
				test++;
				break;
			}
		}
		if (test == 0)
		{
			strcpy(list[count].word, input);
			list[count].count = 1;
			count++;
		}
		(void)scanf("%s", input);
	}

	for (int i = 0; i < count; i++)
		i == 0 ? printf("%s-%d", list[i].word, list[i].count) : printf(" %s-%d", list[i].word, list[i].count);
	return 0;
}