/*
    Singly Linkedlist (C implementation)
    - Singly_Linkedlist.h
*/

struct SinglyLinkedListNode {
    int data;
    struct SinglyLinkedlistNode* next;
} *head;

struct SinglyLinkedlistNode* initialize_singly_linked_list();