#include<stdio.h>
#include<string.h>

#define maxline 100		//��ֹgets�����ݹ���

void del(char a[],char x);
void pass() {
	char line[maxline];
	int n;
	char *s = { 0 };
	printf("�����ַ�����\n");
	scanf_s("%s",s);
	//gets_s(line);

	printf("���ܶ���λ��\n");
	scanf_s("%d", &n);

	for (; *s != '\0' ; s++) {		// \0����ֹ�ַ�����˼��һ���ַ��Ľ�β�������
		if (*s == 'z')
			*s = 'a';
		else
			*s = *s + n;
	}
	printf("��Ϣ�Ѽ���\n");
	printf("%s", line);
}

void del (char *a, char x) {
	printf("�����ַ�����\n");
	

	while (*a==x)
	{
		*a='\0';
	}
}
int main() {
	int n,b;

	printf("����ɾ�ֻ��Ǽ��ܣ�\n1.ɾ��\n2.����\n3.��Ů����");
	scanf_s("%d",&b);
	switch (b)
	{
		case 1:del;
		case 2:pass;
			break;
	}

	getchar();

	return 0;
}