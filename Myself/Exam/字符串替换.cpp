#include<stdio.h>

void mchars(char s[], char c) {
	for (int i = 0; i < 80; i++) {
		if (s[i] == c) {
			s[i]='*';
		}
		if (s[i] == '\0') {
			break;
		}
	}
	puts(s);
}
int main() {
	char s[80],c;

	printf("�����ַ���\n");
	gets_s(s);

	printf("ȥ�����ַ���\n");
	c=getchar();

	mchars(s,c);

	return 0;
}