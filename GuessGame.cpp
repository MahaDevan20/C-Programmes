#include <stdio.h>
int main()
{
	int num,secretkey=28,i=0;
	
	do{
		printf("Enter the number which u want to guess (20-30):");
		scanf("%d",&num);
		i++;
		if(num==secretkey){
			printf("You got it right in %d number of attempts",i);
			break;
		}
		
	}while(1);
	return 0;
}
