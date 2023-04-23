#include<stdio.h>
union shop
{
	int customers;
	float price;
	char shopname[10];
	int *s=&customers;
};
int main()
{

}
