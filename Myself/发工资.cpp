#include<stdio.h>

void shifa(int jiben, int fudong, int zhichu) {
	int s;
	s=jiben+fudong-zhichu;

	printf("%d",s);
}

struct yuangong
{
	int jiben;
	int fudong;
	int zhichu;
};

int main() {
	struct yuangong y[10];
	int n,i;

	printf("���뼸���ˣ�\n");
	scanf_s("%d",&n);

	for (i = 0; i < n; i++) {
		printf("�����������\n");
		scanf_s("%d",&y[i].jiben);
		printf("��������\n");
		scanf_s("%d",&y[i].fudong);
		printf("֧��\n");
		scanf_s("%d",&y[i].zhichu);
		puts("ͳ�����");
		shifa(y[i].jiben,y[i].fudong,y[i].zhichu);//���԰��������鶼���뺯��
	}


	return 0;
}