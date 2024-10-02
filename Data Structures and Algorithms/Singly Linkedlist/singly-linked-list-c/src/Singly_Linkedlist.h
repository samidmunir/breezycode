/*
    Singly Linkedlist (C implementation)
    - Singly_Linkedlist.h
*/

#include <stdbool.h>

struct Singly_Linkedlist {
    struct Singly_Linkedlist_Node *head;
    int number_of_elements;
    int memory_used;
};

struct Singly_Linkedlist_Node {
    int data;
    struct Singly_Linkedlist_Node* next;
};

struct Singly_Linkedlist* initialize_singly_linkedlist();

bool is_empty(struct Singly_Linkedlist*);