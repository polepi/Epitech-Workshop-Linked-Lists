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

/*Exercice 6

Write a function that removes (and frees) the node at the position (postion_to_remove)
and keeps the structure of the linked list.

Eg:
    a -> b -> c -> d -> e -> f -> NULL
    Remove c
    a -> b -> d -> e -> f -> NULL

You have to provide your own add_node_end and free_list;

Params:
    train_t *head: The starting node of the linked list.
    int position: Position to be removed from the linked list.
Return:
    int: 1 if we found and removed the node; 0 if we didn't find or remove the node.
*/

int delete_node(train_t *head, int position) {
    // TODO: Implement this function.
}

train_t *add_node_end(train_t *head) {
    // TODO: Implement
}

void free_list(train_t *head) {
    // TODO: Implement
}

void print_list(train_t *head) {
    // TODO: Implement this function.
}

int main() {
    struct train_l *head = NULL;

    for(int i = 0; i < 10; i++) {
        train_t *new_node = add_node_end(head);
        if (head == NULL)
            head = new_node;
        new_node->data = i;
    }

    int postion_to_remove = 4;
    int was_removed = delete_node(head, postion_to_remove);
    if (was_removed == 1)
        printf("Node at position %d was removed!\n\n", postion_to_remove);
    else
        printf("Failed to remove the node at position %d\n\n", postion_to_remove);

    print_list(head);
    free_list(head);
    return 0;
}