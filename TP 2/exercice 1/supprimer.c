#include"header.h"

node * supprimer(node * head)
{
    if(head == NULL)
        puts("underflow");
    else
    {
        node * ptr = head;
        head = head->next;
        free(ptr);
    }
    return head;
}
