#include <stdio.h>

int main(void) {

    // g
    // int i = 0;
    // int max = 32;
    // while (i < max) {
    //     printf("%d\n", i);
    //     max = max + 2; // hmmmmmmmm
    // }

    // h
    int i = 0;
    int keep_going = 1; // hmmmmmm
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;            
        }
        i++;
    }
    printf("%d\n", i);


    return 0;
}