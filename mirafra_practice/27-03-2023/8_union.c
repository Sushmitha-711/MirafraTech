#include<stdio.h>
typedef union conv
{
int x;
}conv;
int main()
{
	conv c;
	printf("Enter hex number : ");
	scanf("%x",&c.x);
	c.x=((c.x>>24)|(c.x>>8 & 0x0000ff00)|(c.x<<8 & 0x00ff0000)|(c.x<<24));
	printf("big endian = 0x%x\n",c.x);
	return 0;
}


