#include <stdio.h>
int main()
{
//	1 2 3
//	2 4 5
//	3 5 6

	int a[5][5],n,i,j,flag=1;
	
	printf("Enter the number rows or columns:");
	scanf("%d",&n);
	
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	
	for(i=0; i<=n-1 ;i++){
		for(j=i+1;j<=n-1;j++)
			
				if(a[i][j] != a[j][i]){
					
					flag=0;
				}	
		
	}
	
	if(flag!=0){
		printf("equal");
	}
	else{
		printf("not equal");
	}
	return 0;
}
