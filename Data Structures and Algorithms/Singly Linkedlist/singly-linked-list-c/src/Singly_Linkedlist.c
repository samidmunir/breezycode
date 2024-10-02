/*
    Singly Linkedlist (C implementation)
    - Singly_Linkedlist.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Singly_Linkedlist.h"

struct SinglyLinkedlistNode* initialize_singly_linked_list() {
    printf("\ninitialize_singly_linked_list() called...\n");
    struct SinglyLinkedlistNode *head = (struct SinglyLinkedlistNode*) malloc(sizeof(struct SinglyLinkedlistNode*));
    printf("\tsingly_linked_list successfully initialized.\n");
    return head;
}