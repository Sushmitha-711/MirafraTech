#include<stdio.h>
int main()
{
	int x;
	printf("Enter any value\n");
	scanf("%d",&x);
	printf("Adding one:%d",-(~x));
}
