// COMP1511 22T3 - Reading input until EOF
// Ada Luong, October 2022

#include <stdio.h>

#define MAX_LETTERS 4

int main (void) {

    // scanning character-by-character until EOF
    char my_var;
    while (scanf(" %c", &my_var) == 1) {
        printf("Input: %c\n", my_var);
    }

    // scanning line-by-line until EOF
    // try "man 3 fgets" in your terminal
    char string[MAX_LETTERS];
    while (fgets(string, MAX_LETTERS, stdin)) {
        printf("Input: %s\n", string);
    }    
    
    return 0;
}
