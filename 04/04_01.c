#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function to convert a decimal number to another base

void convertToBase(int number, int base) {
    int remainder, converted = 0, temp = 1;

    while (number) {
        remainder = number % base;
        converted += remainder * temp;
        temp *= 10;
        number /= base;
    }

    // Display the converted number with powers
    int index = 0;
    while (converted) {
        if (converted % 10 != 0) {
            printf("%d * %d**%d + ", converted % 10, base, index);
        }
        index++;
        converted /= 10;
    }
}

int main() {
    int number, base;

    printf("Enter a number: ");
    scanf("%d", &number);

    do {
        printf("Enter a base (between 2 and 16): ");
        scanf("%d", &base);
    } while (base < 2 || base > 16);

    printf("%d = ", number);
    convertToBase(number, base);

    return 0;
}
