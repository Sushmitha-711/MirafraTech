#include<stdio.h>
int main()
{
	int n,i,j,sum=0,rem;
	printf("Enter any num\n");
	scanf("%d",&n);
	printf("%d\n",n);
	for(j=1;n!=0;j*=10)
	{
		rem=n%2;
		sum+=rem*j;
//		printf("sum=%d\n",sum);
		n>>=1;
//printf("%d..",n);
	}
printf("%d",sum);
}
