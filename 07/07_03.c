#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Write a function that modifies a string to remove all vowels from it.
// Example: "Popokatepetl" becomes "Ppktptl".

int checkVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    else
        return 0;
}

void removeVowels(char* str) {
    int i = 0, j;

    while (str[i] != '\0') {
        if (checkVowel(str[i])) {
            j = i;
            while (str[j - 1] != '\0') {
                str[j] = str[j + 1];
                j++;
            }
        }
        else {
            i++;
        }
    }
}

int main() {
    char str[20];

    printf("Enter a string: ");
    gets(str);

    removeVowels(str);
    printf("String without vowels is %s.\n", str);

    return 0;
}