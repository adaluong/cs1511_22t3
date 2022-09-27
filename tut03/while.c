// COMP1511 Tut 03 - While Loops
// A program to spawn assignments 0...9
// Ada Luong, September 2022

#include <stdio.h>

int main(void) {

    // 1. initialise a variable (e.g. a "counter" variable)
    int i = 0;

    // 2. write in your while loop condition
    while(i <= 9) {  

        // 3. Fill in the body of your while loop
        printf("Spawning assignment number: %d\n", i);

        // 4. "progress must be made" (e.g. increment your counter variable)
        i = i + 1; 
        // equivalent to i++ or i += 1
    }    

    return 0;
}

// DEBUGGING HINT: go through the "4 steps" to creating a while loop!