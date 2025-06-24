#include<stdio.h>
int main()
{
	float i,n,fact=1,result=0,exp,sign=0;
	printf("Enter the limit:");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		fact*=i;
		exp=i/fact;
		if(sign==0){
			result+=exp;
			sign=1;
		}
		else{
			result-=exp;
			sign=0;
		}
			
	}
	printf("\n The result is %f",result);
	return 0;
}
