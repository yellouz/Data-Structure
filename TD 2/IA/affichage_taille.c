#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void affichage(node * head)
{
    if (head == NULL) //le cas ou elle est vide
        puts("erreur : liste est vide");
    else
    {
        node * ptr = head; //pour ne pas perdre le head
        int cmpt = 1;

        while(ptr != NULL)
        {
            printf("element %d : %d\n",cmpt,ptr->data);
            cmpt++;
            ptr = ptr->next;
        }
        puts("done");
    }
    menu(head);
}

void taille(node * head)
{
    if (head == NULL) //le cas ou elle est vide
        puts("erreur : liste est vide");
    else
    {
        node * ptr = head; //pour ne pas perdre le head
        int cmpt = 0;

        while(ptr != NULL)
        {
            cmpt++;
            ptr = ptr->next;
        }
        printf("la taille est : %d \n",cmpt);
    }
    menu(head);
}
