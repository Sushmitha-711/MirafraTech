#include<stdio.h>
#include<string.h>
void rev(int ,char *,int );
int main()
{
	char str[100];
	int n;
	printf("Enter a string\n");
	scanf("%s",str);
	n=strlen(str);
	rev(0,str,n-1);
		printf("%s",str);
}
void rev(int i,char *s,int n)
{
	if(i>n)
		return;
	else
	{
		char temp;
		temp=s[i];
		s[i]=s[n];
		s[n]=temp;
	}
	rev(++i,s,--n);
}

