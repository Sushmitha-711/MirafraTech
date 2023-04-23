#include<stdio.h>
int main()
{
	int *p,c[3]={10,1,5};
	p=c;
	int a,b;
//	a=++*p;
	b=*p++;
	a=*p++;
	a=(1,2,3);
	printf("%d",a);
}
