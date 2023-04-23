#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
int (*p)[5];//(*p)[5]=&arr;
	(*p)[5]=&arr;
	printf("%d\n",p[0][0]);
}
