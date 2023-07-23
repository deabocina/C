#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;

	printf("Enter two whole numbers:\n");
	scanf("%d %d", &a, &b);

	if (a < b)
		printf("The smaller number is %d.\n", a);
	if (a > b)
		printf("The smaller number is %d.\n", b);
	if (a == b) {
		printf("Enter another number:\n");
		scanf("%d", &c);
		printf("The smaller number is %d.\n", c);
	}

	return 0;
}