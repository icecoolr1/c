#include <stdio.h>
int main()
{
	double a = 0;
	double b = 0;
	char c;
	printf("请输入两个整数:");
	scanf("%lf %lf",&a,&b) ;
	printf("输入运算符<+ - * />:");
	scanf("%s",&c);
	switch(c){
		case '+':
			printf("%lf+%lf=%lf",a,b,a+b);
			break;
		case '-':
			printf("%lf+%lf=%lf",a,b,a-b);
			break;
		case '*':
			printf("%lf*%lf=%lf",a,b,a*b);
			break;
		case '/':
			printf("%lf/%lf=%lf",a,b,a/b);
			break;		
}
		return 0;
}
