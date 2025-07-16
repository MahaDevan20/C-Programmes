#include <stdio.h>
int main(){
	char a[10];
	
	int i,pos=-1;
	
	printf("Enter the String:");
	scanf("%s",&a);
	
	for(i=0;a[i]!='\0';i++){
		++pos;
	}
	printf("\n The length of the string is:%d",++pos);
	return 0;
	
}
