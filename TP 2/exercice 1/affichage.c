#include"header.h"

void affichage(node * head)
{
    node * ptr = head;

    puts("\n affichage :");
    while(ptr != NULL)
    {
        printf("%c",ptr->data);
        ptr = ptr->next;
    }
}
