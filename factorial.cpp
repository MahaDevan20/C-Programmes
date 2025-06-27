#include <stdio.h>

int main() {
    int n, i, j, fact=1;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial = %d\n", sum);
    return 0;
}

