#include<stdio.h>
int main()
{
	int i,n,max,max2;
	printf("Number of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	
	if(a[0] > a[1]) {
			max = a[0];
			max2 = a[1];
	}
	else {
			max = a[1];
			max2 = a[0];
	}
	for(i = 2; i < n; i++) {
		if(a[i] > max) {
			max2 = max;
			max = a[i];
		}
		else if(a[i] > max2 && a[i] != max) {
			max2 = a[i];
		}
	}
	printf("Second largest element in the array is %d",max2);
	
	return 0;
}
