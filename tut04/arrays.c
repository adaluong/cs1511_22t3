// COMP1511 Tut 04 - Arrays Demo
// Ada Luong, October 2022

#include <stdio.h>

#define MAX_SIZE 6

int main(void) {

    // Initialising an array of integers
    int numbers_array[MAX_SIZE] = {3, 24, 7, 0, 13, 63};
    //                             ^      ^
    // Adding the first and third elements of an array
    // and printing out the sum
    int sum = numbers_array[0] + numbers_array[2];
    printf("the first + third element of the array is: %d\n", sum);
    

    return 0;
}