#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers\n");
	scanf("%d%d",&x,&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("Modified values:x=%d\ny=%d\n",x,y);
}
