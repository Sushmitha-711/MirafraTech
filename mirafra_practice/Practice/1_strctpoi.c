#include<stdio.h>
typedef struct notes
{
	int *papers;
}n;
//n m;
int main()
{
	int m=10;
	n *s;
	s->papers=&m;
	//int m;
	//*(s.papers)=&m;
	printf("%p\n%d\n",(s->papers),*(s->papers));
}
