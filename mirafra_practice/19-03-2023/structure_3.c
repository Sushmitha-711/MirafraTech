#include<stdio.h>
static struct sush
{
	 int x;
	char y;
};
int main()
{
	struct sush s1;
	printf("%d\n",s1.x);
}
//output:-warning,unless storage class specifier in empty declaration
