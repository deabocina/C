#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function to convert a decimal number to its binary representation

int convertToBinary(int n) {
    int c;

    for (c = 31; c >= 0; c--) {
        int k = n >> c;

        if (k & 1) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    return n;
}

int main() {
    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("Binary representation: ");
    convertToBinary(n);
    printf("\n");

    return 0;
}