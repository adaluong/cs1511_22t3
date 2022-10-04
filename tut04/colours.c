// COMP1511 22T3 - Functions
// A program to deal with colours
//
// Ada Luong, October 2022

#include <stdio.h>

struct colour {
    int red;
    int green;
    int blue;
};

struct colour make_colour(int red, int green, int blue);

int main(void) {

    struct colour my_favourite_colour = make_colour(100, 50, 20);

    return 0;
}

// A function that takes in three integers
// and returns a struct colour
struct colour make_colour(int red, int green, int blue) {
    struct colour new_colour;
    new_colour.red = red;
    new_colour.green = green;
    new_colour.blue = blue;

    return new_colour;
}