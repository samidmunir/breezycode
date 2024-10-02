/*
    Singly Linkedlist (C implementation)
    - Main.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "Singly_Linkedlist.h"

int main(int argc, char* argv[]) {
    printf("\nSingly Linkedlist (C implementation)\n");
    printf("------------------------------------\n");

    struct SinglyLinkedlistNode* head = initialize_singly_linked_list();

    return EXIT_SUCCESS;
}