#include <stdio.h>
int main()
{
	printf("��������");
	int price=0;
	scanf("%d",&price);
	printf("������Ʊ��");
	int amout=0;
	scanf("%d",&amout);
	if (amout>=price){
		printf("������%dԪ\n",amout-price);
	}
else	printf("������Ǯ");
	return 0; 
} 
