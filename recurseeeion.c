#include<stdio.h>
int disp(int i,int n){
	
	if(i<n){
		return ;
	}
		 printf("%d",disp(++i,n));
}
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	disp(1,n);
	return 0;
}
