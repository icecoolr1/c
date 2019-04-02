#include <stdio.h>
void sum(int begin,int end)
{
	int i=0;
	int sum=0;
	for(i=begin;i<=end;i++){
		sum+=i;
	}
	printf("%d到%d的和是%d\n",begin,end,sum);
}
int main()
{
	sum(1,10);
	return 0;
}


