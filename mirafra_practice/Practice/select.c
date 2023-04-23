#include <stdio.h>
void selectionSort(int arr[], int n) 
{
	for (int i = 0; i < n-1; i++) 
	{
		int min_idx = i;
		for (int j = i+1; j < n; j++) 
		{
			if (arr[j] < arr[min_idx]) 
			{
				min_idx = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
	}
}
int main() 
{
	int n,i;
	printf("Enter array size\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	selectionSort(arr, n);
	printf("Sorted array: ");
	for (int i = 0; i < n; i++) 
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
