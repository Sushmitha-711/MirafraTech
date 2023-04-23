#include<stdio.h>
int main()
{
	int n,c;
	printf("Enter any num\n");
	scanf("%d",&n);
	if(n&(n-1)==0)
	{
		c=0;
		while((n&1)==0)
		{
			c++;
			n>>=1;
			printf("%d\n%d\n",c,n);
		}
	}
	if((n==1)||(c&&c%2==0))
		printf("Power of four\n");
	else
		printf("Not power of four\n");

}
