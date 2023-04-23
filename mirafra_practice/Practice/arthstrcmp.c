#include<stdio.h>
int mystrcmp(char [],char []);
int main()
{
	int a;
	char s1[20],s2[20];
	printf("Enter two strings\n");
	scanf("%s%s",s1,s2);
	if((a=mystrcmp(s1,s2))==0)
		printf("Both are same\n");
	else if(a<0)
		printf("s2 string in greater\n");
	else
		printf("s1 string is greater\n");
}
int mystrcmp(char *s1,char *s2)
{
	while(*s1==*s2)
	{
		if(*s1=='\0')
			return 0;
		s1++;
		s2++;
	}
	return *s1-*s2;
}
