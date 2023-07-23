#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Function to set the k-th bit in the number n and another function to check if the k-th bit is set.
   The functions have parameters n and k.
   Example: For number n = 200, whose binary representation is 11001000, and k = 2, the binary representation
   of the resulting number is 11001100, which is the binary representation of the number 204. */

int setBit(int n, int k) {
    return n |= (1 << k);
}

int isBitSet(int n, int k) {
    return (n & (1 << k)) != 0;
}

int main() {
    int n, k;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter the bit position you want to set: ");
    scanf("%d", &k);

    int result = setBit(n, k);
    printf("Resulting number after setting the bit is %d.\n", result);

    if (isBitSet(result, k)) {
        printf("The k-th bit is set.\n");
    }
    else {
        printf("The k-th bit is not set.\n");
    }

    return 0;
}