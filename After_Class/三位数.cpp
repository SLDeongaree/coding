#include<stdio.h>

int main() {
	int G, S, B, X;
	printf("�������λ����");
	scanf("%d", &X);
	G = X % 10;
	S = (X / 10) % 10;
	B = X / 100;

	printf("��λ%d��ʮλ%d����λ%d", G, S, B);

	return 0;
}
