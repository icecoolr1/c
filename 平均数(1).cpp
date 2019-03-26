#include <stdio.h>
int main()
{
	int a=0;
	int count=0;
	int sum=0;
    do{	scanf("%d",&a);
    if(a!=-1){
	sum+=a;
	count ++;}
	}while(a!=-1);
		printf("%f\n",1.0*sum/count);
	return 0;

}
