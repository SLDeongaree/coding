#include<stdio.h>

int main() {
	int m=1, n = 5;
	int *p;

	p=&m;		//��ʼ��ָ��

	*p=*&n;		// ���ָ�����ǆ��£�

	//p=&n;
	//*p = n;		// p�ǵ�ַ��*p�ǵ�ַ��ֵ

	printf_s("M=%d\nN=%d\np=%d\n", m, n, p);
	printf("\n");
	printf("*p=%d", *p);
	return 0;
}