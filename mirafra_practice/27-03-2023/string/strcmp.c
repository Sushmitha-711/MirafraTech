#include<stdio.h>
#include<string.h>
int mystrcmp(char [],char []);
int main()
{
	int n1,n2,x;
	printf("Enter size of first string:\n");
	scanf("%d",&n1);
	printf("Enter size of second string:\n");
	scanf("%d",&n2);
	char s1[n1];
	char s2[n2];
	printf("Enter the characters for string1:\n");
	getchar();
	scanf("%[^\n]s",s1);
	getchar();
	printf("Enter the characters for string2:\n");
	scanf("%[^\n]s",s2);
	x=mystrcmp(s1,s2);
	printf("%d\n",x);
}
int mystrcmp(char s1[],char s2[])
{
	int i,j;
	for(i=0;s1[i]!=0;i++)
	{
	
		
			if(s1[i]<s2[i])
				return -1;
			else if(s1[i]>s2[i])
				return 1;

		}

	
	if(s1[i]==0&&s2[i]==0)
		return 0;
	if(s1[i]==0&&s2[i]!=0)
		return -1;
	if(s1[i]!=0&&s2[i]==0)
		return 1;


}
