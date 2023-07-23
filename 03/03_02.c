#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Write a function that calculates the sum of digits of a number until the number becomes a single-digit number.
// Example: For 3456: 3 + 4 + 5 + 6 = 18, 1 + 8 = 9.

int calculateSingleDigitSum(int number) {
    while (number >= 10) {
        int sum = 0;
        while (number != 0) {
            sum += number % 10;
            number /= 10;
        }
        number = sum;
    }
    return number;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int singleDigitSum = calculateSingleDigitSum(number);

    printf("The sum of digits becomes a single-digit number: %d\n", singleDigitSum);

    return 0;
}
