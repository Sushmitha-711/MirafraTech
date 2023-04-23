#include<stdio.h>
int main()
{
	int n;
	char c;
	printf("Enter any number\n");
	scanf("%x",&n);
	c=(n>>4)|(n<<4);
	printf("%x\n",c);
}
