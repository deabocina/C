#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Write a program in which the user enters the number of array elements (a number less than N) and the array itself.
   Allocate N = 100 memory locations for the array. After that, the user enters two numbers m and n,
   which are less than the number of array elements. Write a function that calculates the sum and product
   of the array elements between the m-th and n-th element. */

void calculateSumAndProduct(int* array, int m, int n, int* sum, int* product) {
    for (int i = m - 1; i < n; i++) {
        *sum += array[i];
        *product *= array[i];
    }
}

int main() {
    int array[100], sum = 0, product = 1;
    int size = 0, m = 0, n = 0;

    do {
        printf("Enter the number of elements in the array (less than 100): ");
        scanf("%d", &size);
    } while (size <= 0 || size > 100);

    for (int i = 0; i < size; i++) {
        printf("Enter a number: ");
        scanf("%d", &array[i]);
    }

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    calculateSumAndProduct(array, m, n, &sum, &product);

    printf("Sum: %d, Product: %d", sum, product);
    return 0;
}