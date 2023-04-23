#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter any number\n");
	scanf("%x",&n);
	for(i=0,j=(sizeof(n)*8-1);i<j;j--,i++)
	{
		if((n&(1<<i))!=(n&(1<<j)))
		{
		n=(n^(1<<j));
		n=(n^(1<<i));
		}
//		printf("%d\n",n);
	}
	printf("%x\n",n);
}
