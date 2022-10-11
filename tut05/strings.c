// COMP1511 22T3 - Strings
// Ada Luong, October 2022

#include <stdio.h>

// manually prints out a string one character at a time
// should behave like printf("%s\n", ...)
void print_string(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}

int main(void) {
    char my_string[] = "many chars";
    
    print_string(my_string);

    return 0;
}