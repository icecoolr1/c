#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	scanf("%d %d %d",&a,&b,&c);
	int max=0;
	if(a>b){if(a>c){max=a;
	}else{max=c;
	}}else{if(b>c){max=b;
	}else{max=c;
	}
	}
	printf("%d",max);
	return 0;


}
