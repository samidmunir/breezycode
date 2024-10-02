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

    struct Singly_Linkedlist* linkedlist = initialize_singly_linkedlist();

    return EXIT_SUCCESS;
}