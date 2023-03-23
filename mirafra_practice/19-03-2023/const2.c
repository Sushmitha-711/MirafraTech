#include<stdio.h>
int main()
{
	const char x='x';
	int *p=&x;
	printf("%d",x);
}
//output:initialization from incompatible pointer type [-Wincompatible-pointer-types]
//  int *p=&x;
//         ^

