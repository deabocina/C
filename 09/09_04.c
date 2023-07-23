#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* A text file is given, with each line containing six numbers representing
   the coordinates of a triangle in two-dimensional space. The format is:
   (x1, y1), (x2, y2), (x3, y3).
   Write a structure 'triangle' and a function that reads numbers from the file
   and stores them in an array of 'triangle' structures. The file handling should be
   done outside the function. */

struct triangle {
    char x[3][5];
    char y[3][5];
} points;

int read_coordinates(FILE* fp, struct triangle* coordinates);

int main() {
    struct triangle triangles[6];
    FILE* fp = fopen("output.txt", "r");
    int i, j;

    if (fp == NULL) {
        printf("Error occurred while opening the file.\n");
        return -1;
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            strcpy(triangles[i].x[j], "");
            strcpy(triangles[i].y[j], "");
        }
    }

    read_coordinates(fp, triangles);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%s, ", triangles[i].x[j]);
            printf("%s \n", triangles[i].y[j]);
        }
    }

    fclose(fp);
    return 0;
}

int read_coordinates(FILE* fp, struct triangle* coordinates) {
    char line[255] = "";
    int index = 0, j = 0, k = 0, i;

    while (fgets(line, 255, fp) != NULL) {
        for (i = 0; i < strlen(line); i++) {
            if (isdigit(line[i])) {
                if (index != 1) {
                    while (isdigit(line[i])) {
                        strncat(coordinates->x[k], &line[i], 1);
                        i++;
                    }
                    index = 1;
                }
                else {
                    while (isdigit(line[i])) {
                        strncat(coordinates->y[k], &line[i], 1);
                        i++;
                    }
                    index = 0;
                    k++;
                }
            }
        }
        coordinates++;
    }
    return 0;
}

