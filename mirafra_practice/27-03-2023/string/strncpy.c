#include<stdio.h>
#include<string.h>
void mystrncpy(char [],char [],int );
int main()
{
	int n;
	char str[]="kernel";
	char dtr[10]="masters";
	printf("enter n value:\n");
	scanf("%d",&n);
	mystrncpy(dtr,str,n);
	printf("%s\n",dtr);
}
void mystrncpy(char dtr[],char str[],int n)
{
	int i=0;
	while(str[i]!=0&&i<n)
	{
		dtr[i]=str[i];
		i++;
	}

}
