#include<stdio.h>
int main()
{
	register struct xyz
	{
		int x;
	}s1;
	struct xyz s;
	printf("%d\n",s.x);
}
