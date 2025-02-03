C Program to Calculate Factorial Using Recursion --- 

#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    // Accepting user input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check for negative input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using the recursive function
        int result = factorial(number);
        printf("Factorial of %d is %d\n", number, result);
    }

    return 0;
}
