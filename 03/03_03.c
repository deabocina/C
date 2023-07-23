#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Write a function that, for a natural number n, returns the smallest prime number that is greater than n.
   Use the 'break' statement. Also, write a separate function that checks if a number is prime.
   Example: For n = 10, the function should return 11, and for n = 23, the function should return 29. */

int isPrime(int number) {
    if (number <= 1)
        return 0;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int nextPrime(int n) {
    int number2 = n + 1;

    while (1) {
        if (isPrime(number2))
            return number2;
        number2++;
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The first prime number after %d is %d.\n", number, nextPrime(number));

    return 0;
}