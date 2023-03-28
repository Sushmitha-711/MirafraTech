//swap two variable without using third variable
#include<stdio.h>
static inline void swap(int *a,int *b)
 {
         (*a)=(*a)+(*b);
         (*b)=(*a)-(*b);
         (*a)=(*a)-(*b);
 }
void swap_bitwise(int *m,int *n)
{
*m=*m^*n;
*n=*m^*n;
*m=*m^*n;
}
int main()
{
	int a,b;
	printf("Enter two numbers\n");
//	getchar();
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("a=%d\nb=%d",a,b);
	 swap_bitwise(&a,&b);
	printf("a=%d\nb=%d",a,b);

}

