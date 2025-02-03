TO CHECK AGE RANGE --
#include <stdio.h>

int main() {
    int age;

    // Accept user age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check age range and print appropriate message
    if (age < 0) {
        printf("Invalid age!\n");
    } else if (age >= 0 && age <= 12) {
        printf("You are a Child.\n");
    } else if (age >= 13 && age <= 19) {
        printf("You are a Teenager.\n");
    } else if (age >= 20 && age <= 59) {
        printf("You are an Adult.\n");
    } else {
        printf("You are a Senior Citizen.\n");
    }

    return 0;
}



TO CHECK ODD AND EVEN --
#include <stdio.h>

int main() {
    int number;

    // Accept user number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is odd or even
    if (number % 2 == 0) {
        printf("The number %d is Even.\n", number);
    } else {
        printf("The number %d is Odd.\n", number);
    }

    return 0;
}



TO FIND THE GREATEST OF THREE NUMBERS -- 

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Accept three different numbers
    printf("Enter three different numbers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);

    // Compare the numbers to find the greatest
    if (num1 >= num2 && num1 >= num3) {
        printf("The greatest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The greatest number is: %d\n", num2);
    } else {
        printf("The greatest number is: %d\n", num3);
    }

    return 0;
}
