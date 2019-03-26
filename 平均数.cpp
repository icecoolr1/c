#include <stdio.h>
int main()
{
	int a=0;
	int count=0;
	int sum=0;

		scanf("%d",&a);
	while	(a!=-1){	
		sum+=a;
		count ++;
		scanf("%d",&a); 
	};

		
	
	printf("%f\n",1.0*sum/count);
	return 0;
}
