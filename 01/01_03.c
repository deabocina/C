#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c, d, min, max;

    do {
        printf("Enter the first interval (two endpoints):\n");
        scanf("%d %d", &a, &b);
        printf("Enter the second interval (two endpoints):\n");
        scanf("%d %d", &c, &d);
    } while (a > b || c > d);

    max = (b > d) ? b : d;
    min = (a < c) ? a : c;

    if (b >= c && a <= d) {
        printf("\nThe overlapping interval is %d %d\n", min, max);
    }
    else {
        printf("\nNo overlapping interval.\n");
    }

    return 0;
}
