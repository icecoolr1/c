#include <stdio.h>
int main()
{
	
	printf("������һ������,���س�������!\n");
	
	int type;
	scanf("%d",&type);
	switch(type) {
		case 9:
			printf("��������Ϊ:   9\n");
			printf("ǰ������Ϊ:   8\n");
			printf("��������Ϊ:   0\n");
			break;
		case 0:
			printf("��������Ϊ:   0\n");
			printf("ǰ������Ϊ:   9\n");
			printf("��������Ϊ:   1\n");
			break;
		default:
			printf("��������Ϊ:   %d\n",type);
			printf("ǰ������Ϊ:   %d\n",type-1);
			printf("��������Ϊ:   %d\n",type+1) ;
			break;
		
	}
	return 0;
}
	
