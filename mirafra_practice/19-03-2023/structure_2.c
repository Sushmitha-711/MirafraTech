#include<stdio.h>
 struct sush
{
	 int x;
	char y;
};
int main()
{
	static  struct sush s1;
	printf("%d\n",s1.x);
}
//output:-no error,structure variable can be static
