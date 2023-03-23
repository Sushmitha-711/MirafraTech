//dynamic memory allocation for 2d array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **arr,r,c,i;
	printf("Enter rows and columns\n");
	scanf("%d%d",&r,&c);
	arr=(int**)malloc(r*sizeof(int*));
	for(i=0;i<r;i++)
		arr[i]=(int*)malloc(c*sizeof(int));
	for(i=0;i<r;i++)
		free(arr[i]);
	free(arr);
}
