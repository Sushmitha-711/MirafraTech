#include "header.h"
void print(struct student *T)
{
	while(T)
	{
		printf("%d\n",T->num);
		T=T->next;
	}
}
