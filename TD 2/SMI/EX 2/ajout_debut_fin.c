#include"header.h"

node * creer_element(int data)
{
    node * tmp = malloc(sizeof(node)); // if tmp == NULL
    if(tmp == NULL) // cas l'allocation n'a pas reussi
    {
        puts("erreur d'allocation");
        exit(1);
    }
    else
    {
        tmp->before = tmp;
        tmp->next = tmp; // on initialise les pointeurs telle que la nouvelle node pointe sur elle meme
        tmp->data = data;
    }
    return tmp;
}


node * ajout_debut(node * head, int data)
{
    node * ptr = creer_element(data);

    if(head == NULL) // cas liste vide
        head = ptr;
    else
    {
        node * last = head->before; // last pointe sur le dernier element

        ptr->before = last; // on veut que le pointeur avant pointe sur le dernier element
        ptr->next = head; // on veut que le pointeur next pointe sur l'ancien debut

        last->next = ptr; // on veut que le dernier element pointe sur notre nouveau element
        head->before = ptr; // on veut que le pointeur avant de l'ancien debut pointe sur notre element

        head = ptr;
    }
    return head;
}


node * ajout_fin(node * head, int data)
{
    node * ptr = creer_element(data);

    if(head == NULL)
        head = ptr;
    else // meme code exactement que le cas d'ajout au debut sauf on ne change pas le head
    {
        node * last = head->before;

        ptr->before = last;
        ptr->next = head;

        last->next = ptr;
        head->before = ptr;
    }
    return head;
}
