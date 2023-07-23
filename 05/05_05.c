#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Function to set all bits of a byte in a given integer number. The number and the byte number are function parameters.
   Example: For the number 200, whose binary representation is 11001000, and byte number 2,
   the new binary number is 1111111111001000, which is the binary representation of the number 65480. */

int setAllBits(int number, int byteNumber) {
    for (int i = 8 * byteNumber; i < 8 * (byteNumber + 1); i++) {
        number |= 1 << i;
    }
    return number;
}

int main() {
    int number, byte;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the byte number (1-4): ");
    scanf("%d", &byte);
    printf("%d\n", setAllBits(number, byte - 1));

    return 0;
}