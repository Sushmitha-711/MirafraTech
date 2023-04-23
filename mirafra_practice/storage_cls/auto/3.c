#include<stdio.h>
void fun(auto int a)
{
	printf("%d\n",a);
}
int main()
{
	int a;
	fun(a);
}//error for using storage classes while passing arguments
