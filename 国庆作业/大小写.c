#include<stdio.h>
#pragma warning (disable:4996)
int main(void)

{

	char zm;
	int i;
	printf("����һ����ĸ��~" );
	scanf("%c", &zm);
	if (zm >= 65 && zm < 90)
		printf("���Ǵ�д" );
	else
		if (zm >= 96 && zm < 123)
			printf("����Сд");
		else
			printf("����ɶ����");


}