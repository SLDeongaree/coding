#include<stdio.h>
#pragma warning (disable:4996)
struct rain
{
	int num;
	int loc;
	int l[12];
};
int main() {
	struct rain r[5];
	int a[5],i,n,t=0,j;
	for (int j = 0; j < 5; j++) {
		printf("��%d��\n",j+1);

		for (i = 0; i < 12; i++) {
			printf("����%d��\n", i);
			scanf("%d", &r[i].l);
		}
	}
	
	//��ʼ�Ƚϴ�С
	int max;
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 11; j++) {
			printf("%d�ص� %d�� ������%d\n",i+1,j+1, r[i].l[j]);
			if (r[i].l[j]> max) {
				max= r[i].l[j];
			}
		}
	}
	printf("���Ľ�������%d",max);

	return 0;
}