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

/*Exercice 3

Free the linked list.
As you know, when you malloc, then you have to free up the space
when you no longer need it. Then, what are you waiting for?

You have to provide your own add_node_end;

Params:
    train_t *head: The starting node of the linked list.
Return:
    Nothing
*/

void free_list(train_t *head) {
    // TODO: Implement
}

train_t *add_node_end(train_t *head) {
    // TODO: Implement
}

int main() {
    train_t *head = NULL;

    for(int i = 0; i < 10; i++) {
        train_t *new_node = add_node_end(head);
        if (head == NULL)
            head = new_node;
        new_node->data = i + 1;
    }

    printf("First Item = %d\n", head->data); // Should print "1"

    free_list(head);
    return 0;
}