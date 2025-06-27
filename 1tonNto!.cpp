#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("1 to %d:\n", n);
    for (i = 1; i <= n; i++)
        printf("%d ", i);

    printf("\n%d to 1:\n", n);
    for (i = n; i >= 1; i--)
        printf("%d ", i);
    
    return 0;
}

