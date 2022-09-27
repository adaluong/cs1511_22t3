// COMP1511 Tut 03 - Enums
// Ada Luong, September 2022

#include <stdio.h>

enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};

// #define ADULT 0
// #define STUDNET 1

int main(void) {

    int adult_value = ADULT;

    return 0;
}

/* NOTES
 * What are the different parts of the enum?
 * How are enums similar to #defines?
 * How would you assign a variable `int card_type` to indicate a student?
 * How could you add this card_type field to the struct we used previously
 */