#include <stdio.h>
int main() 
{
	double inch;
	double foot;
	printf("请分别输入英尺英寸");
	scanf("%lf %lf",&foot,&inch);
	printf("身高是%f米\n",((foot+inch/12)*0.3048));
	return 0;
    
}
