#include<stdio.h>
union bit
{
	int x;
/*	union bits
	{
		unsigned int m:5;
		float n:6;
	}s1;*/
	float c;
}s;
int main()
{
//	s.s1.m=2;
//	s.s1.n=4.2;
//printf("%d\t",s.s1.m);
	s.x=10;
	s.c=4.2;
	printf("%d\n%f\n",s.x,s.c);
}
