#include<stdio.h>
int main()
{
	int a=0;
	scanf("%d",&a);
	int b=a/100;
	int c=a%10;
	int d=(a/10)%10;
	
	printf("%d",c*100+d*10+b*1);
	return 0;
}
