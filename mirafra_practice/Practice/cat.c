#include<stdio.h>
void mystrcat(char *,char *);
int main()
{
	char s1[20]="mirafra",s2[20]="technologies";
	mystrcat(s1,s2);
	
	printf("%s\n",s1);
}
void mystrcat(char *d,char *s)
{
	while(*d)
	{
		d++;
	}
	while(*s)
	{
		*d=*s;
		d++;
		s++;
	}
//	printf("%s",d);
}
