#include<stdio.h>
void selection(int arr[],int n);
int main()
{
	int n,i;
	printf("Enter size\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	selection(arr,n);
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);

}
void selection(int arr[],int n)
{
int i,j,temp,T;
	for(i=0;i<n-1;i++)
	{
		temp=i;
		for(j=i+1;i<n;j++)
		{
			if(arr[j]<arr[temp])
				temp=j;
		}
		T=arr[i];
		arr[i]=arr[temp];
		arr[temp]=T;
	}
}
