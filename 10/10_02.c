#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Write a recursive function that prints all odd numbers backwards from the given number n to 1.

void printOddNumbersBackward(int n) {
    if (n == 0) {
        return;
    }
    if (n % 2 != 0) {
        printf("%d ", n);
    }
    printOddNumbersBackward(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    printOddNumbersBackward(n);
    printf("\n");
    return 0;
}