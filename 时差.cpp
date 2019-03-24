#include <stdio.h>
int main()
{
	printf("请输入小时与分钟:");
	int hour1=0, hour2=0;
	int min1=0 , min2=0 ;
	scanf("%d %d",&hour1,&min1);
	scanf("%d %d",&hour2,&min2);
    int t1=hour1*60+min1;
    int t2=hour2*60+min2;
    int t= t2-t1;
    printf("时差为%d %d",t/60,t%60);
    return 0;
	}
	
