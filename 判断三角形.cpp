#include <stdio.h>
int main()
{
	printf("�����������ε�������,���س�������:\n");
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b<=c){
		printf("���������������:  %d %d %d ������������!",a,b,c);
	}
	 if(a+b>c){
			if(a==b&&b==c){
		printf("���������������:  %d %d %d ���� �ȱ�������!",a,b,c);
	}else if(a==b&&b!=c){
		printf("���������������:  %d %d %d ���� ����������!",a,b,c);
	}else if(a*a+b*b==c*c){
		printf("���������������:  %d %d %d ���� ֱ��������!",a,b,c);
	}else{
		printf("���������������:  %d %d %d ���� ��ͨ������!",a,b,c);
	}
	}
} 
