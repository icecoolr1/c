#include<stdio.h>
int main()
{
	int a=0;
	printf("请输入学生成绩:");
	scanf("%d",&a);
	if(a>=90){	printf("您的等级为  A");
	}else if(a>80){	printf("您的等级为  B");
	}else if(a>70){printf("您的等级为  C");
	}else if(a>60){printf("您的等级为  D");}
	 else {printf("您的等级为  E");
	 }
	 return 0;
	
	
}
