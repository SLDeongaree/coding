//Ϊһά��������ڴ�
#include<stdio.h>
#include<stdlib.h>
#include<string>
void num() {
	int i;
	int *b[20];
	for (i = 0; i < 3; i++) {
		printf("�����%d������",i+1);
		b[i]=(int *)malloc(sizeof(int));//�����ڴ�
		scanf_s("%d",b[i]);

	}
	for (i = 0; i < 3; i++) {
		printf("%d\n",*b[i]);
	}

}
void zifu() {
	char *a[20];
	int i;

	for (i = 0; i < 3; i++) {
		printf("�����%d��", i + 1);
		a[i] = (char *)malloc(20);//�����СΪ20���ڴ�
		scanf_s("%s", a[i], 10);
	}
	for (i = 0; i < 3; i++) {
		printf("%s", a[i]);
	}
}
//ָ�뺯������
int *get() {
	int i;
	int *a;
	a=(int*)malloc(8);
	for (i = 0; i < 3; i++) {
		printf("��������%d",i+1);
		scanf_s("%d",(a+i));
	}
	return a;
} 
void xianshi(int *a) {
	int i;
	for (i = 2; i >=0; i--) {
		printf("%d\n",*(a+i));
	}
}

void zhu() {
	int *a;
	int n;
	a=get();
	xianshi(a);
}


int main() {
	//num();
	//zifu();
	//zhu();
	return 0;
}