#include<stdio.h>
#include<string.h>

struct  shu 
{
	char name ;
	double price;
};

int main() {
	int n,i,max,min;
	struct shu shu[10];

	printf("�����飿\n");
	scanf_s("%d",&n);
	

	for (i = 0; i < n; i++) {
		printf("���ֺͼ۸�\n");
		scanf_s("%s %lf", &shu[i].name, &shu[i].price);
	}
	max=min=0;
	for (i = 1; i < n; i++) {
		if(shu[i].price>shu[max].price)max=i;
		if(shu[i].price<shu[min].price)min=i;
	}

	printf("�����%.2lf��%s\n",shu[max].price,shu[max].name);
	printf("�������%.2lf��%s\n", shu[min].price, shu[min].name);
}