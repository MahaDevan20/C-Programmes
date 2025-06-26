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
	int sp,flag=0;
	printf("Enter the element which you want to search:\n");
	scanf("%d",&sp);
	for(i=0;i<n;i++)
	{
		if(a[i] == sp){
			flag++;
			break;
		}
	}
	if(flag==1){
		printf("Element is found at %d",i+1);
	}
	return 0;
}
