#include <stdio.h>
int main()
{
	int price = 0;
	
	printf("��������(Ԫ) \n");
	scanf("%d",&price);
	int amout =100;
	printf("���������(Ԫ)\n");
	scanf("%d",&amout);
	int change = amout - price;
	printf("������%d(Ԫ) \n",change);
	return 0;
}
