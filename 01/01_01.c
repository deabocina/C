#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    char operator;

    printf("Enter a mathematical operator: ");
    scanf("%c", &operator);
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    if (operator == '+') {
        printf("\nThe sum is %d.\n", a + b);
    }
    else if (operator == '-') {
        printf("\nThe difference is %d.\n", a - b);
    }
    else if (operator == '*') {
        printf("\nThe product is %d.\n", a * b);
    }
    else if (operator == '/') {
        if (b == 0) {
            printf("\nDivision by zero is not allowed!v");
        }
        else {
            printf("\nThe quotient is %d, and the remainder is %d.\n", a / b, a % b);
        }
    }
    else {
        printf("\nInvalid operator.\n");
    }

    return 0;
}