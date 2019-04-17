#include <stdio.h>
int main()
{
	printf("请输入三角形的三条边,按回车键结束:\n");
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b<=c){
		printf("您输入的三条边是:  %d %d %d 不构成三角形!",a,b,c);
	}
	 if(a+b>c){
			if(a==b&&b==c){
		printf("您输入的三条边是:  %d %d %d 构成 等边三角形!",a,b,c);
	}else if(a==b&&b!=c){
		printf("您输入的三条边是:  %d %d %d 构成 等腰三角形!",a,b,c);
	}else if(a*a+b*b==c*c){
		printf("您输入的三条边是:  %d %d %d 构成 直角三角形!",a,b,c);
	}else{
		printf("您输入的三条边是:  %d %d %d 构成 普通三角形!",a,b,c);
	}
	}
} 
