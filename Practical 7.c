C Program Demonstrating exit, goto, continue, and break --

#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    int i;

    // Demonstrating the use of 'goto'
    printf("Using goto to skip to the end of the loop:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Skipping the number 5 using goto.\n");
            goto end; // Jump to the end label
        }
        printf("%d ", i);
    }
    
    end: // Label for goto
    printf("\nReached the end of the loop using goto.\n");

    // Demonstrating the use of 'continue'
    printf("\nUsing continue to skip even numbers:\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip the rest of the loop for even numbers
        }
        printf("%d ", i);
    }
    printf("\n");

    // Demonstrating the use of 'break'
    printf("\nUsing break to exit the loop when i equals 8:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 8) {
            printf("Breaking the loop at i = %d\n", i);
            break; // Exit the loop when i equals 8
        }
        printf("%d ", i);
    }
    printf("\n");

    // Demonstrating the use of 'exit'
    printf("\nExiting the program using exit:\n");
    exit(0); // Exit the program with status 0

    // This line will not be executed
    printf("This line will not be printed.\n");

    return 0;
}
