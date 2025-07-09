#include<stdio.h>
#include<conio.h>
int insert(int n,int a[],int pos)
{
	if(pos+1==5)
	{
		printf("error:array is full\n");
		return 4;
	}
	a[++pos]=n;
	return pos;
}
int delete_element(int a[],int pos)
{
	if(pos==-1)
	{
		  printf("error:empty array\n");
		  return -1;
	}
	printf("%d removed\n",a[pos--]);
	return pos;
}
void display(int a[],int pos)
{       int i;
	for(i=0;i<=pos;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int menu()
{       int input;
	printf("1.insert\n2.delete\n3.display all\n4.exit\nyour choice:");
	scanf("%d",&input);
	return input;
}
void processArray(int a[],int pos)
{       int ch;
	for(ch=menu();ch!=4;ch=menu())
	{
		switch(ch)
		{
			case 1:
				printf("enter element:");
				scanf("%d",&ch);
				pos=insert(ch,a,pos);
				break;
			case 2:
				pos=delete_element(a,pos);
				break;
			case 3:
				display(a,pos);
				break;
			default:
				printf("wrong choice\n");

		}
	}
}
int main()
{
	int a[5],pos=-1;
	processArray(a,pos);
	return 0;
}
