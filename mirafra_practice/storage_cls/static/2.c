#include<stdio.h>
static void fun(int);
int main()
{
	int a;
	fun(a);
}
/*static void fun(int a)
{
	printf("%d\n",a);
}*/// undefined reference when compiled with another program 
