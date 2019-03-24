#include<stdio.h> 
int main()
{
	int price =0;
	printf("请输入金额:\n");
	scanf("%d",&price);
    int amout = 100;
	printf("请输入面额:\n");
	scanf("%d",&amout);
    printf("找您%d元",amout-price);
	return  0;
}
