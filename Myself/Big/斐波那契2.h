#include<stdio.h>

int fei(int n)
{
	int a[100],i;
	a[0]=0;
	a[1]=1;

	for (i = 2; i < n; i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	return a[n-1];
}

void feibo()
{
	int n;
	printf("�㵽����λ��\n");
	scanf("%d",&n);

	printf("%d",fei(n));

}