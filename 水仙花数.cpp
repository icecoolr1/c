#include <stdio.h>
int main()
{
	printf("ˮ�ɻ���:");
	int i = 0;//ˮ�ɻ��� 
	int x = 0;//��λ�� 
	int y = 0;//ʮλ�� 
	int z = 0;//��λ�� 
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
