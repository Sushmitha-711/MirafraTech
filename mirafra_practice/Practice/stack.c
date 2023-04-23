#include<stdio.h>
int main()
{
	int a[2];
	if((&a[1]-&a[0])<0)
		printf("Down stack\n");
	else
		printf("Up stack\n");
}
