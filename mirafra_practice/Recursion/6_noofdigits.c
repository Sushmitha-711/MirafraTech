#include<stdio.h>
int digits(int );
int main()
{
	int n,m;
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("%d\n",digits(n));
//	m=digits(n);
}
int digits(int n)
{
	static int c=0;
	int r;
	if(n==0)
		return 1;
	if(n<=0)
		return -1;
	else
	{
		//r=n%10;
		c++;
		digits(n/10);
	}
	return c;
}
