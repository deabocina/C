#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Write a function that checks if two words are anagrams(one word is a permutation of the other).
// Example: Words "listen" and "silent" are anagrams. 

int areAnagrams(char* word1, char* word2) {
    int charCount1[256] = { 0 };
    int charCount2[256] = { 0 };
    int length1 = strlen(word1);
    int length2 = strlen(word2);

    if (length1 != length2) {
        return 0;
    }

    for (int i = 0; i < length1; i++) {
        charCount1[word1[i]]++;
        charCount2[word2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (charCount1[i] != charCount2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char word1[100], word2[100];

    printf("Enter the first word: ");
    gets(word1);

    printf("Enter the second word: ");
    gets(word2);

    if (areAnagrams(word1, word2)) {
        printf("\nThe words %s and %s are anagrams.\n", word1, word2);
    }
    else {
        printf("\nThe words %s and %s are not anagrams.\n", word1, word2);
    }
    return 0;
}