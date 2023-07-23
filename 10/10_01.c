#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Write a recursive function that calculates the sum of the first n numbers divisible by m.

int sum(int n, int m) {
    if (n < m)
        return 0;
    if (n % m == 0)
        return n + sum(n - 1, m);
}

int main() {
    int n, m;

    printf("Enter the values of n and m:\n");
    scanf("%d %d", &n, &m);
    printf("The sum is %d.\n", sum(n, m));
    return 0;
}