void delchar(char s[],char c);
int main(){
	char s[80],c;
	printf("����");
	get(s);
	printf("�����ַ�");
	scanf("%c",&c)
	printf("�滻���ַ���");
	 delchar(s,c);
	puts(s);
	
	return 0;
} 

void delchar(char s[],char c){
	for (int i=0;s[i]!='\0';i++){
		if(s[i]==c){
			for (int j=i;s[j]!='\0';j++)
			s[j]=s[j+1];
			i--;
		}
	}
}
