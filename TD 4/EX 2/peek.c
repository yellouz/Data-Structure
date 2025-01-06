#include"header.h"

void peek()
{
    if(head == NULL)
        puts("pile est vide");
    else
    {
        node * ptr = head;
        int taille = 0;

        while(ptr != NULL)
        {
            ptr = ptr->next;
            taille++;
        }

        printf("la pile contient %d elements pour le moment \n",taille);
    }
}