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
void xianshi(int *a) {//�������������
	int i;
	for (i = 2; i >=0; i--) {
		printf("%d\n",*(a+i));
	}
}

void zhu() {
	int *a;
	a=get();
	xianshi(a);
}





void erweiout(int *b) {
	int i,j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\n",*((b+i)+j));
		}
	}
}
int *erweimake(int *a) {
	int i,j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			*((a+i)+j)=9;
		}
	}
	return a;
}
int *erweiin() {
	int x=1;
	int *c=(int *)malloc(8);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			*((c+i)+j)=x;
			x++;
		}
	}
	
	return c;
}
int erwei_main() {
	int *a = erweiin();
	int *b = erweimake(a);
	erweiout(b);

	return 0;
}
int main() {
	//num();
	//zifu();
	//zhu();
	erwei_main();
	return 0;
}