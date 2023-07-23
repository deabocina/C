#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* The user enters two natural numbers m and n in the main function. Write a function that halves the first number if it's even (m/2),
   and multiplies the second number by 3 and adds 1 (3*n+1). In the main function, after calling the functions, print the new values of m and n. */

void halveIfEven(int* m) {
    if (*m % 2 == 0) {
        *m /= 2;
    }
}

void tripleAndAddOne(int* n) {
    *n = (*n * 3) + 1;
}

int main() {
    int m, n;

    printf("Enter two numbers:\n");
    scanf("%d %d", &m, &n);

    halveIfEven(&m);
    tripleAndAddOne(&n);
    printf("New values of m and n are %d and %d.\n", m, n);

    return 0;
}