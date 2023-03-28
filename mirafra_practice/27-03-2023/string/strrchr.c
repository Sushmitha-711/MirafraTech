#include<stdio.h>
#include<string.h>
int strrchar(char s[],char c);
int main()
{
	int str;
	char c;
	printf("Enter any character:\n");
	scanf("%c",&c);
	char s[]="kernel";
	str=strrchar(s,c);
	printf("%d\n",str);
}
int strrchar(char s[],char c)
{
	int i,last;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==c)
		{
			last=i;
		}
	}

	return last;
}
