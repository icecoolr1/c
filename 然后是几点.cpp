#include <stdio.h>
int main()
{
	int a=0 ;
	int b=0;
	scanf("%d",&a);
	scanf("%d",&b);
	int t1=(a/100)*60;
	int t2=a%100;
	int t=t1+t2+b;
	
	printf("%d %d",t/60,t%60);
	return 0;
}
