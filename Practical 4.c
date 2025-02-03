C Program to Print Numbers from 0 to 10 and 10 to 0 -- 

#include <stdio.h>

int main() {
    int i = 0;

    // Print numbers from 0 to 10
    printf("Numbers from 0 to 10:\n");
    while (i <= 10) {
        printf("%d ", i);
        i++; // Increment i
    }

    printf("\n"); // New line for better formatting

    // Reset i to 10 for the next loop
    i = 10;

    // Print numbers from 10 to 0
    printf("Numbers from 10 to 0:\n");
    while (i >= 0) {
        printf("%d ", i);
        i--; // Decrement i
    }

    printf("\n"); // New line for better formatting

    return 0;
}
