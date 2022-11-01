// COMP1511 22T3 - Malloc
// Ada Luong, November 2022

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);

int main(void) {

    struct node *first_node = create_node(1);
    printf("the value of first_node is %p\n", first_node);
    printf("the value of first_node->data is %d\n", first_node->data);

    return 0;
}

// A function that creates a new node 
// and initialises the data to the given value
// and the next field to the value NULL
struct node *create_node(int data) {

    // allocate memory for the struct using malloc
    struct node *new_node = malloc(sizeof(struct node));

    // initialise the struct
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}
