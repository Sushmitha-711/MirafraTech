#include "header.h"
struct student *createnode(int n)
{
	struct student *new=(struct student *)malloc(sizeof(struct student));
	new->num=n;
	new->next=NULL;
	return new;
}
