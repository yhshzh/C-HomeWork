#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

typedef struct _List
{
	char ID_number[15];
	char Sign_in_time[10];
	char Sign_out_time[10];
}List;

int in(List list[200], int n);
int out(List list[200], int n);

int main()
{
	int n = 0, a=0, b=0;
	(void)scanf("%d", &n);
	List list[200];
	for (int i = 0; i < n; i++)
	{
		(void)scanf("%s%s%s", list[i].ID_number, list[i].Sign_in_time, list[i].Sign_out_time);
	}

	a = in(list, n);
	b = out(list, n);
	printf("%s %s", list[a].ID_number, list[b].ID_number);
	return 0;
}

int in(List list[200], int n)
{
	int i = 0, j=0;
	for (i = 0; i < n; i++)
	{
  		if (strcmp(list[i].Sign_in_time , list[j].Sign_in_time)<0)
			j = i;
	}
	return j;
}

int out(List list[200], int n)
{
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		if (strcmp(list[i].Sign_out_time , list[j].Sign_out_time)>0)
			j = i;
	}
	return j;
}


/*
ÑùÀıÊäÈë
3
CS301111 15:30:28 17:00:10
SC3021234 08:00:00 11:25:25
CS301133 21:45:00 21:58:40
*/