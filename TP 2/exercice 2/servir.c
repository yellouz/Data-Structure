#include"header.h"

void servir() //aka suppression
{
    if(head == NULL)
        puts("liste vide");
    else // traitement normal
    {
        node * ptr = head;
        head = head->next;
        rear->next = head;
        free(ptr);
    }
}
