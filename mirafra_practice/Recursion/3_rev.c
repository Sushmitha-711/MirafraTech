#include<stdio.h>
void rev(char []);
int main()
{
	char str[100];
	printf("Enter any string\n");
	scanf("%s",str);
	rev(str);
}
void rev(char *s)
{
	if(*s)
	{
		rev(s+1);
		printf("%c",*s);
	}
}
