#include<stdio.h>
int main()
{
	int n=-10,i,j;
	for(i=sizeof(n)*8-1;i>=0;i--)
	{
	
		if(n&(0x01<<i))
		
			printf("1");
		
		else
			printf("0");
		//j=j<<1;
	}
}
