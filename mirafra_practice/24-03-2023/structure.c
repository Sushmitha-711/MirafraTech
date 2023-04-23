#include<stdio.h>
struct date
{
	int d;
	int m;
	int y;
};
typedef struct student
{
	int id;
	char name[10];
	struct date dob;
}stu;
int main()
{
	stu s,*p=&s;
	printf("Enter id,name,dob(d-m-y)");
	scanf("%d%s%d%d%d",&p->id,p->name,&p->dob.d,&p->dob.m,&p->dob.y);
	printf("%d\n%s\n%d-%d-%d\n",p->id,p->name,p->dob.d,p->dob.m,p->dob.y);
}
