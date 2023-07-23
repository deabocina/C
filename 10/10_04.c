#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* Write a function that uses the bsearch function to search if a given point exists in an array of points.
The array is sorted in ascending order by distance from the origin using the qsort function. */

int sort(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void inputArray(int* array) {
    for (int i = 0; i < 5; i++) {
        printf("Enter the %d. number: ", i);
        scanf("%d", array);
        array++;
    }
}

int search(const int array[], int point) {
    return *(int*)bsearch(&point, array, 5, sizeof(int), sort);
}

int main() {
    int pointsArray[5] = { 0 }, pointToFind = 0;
    inputArray(pointsArray);

    printf("Which point are you looking for in the array?\n");
    scanf("%d", &pointToFind);
    qsort(pointsArray, 5, sizeof(int), sort);

    if (search(pointsArray, pointToFind) != NULL) {
        printf("\nPoint %d exists in the array.\n", pointToFind);
    }
    else {
        printf("\nPoint %d does not exist in the array.\n", pointToFind);
    }

    return 0;
}