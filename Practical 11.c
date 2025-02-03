C Program Demonstrating Call by Reference -- 

#include <stdio.h>

// Function to swap two numbers using call by reference
void swap(int *a, int *b) {
    int temp;
    temp = *a; // Dereference a to get its value
    *a = *b;   // Assign the value of b to a
    *b = temp; // Assign the value of temp (original a) to b

    // Print the swapped values inside the function
    printf("Inside swap function: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y;

    // Accepting user input
    printf("Enter two integers:\n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    // Print original values
    printf("Before swap: x = %d, y = %d\n", x, y);

    // Call the swap function
    swap(&x, &y); // Pass the addresses of x and y

    // Print values after function call
    printf("After swap function call: x = %d, y = %d\n", x, y);

    return 0;
}
