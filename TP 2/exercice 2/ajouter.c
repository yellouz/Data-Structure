#include"header.h"

node * creation(int data, int priority)
{
    node * ptr = malloc(sizeof(node));
    ptr->data = data;
    ptr->priority = priority;
    ptr->next = NULL;

    return ptr;
}

void ajouter(int data, int priority)
{
    node * ptr = creation(data, priority)

    if(head == NULL)
    {
        head = ptr;
        rear = ptr;
        ptr->next = head; // elle pointe sur elle meme
    }
    else
    {
        if(priority == 0) // passager standard
        {
            ptr->next = head; // insertion en fin
            rear->next = ptr;
            rear = ptr;
        }
        else // passager vip
        {
            node * pretmp = head;
            node * tmp = head->next;
            while(tmp->priority == 1 && tmp != head) // edit boucle infini if we have only vip
            {
                pretmp = tmp;
                tmp = tmp->next;
            }
            if(tmp->priority == 0 && pretmp->priority==0) // on a seulement des standards dans la liste
            {
                ptr->next = head->next;
                front = ptr;
                rear->next = ptr;
            }
            else if(tmp == head) // on a seulement des vips dans la liste
                {
                    ptr->next = head; // insertion en fin
                    rear->next = ptr;
                    rear = ptr;
                }
            else // cas on a des vips et des standards
            {
                pretmp->next = ptr;
                ptr->next = tmp;
            }
        }
    }
}
