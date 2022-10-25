// COMP1511 22T3 - Function Scope and Arrays
// Ada Luong, October 2022

#include <stdio.h>

// takes in an integer and returns the square of that value
void square(int *x) {
    (*x) = (*x) * (*x);
    printf("value inside square function: %d\n", *x);
}

int main(void) {
    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value before square: %d\n", input);
    square(&input);
    printf("value after square: %d\n", input);

    return 0;
}

