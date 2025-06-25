#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],i,j,r,co;
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
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			b[i][j] = a[j][i];
		}
	}
	
	printf("the Transpose of the matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	
		
	return 0;
	
	
}
