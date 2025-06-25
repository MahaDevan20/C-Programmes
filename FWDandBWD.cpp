#include<stdio.h>
int main()
{
	int a[5][5],b[5],c[5],i,j,r,co,flag=0;
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
		for(j=co-1;j>0;j--)
		{
			c[i]=a[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=co-1;j>0;j--)
		{
			b[i]=a[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		if(c[i] == b[i]){
			flag++;
		}
		
	}
	if(flag > 0){
		printf("The forward diagonal and the Backward diagonals are same");
	}
	else{
		printf("The forward diagonal and the Backward diagonals are not same");
	}
	return 0;
}
