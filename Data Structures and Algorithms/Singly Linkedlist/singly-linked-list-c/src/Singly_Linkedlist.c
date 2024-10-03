/*
    Singly Linkedlist (C implementation)
    - Singly_Linkedlist.c
    - Singly_Linkedlist.h
    - Main.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include "Singly_Linkedlist.h"

bool is_empty(struct Singly_Linkedlist* linkedlist) {
    if (linkedlist -> head == NULL || linkedlist -> number_of_elements == 0) {
        return true;
    } else {
        return false;
    }
}

void print_singly_linkedlist_stats(struct Singly_Linkedlist* linkedlist) {
    printf("\t\t --> # elements: %d\n\t\t --> memory used: %d bytes\n", linkedlist -> number_of_elements, linkedlist -> memory_used);
}

void print_singly_linkedlist(struct Singly_Linkedlist* linkedlist) {
    printf("\t\tSINGLY_LINKEDLIST -->");
    if (is_empty(linkedlist)) {
        printf(" (EMPTY)\n");
        printf("\t\tHEAD -> NULL\n");
    } else {
        printf("\n\t\tHEAD -> ");
        struct Singly_Linkedlist_Node *current_node = linkedlist -> head;
        while (current_node != NULL) {
            printf("%d -> ", current_node -> data);
            current_node = current_node -> next;
        }
        printf("NULL\n");
    }
    print_singly_linkedlist_stats(linkedlist);
}

struct Singly_Linkedlist* insert_head(struct Singly_Linkedlist* linkedlist, int data) {
    printf("\ninsert_head(%d) called -->\n", data);

    if (linkedlist -> head != NULL && linkedlist -> number_of_elements == 0) {
        linkedlist -> head -> data = data;
        linkedlist -> head -> next = NULL;
        linkedlist -> number_of_elements = 1;
        linkedlist -> memory_used = linkedlist -> number_of_elements * sizeof(struct Singly_Linkedlist_Node);
    } else {
        struct Singly_Linkedlist_Node* new_head_node = (struct Singly_Linkedlist_Node*) malloc(sizeof(struct Singly_Linkedlist_Node*));
        new_head_node -> data = data;
        new_head_node -> next = linkedlist -> head;
        linkedlist -> head = new_head_node;
        linkedlist -> number_of_elements++;
        linkedlist -> memory_used = linkedlist -> number_of_elements * sizeof(struct Singly_Linkedlist_Node);
    }

    print_singly_linkedlist(linkedlist);

    return linkedlist;
}

struct Singly_Linkedlist* remove_head(struct Singly_Linkedlist* linkedlist) {
    printf("\nremove_head() called -->\n");
    if (is_empty(linkedlist)) {
        printf("\t***ERROR***: cannot remove from empty/null linkedlist.\n");
        print_singly_linkedlist(linkedlist);
        return linkedlist;
    }
    
    if (linkedlist -> head -> next == NULL) {
        int popped_item = linkedlist -> head -> data;
        linkedlist -> head = NULL;
        linkedlist -> number_of_elements = 0;
        linkedlist -> memory_used = linkedlist -> number_of_elements * sizeof(struct Singly_Linkedlist_Node);
        printf("\tremoving element %d.\n", popped_item);
        print_singly_linkedlist(linkedlist);
        return linkedlist;
    } else {
        int popped_item = linkedlist -> head -> data;
        linkedlist -> head = linkedlist -> head -> next;
        linkedlist -> number_of_elements--;
        linkedlist -> memory_used = linkedlist -> number_of_elements * sizeof(struct Singly_Linkedlist_Node);
        printf("\tremoving element %d.\n", popped_item);
        print_singly_linkedlist(linkedlist);
        return linkedlist;
    }
}

struct Singly_Linkedlist* insert_tail(struct Singly_Linkedlist* linkedlist, int data) {
    printf("\ninsert_tail(%d) called -->\n", data);

    if (linkedlist -> head != NULL && linkedlist -> number_of_elements == 0) {
        linkedlist -> head -> data = data;
        linkedlist -> head -> next = NULL;
        linkedlist -> number_of_elements = 1;
        linkedlist -> memory_used = linkedlist -> number_of_elements * sizeof(struct Singly_Linkedlist_Node);
    } else {
        struct Singly_Linkedlist_Node* new_head_node = (struct Singly_Linkedlist_Node*) malloc(sizeof(struct Singly_Linkedlist_Node*));
        new_head_node -> data = data;
        new_head_node -> next = NULL;
        linkedlist -> head = new_head_node;
        linkedlist -> number_of_elements++;
        linkedlist -> memory_used = linkedlist -> number_of_elements * sizeof(struct Singly_Linkedlist_Node);
    }

    print_singly_linkedlist(linkedlist);

    return linkedlist;
}

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

    print_singly_linkedlist(linkedlist);

    return linkedlist;
}