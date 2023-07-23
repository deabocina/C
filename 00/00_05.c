#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c, smallest, middle, largest;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && b <= c) {
        smallest = a;
        if (b <= c) {
            middle = b;
            largest = c;
        }
        else {
            middle = c;
            largest = b;
        }
    }
    else if (b <= a && a <= c) {
        smallest = b;
        if (a <= c) {
            middle = a;
            largest = c;
        }
        else {
            middle = c;
            largest = a;
        }
    }
    else {
        smallest = c;
        if (a <= b) {
            middle = a;
            largest = b;
        }
        else {
            middle = b;
            largest = a;
        }
    }

    printf("\nFrom smallest to largest: %d, %d, %d\n", smallest, middle, largest);
    printf("From largest to smallest: %d, %d, %d\n", largest, middle, smallest);

    return 0;
}