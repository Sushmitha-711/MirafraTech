#include "header.h"
int main()
{
	int n,i;
	struct student *N=NULL,*H=NULL,*L=NULL;
	printf("Enter any number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(isprime(i))
		{
			N=createnode(i);
			if(!H)
				H=N;
			else
				L->next=N;
			L=N;
		}
	}
	print(H);
	return 0;
}
