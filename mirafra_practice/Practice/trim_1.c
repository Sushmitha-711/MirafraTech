#include<stdio.h>
#include<string.h>
void trim(char []);
int main()
{
	char s[40];
	printf("Enter string\n");
	scanf("%[^\n]s",s);
	trim(s);
	printf("%s",s);
}
void trim(char s[])
{
	int i=0,j;
	while(s[i])
	{
		if(s[0]==' ')
		{
			for(j=0;s[j];j++)
				s[j]=s[j+1];
		}
		else if(s[i]==' '&&((s[i+1]==' ')||(s[i+1]=='\0')))
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
		}
		else
			i++;
	}
}
