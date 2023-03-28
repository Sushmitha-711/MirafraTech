#include <stdio.h>
int binarySearch(int arr[], int beg, int end, int sn)
{
	while (beg <= end) {
		int m = beg + end  / 2;

		if (arr[m] == sn)
			return m;

		if (arr[m] < sn)
			beg = m + 1;

		else
			end= m - 1;
	}
	return -1;
}

int main(void)
{
	int n,i,sn;
	printf("Enter array size\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements in accending order\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter searching element:\n");
	scanf("%d",&sn);
	int result = binarySearch(arr, 0, n - 1, sn);
	if(result == -1) 
		printf("Element is not present in array\n");
	else				
		printf("Element is present at index %d\n",result);
	return 0;
}

