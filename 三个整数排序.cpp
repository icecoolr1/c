#include <stdio.h>
int main()
{
	printf("-----����-----\n");
	printf("��ֱ�������������:\n");
	int a = 0;
	int b = 0;
	int c = 0;
	int t = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("����ǰ:\n");
    printf("a =%d b =%d c=%d\n",a,b,c);
    printf("�����:\n");
    if(a>b){	t=a;a=b;b=t;
	
	}
	if(a>c){	t=a;a=c;c=t;
	}
	if(b>c){	t=b;b=c;c=t; 
    }
    printf("a =%d b =%d c =%d",a,b,c);
    return 0;
    

	
	
    
}
