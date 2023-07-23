#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>

// Write a function that calculates the age of a person with the given date of birth in the format "DD.MM.YYYY".

void calculateAge(int dayOfBirth, int monthOfBirth, int yearOfBirth, int currentDay, int currentMonth, int currentYear, int* years, int* months, int* days) {
    *years = currentYear - yearOfBirth;
    *months = currentMonth - monthOfBirth;
    *days = currentDay - dayOfBirth;

    if (*days < 0) {
        *months -= 1;
        *days += 30;
    }

    if (*months < 0) {
        *years -= 1;
        *months += 12;
    }
}

int main() {
    int dayOfBirth, monthOfBirth, yearOfBirth, currentDay, currentMonth, currentYear;
    int years = 0, months = 0, days = 0;

    printf("Enter the date of birth (DD.MM.YYYY): ");
    scanf("%d.%d.%d", &dayOfBirth, &monthOfBirth, &yearOfBirth);

    printf("Enter the current date (DD.MM.YYYY): ");
    scanf("%d.%d.%d", &currentDay, &currentMonth, &currentYear);

    calculateAge(dayOfBirth, monthOfBirth, yearOfBirth, currentDay, currentMonth, currentYear, &years, &months, &days);
    printf("\nThe person is %d years, %d months, and %d days old.\n", years, months, days);

    return 0;
}