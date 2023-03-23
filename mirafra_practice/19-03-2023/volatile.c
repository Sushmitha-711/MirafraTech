#include<stdio.h>
int main()
{
	volatile int m=0;
	int i=0,n;
	for(i=0;i<10;i++)
		n=m+1;
	printf("%d\n",n);
}
//here the m is stored in memory,it doesn't request cpu for register ,bcoz of using volatile keyword
