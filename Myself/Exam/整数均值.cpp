#include<stdio.h>

int main() {
	int n,a[20],i,sum=0;
	double ave;
	printf("�����������\n");
	scanf_s("%d",&n);

	for (i = 0; i < n; i++) {
		scanf_s("%d",&a[i]);
	}

	for (i = 0; i < n; i++) {
		sum+=a[i];
	}

	ave=sum/n;

	printf("��Ϊ%d",sum);
	printf("ƽ����Ϊ%.1f",ave);

	return 0;
}