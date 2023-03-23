#include "2_header.h"
int main()
{
	int n1,n2,i,a,b,c,j;
	struct student *N=NULL,*H=NULL,*L=NULL;
	printf("Enter two numbers:\n");
	scanf("%d%d",&n1,&n2);
	while(1)
	{
		a=isprime(n1);
		n1++;
		if(a>0)
			{
				break;
			}
	}
	for(i=n1;i<=n2;i++)
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
