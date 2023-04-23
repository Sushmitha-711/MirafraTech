#include<stdio.h>
#define container(p,int,z)  ((int *)(char *)p-(char *)&(((int *)0)->z))
struct xyz
{
	int x;
	int y;
	int z;
};
int main()
{
	struct xyz  *p;
	printf("%d",container(p,int,z));
}
