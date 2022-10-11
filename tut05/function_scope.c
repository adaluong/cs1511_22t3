// COMP1511 22T3 - Function Scope and Arrays
// Ada Luong, October 2022

#include <stdio.h>

// takes in an integer and returns the square of that value
int square(int x) {
    x = x * x;
    // printf("value inside square function: %d\n", x);
    return x;
}

// squares all elements of an array, modifying the array in the process.
void square_array(int length, int array[length]) {
    for (int i = 0; i < length; i++) {
        array[i] = square(array[i]);
    }
}

void print_array(int length, int array[length]) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(void) {

    // passing an array into a function modifies the original array
    int numbers[5] = {1,2,3,4,5};
    printf("values before square array: ");
    print_array(5, numbers);
    square_array(5, numbers);
    printf("values after square array: ");
    print_array(5, numbers);

    // passing a regular parameter into the function modifies a 
    // COPY of that variable, rather than the original variable in main

    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value before square: %d\n", input);

    // call square, copying the value of input into `int x`
    // need to reassign the return value of that function to the variable 
    // you wish to modify in main
    input = square(input);

    printf("value after square: %d\n", input);

    return 0;
}

