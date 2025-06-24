#include<stdio.h>
int main()
{
	float i,n,fact=1,sum=0,exp;
	printf("Enter the limit:");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		fact*=i;
		exp=i/fact;
		sum+=exp;
	}
	printf("\n The result is %f",sum);
	return 0;
}
