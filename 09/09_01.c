#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Write a function that opens an existing file and calculates its size in bytes.

int calculateFileSize(char filename[]) {
    FILE* fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File not found.\n");
        return -1;
    }

    fseek(fp, 0, SEEK_END);
    int fileSize = ftell(fp);
    fclose(fp);
    return fileSize;
}

int main() {
    char filename[] = { "exercise9.txt" };
    int result = calculateFileSize(filename);

    if (result != -1)
        printf("The size of the file is %d bytes.\n", result);

    return 0;
}