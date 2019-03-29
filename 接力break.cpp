#include <stdio.h>
int main()
{
	int x;
	int one=0;
	int two=0;
	int three=0;
	int prime=0;
	scanf("%d",&x);
	for( one =1;one<x*10;one++){
		for( two=1; two<x*10/2;two++){
			for(three=1;three<x*10/3;three++){
				if(one+two*2+three*5==x*10){
				
				printf("可以用%d个1角加%d个2角加%d个5角得到%d元.",one,two,three,x);
				prime=1;
				break;
			}
			}if(prime==1)break;
		}	if(prime==1)break;
	}
	
	
		return 0;
	}

