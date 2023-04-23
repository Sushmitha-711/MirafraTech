#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r,c,i,j;
	printf("Enter rows and columns\n");
	scanf("%d%d",&r,&c);
	int **p=(int **)malloc(r*sizeof(int *));
//	for(i=0;i<r;i++)
		//p[i]=(int *)malloc(c*sizeof(int));
	printf("Enter the array elemwnts\n");
	for(i=0;i<r;i++)
	{
		p[i]=(int *)malloc(c*sizeof(int));
		for(j=0;j<c;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	printf("The array elements \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\n",p[i][j]);

		}
	}

	for(i=0;i<r;i++)
			free(p[i]);
}
