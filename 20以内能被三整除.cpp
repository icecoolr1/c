#include <stdio.h>
int main()
{
	printf("20以内能被3整除的数:\n");
	int i = 0;
	for(i=1;i<=20;i++){
		if(i%3==0){
			printf("%d ",i);
		}
	}
}
