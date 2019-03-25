#include <stdio.h> 
int main()
{
	printf("请输入两个数：\n");
	int a=0, b=0;
	scanf("%d %d",&a,&b);
	int max=b;
	if(a>b){
		max=a;
	}
	printf("较大的数为%d",max);
	return 0;
}

