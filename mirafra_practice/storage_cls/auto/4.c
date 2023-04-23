#include<stdio.h>
auto void fun(void);
int main()
{
	fun();
}
void fun(void)
{
	static int a;
	printf("%d",a);
}
//error for using auto keyword for fun declaration
