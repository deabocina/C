#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Function to calculate the sum and product of digits of a natural number. */

void calculateSumAndProduct(int number, int* sum, int* product) {
    while (number > 0) {
        *sum += number % 10;
        *product *= number % 10;
        number /= 10;
    }
}

int main() {
    int number, sum = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    calculateSumAndProduct(number, &sum, &product);

    printf("The sum of digits is %d, and the product is %d.\n", sum, product);
    return 0;
}