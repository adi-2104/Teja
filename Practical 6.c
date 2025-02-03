C Program to Display a Half Pyramid Pattern -- 

#include <stdio.h>

int main() {
    int rows, i, j;

    // Accept the number of rows for the half pyramid
    printf("Enter the number of rows for the half pyramid: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing asterisks
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
