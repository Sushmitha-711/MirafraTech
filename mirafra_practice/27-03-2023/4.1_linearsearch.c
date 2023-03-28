//Linear Search
#include<stdio.h>
int search(int [],int ,int );
int main()
{
	int n,sn,i,x;
	printf("Enter array size\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter sub string\n");
	scanf("%d",&sn);
	x=search(arr,n,sn);
	if(x>-1)
		printf("The index of num:%d\n",x);
	else
		printf("Number dismatched\n");
}
int search(int arr[],int n,int sn)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==sn)
			return i;
	}
	return -1;
}
