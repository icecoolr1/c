#include <stdio.h>
int main() 
{
	double inch;
	double foot;
	printf("��ֱ�����Ӣ��Ӣ��");
	scanf("%lf %lf",&foot,&inch);
	printf("�����%f��\n",((foot+inch/12)*0.3048));
	return 0;
    
}
