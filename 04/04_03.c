#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function to perform the operation based on whether the input number is even or odd

int evenOddOperation(int number) {
    if (number % 2 == 0) {
        return number / 2;
    }
    else {
        return 3 * number + 1;
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The result of the operation is %d.\n", evenOddOperation(number));
    return 0;
}
