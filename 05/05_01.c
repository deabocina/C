#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Using the conditional operator (?:), write a function that returns the smallest of three numbers.
//  It is forbidden to use the if statement.

int findSmallest(int a, int b, int c) {
    int min = 0;

    min = (a < b) ? a : b;
    min = (min < c) ? min : c;
    return min;
}

int main() {
    int a, b, c;

    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("The smallest number is %d.\n", findSmallest(a, b, c));
    return 0;
}