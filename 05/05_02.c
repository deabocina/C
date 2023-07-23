#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Write a function with the prototype int function(int a, int b);, which returns the difference
   a-b if a ≥ b, otherwise returns the sum a+b. Use the conditional operator (?:).
   It is forbidden to use the if statement. */

int customFunction(int a, int b) {
    return (a >= b ? a - b : a + b);
}

int main() {
    int a, b;

    printf("Enter a and b:\n");
    scanf("%d %d", &a, &b);

    printf("The result is %d.\n", customFunction(a, b));
    return 0;
}