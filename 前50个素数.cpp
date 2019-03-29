#include <stdio.h>
int main()
{
	int x;
	int count=0;
    for(x=1;count<=50;x++){
	int i;
	int isprime=1;
	for(i=2;i<x;i++){	
	   if( x % i==0){
	    isprime=0;
	    break;
	   }}
		if(isprime==1){
			count++;
			printf("%d\t ", x);
		    if(count%5==0){	printf("\n");
			}
	} 
    }
	return 0;
}
