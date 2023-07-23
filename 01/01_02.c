#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0, b, c, temp, sum = 0;

	while (a < 100 || a > 999) {
		printf("Enter a three-digit number: ");
		scanf("%d", &a);
	}

	temp = a;
	while (a > 0) {
		b = a % 10;
		c = b * b * b;
		sum = sum + c;
		a = a / 10;
	}
	a = temp;

	if (a == sum) {
		printf("\nThe number is an Armstrong number.\n");
	}
	else {
		printf("\nThe number is not an Armstrong number.\n");
	}
	return 0;
}