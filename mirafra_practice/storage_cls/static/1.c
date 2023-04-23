#include<stdio.h>
void fun(static int a)
{
	printf("%d\n",a);
}
int main()
{
	static int a=5;
	fun(a);
}//error static used while sending the argument
