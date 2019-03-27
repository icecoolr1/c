#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	printf("请输入两个整数,用空格分隔开,按回车键结束:\n");
	scanf("%d %d",&a,&b);
	printf("输出结果:\n");
	printf("x=%d\n",a);
	printf("y=%d\n",b);
	printf("(2x+3y)/x=%d\n",(2*a+3*b)/a);
	return 0;
}
