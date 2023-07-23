#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two whole numbers:\n");
    scanf("%d %d", &a, &b);
    printf("\nThe sum is %d.\n", a + b);

    return 0;
}