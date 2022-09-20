// COMP1511 Tut 02 - If Statements
// Program to determine if a year is a leap year
//
// Ada Luong, September 2022

#include <stdio.h>

int main(void) {

    // Take in a year from the user
    int year;
    printf("Please enter a year: ");
    scanf("%d", &year);
    
    // Checks if the provided year is a leap year
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("is a leap year\n");
            } else {
                printf("not a leap year\n");
            }
        } else {
            printf("is a leap year\n");
        }
    } else {
        printf("not a leap year\n");
    }

    return 0;
}
