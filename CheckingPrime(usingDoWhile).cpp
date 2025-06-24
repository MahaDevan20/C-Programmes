#include <stdio.h>
void main()
{
	int n,i,flag=0;
	printf("Enter the number you want to check:");
	scanf("%d",&n);
	i=2;
	do
	{
		
		if(n%i==0)
		{
			if(n==i){
				continue;
			}	
			flag=1;
			break;
		}
		i++;
	}while(i<=n/2);
	if(flag==1){
		printf("The number %d is not prime",n);
	}
	else{
		printf("the number %d is  prime",n);
	}
	

}
