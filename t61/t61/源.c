#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

typedef struct _PhoneList
{
	char name[30];
	char num[20];
}List;

void Change(List* list, int L, int R);

int main()
{
	int count = 0;
	List list[100];
	(void)scanf("%d", &count);
	for (int i = 0; i < count; i++)
		(void)scanf("%s%s", list[i].name, list[i].num);
	Change(list, 0, count-1);
	for (int i = 0; i < count; i++)
		i == 0 ? printf("%s %s", list[i].name, list[i].num) : printf("\n%s %s", list[i].name, list[i].num);
	return 0;
}

/*void Change(List* list, int L, int R)
{
	if (L >= R)
	{
		return;
	}
	int l = L, r = R;
	while (l < r)
	{
		int t = list[r].name <= list[L].name, m = list[l].name >= list[L].name;
		while (l < r && list[r].name > list[L].name)
		{
			r--;
		}
		if (l < r)
		{
			list[l] = list[r];
		}
		while (l < r && list[l].name < list[L].name)
		{
			l++;
		}
		if (l < r)
		{
			list[r] = list[l];
		}
		if (l >= r)
		{
			list[l] = list[L];
		}
	}
	Change(list, L, r - 1);
	Change(list, l + 1, R);
}*/
void Change(List* list, int L, int R)
{
	for (int i = 0; i <= R; i++)
	{
		for (int j = R; j > i; j--)
		{
			if (strcmp(list[j].name , list[j - 1].name)<0)
			{
				List temp = list[j];
				list[j] = list[j - 1];
				list[j - 1] = temp;
			}
		}
	}
}


/*
²âÊÔÓÃÀý
3
zhang 123
wang 234
liu 345
3
wang 234
liu 345
zhang 123
*/