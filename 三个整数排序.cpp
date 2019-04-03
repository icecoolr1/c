#include <stdio.h>
int main()
{
	printf("-----排序-----\n");
	printf("请分别输入三个整数:\n");
	int a = 0;
	int b = 0;
	int c = 0;
	int t = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("排序前:\n");
    printf("a =%d b =%d c=%d\n",a,b,c);
    printf("排序后:\n");
    if(a>b){	t=a;a=b;b=t;
	
	}
	if(a>c){	t=a;a=c;c=t;
	}
	if(b>c){	t=b;b=c;c=t; 
    }
    printf("a =%d b =%d c =%d",a,b,c);
    return 0;
    

	
	
    
}
