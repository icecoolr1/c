#include <stdio.h>
int main()
{
	int score =0;
	scanf("%d",&score);
	int t1=score/10;
	
	switch(t1){
		case 10:
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		default:
		    printf("F\n");
		    break;
	}
	return 0;
	
}
