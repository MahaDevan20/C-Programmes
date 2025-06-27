#include <stdio.h>

int main() {
    float kmph, mph;
    printf("Enter speed in km/h: ");
    scanf("%f", &kmph);
    mph = kmph * 0.621371;
    printf("Speed in miles/h = %f\n", mph);
    return 0;
}

