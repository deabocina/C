#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function to calculate the nth term of an arithmetic sequence

int calculateNthTerm(int a1, int d, int n) {
    return (a1 + (n - 1) * d);
}

int main() {
    int a1, d, n;

    printf("Enter the first term (a1), common difference (d), and the value of n:\n");
    scanf("%d %d %d", &a1, &d, &n);

    printf("The nth term of the arithmetic sequence is %d.\n", calculateNthTerm(a1, d, n));
    return 0;
}