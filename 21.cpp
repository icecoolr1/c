#include <stdio.h>
int main()
{
	int a=0;
	printf("������һ������:");
	scanf("%d",&a);
	printf("�������������:");
	if(a<0){	printf("����!\n");
	}else if(a>0){	printf("����!\n");
	}
	if(a%2==0){	printf("ż��!\n");
	}else {	printf("����!\n");
	}
	return 0;
}
