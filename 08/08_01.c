#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX(a,b,c) (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)
#define MIN(a,b,c) (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c)

// Write a function that calculates and returns the largest and smallest element among three numbers.
// For calculating the largest and smallest element, write two preprocessor directives.

int main() {
    int a, b, c;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("\nThe smallest element is %d. ", MIN(a, b, c));
    printf("The largest element is %d.\n", MAX(a, b, c));

    return 0;
}