#include<stdio.h>
int strsub(char [],char []);
int main()
{
	char str[100];
	char sub[100];
	printf("Enter string elements:\n");
	scanf("%99[^\n]s",str);
	printf("Enter sub string:\n");
	getchar();
	scanf("%99[^\n]s",sub);
	printf("%d",strsub(str,sub));
}
int strsub(char s[],char sub[])
{
	int i,j,d;
	for(i=0;s[i]!=0;i++)
	{
		d=i;
		for(j=0;sub[j]!=0;j++,d++)
		{
			if(s[d]!=sub[j])
				break;
		}
		if(sub[j]==0)
			return i;

	}
	return -1;
}
