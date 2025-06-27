#include <stdio.h>

int main() {
    int age, roll, encoded, decoded;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your roll number: ");
    scanf("%d", &roll);

    encoded = age ^ roll;
    printf("Encoded age = %d\n", encoded);

    decoded = encoded ^ roll;
    printf("Decoded age = %d\n", decoded);
    
    return 0;
}

