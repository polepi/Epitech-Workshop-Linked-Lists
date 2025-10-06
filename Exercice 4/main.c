/*
** EPITECH PROJECT, 2025
** main.c
** File description:
** @polepi
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct train_l {
    int data;
    struct train_l *next;
} train_t;

/*Exercice 4

Print the list contents in the following format.
Item 1: (data 1)\n
Item 2: (data 3)\n
Item 3: (data 3)\n
...

You have to provide your own add_node_end and free_list;
You can use printf!

Params:
    train_t *head: The starting node of the linked list.
Return:
    Nothing
*/

void print_list(train_t *head) {
    // TODO: Implement this function.
}

train_t *add_node_end(train_t *head) {
    // TODO: Implement
}

void free_list(train_t *head) {
    // TODO: Implement
}

int main() {
    struct train_l *head = NULL;

    for(int i = 0; i < 10; i++) {
        train_t *new_node = add_node_end(head);
        if (head == NULL)
            head = new_node;
        new_node->data = i + 1;
    }

    print_list(head);

    free_list(head);
    return 0;
}