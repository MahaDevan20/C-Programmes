#include <stdio.h>
int main(){
	char a[20],b[20];
	int i,pos=-1;
	
	printf("Enter the String:");
	scanf("%s",&a);
	
	printf("String to concatinate:");
	scanf("%s",&b);
	
	for(i=0;a[i]!='\0';i++){
		++pos;
	}
	i=pos+1;
	int j=0;
	while(b[j]!='\0'){
		a[i]=b[j];
		i++;
		j++;
	}
	a[i]='\0';
	printf("result= %s",a);
	
	return 0;
	
}
