#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a,b;
	printf("\nEnter the values a and b:");
	scanf("%d%d",&a,&b);
	
	printf("\nA=%d \n B=%d\n",a,b);
	
	swap(&a,&b);
	
	printf("\nA=%d \n B=%d\n",a,b);
}
