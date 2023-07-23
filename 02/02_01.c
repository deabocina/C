#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    char name = 0, surname = 0, firstInitialName = 0, firstInitialSurname = 0, lastInitialName = 0, lastInitialSurname = 0;

    for (;;) {
        printf("Enter initials of the name: ");
        scanf(" %c", &name);
        if ((toupper(name) < 'A' || toupper(name) > 'Z') & name != '0') {
            printf("Invalid input. Please enter a letter.\n");
            continue;
        }
        printf("Enter initials of the surname: ");
        scanf(" %c", &surname);
        if ((toupper(surname) < 'A' || toupper(surname) > 'Z') & surname != '0') {
            printf("Invalid input. Please enter a letter.\n");
            continue;
        }
        if (name == '0' || surname == '0') {
            break;
        }
        if (firstInitialName == 0) {
            firstInitialName = name;
            firstInitialSurname = surname;
            lastInitialName = name;
            lastInitialSurname = surname;
        }
        else {
            if (toupper(surname) < toupper(firstInitialSurname)) {
                firstInitialSurname = surname;
                firstInitialName = name;
            }
            else if (toupper(surname) == toupper(firstInitialSurname)) {
                if (toupper(name) < toupper(firstInitialName)) {
                    firstInitialSurname = surname;
                    firstInitialName = name;
                }
            }
            if (toupper(surname) > toupper(lastInitialSurname)) {
                lastInitialSurname = surname;
                lastInitialName = name;
            }
            else if (toupper(surname) == toupper(lastInitialSurname)) {
                if (toupper(name) > toupper(lastInitialName)) {
                    lastInitialSurname = surname;
                    lastInitialName = name;
                }
            }
        }
    }
    printf("\nThe first initials are: %c.%c.\n", firstInitialName, firstInitialSurname);
    printf("The last initials are: %c.%c.\n", lastInitialName, lastInitialSurname);

    return 0;
}
