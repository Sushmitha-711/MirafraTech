#include<stdio.h>
#include<string.h>
void mystrcpy(char [],char []);
int main()
{
	char str[]="kernel";
	char dtr[10];
	mystrcpy(dtr,str);
	printf("%s\n",dtr);
}
void mystrcpy(char dtr[],char str[])
{
	int i=0;
	while(str[i]!=0)
	{
		dtr[i]=str[i];
		i++;
	}
	dtr[i]=str[i];
}
