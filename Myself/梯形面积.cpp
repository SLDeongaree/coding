#include<stdio.h>

int func(int a, int b, int h)
{
	return (a+b)*h/2;
}

int main()
{
	int a,b,c;
	printf("�����ϵ� �µ� ��\n");
	scanf_s("%d%d%d",&a,&b,&c);
	printf("�����%d",func(a,b,c));
	return 0;
}