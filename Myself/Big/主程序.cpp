//����Visual Studio��д����VS���صĺ����������޷��ڲ��Ի����������У��Ѿ��������ԣ�û��BUG�����Ҹ���exe�ļ�������ֱ�Ӳ���
#pragma warning (disable:4996)
#include<stdio.h>
#include"1.h"
#include"������.h"
#include"����.h"
#include"����һ�ε���.h"
#include"ż����.h"
#include"쳲�����2.h"
#include"��λ����.h"
#include"��Լ��.h"

int main()
{
	printf("����Visual Studio��д����VS���صĺ����������޷��ڲ��Ի����������У��Ѿ��������ԣ�û��BUG�����Ҹ���exe�ļ�������ֱ�Ӳ���\n");
	int gi;
	printf("ѡ����\n");
	printf("1������һ��������\n2������һ����\n3������\n4������һ��\n5��ż������\n6��쳲�����\n7����λ����\n8����Լ��\n9���ַ�����\n");
	scanf("%d",&gi);
	switch (gi)
	{
		case(1):charu();break;
		case(2):chazhao(); break;
		case(3):chaosu(); break;
		case(4):yici(); break;
		case(5):oushu(); break;
		case(6):feibo(); break;
		case(7):shuhe(); break;
		case(8):gong(); break;

		
	}
}