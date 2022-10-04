// COMP1511 Tut 04 - Scanning in Loops
// A program that scans temperatures into an array
// and then finds the largest of them
//
// Ada Luong, October 2022 

#include <stdio.h>

#define NUMBER_OF_DAYS 7

int main(void) {

    // scanning values into the array
    int temperatures[NUMBER_OF_DAYS] = {0};
    for (int i = 0; i < NUMBER_OF_DAYS; i++) {
        scanf("%d", &temperatures[i]);
    }

    // find the largest of them
    // create a variable to keep track of the current largest
    int current_hottest_temperature = 0;

    // loop through the array and update if the value is the largest
    int j = 0;
    while (j < NUMBER_OF_DAYS) {
        if (temperatures[j] > current_hottest_temperature) {
            current_hottest_temperature = temperatures[j];
        }
        j++;
    }

    // print out the largest
    printf("hottest temp: %d\n", current_hottest_temperature);

    return 0;
}