//Insertion Sort
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter array size \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("After sort\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
}
