#include"header.h"

void affichage(node * head)
{
    puts("affichage :");
    if(head == NULL)
        puts("liste est vide!");
    else
    {
        node * ptr = head;
        int cmpt = 1;

        do // do while est mieux car elle traite le cas ou on a seulement un element dans la liste
        {
            printf("data num %d = %d \n",cmpt,ptr->data);
            cmpt++;
            ptr = ptr->next;
        }
        while(ptr != head); // la liste est circulaire <-> le dernier element pointe sur le premier
    }
}
