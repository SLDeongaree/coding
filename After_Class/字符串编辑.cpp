#include <string.h>
#include<stdio.h>

int main() {
	int i;
	char a[6],b[6],c[6];
	
	printf("����6λ��ĸ\n");
	gets_s(a);

	strcpy_s(b,a+2);	//���ƺ���λ��b
	strcat_s(b,a-2);

	puts(b);
	return 0;
}