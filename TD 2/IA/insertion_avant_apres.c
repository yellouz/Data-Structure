#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void insertion_avant(node * head, int data, int data_recherche)
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
        node * pre_ptr = ptr;

        while(ptr != NULL && ptr->data != data_recherche)
        {
            pre_ptr = ptr;
            ptr = ptr->next;
        }

        if(ptr == NULL)
            puts("data recherche n'est pas trouvee");
        else
        {
            if(ptr == pre_ptr) //cas on pointe sur le premier element
                insertion_debut(head, data); //on veut changer le head pour cela il faut appeler cette fct

            node * tmp = malloc(sizeof(node));
            tmp->data = data;
            tmp->next = ptr;

            pre_ptr->next = tmp;
            puts("done");
        }
    }
    menu(head);
}

void insertion_apres(node * head, int data, int data_recherche)
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

        while(ptr != NULL && ptr->data != data_recherche)
            ptr = ptr->next;

        if(ptr == NULL)
            puts("data recherche n'est pas trouvee");
        else
        {
            if(ptr->next == NULL) //cas on pointe sur le dernier element
                insertion_fin(head,data); //on veut que le dernier pointeur soit null donc j'ai appele cette fct

            node * tmp = malloc(sizeof(node));
            tmp->data = data;
            tmp->next = ptr->next;

            ptr->next = tmp;
            puts("done");
        }
    }
    menu(head);
}
