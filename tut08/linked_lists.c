// COMP1511 22T3 - Linked Lists
// Ada Luong, November 2022

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);

int main(void) {

    // creating a bunch of nodes
    struct node *first_node = create_node(1);
    struct node *second_node = create_node(2);
    struct node *third_node = create_node(3);
    struct node *fourth_node = create_node(4);
    struct node *fifth_node = create_node(5);

    // connecting them together to be a linked list
    first_node->next = second_node;
    second_node->next = third_node;
    third_node->next = fourth_node;
    fourth_node->next = fifth_node;

    // print all the elements of the linked list in order
    // you only know what the first node is
    struct node *current_node = first_node;

    // you could do this...
    // printf("%d ->", current_node->data);
    // printf("%d ->", current_node->next->data);
    // printf("%d ->", current_node->next->next->data);

    // or loop through all the nodes of the linked list
    while (current_node != NULL) {
        printf("%d -> ", current_node->data);
        current_node = current_node->next;
    }
    // after the while loop ends, current_node == NULL
    printf("X\n");

    return 0;
}

// A function that creates a new node 
// and always initialises the data member to the given value
// and the next field to the value NULL
struct node *create_node(int data) {

    // allocate memory for the struct using malloc
    struct node *new_node = malloc(sizeof(struct node));

    // initialise the struct
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}
