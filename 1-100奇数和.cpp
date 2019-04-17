#include <stdio.h>
int main()
{
	int i ;
	int sum =0;
	for(i=1;i<100;i++){
		if(i%2!=0){
			sum+=i;
		}
	}printf("1+3+5+...+99=%d",sum);
}
