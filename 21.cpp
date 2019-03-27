#include <stdio.h>
int main()
{
	int a=0;
	printf("请输入一个整数:");
	scanf("%d",&a);
	printf("您输入的整数是:");
	if(a<0){	printf("负数!\n");
	}else if(a>0){	printf("正数!\n");
	}
	if(a%2==0){	printf("偶数!\n");
	}else {	printf("奇数!\n");
	}
	return 0;
}
