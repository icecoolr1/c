#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int min;
	if(a<b){
		min=a;
	} else{
		min=b;
	}
	int i;
	int rent;
	for(i=1;i<min;i++){
		if(a%i==0){	if(b%i==0){rent =i;
		}
	  }
	}
	printf("%d",rent);
	return 0;
}
