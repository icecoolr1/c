#include <stdio.h>
int main()
{
	double a = 0;
	double b = 0;
	char c;
	printf("��������������:");
	scanf("%lf %lf",&a,&b) ;
	printf("���������<+ - * />:");
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
