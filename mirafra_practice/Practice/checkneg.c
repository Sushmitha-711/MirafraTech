#include<stdio.h>
int main()
{
	int n;
	printf("Enter a num\n");
	scanf("%d",&n);
	if((n>>sizeof(n)*8-1)==1)
		printf("Negative\n");
	else
		printf("Positive\n");
}
