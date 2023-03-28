#include<stdio.h>
#include<string.h>
void mystrcat(char d[],char s[]);
int main()
{
	char s[]="kernel";
	char d[15]="masters";
	mystrcat(d,s);
	printf("%s\n",d);
}
void mystrcat(char d[],char s[])
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=0;s[j]!=0;j++,i++){
		d[i]=s[j];

	}

}
