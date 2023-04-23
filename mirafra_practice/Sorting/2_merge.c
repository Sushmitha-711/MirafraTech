#include<stdio.h>
void divide(int [],int,int);
void merge(int [],int ,int ,int );
int main()
{
	int n,i,left,right;
	printf("Enter array size\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	left=0,right=n;
	divide(arr,left,right);

}
void divide(int arr[],int left,int right)
{
	int mid;
	if(left>right)
		return;
	divide(arr,left,mid;
	divide(arr,mid+1,right);
	merge(arr,left,right,mid);
}
void merge(int arr[],int left,int right,int mid)
{

}
