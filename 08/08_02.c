#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VOLUME(a,b,c) a*b*c
#define SURFACE_AREA(a,b,c) 2 * (a*b) + (a*c) + (b*c)

/* Define a structure named "cuboid" to represent a cuboid.
   Write a function to calculate the surface area and volume of the cuboid.
   Use preprocessor directives to calculate the surface area and volume. */

typedef struct {
    double a, b, c;
} cuboid;

int main() {
    cuboid c;

    c.a = 10;
    c.b = 15;
    c.c = 5;

    printf("Surface area of the cuboid is %lf. ", SURFACE_AREA(c.a, c.b, c.c));
    printf("Volume of the cuboid is %lf.\n", VOLUME(c.a, c.b, c.c));

    return 0;
}