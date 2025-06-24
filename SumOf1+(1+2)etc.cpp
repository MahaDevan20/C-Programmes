#include<stdio.h>
int main()
{
	int i,n,exp=0,sum=0;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		exp+=i;
		sum+=exp;
	}
	printf("\n The result is %d",sum);
	return 0;
}
