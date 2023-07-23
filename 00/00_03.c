#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two whole numbers:\n");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("%d %d\n", a, b);

    return 0;
}