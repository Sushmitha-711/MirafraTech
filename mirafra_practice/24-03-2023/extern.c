#include<stdio.h>
int main()
{
	extern int a;
	printf("%d",a);
}
int a=10;
//output:-10
