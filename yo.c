#include <stdio.h>
int main()
{
	char string[20];
	char rev[20];
	int i,j;
	
	printf("\nEnter the string:");
	scanf("%s",&string);
	
	for(i=0;string[i]!='\0';i++);
	j=0;
	while(i>=0){
		rev[j]= string[i];
		i--;
		j++;
	}
	
	printf("\nReversed string is:");
	for(i=0;i!='\0';i++){
		printf("%c",rev[i]);
	}
	
	
}
