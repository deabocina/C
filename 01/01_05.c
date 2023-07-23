#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int amount, bear, fish, coin;

    printf("Enter an amount: ");
    scanf("%d", &amount);

    bear = amount / 5;
    fish = (amount - (bear * 5)) / 2;
    coin = (amount - (bear * 5) - (fish * 2)) / 1;

    printf("\nAmount: %d", amount);
    printf("\n5 kuna: %d, 2 kune: %d, 1 kuna: %d\n", bear, fish, coin);

    return 0;
}
