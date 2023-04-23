#include<stdio.h>
int main()
{
	int n,j=1,sum=0,rem;
	printf("Enter a binary number\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum+=rem*j;
		j<<=1;
		n=n/10;
	//	i--;
	}
	printf("%d\n",sum);
}
