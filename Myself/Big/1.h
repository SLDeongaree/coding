//��������
#include<stdio.h>

void charu() {
	int a[11],i,j,t;

	printf("����10�����������\n");

	for ( i = 0; i < 10; i++) {
		printf("��%d��",i);
		scanf("%d",&a[i]);
	}


	printf("������һ����\n");
	scanf("%d",&a[10]);

	for (i = 0; i < 11; i++) {
		for (j = i; j < 11 ; j++) {
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
	
}