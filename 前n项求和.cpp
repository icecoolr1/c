#include <stdio.h>
int main()
{
	int a=0;
	scanf("%d",&a);
	int i;
	double sum;
	int sign=1;
	for(i=1;i<=a;i++){	
		sum+=1.0*sign/i;
		sign=-sign;
	}
	printf("f(%d)=%f",a,sum);
	return 0;
}
