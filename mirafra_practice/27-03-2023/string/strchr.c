#include<stdio.h>
#include<string.h>
int strchar(char s[],char c);
int main()
{
	char s[100];
	int str;
	printf("Enter the string:\n");
	scanf("%99[^\n]s",s);
	char c;
	printf("Enter any character:\n");
	getchar();
	scanf("%c",&c);
//	char s[]="kernel";
	str=strchar(s,c);
	printf("%d\n",str);
}
int strchar(char s[],char c)
{
	int i,j,d=0;
	for(j=0;s[j]!=0;j++);
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==c)
		{
			break;
		}
	
	}
if(i==j)
	return -1;
else 
	return i;
}
