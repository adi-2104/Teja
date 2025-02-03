a: Display the First 10 Natural Numbers -- 

#include <stdio.h>

int main() {
    int i;

    printf("The first 10 natural numbers are:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n"); // New line for better formatting

    return 0;
}

b: Display the Multiplication Table for a Given Integer -- 

#include <stdio.h>

int main() {
    int number, i;

    // Accepting an integer from the user
    printf("Enter an integer to display its multiplication table: ");
    scanf("%d", &number);

    printf("Multiplication table for %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
