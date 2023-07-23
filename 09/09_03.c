#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Write a function that reads a file line by line, removes all punctuation marks,
   spaces, and empty lines, and writes the modified text to another file. In the main
   function, the user enters the names of both files. */

void textModifier(FILE* input, FILE* output);

int main() {
    FILE* inputFile, * outputFile;
    char inputFileName[50], outputFileName[50];

    printf("Enter the name of the input file: ");
    gets(inputFileName);
    inputFile = fopen(inputFileName, "r");

    if (inputFile == NULL) {
        printf("Error opening the input file!\n");
        exit(1);
    }

    printf("Enter the name of the output file: ");
    gets(outputFileName);
    outputFile = fopen(outputFileName, "w");

    if (outputFile == NULL) {
        printf("Error opening the output file!\n");
        exit(1);
    }

    textModifier(inputFile, outputFile);

    fclose(inputFile);
    fclose(outputFile);

    printf("Text processing completed successfully.\n");
    return 0;
}

void textModifier(FILE* input, FILE* output) {
    char line[255];

    while (fgets(line, sizeof(line), input) != NULL) {
        char modifiedLine[255] = "";
        int i, j = 0;

        for (i = 0; line[i] != '\0'; i++) {
            char temp = line[i];

            if (temp != ' ' && temp != '.' && temp != '!' && temp != ';' && temp != ':' && temp != '\n') {
                modifiedLine[j] = temp;
                j++;
            }
        }

        if (j > 0) {
            modifiedLine[j] = '\0';
            fputs(modifiedLine, output);
            fputc('\n', output);
        }
    }
}