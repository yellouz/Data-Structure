#include"header.h"

node * supprimer_debut(node * head)
{
    if(head == NULL)
        puts("liste est vide!");
    else if((head->next == head->before) && (head->next == head)) // (==head) : on a un seul element
    {
        free(head);
        head = NULL;
    }
    else // cas normal
    {
        node * tmp = head;
        node * last = head->before;
        head = head->next;

        last->next = head;
        head->before = last;

        free(tmp);
    }
    return head;
}


node * supprimer_fin(node * head)
{
    if(head == NULL)
        puts("liste est vide!");
    else if((head->next == head->before) && (head->next == head)) // (==head) : on a un seul element
    {
        free(head);
        head = NULL;
    }
    else
    {
        node * last = head->before;
        node * before_last = last->before;

        before_last->next = head; // before last va devenir le nouveau last donc il doit pointe sur le debut
        head->before = before_last;

        free(last);
    }
    return head;
}


node * supprimer_element(node * head, int data)
{
    if(head == NULL)
        puts("liste est vide!");
    else if(head->data == data) // si data recherche est le premier element
        return supprimer_debut(head); // ca va retourner un pointeur null
    else
    {
        node * ptr = head;

        do
        {
            ptr = ptr->next;
        }
        while((ptr != head) && (ptr->data != data));

        if(ptr == head) // cas data non trouvee
            puts("data recherche non trouvee");
        else // cas normal
        {
            node * ptr_avant = ptr->before;
            node * ptr_apres = ptr->next;

            ptr_avant->next = ptr_apres;
            ptr_apres->before = ptr_avant;
        }
    }
    return head;
}
