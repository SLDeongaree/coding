#include<stdio.h>

int main(){
	int a[10]={11,22,33,44,55};
	int i;
	int *p=a;
	p=a;	//ָ��ָ��������λ
	for(i=0;i<5;i++){
		printf("%d\n",*p);	//���ָ����ָ������
		*p++;		// ????
	}

	char *k[3]={"first","second","third"};
	printf("%s\n",k);
	printf("%s\n",*k);	//�����һ��Ԫ��
	printf("%s\n",*(k+1));		//�����һ��Ԫ��
	printf("%s\n",k[1]);		//��Ϊ����ʹ��

	char *s={"abcdefg"};
	
	printf("%s",s+1);
	return 0;
}

