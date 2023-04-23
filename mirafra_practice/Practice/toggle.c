#include<stdio.h>
int main()
{
	int n,bit;
	scanf("%d%d",&n,&bit);
	printf("%d\n",n=n^(1<<bit));
}
