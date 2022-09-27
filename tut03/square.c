// COMP1511 Tut 03 - 2D While Loops
// Ada Luong, September 2022

#include <stdio.h>

int main(void) {

    // Ask the user for the number of * per row
    int number_of_asterisks;
    scanf("%d", &number_of_asterisks);

    int row_number = 0;
    while (row_number < number_of_asterisks) {

        // Printing a row of asterisks
        int position_in_row = 0;
        while (position_in_row < number_of_asterisks) {
            printf("*");
            position_in_row = position_in_row + 1;
        }
        printf("\n");

        row_number = row_number + 1;
    }


    return 0;
}