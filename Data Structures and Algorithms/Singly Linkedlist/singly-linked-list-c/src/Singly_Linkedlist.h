/*
    Singly Linkedlist (C implementation)
    - Singly_Linkedlist.h
    - Singly_Linkedlist.c
    - Main.c
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

void print_singly_linkedlist(struct Singly_Linkedlist*);

void print_singly_linkedlist_stats(struct Singly_Linkedlist*);

struct Singly_Linkedlist* insert_head(struct Singly_Linkedlist*, int data);

struct Singly_Linkedlist* remove_head(struct Singly_Linkedlist*);

struct Singly_Linkedlist* insert_tail(struct Singly_Linkedlist*, int data);