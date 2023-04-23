#include<stdio.h>
int atoi(const char []);
int main()
{
	char str[20];
	int a;
	printf("Enter a string\n");
	scanf("%s",str);
	a=atoi(str);
	printf("%d",a);
}
int atoi(const char s[])
{
	int i=0,sum=0,sign=1;
	if(s[0]=='-')
	{
		 sign=-1;
		i++;
	}
	while(s[i])
	{
		if(s[i]>='0'&&s[i]<='9')
			sum=sum*10+s[i]-'0';
		else
			break;
		i++;
	}	
	return sign*sum;
}
