#include"header.h"

void affichage()
{
    if(head == NULL)
        puts("la pile est vide!");
    else
    {
        node * ptr = head;
        int cmpt = 1;

        while(ptr != NULL)
        {
            printf("data num %d = %d \n",cmpt,ptr->data);
            ptr = ptr->next;
            cmpt++;
        }
    }
}