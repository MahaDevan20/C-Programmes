#include <stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],ar,ac,br,bc,i,j,sum=0;
		printf("Enter the number of column and rows:\n");
		scanf("%d%d",&ar,&ac);
		
		printf("Enter the elements of the first matrix:\n");
		for(i=0;i<ar;i++)
		{
			for(j=0;j<ac;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		
		printf("Enter the number of column and rows:\n");
		scanf("%d%d",&br,&bc);
		if(ac != br){
			printf("Multiplication is not possible!");
			return 0;
		}
		printf("Enter the elements of the second matrix:\n");
		for(i=0;i<br;i++)
		{
			for(j=0;j<bc;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		
			for(i=0;i<ar;i++){
				for(j=0;j<bc;j++){
					for(int k=0;k<ac;k++){
						sum +=a[i][k] * b[k][j];
					}
					c[i][j]=sum;
					sum=0;
				}
			}
	
		
		printf("the product is:\n");
	
		for(i=0;i<ar;i++)
		{
			for(j=0;j<bc;j++)
			{
				printf("%d  ",c[i][j]);
			}
			printf("\n");
		}
		return 0;
}
