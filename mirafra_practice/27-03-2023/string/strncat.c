#include<stdio.h>
#include<string.h>
void mystrncat(char d[],char s[],int );
int main()
{
	int n;
	char s[]="kernel";
	char d[15]="masters";
	printf("Enter n value:\n");
	scanf("%d",&n);
	mystrncat(d,s,n);
	printf("%s\n",d);
}
void mystrncat(char d[],char s[],int n)
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=0;s[j]!=0&&j<n;j++,i++){
		d[i]=s[j];

	}

}
