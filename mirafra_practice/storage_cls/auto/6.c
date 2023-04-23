#include<stdio.h>
int main()
{
	auto struct name
	{
		int x;
	}s1;
	struct name s;
	printf("%d\n",s.x);
	printf("%p\n",&(s.x));
}
