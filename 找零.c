#include <stdio.h>
int main()
{
	int price = 0;
	
	printf("请输入金额(元) \n");
	scanf("%d",&price);
	int amout =100;
	printf("请输入面额(元)\n");
	scanf("%d",&amout);
	int change = amout - price;
	printf("需找您%d(元) \n",change);
	return 0;
}
