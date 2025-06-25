#include <stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],r,co,i,j,result=0;
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
			c[i][j]=0;
			for(j=0;j<co;j++)
			{
				result= a[i][j] * b[j][i];
				c[i][j] += result;
			}
		}
		printf("the product is:\n");
	
		for(i=0;i<r;i++)
		{
			for(j=0;j<co;j++)
			{
				printf("%d  ",c[j][i]);
			}
			printf("\n");
		}
}
