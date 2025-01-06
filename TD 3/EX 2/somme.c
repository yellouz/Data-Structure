#include"header.h"

void somme()
{
    if(head == NULL)
        puts("pile est vide!");
    else
    {
        node * ptr = head;
        int somme = 0;

        while (ptr != NULL)
        {
            somme = somme + ptr->data;
            ptr = ptr->next;
        }

        printf("la somme des elements de la pile = %d \n",somme);
    }
}