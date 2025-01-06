#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void supprimer_element(node * head, int data)
{
    if (head == NULL) //le cas ou elle est vide
        puts("erreur : liste est vide");
    else
    {
        node * ptr = head; //pour ne pas perdre le head
        node * pre_ptr = ptr;

        while(ptr != NULL && ptr->data != data)
        {
            pre_ptr = ptr;
            ptr = ptr->next;
        }

        if(ptr == NULL)
            puts("data recherche n'est pas trouvee");
        else
        {
            if(pre_ptr == ptr) //cas on veut supprimer le premier element
            {
                ptr = ptr->next;
                free(pre_ptr);
                menu(ptr); // ca va etre le nouveau head
            }

            pre_ptr->next = ptr->next;
            free(ptr);
            puts("done");
        }
    }
    menu(head);
}

void supprimer_avant(node * head, int data)
{
    if (head == NULL) //le cas ou elle est vide
        puts("erreur : liste est vide");
    else
    {
        node * ptr = head; //pour ne pas perdre le head
        node * ptr_av = ptr;
        node * ptr_apr = ptr;

        while(ptr_apr != NULL && ptr_apr->data != data)
        {
            ptr_av = ptr;
            ptr = ptr_apr;
            ptr_apr = ptr_apr->next;
        }

        if(ptr_apr == NULL)
            puts("data recherche n'est pas trouvee");
        else
        {
            if((ptr == ptr_apr) && (ptr== ptr_av)) //cas on pointe sur le debut
            {
                puts("impossible de supprimer avant on est dans le debut");
                menu(head);
            }
            else if(ptr == ptr_av) //cas on pointe sur le deuxieme element et on veut supprimer le debut
                supprimer_element(head, ptr->data); // cette fonction contient la solution de ce cas

            ptr_av->next = ptr_apr;
            free(ptr);
            puts("done");
        }
    }
    menu(head);
}

void supprimer_apres(node * head, int data)
{
    if (head == NULL) //le cas ou elle est vide
        puts("erreur : liste est vide");
    else
    {
        node * ptr = head; //pour ne pas perdre le head
        node * ptr_apr = ptr;

        while(ptr != NULL && ptr->data != data)
        {
            ptr = ptr_apr;
            ptr_apr = ptr_apr->next;
        }

        if(ptr == NULL)
            puts("data recherche n'est pas trouvee");
        else
        {
            if(ptr_apr == NULL) //cas on pointe avec ptr sur la fin
            {
                puts("impossible de supprimer apres on est arrive a la fin de la liste");
                menu(head);
            }
            ptr->next = ptr_apr->next;
            free(ptr_apr);
            puts("done");
        }
    }
    menu(head);
}


