#include<stdio.h>

int search(int list[], int n, int x)
{
	int i=0,f=0;
	for (i; i < n; i++)
	{
		if (list[i] == x)
		{
			f++;
			return i;
		}

	}
	if (f == n)
	{
		return -1;
	}
}

int main()
{
	int n,list[20],x,t;
	printf("����������ٸ�����\n");
	scanf_s("%d",&n);

	for (int i = 0; i < n; i++)
	{
		printf("�����%d��\n",i+1);
		scanf_s("%d",&list[i]);
	}

	printf("�����ѯ��������\n");
	scanf_s("%d",&x);

	t=search(list,n,x);

	if (t == -1)
	{
		printf("NOT FOUND");
	}
	else
	{
		printf("�����ǵ�%d��",t+1);
	}
	return 0;
}