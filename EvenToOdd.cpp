#include<stdio.h>
int main()
{
	int i,n;
	printf("Number of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=1;i<n;i+=2)
	{
		printf("%d \t",a[i]);
	}
	for(i=0;i<n;i+=2)
	{
		printf("%d \t",a[i]);
	}
	return 0;
}
