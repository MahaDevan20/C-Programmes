#include<stdio.h>
int main()
{
	int n,i,max;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	
	for(i=1;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("Largest element in the array is %d",max);
	return 0;
}
