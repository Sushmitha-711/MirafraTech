#include "2_header.h"
struct student *createnode(int n,int m)
{
	struct student *new=(struct student *)malloc(sizeof(struct student));
	new->p=n;
	new->cp=m;
	new->next=NULL;
	return new;
}
