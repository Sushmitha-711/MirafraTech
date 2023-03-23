#include<stdio.h>
int main()
{
	const int x;
	int *p=(int*) &x;
	printf("%d",x);
}
