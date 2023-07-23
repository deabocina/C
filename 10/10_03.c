#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/* Write a recursive function that finds the n-th occurrence of a character in a string.
The function returns the index or -1 if the character does not appear n times. */

int findNthOccurrence(int n, int index, char character, char word[]) {
    if (index == strlen(word)) {
        return -1;
    }
    if (word[index] == character) {
        n--;
        if (n == 0) {
            return index;
        }
        index++;
        return index = findNthOccurrence(n, index, character, word);
    }
    if (index < strlen(word)) {
        index++;
        return index = findNthOccurrence(n, index, character, word);
    }
}

int main() {
    char character, word[20] = "";
    int index = 0, n;

    printf("Enter a word: ");
    gets(word);
    printf("Enter a character you want to find: ");
    scanf("%c", &character);
    printf("Enter the occurrence number: ");
    scanf("%d", &n);

    printf("\nThe character '%c' appears at index %d.\n", character, findNthOccurrence(n, index, character, word));
    return 0;
}