#include <stdio.h>
int main()
{
	printf("������һ��1-10������:\n");
	int n;
	int i;
	int x;
	int sum = 1;
	scanf("%d",&n);
	x = n;
	for(i=1;i<=n;i++){
		sum*=i;
	}
	printf("%d!=%d",x,sum);
}
