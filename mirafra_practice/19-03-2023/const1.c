#include<stdio.h>
int main()
{
	const int x=10;
	int *p=&x;
	printf("%d",x);
}
//output:initialization discards ‘const’ qualifier from pointer target type int *p=&x;
