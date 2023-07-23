#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function to read the elements of an array.
void inputArray(int* arr) {
    printf("Enter array elements (end input with 0):\n");
    for (int i = 0; ; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
            break;
    }
}

// Function to print the elements of an array.
void printArray(int* arr) {
    printf("\nArray elements: ");
    while (*arr != 0) {
        printf("%d ", *arr);
        arr++;
    }
    printf("\n");
}

// Function to calculate the average value of elements in an array.
int calculateAverage(int* arr) {
    int sum = 0, count = 0;
    while (*arr != 0) {
        sum += *arr;
        count++;
        arr++;
    }
    return (count == 0) ? 0 : sum / count;
}

int main() {
    int array[100];

    inputArray(array);
    printArray(array);
    printf("The average value of the array is %d.\n", calculateAverage(array));

    return 0;
}