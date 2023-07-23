#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* Write a function that reads a file character by character, stores lowercase alphabet characters
   in a string, and returns the created string. Allocate memory for the string on the heap. */

char* createLowercaseString(const char* filename) {
    FILE* fp;
    char ch;
    char* result = NULL;
    int count = 0;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found or could not be opened.\n");
        return NULL;
    }

    while ((ch = getc(fp)) != EOF) {
        if (islower(ch)) {
            result = (char*)realloc(result, (count + 1) * sizeof(char));
            result[count] = ch;
            count++;
        }
    }

    fclose(fp);
    return result;
}

int main() {
    char* lowercaseString = createLowercaseString("file.txt");

    if (lowercaseString != NULL) {
        printf("Lowercase characters in the file is %s.\n", lowercaseString);
        free(lowercaseString);
    }
    return 0;
}