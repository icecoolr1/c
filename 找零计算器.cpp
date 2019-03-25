#include <stdio.h>
int main()
{
	printf("请输入金额");
	int price=0;
	scanf("%d",&price);
	printf("请输入票面");
	int amout=0;
	scanf("%d",&amout);
	if (amout>=price){
		printf("需找您%d元\n",amout-price);
	}
else	printf("无需找钱");
	return 0; 
} 
