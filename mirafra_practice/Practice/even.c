#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	if((n&0x01)==0)
		printf("Even\n");
	else
		printf("Odd\n");
}
