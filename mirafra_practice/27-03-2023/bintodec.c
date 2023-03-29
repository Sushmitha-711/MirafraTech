#include<stdio.h>
int binary_to_decimal(int n)
{
	int rem,pow=1,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=rem*pow+sum;
		pow=pow*2;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n;
	printf("Enter binarynumber\n");
	scanf("%d",&n);
	printf("%d\n",binary_to_decimal(n));
	return 0;
}
