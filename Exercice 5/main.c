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

/*Exercice 5

Write a function that given the head and a int (data)
finds in the linked list, the first instance of the node
containing that data, and returns the node.

You have to provide your own add_node_end and free_list;

Params:
    train_t *head: The starting node of the linked list.
    int to_find: Data of the node to be found in the linked list.
Return:
    train_t *: The node containing the data "to_find"
*/

train_t *get_node(train_t *head, int to_find) {
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
        new_node->data = i * 2;
    }

    train_t *found_node = get_node(head, 6);
    if (found_node != NULL)
        printf("Found node: %d\n", found_node->data);
    else
        printf("Node not found >:(\n");

    free_list(head);
    return 0;
}