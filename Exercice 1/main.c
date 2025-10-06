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

/*Exercice 1

Create a function that adds a newly
created node to the head of the Linked List.

Tip:    Perhaps you could try to create the new node,
        add the current head to the next pointer, and set the head as the new node?

Params:
    train_t *head: The starting node of the linked list.
Return:
    train_t *: A pointer to the newly created node.
*/

train_t *add_node_first(train_t *head) {
    // TODO: Implement this function.
}

int main() {
    struct train_l *head = NULL;

    head = add_node_first(head);
    head->data = 123;

    head = add_node_first(head);
    head->data = 456;
    
    printf("First Item = %d\n", head->data);                // Should print "456"
    printf("Second Item = %d\n", head->next->data);         // Should print "123"
}