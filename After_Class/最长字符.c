#include<stdio.h>
#include<string.h>
int main() 
{
	int i,j=0,max=0;
	char str[5][20];
	printf("�����ַ���");
	
	for(i=0;i<4;i++){
		scanf("%s ",str[i]);
	if(!max)max=strlen(str[i]);
	if(max<strlen(str[i]))
	{
		max=strlen(str[i]);
		j=i;
	}
	}
	
	printf("�����%s",str[j]);
	
	return 0;
}
