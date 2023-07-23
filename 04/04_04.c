#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function to perform the even_odd_operation based on whether the input number is even or odd
int even_odd_operation(int number) {
    if (number % 2 != 0)
        return (3 * number) + 1;
    else
        return (number / 2);
}

// Function to print the sequence of numbers using the even_odd_operation
void numbers(int number) {
    while (number != 1) {
        printf("%d \n", number);
        number = even_odd_operation(number);
    }
    printf("%d \n", number);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    numbers(number);
    return 0;
}