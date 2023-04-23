#include<stdio.h>
int main()
{
	int n,p;
	printf("Enter num and pos\n");
	scanf("%d%d",&n,&p);
	if(n&(1<<p))
		printf("ON\n");
	else
		printf("OFF\n");
}
