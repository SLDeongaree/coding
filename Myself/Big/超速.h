#include<stdio.h>
#include<stdlib.h>

void chaosu() {
	float c, x, y;
	printf("�ֱ����복�ٺ����٣��ÿո�ֿ�\n");
	scanf("%f%f", &c, &x);
	y = (c - x) * 100 / c;

	if (c < 1.1*x) {
		printf("��ϲ ��û����~");
	}
	else
		if (c < 1.5*x) {
			printf("�㳬����%.2d%%\n", y);
			printf("�Ͻ���200�飡\n");
		}
		else
			printf("�㳬����%.2f%%", y);
	printf("��������һ�Ųȣ������УЦ����\n");



	system("pause");



}