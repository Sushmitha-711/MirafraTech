#include<stdio.h>
int fun(int ,int );
int main()
{
	int base,power;
	printf("Enter base and power\n");
	scanf("%d%d",&base,&power);
	printf("%d",fun(base,power-1));
}
int fun(int base,int power)
{
	if(power<0)
		return 1;
	return base*fun(base,power-1);
}
