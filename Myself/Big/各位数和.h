#include<stdio.h>

void shuhe() {
	int x=1,n,y,i,sum=0,m;
	printf("����һ������\n");
	scanf_s("%d",&n);
	m=n;
	for (; n >= 10; ) {
		x++;
		n=n/10;
	}
	for (; m >= 1; m = m / 10) {
		y=m%10;
		sum=y+sum;
		
	}
	printf("��λ��%d\n",x);
	printf("λ��֮��Ϊ%d\n",sum);
}