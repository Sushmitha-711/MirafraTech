#include "2_header.h"
int main()
{
	int n,i=1,a,b,c,j;
	struct student *N=NULL,*H=NULL,*L=NULL;
	printf("Enter any number:\n");
	scanf("%d",&n);
	while(1)
	{
		a=isprime(i);
		i++;
		if(a>0)
			{
				break;
			}
	}
	for(;i<=n;i++)
	{
		b=isprime(i);
		if(b>0)
		{
			c=b;
		}
		if(b>0&&(c-a)==2)
		{
			N=createnode(a,i);
			if(!H)
				H=N;
			else
				L->next=N;
			L=N;
		}
		a=c;
	}
	print(H);
	return 0;
}
