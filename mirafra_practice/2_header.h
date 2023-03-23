#include<stdio.h>
#include<stdlib.h>
struct student
{
	int  p,cp;
	struct student *next;
};
struct student *createnode(int ,int );
int isprime(int );
void print(struct student *);
