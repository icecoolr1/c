#include <stdio.h>
int main()
{
	int x=0;
	int b=0;
	int c=0;
	scanf("%d",&x);
	while(x>0){
		b=x%10;
		c=c*10+b;
		x/=10;
	}
	printf("%d",c);
	return 0;
}
321
1 1
2 12
3 123

