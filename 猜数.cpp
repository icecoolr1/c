#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int a=rand()%100;
	int count=0;
	int b=0;

	do{	printf("������һ������\n");
	scanf("%d",&b);
		count++;
		if(a>b){	printf("С��\n");
		}else if(a<b) {	printf("����\n");
		}
		}while(a!=b);
		printf("������%d�β¶���\n",count);
		return 0;
	}

