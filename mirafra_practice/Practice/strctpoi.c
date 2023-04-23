#include<stdio.h>
typedef struct notes
{
	int *papers;
}n;
//n m;
int main()
{
	int m=10;
	n s;
	s.papers=&m;
	//int m;
	//*(s.papers)=&m;
	printf("%d",*(s.papers));
}
