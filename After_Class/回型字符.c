#include <stdio.h>
#include <string.h>
bool huiwen(char *c){
	int len=strlen(c);
	int left=0,right=len-1;
	while(left<=right){
		if(c[left]==c[right]){
			left++;
			right--;
			
		}
		else
			break;
			
	}
	if(left>right)
	return ture;
	else 
	break;
}

int main(){
	char c[100];
	printf("�����ַ���");
	scanf("%s",c);
	
	if(huiwen(c))
		printf("��\n");
	else 
		printf("����\n");
	return 0; 
}
