#include<stdio.h>
#include<math.h>

#pragma warning(disable:4996)

int main() {
	float c, x;
	printf("�ֱ����복�ٺ����٣��ÿո�ֿ�\n");
	scanf("%f%f", &c, &x);
	
		
	if (c < 1.1*x) {
		printf("��ϲ ��û����~");
	}
	else
		if (c < 1.5*x) {
			printf("�Ͻ���200�飡\n");
		}
		else
			printf("��������һ�Ųȣ������УЦ����\n");
	return 0;
}