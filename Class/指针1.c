#include <stdio.h>

int main(){
	int a,b;
	int *x,*y;

	printf("��������a b \n");
	scanf("%d",&a,&b);

	*x=a;
	*y=b;

	if(*x>*y){
		*y=*x;

}
	else
		printf("�Ƚϴ���� %d\n",*y);

	return 1;
}
