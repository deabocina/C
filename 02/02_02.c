#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, n, sum = 0;

    printf("Enter the interval:\n");
    scanf("%d %d", &a, &b);

    printf("Enter the number you want to use for summation: ");
    scanf("%d", &n);

    for (int i = a + n - 1; i < b; i += n) {
        sum += i;
    }
    printf("\nThe sum of those numbers in the interval is %d.\n", sum);

    return 0;
}
