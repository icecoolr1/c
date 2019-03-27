#include <stdio.h>
int main()
{
	
	printf("请输入一个数字,按回车键结束!\n");
	
	int type;
	scanf("%d",&type);
	switch(type) {
		case 9:
			printf("输入数字为:   9\n");
			printf("前驱数字为:   8\n");
			printf("后驱数字为:   0\n");
			break;
		case 0:
			printf("输入数字为:   0\n");
			printf("前驱数字为:   9\n");
			printf("后驱数字为:   1\n");
			break;
		default:
			printf("输入数字为:   %d\n",type);
			printf("前驱数字为:   %d\n",type-1);
			printf("后驱数字为:   %d\n",type+1) ;
			break;
		
	}
	return 0;
}
	
