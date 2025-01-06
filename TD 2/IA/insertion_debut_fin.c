#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void insertion_debut(node * head, int data)
{
    if (head == NULL) //le cas ou elle est vide
    {
        head = malloc(sizeof(node));
        head->next = NULL;
        head->data = data;
        puts("le head ete NULL donc j ai inserer votre data en debut :) ");
    }
    else
    {
        node * tmp = malloc(sizeof(node));
        tmp->data = data;
        tmp->next = head;

        head = tmp;
        puts("done");
    }
    menu(head);
}

void insertion_fin(node * head, int data)
{
    if (head == NULL) //le cas ou elle est vide
    {
        head = malloc(sizeof(node));
        head->next = NULL;
        head->data = data;
        puts("le head ete NULL donc j ai inserer votre data en debut :) ");
    }
    else
    {
        node * ptr = head; //pour ne pas perdre le head

        while(ptr->next != NULL)
            ptr = ptr->next;

        node * tmp = malloc(sizeof(node));
        tmp->data = data;
        tmp->next = NULL;

        ptr->next = tmp;
        puts("done");
    }
    menu(head);
}
