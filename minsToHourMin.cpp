#include <stdio.h>

int main() {
    int minutes, hrs, mins;
    printf("Enter total minutes: ");
    scanf("%d", &minutes);
    hrs = minutes / 60;
    mins = minutes % 60;
    printf("%d minutes = %d hour(s) and %d minute(s)\n", minutes, hrs, mins);
    return 0;
}

