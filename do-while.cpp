#include <stdio.h>
int main()
{
	int a=0,n=0;
	scanf("%d",&a);
	do {	n++;
	a/=10;
	}while(a>0);
	printf("%d",n);
	return 0;
	
}
