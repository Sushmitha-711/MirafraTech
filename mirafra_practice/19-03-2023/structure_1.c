#include<stdio.h>
 struct sush
{
	static int x;
	char y;
};
int main()
{
	 struct sush s1;
	printf("%d\n",s1.x);
}
//output:-error,should not use strorage classes inside the structure
