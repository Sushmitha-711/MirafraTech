#include<stdio.h>
static struct xyz
{
	int x;
	int y;
}s1;
int main()
{
	//struct xyz s1={1,2};
	s1.x=1;
	s1.y=2;
	printf("%d",s1.x);
}
