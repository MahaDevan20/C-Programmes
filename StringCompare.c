#include <stdio.h>
int main(){
	char a[10],b[10];
	int i,pos=-1,result=0;
	
	printf("Enter the first String:");
	scanf("%s",&a);
	
	printf("Enter the first String:");
	scanf("%s",&b);
	
	for(i=0;a[i]!='\0';i++){
		++pos;
	}
	
	for(i=0;i<=pos;i++){
		if(a[i]!=b[i]){
			result=1;
		}
	}
	
	printf("result= %d",result);
	
	return 0;
	
}
