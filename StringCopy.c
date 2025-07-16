#include <stdio.h>
int main(){
	char a[20],b[20];
	int i,pos=-1;
	
	printf("Enter the String:");
	scanf("%s",&a);
	
	for(i=0;a[i]!='\0';i++){
		++pos;
	}
	
	for(i=0;i<=pos;i++){
		
		b[i]=a[i];
	}
	
	b[i]='\0';
	
	printf("\n The string you entered:%s",a);
	
	printf("\n The string copied:%s",b);	
	
	return 0;
	
}
