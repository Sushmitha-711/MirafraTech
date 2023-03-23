#include<stdio.h>
typedef union 
{
	int x;
	char y;
	float z;
}sush;
int main()
{
	sush s={4,'a',3.2};
	printf("%d\n%c\n%f",s.x,s.y,s.z);//4,G.V,G.V
}//a and 3.2 is exess
