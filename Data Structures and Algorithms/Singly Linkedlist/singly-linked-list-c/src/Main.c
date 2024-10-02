/*
    Singly Linkedlist (C implementation)
    - Main.c
    - Singly_Linkedlist.h
    - Singly_Linkedlist.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "Singly_Linkedlist.h"

int main(int argc, char* argv[]) {
    printf("\nSingly Linkedlist (C implementation)\n");
    printf("------------------------------------\n");

    /*
        testing function initialize_singly_linkedlist()
    */
    struct Singly_Linkedlist* linkedlist = initialize_singly_linkedlist();

    /*
        testing function insert_head()
    */
    linkedlist = insert_head(linkedlist, 4);
    linkedlist = insert_head(linkedlist, 16);
    linkedlist = insert_head(linkedlist, 7);
    linkedlist = insert_head(linkedlist, 92);

    /*
        testing function remove_head()
    */
    linkedlist = remove_head(linkedlist);
    linkedlist = remove_head(linkedlist);
    linkedlist = remove_head(linkedlist);
    linkedlist = remove_head(linkedlist);
    linkedlist = remove_head(linkedlist); // RETURN ERROR EXPECTED (EMPTY/NULL LINKEDLIST)

    return EXIT_SUCCESS;
}