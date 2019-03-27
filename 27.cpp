#include <stdio.h> 
int main()
{
	printf("*****Time*****\n");
	printf("1    morning\n");
	printf("2    afternoon\n");
	printf("3    night\n");
	printf("please enter your choice:");
	
	int type=0;
	scanf("%d",&type);
	switch(type){
		case 1:
			printf("Good morning");
			break;
		case 2:
			printf("Goof afternoon");
			break;
		case 3:
			printf("Good night");
			break;
		default:
			printf("Selection error!");
			break;
}
	
}
