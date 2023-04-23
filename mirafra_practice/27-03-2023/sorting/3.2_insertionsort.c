//Insertion Sort
#include<stdio.h>
int main()
{
	int n,i,j,key;
	printf("Enter array size \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=1;i<n;i++)
	{
	key=arr[i];
	while(arr[i]>key)
	{

	}
	}
	printf("After sort\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
}
