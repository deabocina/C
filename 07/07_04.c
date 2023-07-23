#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/* Write a function that returns the position and address of the second occurrence of a letter in a given string.
If the letter does not occur twice, the function returns -1 and NULL.
Example: For the string "ONoffON", the position of the second occurrence of the letter 'O' is 6. */

int findSecondOccurrence(char str[], char ch) {
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
            if (count == 2) {
                return i;
            }
        }
    }
    return 1;
}

int main() {
    char str[100], ch;
    int index;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the letter you are looking for: ");
    scanf("%c", &ch);

    index = findSecondOccurrence(str, ch);

    if (index == 1) {
        printf("\nThe letter '%c' does not appear twice.\n", ch);
    }
    else {
        printf("\nThe second occurrence of the letter '%c' is at position %d.\n", ch, index + 1);
    }
    return 0;
}
