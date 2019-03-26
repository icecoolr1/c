#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int a=rand()%100;
	int count=0;
	int b=0;

	do{	printf("请输入一个数：\n");
	scanf("%d",&b);
		count++;
		if(a>b){	printf("小了\n");
		}else if(a<b) {	printf("大了\n");
		}
		}while(a!=b);
		printf("您花了%d次猜对了\n",count);
		return 0;
	}

