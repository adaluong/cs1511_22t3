// COMP1511 Tut 07 - Pointers Revision
// Ada Luong, October 2022

#include <stdio.h>

int main(void) {

    int num = 21;
    
    // creating and NOT initialising a pointer
    int *num_ptr = &num;   

    // accessing memory via a pointer ("dereferencing")
    printf("the value of num is: %d\n", num);
    printf("the value of num via ptr is: %d\n", *num_ptr);
    printf("the address of num is: %p\n", &num);
    printf("the address of num via ptr is: %p\n", num_ptr);

    // changing the value of the original variable
    // via a pointer
    *num_ptr = 19;

    printf("after dereferencing a pointer and reassigning a new value\n");
    printf("the value of num is: %d\n", num);
    printf("the value of num via ptr is: %d\n", *num_ptr);


    return 0;
}