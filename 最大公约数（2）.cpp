#include <stdio.h>
int main()
{
	int a,b;
	int t;
	scanf("%d %d",&a,&b);
	while(b!=0){	
	  
	  t=a%b;
	  a=b;
	   b=t;
	   
	   
	}
	printf("%d",a);
}
a  b  t
12 18 0
18 12 6
12 6  2
6  0  0    


