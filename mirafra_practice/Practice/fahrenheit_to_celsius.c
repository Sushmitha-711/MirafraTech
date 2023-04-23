#include<stdio.h>
float fun(float);
int main()
{
	float f;
	printf("ENter temperature\n ");
	scanf("%f",&f);
	printf("%f",fun(f));
}
float fun(float f)
{
	return ((f-32.0)*5.0/9.0);
}

