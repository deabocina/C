#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Write a function that calculates the sum of elements at odd positions in an array.

int sumOddPositions(int arr[], int size) {
    int i, sum = 0;

    for (i = 0; i < size; i++) {
        if (i % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int size, i, array[10];
    int sumOfOddPositions = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");

    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    sumOfOddPositions = sumOddPositions(array, size);
    printf("\nSum of elements at odd positions is %d.\n", sumOfOddPositions);

    return 0;
}