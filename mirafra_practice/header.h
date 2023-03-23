#include<stdio.h>
#include<stdlib.h>
struct student
{
	int  num;
	struct student *next;
};
struct student *createnode(int );
int isprime(int );
void print(struct student *);
