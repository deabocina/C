#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;

    printf("Enter the interval:\n");
    scanf("%d %d", &a, &b);

    c = a + rand() % (b - a + 1);
    d = a + rand() % (b - a + 1);

    printf("\nTwo pseudo-random numbers from the closed interval are: %d %d\n", c, d);

    if (c > d) {
        printf("The greater value is %d.\n", c);
    } else {
        printf("The greater value is %d.\n", d);
    }

    return 0;
}
