#include<stdio.h>
#pragma warning(disable:4996)
struct fruit
{
	char name[20];
	int price;
};

int main() {
	struct fruit f[10];
	int i,t,max=0,min=10,maxi,mini;
	printf("����ˮ�������ֺ͵���\n");

	for (i = 0; i < 3; i++) {
		printf("��%dˮ��������\n",i+1);
		scanf("%s",&f[i].name);
		printf("��%dˮ���ļ۸�\n",i+1);
		scanf("%d",&f[i].price);
	}

	for (i = 0; i <3; i++) 
	{
		if (f[i].price > max) {
			max=f[i].price;
			maxi=i;
		}
		if (f[i].price < min) {
			min=f[i].price;
			mini=i;
		}
	}

	printf("�����%s",f[maxi].name);
	printf("�����%s",f[mini].name);

	return 0;
}