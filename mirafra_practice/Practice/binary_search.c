#include<stdio.h>
int binary_search(int [],int ,int ,int );
int main()
{
	int arr[5],i,n,a;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter sarching element\n");
	scanf("%d",&n);
	a=binary_search(arr,0,4,n);
	if(a==-1)
		printf("The element not found\n");
	else
		printf("Element is found at index:%d",a);
}
int binary_search(int arr[],int f,int l,int n)
{
	int mid;
	while(f<=l)
	{
		mid=(f+l)/2;
		if(arr[mid]==n)
			return mid;
		else if(arr[mid]<n)
			f=mid+1;
		else
			l=mid-1; 
	}
	return -1;
}
