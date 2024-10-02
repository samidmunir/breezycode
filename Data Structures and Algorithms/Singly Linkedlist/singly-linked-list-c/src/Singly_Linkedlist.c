/*
    Singly Linkedlist (C implementation)
    - Singly_Linkedlist.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include "Singly_Linkedlist.h"

struct Singly_Linkedlist* initialize_singly_linkedlist() {
    printf("\ninitialize_singly_linkedlist() called -->\n");
    
    printf("\tallocating memory for singly_linkedlist head node...\n");
    sleep(2);
    struct Singly_Linkedlist_Node* head = (struct Singly_Linkedlist_Node*) malloc(sizeof(struct Singly_Linkedlist_Node*));
    if (head == NULL) {
        printf("\t***MEMORY ERROR***: failed to allocate memory for head node...\n");
        printf("\ttrying again...\n");
        head = (struct Singly_Linkedlist_Node*) malloc(sizeof(struct Singly_Linkedlist_Node*));
        sleep(2);
    }
    printf("\tsingly_linkedlist head node successfully initialized...\n");
    
    printf("\tallocating memory for singly_linkedlist structure...\n");
    sleep(2);
    struct Singly_Linkedlist* linkedlist = (struct Singly_Linkedlist*) malloc(sizeof(struct Singly_Linkedlist*));
    if (linkedlist == NULL) {
        printf("\t***MEMORY ERROR***: failed to allocate memory for singly_linkedlist structure...\n");
        printf("\ttrying again...\n");
        linkedlist = (struct Singly_Linkedlist*) malloc(sizeof(struct Singly_Linkedlist*));
        sleep(2);
    }
    
    linkedlist -> head = head;
    linkedlist -> number_of_elements = 0;
    linkedlist -> memory_used = linkedlist -> number_of_elements * sizeof(struct Singly_Linkedlist_Node);
    printf("\tsingly_linkedlist structure successfully initialized...\n");

    return linkedlist;
}