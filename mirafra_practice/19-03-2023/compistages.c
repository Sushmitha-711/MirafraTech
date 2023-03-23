#include<stdio.h>
#define MAX 10
int y=20;
//static int m=100;
int main()
{
	static int m=23;//testing compilation stages
	int x=5;
#ifdef MAX
	x=x+MAX;
#else
	x=x-MAX;
#endif
	return 0;
}
