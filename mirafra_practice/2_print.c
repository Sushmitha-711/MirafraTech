#include "2_header.h"
void print(struct student *T)
{
	while(T)
	{
		printf("%d\t%d\n",T->p,T->cp);
		T=T->next;
	}
}
