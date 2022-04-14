#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

typedef struct _List
{
	char id[20];
	char name[20];
	int c1, c2, c3, c;
}List;

void QuickSort(List* list, int L, int R);

int main()
{
	int count = 0;
	(void)scanf("%d", &count);
	List list[100];
	for (int i = 0; i < count; i++)
	{
		(void)scanf("%s%s%d%d%d", list[i].id, list[i].name, &list[i].c1, &list[i].c2, &list[i].c3);
		list[i].c = list[i].c1 + list[i].c2 + list[i].c3;
	}
	QuickSort(list, 0, count - 1);
	for (int i = 0; i < count; i++)
	{
		i == 0 ? printf("%s %s %d %d %d %d", list[i].id, list[i].name, list[i].c1, list[i].c2, list[i].c3, list[i].c) : printf("\n%s %s %d %d %d %d", list[i].id, list[i].name, list[i].c1, list[i].c2, list[i].c3, list[i].c);
	}
	return 0;
}

/*void QuickSort(List* list, int L, int R)
{
	if (L >= R)
		return;
	int p = list[L].c;
	int l = L, r = R;
	while (l < r)
	{
		while (l < r && list[r].c >= p)
			r--;
		if (l < r)
			list[l] = list[r];
		while (l < r && list[l].c <= p)
			l++;
		if (l < r)
			list[r] = list[l];
		if (l >= r)
			list[l] = list[L];
	}
	QuickSort(list, L, r - 1);
	QuickSort(list, l+1 , R);
}*/

void QuickSort(List* list, int L, int R)
{
	for (int i = 0; i <= R; i++)
	{
		for (int j = R; j > i; j--)
		{
			if (list[j].c < list[j - 1].c)
			{
				List temp = list[j];
				list[j] = list[j - 1];
				list[j - 1] = temp;
			}
		}
	}
}

/*²âÊÔÓÃÀý
3
1 lee 2 2 2
2 suang 3 3 3
3 name 1 1 1
*/