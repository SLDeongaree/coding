#include<stdio.h>

double fact(int n)
{
	double sum=1;
	for (int i =1 ; i <= n; i++)
	{
		sum=sum*i;
	}
	return sum;
}

int main()
{
	int n;

	printf("���㵽����\n");
	scanf_s("%d",&n);
	printf("�����%lf",fact(n));

	return 0;
}