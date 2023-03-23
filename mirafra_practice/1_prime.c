#include "header.h"
int isprime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			break;
	}
	if(i==(n/2)+1)
		return n;
	return 0;

}
