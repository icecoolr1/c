#include <stdio.h> 
int main()
{
	printf("��������������\n");
	int a=0, b=0;
	scanf("%d %d",&a,&b);
	int max=0;
	if(a>b){
		max=a;
	}else{max=b;
	}
	printf("�ϴ����Ϊ%d",max);
	return 0;
}

