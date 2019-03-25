#include <stdio.h> 
int main()
{
	const int minor=35;
	printf("请输入您的年龄:");
	int age=0;
	scanf("%d",&age);
	if(age<minor){
		printf("你还年轻，头发还没掉光，趁这段时间赶紧学c++吧");
	}
	else printf("old solider never die ,they will fall over.") ;
	return 0;
}
