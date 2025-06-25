#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],c[5][5],i,j,r,co;
	printf("Enter the number of column and rows:\n");
	scanf("%d%d",&r,&co);
	
	printf("Enter the elements of the first matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the second matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("the sum is:\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
