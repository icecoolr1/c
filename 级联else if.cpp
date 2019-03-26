#include <stdio.h>
int main()
{
	int a=0;
    scanf("%d",&a);
    int f=0;
    if (a<0){
    	f=-1;
	}else if(a==0){f=0;
	}else{f=2*a;
	}
	printf("%d",f);
	return 0;
}
	
