#pragma   once  
#include<stdio.h>

void shuzi() {
	 int i,flag=0,x;
	int a[5];

	printf("����5����\n");
	for (i = 0; i < 5; i++) {
		scanf_s("%d",&a[i]);
	}
	printf_s("����������ҵ�ֵ\n");
	scanf_s("%d",&x);
	for (i = 0; i < 5; i++) {
		if (x == a[i]) {
			printf_s("�±���%d",i);
			flag=1;
			break;
		}

	}
	if (flag != 1) {
		printf_s("�������ڵ�ǰ����\n");
	}
}