#include<stdio.h>
int mystrcmp(char [],char []);
int main()
{
	char s1[20]="mirafra",s2[20]="mirafra";
	if(mystrcmp(s1,s2)==0)
		printf("Both are same\n");
	else
		printf("Both are not same\n");
}
int mystrcmp(char s1[],char s2[])
{
	int i=0;
	while(s1[i]==s2[i])
	{
		if(s1[i]=='\0')
			return 0;
		i++;
	}
	return s1[i]-s2[i];
}
