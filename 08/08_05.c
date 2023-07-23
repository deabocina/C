#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Define a structure for RGB color. The color is represented by the red, green, and blue components (RGB),
which have values from 0 to 255. Define a structure for a point that has three coordinates (x, y, z) and an RGB color.
Write a function that takes an array of points and returns the number of points with the most prominent red color. */

struct RGB {
    int r, g, b;
};

struct POINT {
    int x, y, z;
    struct RGB colour;
};

int countPointsWithMostRed(struct POINT points[], int size) {
    int maxRed = 0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (points[i].colour.r > maxRed) {
            maxRed = points[i].colour.r;
            count = 1;
        }
        else if (points[i].colour.r == maxRed) {
            count++;
        }
    }
    return count;
}

int main() {
    struct POINT points[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter the value of the red colour for point %d: ", i + 1);
        scanf("%d", &points[i].colour.r);
        printf("Enter the value of the green colour for point %d: ", i + 1);
        scanf("%d", &points[i].colour.g);
        printf("Enter the value of the blue colour for point %d: ", i + 1);
        scanf("%d", &points[i].colour.b);

        printf("Enter the x coordinate for point %d: ", i + 1);
        scanf("%d", &points[i].x);
        printf("Enter the y coordinate for point %d: ", i + 1);
        scanf("%d", &points[i].y);
        printf("Enter the z coordinate for point %d: ", i + 1);
        scanf("%d", &points[i].z);
    }

    int count = countPointsWithMostRed(points, 5);
    printf("%d points have the most prominent red colour.\n", count);

    return 0;
}