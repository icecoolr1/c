#include <stdio.h>
int main()
{
	int a=4,b=5;
	int t;
	t=a;
	a=b;
	b=t;
	printf("a=%d b=%d",a,b);
	return 0;
}
