#include <stdio.h>
int main()
{
	printf("水仙花数:");
	int i = 0;//水仙花数 
	int x = 0;//百位数 
	int y = 0;//十位数 
	int z = 0;//个位数 
	for(i=100;i<1000;i++){
		x =i/100;
		y =(i%100)/10;
		z =i%10;
		if(i==x*x*x+y*y*y+z*z*z){
			printf("%d ",i);
		} 
	}
	printf("\n");
}
