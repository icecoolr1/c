#include <stdio.h> 
int main()
{
	int score=0;
	scanf("%d",&score);
	if(score>=90){	printf("A\n");
	} else if(80<=score){	printf("B\n");
	} else if(70<=score){	printf("c\n");
	} else if(60<=score){	printf("D\n");
	} else if(score<60)  {	printf("E\n");
	}
	return 0;
	}

