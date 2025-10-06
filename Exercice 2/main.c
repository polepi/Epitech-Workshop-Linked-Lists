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

/*Exercice 2

Create a function that adds a newly
created node to the END of the Linked List.

Tip:    Perhaps you could try to create iterate
        to last item of the linked list (TAIL: node->next is NULL),
        and set the next as the new node?

Params:
    train_t *head: The starting node of the linked list.
Return:
    train_t *: A pointer to the newly created node.
*/

train_t *add_node_end(train_t *head) {
    // TODO: Implement
}

int main() {
    struct train_l *head = NULL;

    head = add_node_end(head);
    head->data = 123;

    head = add_node_end(head);
    head->data = 456;

    printf("First Item = %d\n", head->data);            // Should print "123"
    printf("Second Item = %d\n", head->next->data);     // Should print "456"
}