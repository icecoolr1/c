#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int i=1;
	int isprime=1;
	for(i=2;i<x;i++){	
	    x%i==0;
	    isprime==0;
	    break;
	}
	if(isprime==0){	printf("not");
	} else{	printf("yes");
	}
	return 0;
}
