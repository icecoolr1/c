#include <stdio.h> 
int main()
{
	printf("请输入您的成绩：\n");
	const int pass= 60;
	int score=0;
	scanf("%d",&score);
	if(score<pass)
	printf("很抱歉，你没有及格。\n");
	else{
		printf("恭喜你！及格了！\n");
		printf("再见。\n");
		
		 
	}
	return 0;
}
