// COMP1511 Tut 03 - Structs
// Ada Luong, September 2022

#include <stdio.h>

// struct definition
struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

int main(void) {

    struct person ada;
    ada.height = 150.0;
    printf("ada's height is %d\n", ada.height);

    return 0;
}

/* NOTES
 * What are the different parts of the struct?
 * How would you initialise `struct person ada`?
 * How would you initialise `struct person sasha` (with different values)?
 * How would you just print the shoe size of ada?
 * How would you print first_name_initial and height?
 * How would you change the fields of the structs?
 */