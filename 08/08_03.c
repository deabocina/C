#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define FRACTION1(a, b) ((float)a / b)
#define FRACTION2(c, d) ((float)c / d)

// Define a structure named "fraction" and write functions for the four basic operations with fractions.

typedef struct {
    float a, b, c, d;
} numbers;

int main() {
    numbers f;

    printf("Enter the numerator and denominator of the 1st fraction:\n");
    scanf("%f %f", &f.a, &f.b);
    printf("Enter the numerator and denominator of the 2nd fraction:\n");
    scanf("%f %f", &f.c, &f.d);

    printf("\nAddition: %f", FRACTION1(f.a, f.b) + FRACTION2(f.c, f.d));
    printf("\nSubtraction: %f", FRACTION1(f.a, f.b) - FRACTION2(f.c, f.d));
    printf("\nMultiplication: %f", FRACTION1(f.a, f.b) * FRACTION2(f.c, f.d));
    printf("\nDivision: %f\n", FRACTION1(f.a, f.b) / FRACTION2(f.c, f.d));

    return 0;
}