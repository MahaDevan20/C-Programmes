#include<stdio.h>
int main()
{
	int a[5][5],i,j,r,co;
	printf("Enter the number of column and rows:\n");
	scanf("%d%d",&r,&co);
	
	printf("Enter the elements of the matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	for(i=0;i<r;i++)
	{
		int Rsum=0;
		for(j=0;j<co;j++)
		{
			Rsum+=a[i][j];
		}
		printf("Sum of the %d row is %d\n",i+1,Rsum);
	}
	
	for(j=0;j<co;j++)
	{
		int Csum=0;
		for(i=0;i<r;i++)
		{
			Csum+=a[i][j];
		}
		printf("Sum of the %d column is %d\n",j+1,Csum);
	}
	
		
	return 0;
	
	
}
