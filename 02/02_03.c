#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int r, c;

    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i += 1) {
        for (int j = 0; j < c; j += 1) {
            if (i % 2 == 0 && j % 2 == 0) {
                printf("*");
            }
            else if (i % 2 == 0 && j % 2 != 0) {
                printf(" ");
            }
            else if (i % 2 != 0 && j % 2 == 0) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
