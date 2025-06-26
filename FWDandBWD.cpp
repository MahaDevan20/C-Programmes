#include <stdio.h>

int main() {
    // 1 2 3 1
	// 4 1 1 6
	// 7 1 1 8
	// 1 10 11 1

    int a[5][5],k,i,j,n,flag=1;
    printf("Enter the nunmber of rows or column:");
    scanf("%d",&n);
    
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0,j=0,k=n-1; i<n && j<n && k>-1; i++,j++,k--){
        
        if(a[i][j] != a[i][k]){
            flag=0;
            break;
        }
    }
    if(flag==0){
        printf("the forward and backward diagonals not are equal");
    }
    else{
        printf("the forward and backward diagonals are equal");
    }
    return 0;
}
