//Write caluculator program using array of pointer
#include<stdio.h>
#include<string.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void mod(int,int);

int main()
{
	int a,b;
	char op;
	void (*arr[5])(int,int)={add,sub,mul,div,mod};
	printf("Enter any two numbers and operator\n");
	scanf("%d%d",&a,&b);
	getchar();
	scanf("%c",&op);
	switch(op)
	{
		case '+':arr[0](a,b);
			 break;
		case '-':arr[1](a,b);
			 break;
		case '*':arr[2](a,b);
			 break;
		case '/':arr[3](a,b);
			 break;
		case '%':arr[4](a,b);
			 break;


	}

}
void add(int a,int b)
{
	printf("%d\n",a+b);
}
void sub(int a,int b)
{
	printf("%d\n",a-b);
}

void mul(int a,int b)
{
	printf("%d\n",a*b);
}

void div(int a,int b)
{
	printf("%d\n",a/b);
}
void mod(int a,int b)
{
	printf("%d\n",a%b);
}


