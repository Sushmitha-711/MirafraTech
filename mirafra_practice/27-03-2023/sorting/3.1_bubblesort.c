//Bubble Sort
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
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(arr[i]>arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				printf("i=%d\nj=%d\n",i,j);
			}
	printf("After sort\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
}
