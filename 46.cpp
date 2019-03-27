#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	int t1,t2,t3,t4,t5;
	printf("输入数组a的5个数:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("输入数组b的5个数:");
	scanf("%d %d %d %d %d",&t1,&t2,&t3,&t4,&t5);
	printf("计算数组a和对应因素相加的和!\n");
	printf("数组C的5个数为:%d %d %d %d %d",a+t1,b+t2,c+t3,d+t4,e+t5);
	return 0;
}
