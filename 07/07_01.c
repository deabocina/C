#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* Write a function that inserts a third array between two arrays. The user enters the length and values of the third array.
    The function returns the newly created array (and its length). Use dynamic memory allocation for the new array.
    Example: For arrays [1, 2, 3] and [4, 5, 6] and a third array of length n = 4 with values [11, 12, 13, 14],
    the new array will have elements [1, 2, 3, 11, 12, 13, 14, 4, 5, 6]
*/

void inputArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the %d. element: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr1[3] = { 1, 2, 3 }, arr2[3] = { 4, 5, 6 }, size, i;
    int* arr3;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr3 = (int*)malloc(size * sizeof(int));
    inputArray(arr3, size);
    printArray(arr1, 3);
    printArray(arr3, size);
    printArray(arr2, 3);
    free(arr3);

    return 0;
}
