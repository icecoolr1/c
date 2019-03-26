#include <stdio.h>
int main()
{    
	int t=0;
	scanf("%d",&t);
	switch (t<0)
	{
		case 1:
			printf("%d",-1);
			break;}
	switch (t==0)
	{
			case 1:
			printf("%d",0);
			break;}
	switch (t>0)
	{
			case 1:
			printf("%d",2*t);
			break;
	}
	return 0;
}
