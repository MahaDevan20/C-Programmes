#include <stdio.h>
int main()
{
	char string[20];
	char rev[20];
	int i,j;
	
	printf("\nEnter the string:");
	scanf("%s",string);
	
	for(i=0;string[i]!='\0';i++);
	i--;
	j=0;
	while(i>=0){
		rev[j]= string[i];
		i--;
		j++;
	}
	rev[j]='\0';
	
	printf("\nReversed string is:");
	printf("%s",rev);

	
	
}
