#include<stdio.h>
#pragma warning (disable:4996)
int main() {
	int a[11],i,j,t;

	printf("输入10个有序的数据\n");

	for ( i = 0; i < 10; i++) {
		printf("第%d个",i);
		scanf("%d",&a[i]);
	}

	printf("再输入一个数\n");
	scanf("%d",&a[11]);

	for (i = 0; i < 11; i++) {
		for (j = i; j < 10 ; j++) {
			if (a[i] > a[j]) {
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d",a[i]);
	}
	return 0;
}