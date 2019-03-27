#include <stdio.h>
int main()
{
	double a=0;
	printf("请输入摄氏温度，按回车键结束:");
	scanf("%lf",&a) ;
	printf("摄氏温度:%f=",a);
	printf("华氏温度:%f",(a*9/5)+32);
	return 0;
	
	
}
