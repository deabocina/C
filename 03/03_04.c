#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Write a function that checks whether a given number is trimorphic, i.e. its cube ends with the same digits.
// Write a program where the user enters numbers until they enter zero, and for each number, call the function and print the result.

int isTrimorphic(int number) {
    int cube = number * number * number;

    while (number != 0) {
        if (number % 10 != cube % 10) {
            return 0; // Not trimorphic
        }
        number /= 10;
        cube /= 10;
    }
    return 1; // Trimorphic
}

int main() {
    int number;
    printf("Enter a number (or 0 to exit): ");
    scanf("%d", &number);

    while (number != 0) {
        if (isTrimorphic(number)) {
            printf("The number is trimorphic.\n");
        }
        else {
            printf("The number is not trimorphic.\n");
        }

        printf("\nEnter another number (or 0 to exit): ");
        scanf("%d", &number);
    }
    return 0;
}