#include<stdio.h>


void oushu() {
	int i,n,x,o=0,t=0;
	printf("���뼸�����֣�\n");
	scanf("%d",&n);


	for (i = 0; i < n; i++) {
		printf("�����%d��\n",i+1);
		scanf("%d",&x);
		if (x % 2 == 0) {
			t++;
			o=o+x;
		}
	}
	printf("ż���ĸ����� %d\n",t);
	printf("��Ϊ %d",o);
}