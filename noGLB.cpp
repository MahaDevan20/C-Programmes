#include<stdio.h>
int menu(){
	int ch;
	printf("\nInsert-1\nDelete-2\nDisplay all-3\nExit-4\nEnter your choice:\n");
	scanf("%d",&ch);
	return ch;
}

int insert(int a[],int pos,int ch,int size){
	if(pos==size-1){
		printf("\nThe array is full\n");
		return size-1;
	}
	else{
		a[++pos]=ch;
		return pos;
	}
}

int del(int a[],int pos){
	if(pos<0){
		printf("\nThe Array is empty\n");
		return -1;
	}
	else{
		printf("\nthe deleted element is %d\n",a[pos]);
		--pos;
		return pos;
	}
}

void display(int a[],int pos,int size){
	if(pos<0){
		printf("\nNothing to print.Empty array\n");
	}
	else{
		printf("\nThe elements are:");
		for(int i=0;i<=pos;i++){
			printf("%d\t",a[i]);
		}
	}
		
}

void processArray(int a[],int pos,int size){
	int ch;
	for(ch=menu();ch!=4;ch=menu()){
		switch(ch){
			case 1:
					printf("\nEnter the value to insert:\n");
					scanf("%d",&ch);
					pos=insert(a,pos,ch,size);
					break;
			case 2:
					pos=del(a,pos);
					break;
			case 3:
					display(a,pos,size);
					break;
			default:
					printf("\ninvalid choice\n");
					break;
		}
	}
}

int main(){
	int pos=-1;
	int size=5;
	int a[size];
	processArray(a,pos,size);
	
}
